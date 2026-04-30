unsigned __int64 sub_17E3D0()
{
  __int64 v1; // rax
  __int64 v2; // rax
  char v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( !get_undo_param(0) )
  {
    v3 = 0;
    v1 = sub_534430("Undo");
    if ( v1 )
      sub_537630(v1, 8, &v3);
    v2 = sub_534430("Redo");
    if ( v2 )
      sub_537630(v2, 8, &v3);
  }
  return v4 - __readfsqword(0x28u);
}
