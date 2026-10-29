__int64 __fastcall sub_7AEA00(__int64 a1, __int64 a2)
{
  __int64 idc_class; // rax
  unsigned int v3; // ebx
  char v5[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  idc_class = find_idc_class("enum_type_data_t");
  v3 = idcv_object(a1, idc_class);
  if ( !v3 )
  {
    v5[0] = 2;
    v7 = 0;
    v6 = 0;
    free_idcv(v5);
    v5[0] = 2;
    LODWORD(v6) = 0;
    v3 = set_idcv_attr();
    if ( !v3 )
    {
      v3 = set_idcv_attr();
      if ( !v3 )
      {
        free_idcv(v5);
        v5[0] = 2;
        LODWORD(v6) = 128;
        v3 = set_idcv_attr();
        if ( !v3 )
          v3 = move_idcv(a2, a1);
      }
    }
    free_idcv(v5);
  }
  return v3;
}

