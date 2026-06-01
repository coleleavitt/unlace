__int64 __fastcall sub_7D1770(__int64 a1, __int64 a2)
{
  __int64 idc_class; // rax
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  idc_class = find_idc_class("loader_input_t");
  result = idcv_object(a1, idc_class);
  if ( !(_DWORD)result )
  {
    result = set_idcv_attr(a1, "li", a1 + 32, 0, v4, v5);
    if ( !(_DWORD)result )
      return move_idcv(a2, a1);
  }
  return result;
}
