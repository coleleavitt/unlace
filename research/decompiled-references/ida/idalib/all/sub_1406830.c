__int64 __fastcall sub_1406830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v6; // rbp
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  int v18; // eax
  int v19; // esi
  __int64 v20; // r8
  bool v21; // zf
  int v22; // r10d
  unsigned __int64 *v23; // r11
  int v24; // edi
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 *v27; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 *v28[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 **)(a1 + 544);
  v26 = a2;
  v8 = *(_DWORD *)(a1 + 560);
  v25 = a3;
  if ( !v8 )
  {
    v28[0] = nullptr;
LABEL_17:
    v8 *= 2;
    goto LABEL_18;
  }
  a4 = v26;
  a6 = v8 - 1;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = a6 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
  v11 = (unsigned __int64 *)(v9 + 32LL * v10);
  v12 = *v11;
  if ( v26 == *v11 )
  {
LABEL_3:
    v13 = (__int64)(v11 + 1);
    goto LABEL_4;
  }
  v22 = 1;
  v23 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v23 )
        v23 = v11;
      v10 = a6 & (v22 + v10);
      v11 = (unsigned __int64 *)(v9 + 32LL * v10);
      v12 = *v11;
      if ( v26 == *v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v23 )
          v11 = v23;
        break;
      }
      ++v22;
    }
  }
  v24 = *(_DWORD *)(a1 + 552);
  v28[0] = v11;
  a3 = (unsigned int)(v24 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_17;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(a1 + 556) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_18:
    sub_14004C0(v6, v8, a3, a4, a5, a6);
    sub_13F7DB0((__int64 *)v6, &v26, v28);
    a4 = v26;
    LODWORD(a3) = *(_DWORD *)(a1 + 552) + 1;
    v11 = v28[0];
  }
  v21 = *v11 == -4096;
  *(_DWORD *)(a1 + 552) = a3;
  if ( !v21 )
    --*(_DWORD *)(a1 + 556);
  *v11 = a4;
  v13 = (__int64)(v11 + 1);
  v11[1] = 0;
  v11[2] = 0;
  *((_DWORD *)v11 + 6) = 0;
LABEL_4:
  result = sub_FF2870((__int64 *)v13, (unsigned __int64 *)&v25, &v27);
  if ( (_BYTE)result )
    return result;
  v16 = *(unsigned int *)(v13 + 16);
  v17 = v27;
  v18 = *(_DWORD *)(v13 + 8) + 1;
  v19 = 2 * v16;
  v20 = (unsigned int)(4 * v18);
  v28[0] = v27;
  if ( (unsigned int)v20 >= 3 * (int)v16 )
    goto LABEL_20;
  if ( (int)v16 - *(_DWORD *)(v13 + 12) - v18 <= (unsigned int)v16 >> 3 )
  {
    v19 = v16;
LABEL_20:
    sub_FF6850(v13, v19, v16, (__int64)v27, v20, v15);
    sub_FF2870((__int64 *)v13, (unsigned __int64 *)&v25, v28);
    v17 = v28[0];
    v18 = *(_DWORD *)(v13 + 8) + 1;
  }
  v21 = *v17 == -4096;
  *(_DWORD *)(v13 + 8) = v18;
  if ( !v21 )
    --*(_DWORD *)(v13 + 12);
  result = v25;
  *v17 = v25;
  return result;
}
