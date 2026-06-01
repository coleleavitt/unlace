/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400436A0
// Address: 0x00000001400436A0

//----- (00000001400436A0) ----------------------------------------------------
char __fastcall sub_1400436A0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  sub_140043920(a1, &v9, a2, 1);
  v6 = v9;
  if ( v9 == a1[59] || *(_QWORD *)(v9 + 40) != a2 || *(_DWORD *)(v9 + 76) != a3 )
    return 0;
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 336LL))(a1, v9, 0);
  v7 = (void *)sub_14000C8A0(a1 + 59, v6);
  j_j_free(v7);
  return 1;
}
