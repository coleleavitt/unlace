__int64 __fastcall sub_A1C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *segm_by_name; // r12
  unsigned __int8 byte; // al
  int v6; // edx
  _BYTE v7[14]; // [rsp+Ah] [rbp-2Eh]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 552);
  v8 = __readfsqword(0x28u);
  if ( v2 == 18 || v2 == 25 )
  {
    segm_by_name = (_QWORD *)get_segm_by_name();
    if ( !segm_by_name )
      return v8 - __readfsqword(0x28u);
  }
  else
  {
    if ( v2 != 11 )
      return v8 - __readfsqword(0x28u);
    segm_by_name = (_QWORD *)get_segm_by_name();
    if ( !segm_by_name )
      return v8 - __readfsqword(0x28u);
    a2 = 14;
    get_bytes();
    if ( *(_QWORD *)v7 != 0x697562206F4720FFLL || *(_QWORD *)&v7[6] != 0x3A666E69646C6975LL )
      return v8 - __readfsqword(0x28u);
  }
  if ( segm_by_name[1] - *segm_by_name <= 0x17u )
    return sub_5050((__int64)"golang: buildinfo is too small\n", a2);
  create_data();
  create_strlit();
  byte = get_byte();
  v6 = *(unsigned __int8 *)(a1 + 565);
  if ( (_BYTE)v6 != byte )
    return sub_5050((__int64)"buildinfo pointer size %d does not match database pointer size %d\n", byte, v6);
  *(_QWORD *)(a1 + 360) = 2 * (unsigned int)byte;
  create_data();
  set_cmt();
  create_data();
  get_byte();
  set_cmt();
  create_data();
  return create_data();
}
