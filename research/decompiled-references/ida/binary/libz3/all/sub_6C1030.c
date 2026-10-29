__int64 __fastcall sub_6C1030(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r10
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h] BYREF
  __int64 v35; // [rsp+18h] [rbp-20h]

  v7 = *a2;
  v8 = *(_DWORD *)(*a2 + 12);
  v9 = (*(_DWORD *)(a3 + 12) - v8) ^ (v8 << 8);
  v10 = (v8 - v9) << 10;
  v11 = v9 ^ ((v8 - v9) << 16);
  v12 = v9 - v8;
  v13 = *(__int64 **)(a1 + 32);
  v14 = (v11 + v12) ^ v10;
  v15 = *(unsigned int *)(a1 + 40);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * (v14 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 == v15 )
  {
LABEL_16:
    while ( v19 != v13 )
    {
      v31 = *v13;
      if ( (unsigned __int64)*v13 > 1 )
      {
        if ( *((_DWORD *)v13 + 6) == v14 && v7 == v31 && a3 == v13[1] )
        {
          v20 = v13;
          goto LABEL_10;
        }
      }
      else if ( !v31 )
      {
        break;
      }
      v13 += 4;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 2481);
  }
  v20 = &v13[(unsigned __int64)v18 / 8];
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v21 )
      goto LABEL_8;
LABEL_5:
    v20 += 4;
    if ( v17 == v20 )
      goto LABEL_16;
  }
  if ( *((_DWORD *)v20 + 6) != v14 || v7 != v21 || a3 != v20[1] )
    goto LABEL_5;
LABEL_10:
  v22 = v20[2];
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL * (unsigned int)sub_182D020(qword_1C7F2C0, a4));
  v24 = *(_QWORD *)(a1 + 8);
  v32 = 0;
  v34 = 0;
  v33 = v24;
  v35 = v24;
  sub_1472F40(a1 + 256, v23, &v34, a1 + 752);
  sub_14B9BF0(a1 + 80, v34, &v32);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
             *(_QWORD *)(a1 + 24),
             1,
             v32,
             0,
             0);
  v26 = v34;
  if ( v34 )
  {
    v27 = v35;
    v28 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v28 )
      result = sub_15D7BC0(v27, v26);
  }
  v29 = v32;
  if ( v32 )
  {
    v30 = v33;
    v28 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v28 )
      return sub_15D7BC0(v30, v29);
  }
  return result;
}

