__int64 __fastcall ccdigest_update(__int64 a1, _QWORD *a2, unsigned __int64 a3, char *__src)
{
  unsigned __int64 v5; // x20
  char v8; // w8
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x11
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x1
  size_t v14; // x24
  char *v15; // x9
  unsigned __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x2
  __int64 v19; // x8
  char *v20; // x8
  char v22; // [xsp+Fh] [xbp-31h] BYREF

  v5 = a3;
  v8 = 0;
  v22 = 0;
  if ( (MEMORY[0xFFFFFC010] & 0x200000000000000LL) != 0 )
  {
    if ( _ReadStatusReg(DIT) == 0x1000000 )
    {
      v8 = 0;
    }
    else
    {
      _WriteStatusReg(DIT, 0x1000000u);
      v8 = 1;
    }
  }
  v22 = v8;
  v10 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  v11 = (__int64)a2 + v10 + 8;
  v12 = *(unsigned int *)(v11 + v9);
  if ( v9 <= v12 )
  {
    LODWORD(v12) = 0;
    *(_DWORD *)(v11 + v9) = 0;
  }
  if ( a3 )
  {
    if ( (_DWORD)v12 )
      goto LABEL_13;
LABEL_9:
    if ( v5 > v9 )
    {
      if ( v9 == 128 )
      {
        v13 = v5 >> 7;
        v14 = v5 & 0xFFFFFFFFFFFFFF80LL;
      }
      else if ( v9 == 64 )
      {
        v13 = v5 >> 6;
        v14 = v5 & 0xFFFFFFFFFFFFFFC0LL;
      }
      else
      {
        v13 = v5 / v9;
        v14 = v5 / v9 * v9;
      }
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, char *))(a1 + 48))(a2 + 1, v13, __src);
      *a2 += 8 * v14;
      goto LABEL_21;
    }
LABEL_13:
    while ( 1 )
    {
      v15 = (char *)a2 + v10 + (unsigned int)v12;
      v16 = v9 - (unsigned int)v12;
      v14 = v16 >= v5 ? v5 : v16;
      _platform_memmove(v15 + 8, __src, v14);
      v17 = *(_QWORD *)(a1 + 16);
      v18 = (__int64)a2 + *(_QWORD *)(a1 + 8) + 8;
      v19 = (unsigned int)(*(_DWORD *)(v18 + v17) + v14);
      *(_DWORD *)(v18 + v17) = v19;
      if ( v17 == v19 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 48))(a2 + 1, 1);
        v20 = (char *)a2 + *(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16);
        *a2 += (unsigned int)(8 * *((_DWORD *)v20 + 2));
        *((_DWORD *)v20 + 2) = 0;
      }
LABEL_21:
      v5 -= v14;
      if ( !v5 )
        break;
      __src += v14;
      v10 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 16);
      LODWORD(v12) = *(_DWORD *)((char *)a2 + v10 + v9 + 8);
      if ( !(_DWORD)v12 )
        goto LABEL_9;
    }
  }
  return cc_disable_dit(&v22);
}
