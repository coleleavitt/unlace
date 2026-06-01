__int64 __fastcall sub_1A319D0(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // edi
  __int64 result; // rax
  int v13; // r10d
  __int64 v14; // r11
  int v15; // edi
  int v16; // edx
  __int64 v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v17[0] = 0;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a6 = v8 - 1;
  a5 = *(_QWORD *)a1;
  v9 = a6 & (37 * *a2);
  v10 = *(_QWORD *)a1 + 12LL * v9;
  v11 = *(_DWORD *)v10;
  if ( *a2 == *(_DWORD *)v10 )
    return v10 + 4;
  v13 = 1;
  v14 = 0;
  if ( v11 != -1 )
  {
    while ( 1 )
    {
      if ( v11 == -2 && !v14 )
        v14 = v10;
      v9 = a6 & (v13 + v9);
      v10 = a5 + 12LL * v9;
      v11 = *(_DWORD *)v10;
      if ( *a2 == *(_DWORD *)v10 )
        return v10 + 4;
      if ( v11 == -1 )
      {
        if ( v14 )
          v10 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 8);
  a4 = 3 * v8;
  v17[0] = v10;
  a3 = (unsigned int)(v15 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a4 )
    goto LABEL_11;
  a4 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3;
  if ( (unsigned int)a4 <= v8 >> 3 )
  {
LABEL_12:
    sub_1A317E0((__int64 *)a1, v8, a3, a4, a5, a6);
    sub_1A2F5A0((__int64 *)a1, a2, v17);
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v10 = v17[0];
  }
  *(_DWORD *)(a1 + 8) = a3;
  if ( *(_DWORD *)v10 != -1 )
    --*(_DWORD *)(a1 + 12);
  v16 = *a2;
  *(_QWORD *)(v10 + 4) = 0;
  result = v10 + 4;
  *(_DWORD *)(result - 4) = v16;
  return result;
}
