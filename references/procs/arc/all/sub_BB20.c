_BOOL8 sub_BB20()
{
  _QWORD v1[131]; // [rsp+0h] [rbp-418h] BYREF

  v1[129] = __readfsqword(0x28u);
  return (unsigned int)getinf(5) == 18 && get_file_type_name(v1, 1024) && stristr(v1, "reloc");
}
