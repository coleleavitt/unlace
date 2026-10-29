__int64 __fastcall sub_B19EE0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  size_t v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  size_t v13; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  size_t v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  size_t v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  size_t v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  _BYTE v31[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v31[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_FA77D0(a1);
  else
    v5 = v4 >> 4;
  switch ( v5 )
  {
    case 0:
      sub_995540(a2, "__attribute__((try_acquire_capability");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v27 = *(_QWORD *)(a1 + 40);
      v13 = j__strlen("\n");
      sub_F07C00(v27, a2, 0, a3, 0, 0, (__int64)"\n", v13);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v14 = *(_QWORD *)(a1 + 56);
      v15 = v14 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v15 != v14 )
      {
        v14 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v14 - 8));
      }
      goto LABEL_7;
    case 1:
      sub_995540(a2, "[[clang::try_acquire_capability");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v28 = *(_QWORD *)(a1 + 40);
      v16 = j__strlen("\n");
      sub_F07C00(v28, a2, 0, a3, 0, 0, (__int64)"\n", v16);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v17 = *(_QWORD *)(a1 + 56);
      v18 = v17 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v18 != v17 )
      {
        v17 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v17 - 8));
      }
      goto LABEL_18;
    case 2:
      sub_995540(a2, "__attribute__((try_acquire_shared_capability");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v29 = *(_QWORD *)(a1 + 40);
      v19 = j__strlen("\n");
      sub_F07C00(v29, a2, 0, a3, 0, 0, (__int64)"\n", v19);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v20 = *(_QWORD *)(a1 + 56);
      v21 = v20 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v21 != v20 )
      {
        v20 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v20 - 8));
      }
      goto LABEL_7;
    case 3:
      sub_995540(a2, "[[clang::try_acquire_shared_capability");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v30 = *(_QWORD *)(a1 + 40);
      v22 = j__strlen("\n");
      sub_F07C00(v30, a2, 0, a3, 0, 0, (__int64)"\n", v22);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v23 = *(_QWORD *)(a1 + 56);
      v24 = v23 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v24 != v23 )
      {
        v23 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v23 - 8));
      }
LABEL_18:
      sub_995540(a2, &byte_22F0C30);
      if ( !v31[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "]]");
    case 4:
      sub_995540(a2, "__attribute__((exclusive_trylock_function");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v25 = *(_QWORD *)(a1 + 40);
      v6 = j__strlen("\n");
      sub_F07C00(v25, a2, 0, a3, 0, 0, (__int64)"\n", v6);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v7 = *(_QWORD *)(a1 + 56);
      v8 = v7 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v8 != v7 )
      {
        v7 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v7 - 8));
      }
      goto LABEL_7;
    case 5:
      sub_995540(a2, "__attribute__((shared_trylock_function");
      sub_AFB8E0(a2, v31);
      sub_995540(a2, &byte_22F0C30);
      v26 = *(_QWORD *)(a1 + 40);
      v10 = j__strlen("\n");
      sub_F07C00(v26, a2, 0, a3, 0, 0, (__int64)"\n", v10);
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v11 = *(_QWORD *)(a1 + 56);
      v12 = v11 + 8LL * *(unsigned int *)(a1 + 48);
      while ( v12 != v11 )
      {
        v11 += 8;
        sub_AFB8E0(a2, v31);
        sub_227B9B0(a2, *(_QWORD *)(v11 - 8));
      }
LABEL_7:
      sub_995540(a2, &byte_22F0C30);
      if ( !v31[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
  }
}
