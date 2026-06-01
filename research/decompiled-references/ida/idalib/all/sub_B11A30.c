__int64 __fastcall sub_B11A30(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  char v29; // [rsp+Fh] [rbp-69h] BYREF
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  int v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+20h] [rbp-58h]
  void *v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]
  _BYTE v35[56]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v29 = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 == 1 )
  {
    sub_995540(a2, "[[clang::diagnose_as_builtin");
    sub_AFB8E0(a2, &v29);
    v21 = sub_995540(a2, &byte_22F0C30);
    v22 = *(_QWORD *)(a1 + 40);
    v23 = v21;
    v24 = *(_DWORD *)(v22 + 24);
    v25 = *(_QWORD *)(v22 + 160);
    v30 = *(_QWORD *)(v22 + 40);
    v31 = v24;
    v32 = v25;
    sub_B87650(&v33, &v30);
    v26 = sub_227BF10(v23, v33, v34);
    sub_995540(v26, &byte_22F0C30);
    if ( v33 != v35 )
      operator delete(v33);
    sub_995540(a2, &byte_22F0C30);
    v27 = *(_QWORD *)(a1 + 56);
    v28 = v27 + 4LL * *(unsigned int *)(a1 + 48);
    while ( v28 != v27 )
    {
      v27 += 4;
      sub_AFB8E0(a2, &v29);
      sub_227B910(a2, *(unsigned int *)(v27 - 4));
    }
  }
  else
  {
    if ( !v3 )
    {
      sub_995540(a2, "__attribute__((diagnose_as_builtin");
      sub_AFB8E0(a2, &v29);
      v4 = sub_995540(a2, &byte_22F0C30);
      v5 = *(_QWORD *)(a1 + 40);
      v6 = v4;
      v7 = *(_DWORD *)(v5 + 24);
      v8 = *(_QWORD *)(v5 + 160);
      v30 = *(_QWORD *)(v5 + 40);
      v31 = v7;
      v32 = v8;
      sub_B87650(&v33, &v30);
      v9 = sub_227BF10(v6, v33, v34);
      sub_995540(v9, &byte_22F0C30);
      if ( v33 != v35 )
        operator delete(v33);
      sub_995540(a2, &byte_22F0C30);
      v10 = *(_QWORD *)(a1 + 56);
      v11 = v10 + 4LL * *(unsigned int *)(a1 + 48);
      while ( v11 != v10 )
      {
        v10 += 4;
        sub_AFB8E0(a2, &v29);
        sub_227B910(a2, *(unsigned int *)(v10 - 4));
      }
      sub_995540(a2, &byte_22F0C30);
      if ( !v29 )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
    }
    sub_995540(a2, "[[clang::diagnose_as_builtin");
    sub_AFB8E0(a2, &v29);
    v13 = sub_995540(a2, &byte_22F0C30);
    v14 = *(_QWORD *)(a1 + 40);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 24);
    v17 = *(_QWORD *)(v14 + 160);
    v30 = *(_QWORD *)(v14 + 40);
    v31 = v16;
    v32 = v17;
    sub_B87650(&v33, &v30);
    v18 = sub_227BF10(v15, v33, v34);
    sub_995540(v18, &byte_22F0C30);
    if ( v33 != v35 )
      operator delete(v33);
    sub_995540(a2, &byte_22F0C30);
    v19 = *(_QWORD *)(a1 + 56);
    v20 = v19 + 4LL * *(unsigned int *)(a1 + 48);
    while ( v20 != v19 )
    {
      v19 += 4;
      sub_AFB8E0(a2, &v29);
      sub_227B910(a2, *(unsigned int *)(v19 - 4));
    }
  }
  sub_995540(a2, &byte_22F0C30);
  if ( !v29 )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
