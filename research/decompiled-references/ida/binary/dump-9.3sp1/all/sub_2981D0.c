__int64 __fastcall sub_2981D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp-8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 17
    || !(unsigned __int8)sub_285160(v2, 1, 1)
    && !(unsigned __int8)sub_285160(v2, 66, 1)
    && !(unsigned __int8)sub_285230(v2) )
  {
    return 0;
  }
  v6 = sub_2418B0(v2);
  v7 = sub_240F50(*(_QWORD *)(a1 + 72), 1, 0, -1, 0, 0, 0);
  v8 = *(_QWORD *)v7;
  *(_QWORD *)v7 = *(_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)v2 = v8;
  LODWORD(v8) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v9;
  v10 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 8) = v8;
  LODWORD(v8) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 12) = v10;
  v11 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 12) = v8;
  v12 = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v11;
  v13 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = v12;
  v14 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 32) = v13;
  v15 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = v14;
  v16 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v15;
  v17 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 40) = v16;
  v18 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v17;
  LODWORD(v17) = *(_DWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 48) = v18;
  LODWORD(v18) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 56) = v17;
  *(_DWORD *)(v2 + 56) = v18;
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v22 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v7, v31, v19, v20);
  v25 = sub_241920(v21, (__int64)v22, v23, v24);
  v28 = sub_241330(v21, (__int64)v22, v26, v27);
  *(_QWORD *)(v25 + 64) = v28;
  *((_DWORD *)sub_2413C0((__int64)v28, v6, v29, v30) + 2) = 78;
  *(_DWORD *)(a2 + 8) = 75;
  return 1;
}
