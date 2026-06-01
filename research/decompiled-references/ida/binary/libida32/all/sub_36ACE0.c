unsigned __int64 __fastcall sub_36ACE0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 idc_class; // rax
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int128 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v2 = *a2;
  vars28 = __readfsqword(0x28u);
  *a2 = 0;
  idc_class = find_idc_class("typeinfo");
  idcv_object(a1, idc_class);
  vars0 = 9;
  vars8 = v2;
  vars10 = 0;
  set_idcv_attr();
  free_idcv(&vars0);
  return vars28 - __readfsqword(0x28u);
}

