__int64 __fastcall sub_8648E0(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 i; // rsi
  __int64 v20; // rcx

  v4 = 0;
  v9 = *(_QWORD *)(a4 + 216) + 16LL * *(unsigned __int16 *)(a4 + 208);
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = a1[1];
      HIWORD(v11) = HIWORD(v10);
      LOWORD(v11) = 0;
      if ( v11 != -2145910784 )
        break;
LABEL_6:
      a2 += (unsigned __int16)v10;
      v14 = sub_864820((_BYTE *)(a2 + *(_QWORD *)(a4 + 56)), a1[2], a4);
      if ( !v14 )
        goto LABEL_11;
      ++v4;
      if ( *(__int16 *)(v14 + 14) < 0 )
      {
        a1[1] = -2145910784;
        v17 = v14;
        v18 = (_QWORD *)(v14 + 16);
        a1[2] = (__int64)(v17 - *(_QWORD *)(a4 + 216)) >> 4;
        for ( i = *(v18 - 2); (unsigned __int64)v18 < v9; v4 += v20 )
        {
          v20 = i == *v18;
          v18 += 2;
        }
      }
      else
      {
        a1[1] = -2145845248;
        a1[2] = *(_DWORD *)(v14 + 8);
      }
      a1 += 2;
    }
    while ( v11 != -2145845248 )
    {
      if ( v11 != -2146041856 )
        return v4;
      v12 = (unsigned int)a1[2];
      v13 = (unsigned int)a1[3];
      a1 += 3;
      a2 = v13 | (v12 << 32);
      v10 = a1[1];
      HIWORD(v11) = HIWORD(v10);
      LOWORD(v11) = 0;
      if ( v11 == -2145910784 )
        goto LABEL_6;
    }
    a2 += (unsigned __int16)v10;
    v15 = a1[2];
    if ( *(_DWORD *)(a4 + 236) < v15 )
      break;
    if ( *(_DWORD *)(a4 + 272) < v15 )
      *(_DWORD *)(a4 + 272) = (unsigned __int16)a1[2];
    a1 += 2;
    ++v4;
  }
LABEL_11:
  *a3 = 115;
  v4 = 0;
  *(_QWORD *)(a4 + 168) = a2;
  return v4;
}
