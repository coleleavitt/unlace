__int64 __fastcall sub_384AB0(__int64 a1)
{
  unsigned int place_class_id; // eax
  __int64 result; // rax

  place_class_id = get_place_class_id("idaplace_t");
  result = get_place_class(0, 0, place_class_id);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    *(_QWORD *)(result + 16) = a1;
    *(_DWORD *)(result + 8) = -1;
  }
  return result;
}
