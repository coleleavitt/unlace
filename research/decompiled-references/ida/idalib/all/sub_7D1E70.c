__int64 __fastcall sub_7D1E70(__int64 a1, __int64 a2)
{
  __int64 idc_class; // rax
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  char v11[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  idc_class = find_idc_class("enum_type_data_t");
  v3 = idcv_object(a1, idc_class);
  if ( !v3 )
  {
    v11[0] = 2;
    v13 = 0;
    v12 = 0;
    free_idcv(v11);
    v11[0] = 2;
    *(_QWORD *)&v12 = 0;
    v3 = set_idcv_attr(a1, "taenum_bits", v11, 0, v5, v6);
    if ( !v3 )
    {
      v3 = set_idcv_attr(a1, "member_cnt", v11, 0, v7, v8);
      if ( !v3 )
      {
        free_idcv(v11);
        v11[0] = 2;
        *(_QWORD *)&v12 = 128;
        v3 = set_idcv_attr(a1, "bte", v11, 0, v9, v10);
        if ( !v3 )
          v3 = move_idcv(a2, a1);
      }
    }
    free_idcv(v11);
  }
  return v3;
}
