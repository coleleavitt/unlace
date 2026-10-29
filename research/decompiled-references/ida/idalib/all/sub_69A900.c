__int64 __fastcall sub_69A900(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1840);
  v2 = *(_QWORD *)(v1 + 8) == -1;
  *(_OWORD *)(v1 + 64) = -1;
  if ( !v2 )
    return v7 - __readfsqword(0x28u);
  v4 = *(void **)(v1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    qfree(v4);
    *(_QWORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 32) = 0;
  }
  v5 = *(void **)(v1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(v1 + 48) = 0;
    qfree(v5);
    *(_QWORD *)(v1 + 40) = 0;
    *(_QWORD *)(v1 + 56) = 0;
  }
  netnode_check(&v6, "$ tryblks", 0, 1);
  *(_QWORD *)(v1 + 8) = v6;
  return register_undo_handlers(&unk_2B379C0, 5, 1, 0);
}
