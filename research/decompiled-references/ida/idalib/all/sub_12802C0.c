void __fastcall sub_12802C0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char *v5; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h]
  void *v13[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v5 = "crtend.o";
  v7 = *(_QWORD *)(a1 + 24);
  if ( !a2 )
    v5 = "crtend_no_eh.o";
  v8 = *(_QWORD *)(v7 + 8);
  sub_112D4E0(v13, *(_QWORD *)(a1 + 24), v5);
  v9 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a3 + 16LL))(a3, v13[0], v13[1]);
  v10 = *(unsigned int *)(a4 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    v12 = v9;
    sub_2237220(a4, a4 + 16, v10 + 1, 8);
    v10 = *(unsigned int *)(a4 + 8);
    v9 = v12;
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v10) = v9;
  v11 = (__int64 *)v13[0];
  ++*(_DWORD *)(a4 + 8);
  if ( v11 != &v14 )
    operator delete(v11);
  sub_11BEF20(v7, v8, a4, a3);
}
