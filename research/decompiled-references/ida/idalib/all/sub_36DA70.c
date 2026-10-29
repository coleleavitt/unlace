__int64 __fastcall sub_36DA70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbp
  unsigned __int8 default_reftype; // al
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v2 == -1 )
  {
    v6 = (unsigned __int8)clr_op_type(*(_QWORD *)(a1 + 8), v3);
  }
  else
  {
    default_reftype = get_default_reftype(*(_QWORD *)(a1 + 8));
    v6 = (unsigned __int8)op_offset(v4, v3, default_reftype, -1, v2, 0);
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
