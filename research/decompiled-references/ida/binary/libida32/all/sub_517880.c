unsigned __int64 sub_517880()
{
  __int64 v0; // rbx
  int v1; // eax
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v0 = *(_QWORD *)(qword_2CA1698 + 1616);
  netnode_check(&v3, "$ structs", 0, 0);
  v1 = v3;
  *(_DWORD *)(v0 + 68) = v3;
  if ( v1 == -1 )
    return v4 - __readfsqword(0x28u);
  else
    return sub_517580((__int64 *)(v0 + 32), 1);
}

