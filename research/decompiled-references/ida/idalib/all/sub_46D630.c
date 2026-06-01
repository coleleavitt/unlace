_QWORD *__fastcall sub_46D630(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4[2]; // [rsp+0h] [rbp-28h] BYREF
  int v5[2]; // [rsp+8h] [rbp-20h]

  *(_QWORD *)v5 = __readfsqword(0x28u);
  if ( sub_457830() )
    return (_QWORD *)(*(_QWORD *)v5 - __readfsqword(0x28u));
  if ( (sub_46D210(*(_QWORD *)(a1 + 32), (char **)v4, a2, *(_DWORD *)(a1 + 12), 0) & 0x600) != 0 )
    sub_46C190(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), (unsigned __int64)a2, 4);
  v3 = ea2node(a2);
  netnode_supdel(v3, 15, 65);
  set_name((int)a2, (void *)&byte_22F0C30);
  set_name((int)a2, (void *)&byte_22F0C30);
  return sub_3D12D0(a2);
}
