__int64 __fastcall sub_1AF4110(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rdi

  v5 = a2;
  v6 = *(_QWORD *)a1;
  sub_18C74E0(*(_QWORD *)a1, 0, 0, 4);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x47 )
    v5 = *(_QWORD *)(a2 + 48);
  v7 = *(_DWORD *)(v5 + 24);
  v8 = *(_QWORD *)(v5 + 48);
  v9 = (_QWORD *)sub_168B6C0(a1);
  v10 = sub_C09130(v9, 0, 0, 0, v5, 0, v7, v8, 0, 0, 0, 0);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL * *(unsigned int *)(a1 + 264) - 40);
  v12 = sub_168B6C0(a1);
  v13 = sub_B30960(v12, v10, v11, nullptr, 0, nullptr, 0, nullptr, 0, 0, 0, 0);
  v18 = *(__int64 **)a3;
  v19 = v13;
  v20 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 != v20 )
  {
    do
    {
      v21 = *v18++;
      sub_B8CC60(v21, v19, v14, v15, v16, v17);
    }
    while ( (__int64 *)v20 != v18 );
  }
  return sub_190D5E0(v6, a4);
}
