unsigned __int64 __fastcall sub_5834E0(unsigned int *a1, _BYTE *a2, __int64 a3)
{
  int v3; // r12d
  unsigned int v5; // eax
  _BYTE *v6; // rsi
  unsigned int v7; // eax
  unsigned __int64 v8; // rsi
  char v9; // dl
  _BYTE *v10; // rax
  unsigned int v11; // edx
  void *v12; // rdi
  int v14; // eax
  int v15; // eax
  _BYTE *v16; // r15
  unsigned int v17; // r13d
  unsigned __int16 v18; // ax
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rax
  _BYTE *v23; // [rsp+0h] [rbp-58h] BYREF
  _BYTE *v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = 1;
  v25 = __readfsqword(0x28u);
  v23 = a2;
  v24 = &a2[a3];
  if ( *((char *)a1 + 2) < 0 )
    v3 = a1[12];
  v5 = unpack_dd(&v23);
  v6 = v24;
  *a1 = v5;
  *((_WORD *)a1 + 2) = unpack_dw(&v23, v6);
  a1[2] = unpack_dd(&v23);
  a1[3] = unpack_dd(&v23);
  a1[4] = unpack_dd(&v23);
  a1[5] = unpack_dd(&v23);
  a1[6] = unpack_dd(&v23);
  a1[7] = unpack_dd(&v23);
  a1[8] = unpack_dd(&v23);
  v7 = unpack_dd(&v23);
  v8 = (unsigned __int64)v24;
  v9 = 0;
  a1[9] = v7;
  v10 = v23;
  if ( (unsigned __int64)v23 < v8 )
  {
    v9 = *v23;
    v10 = v23 + 1;
  }
  *((_BYTE *)a1 + 40) = v9;
  v23 = v10;
  a1[11] = unpack_dd(&v23);
  if ( v3 > 1 )
  {
    v11 = *a1;
    if ( (*a1 & 0x800000) != 0 && (v14 = unpack_dd(&v23), v11 = *a1, a1[12] = v14, (v11 & 0x800000) != 0) && v14 > 1 )
    {
      v15 = unpack_dd(&v23);
      v16 = v24;
      v17 = a1[5];
      a1[13] = v15 - 1;
      v18 = unpack_dw(&v23, v16);
      v19 = v18;
      if ( *((_QWORD *)a1 + 9) < (unsigned __int64)v18 )
      {
        v22 = qvector_reserve(a1 + 14, *((_QWORD *)a1 + 7), v18, 4);
        *((_QWORD *)a1 + 8) = v19;
        *((_QWORD *)a1 + 7) = v22;
      }
      else
      {
        *((_QWORD *)a1 + 8) = v18;
        if ( !v18 )
          return v25 - __readfsqword(0x28u);
      }
      v20 = 4 * v19;
      v21 = 0;
      do
      {
        v17 += unpack_dd(&v23);
        *(_DWORD *)(*((_QWORD *)a1 + 7) + v21) = v17;
        v21 += 4;
      }
      while ( v21 != v20 );
    }
    else
    {
      v12 = *((void **)a1 + 7);
      *((_QWORD *)a1 + 6) = 0xFFFFFFFF00000002LL;
      *a1 = v11 & 0xFF7FFFEF | 0x800000;
      if ( v12 )
      {
        *((_QWORD *)a1 + 8) = 0;
        qfree(v12);
        *((_QWORD *)a1 + 7) = 0;
        *((_QWORD *)a1 + 9) = 0;
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}

