__int64 __fastcall sub_F84A60(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-20h] BYREF

  v3 = a1 + 9;
  v4 = *a1;
  v19 = a2;
  (*(void (__fastcall **)(__int64 *))(v4 + 16))(a1);
  v9 = *((_DWORD *)a1 + 22);
  if ( !v9 )
  {
    v20 = nullptr;
LABEL_11:
    v9 *= 2;
    goto LABEL_12;
  }
  v6 = v19;
  v8 = v9 - 1;
  v10 = a1[9];
  v11 = v8 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( v19 == *v12 )
    return v12[1];
  v15 = 1;
  v16 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v16 )
        v16 = v12;
      v11 = v8 & (v15 + v11);
      v12 = (__int64 *)(v10 + 16LL * v11);
      v13 = *v12;
      if ( v19 == *v12 )
        return v12[1];
      if ( v13 == -4096 )
      {
        if ( v16 )
          v12 = v16;
        break;
      }
      ++v15;
    }
  }
  v17 = *((_DWORD *)a1 + 20);
  v20 = v12;
  v5 = (unsigned int)(v17 + 1);
  v7 = (unsigned int)(4 * v5);
  if ( (unsigned int)v7 >= 3 * v9 )
    goto LABEL_11;
  v7 = v9 >> 3;
  if ( v9 - *((_DWORD *)a1 + 21) - (unsigned int)v5 <= (unsigned int)v7 )
  {
LABEL_12:
    sub_F84760((__int64)v3, v9, v5, v6, v7, v8);
    sub_F7F050(v3, &v19, &v20);
    v6 = v19;
    LODWORD(v5) = *((_DWORD *)a1 + 20) + 1;
    v12 = v20;
  }
  v18 = *v12 == -4096;
  *((_DWORD *)a1 + 20) = v5;
  if ( !v18 )
    --*((_DWORD *)a1 + 21);
  *v12 = v6;
  v12[1] = 0;
  return 0;
}
