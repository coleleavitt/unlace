__int64 __fastcall sub_6E4D20(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  int v6; // r13d
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 && (v6 = *(_DWORD *)(v4 - 4)) != 0 )
  {
    v24 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 1));
    result = sub_6E1010(v5, v24);
    v8 = result;
    if ( v6 != 1 )
    {
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (unsigned int)(v6 - 2));
      v12 = sub_6E1010(v25, v26);
      v16 = v6 - 2;
      v17 = v12;
      if ( v6 != 2 )
      {
        v27 = sub_6E4230(a1, a2, v16);
        v28 = sub_6E15B0(v25, v26, v18, v19, v20, v21);
        v29 = v27;
        v22 = sub_6E3580(v25, 2, &v28);
        v28 = v17;
        v29 = v22;
        v17 = sub_6E1880(v25, 2, &v28);
      }
      v28 = sub_6E15B0(v5, v24, v16, v13, v14, v15);
      v29 = v17;
      v23 = sub_6E3580(v5, 2, &v28);
      v28 = v8;
      v29 = v23;
      result = sub_6E1880(v5, 2, &v28);
      v8 = result;
    }
  }
  else
  {
    result = *(_QWORD *)v5;
    v8 = *(_QWORD *)(*(_QWORD *)v5 + 864LL);
  }
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      result = sub_15D7BC0(v10, v9);
  }
  *a3 = v8;
  return result;
}

