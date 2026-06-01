/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494698
// Address: 0x0000000000494698

//----- (0000000000494698) ----------------------------------------------------
void __fastcall __noreturn sub_494698(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v2; // x20
  void *v3; // x21
  _QWORD *v5; // x23
  _QWORD **v6; // x1
  _QWORD **v7; // x20

  v3 = *(void **)(v1 + 24);
  while ( v2 != v3 )
  {
    v5 = *(_QWORD **)v3;
    **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
    sub_493E90(*((_QWORD *)v3 + 4));
    j__free(v3);
    v3 = v5;
    --*(_QWORD *)(v1 + 40);
  }
  v6 = *(_QWORD ***)v1;
  while ( (_QWORD **)v1 != v6 )
  {
    v7 = (_QWORD **)*v6;
    *v6[1] = *v6;
    (*v6)[1] = v6[1];
    j__free(v6);
    v6 = v7;
    --*(_QWORD *)(v1 + 16);
  }
  _Unwind_Resume(a1);
}
// 494698: variable 'v1' is possibly undefined
// 4946A4: variable 'v2' is possibly undefined
