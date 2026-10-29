__int64 __fastcall sub_1EDE020(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edx
  __int64 v9; // rax
  int v10; // edi
  int v12; // r11d
  __int64 v13; // r10
  int v14; // edx
  unsigned int v15[3]; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v16[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a1 + 9296);
  v15[0] = a2;
  v7 = *(_DWORD *)(v6 + 16);
  if ( !v7 )
  {
    v16[0] = 0;
LABEL_11:
    v7 *= 2;
    goto LABEL_12;
  }
  a4 = v15[0];
  a6 = v7 - 1;
  v8 = a6 & (37 * v15[0]);
  v9 = *(_QWORD *)v6 + 16LL * v8;
  v10 = *(_DWORD *)v9;
  if ( v15[0] == *(_DWORD *)v9 )
    return *(_QWORD *)(v9 + 8);
  v12 = 1;
  v13 = 0;
  if ( v10 != -1 )
  {
    while ( 1 )
    {
      if ( v10 == -2 && !v13 )
        v13 = v9;
      v8 = a6 & (v12 + v8);
      v9 = *(_QWORD *)v6 + 16LL * v8;
      v10 = *(_DWORD *)v9;
      if ( v15[0] == *(_DWORD *)v9 )
        return *(_QWORD *)(v9 + 8);
      if ( v10 == -1 )
      {
        if ( v13 )
          v9 = v13;
        break;
      }
      ++v12;
    }
  }
  v14 = *(_DWORD *)(v6 + 8);
  v16[0] = v9;
  a3 = (unsigned int)(v14 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v7 )
    goto LABEL_11;
  a5 = v7 >> 3;
  if ( v7 - *(_DWORD *)(v6 + 12) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_12:
    sub_1EDDCF0((__int64 *)v6, v7, a3, a4, a5, a6);
    sub_1EB4130((__int64 *)v6, (int *)v15, v16);
    LODWORD(a4) = v15[0];
    LODWORD(a3) = *(_DWORD *)(v6 + 8) + 1;
    v9 = v16[0];
  }
  *(_DWORD *)(v6 + 8) = a3;
  if ( *(_DWORD *)v9 != -1 )
    --*(_DWORD *)(v6 + 12);
  *(_DWORD *)v9 = a4;
  *(_QWORD *)(v9 + 8) = 0;
  return 0;
}
