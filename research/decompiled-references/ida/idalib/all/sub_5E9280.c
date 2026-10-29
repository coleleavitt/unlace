char *__fastcall sub_5E9280(__int64 a1, __int64 a2, char **a3, char a4)
{
  char *result; // rax
  char v6; // dl
  int named_type; // edx

  result = (char *)(a2 + 186);
  *a3 = nullptr;
  v6 = *(_BYTE *)(a2 + 186);
  if ( a4 )
  {
    if ( (v6 & 0xF) != 0xD )
      return result;
  }
  else if ( (v6 & 0x3F) != 0x3D )
  {
    return result;
  }
  named_type = get_named_type(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 72), 1, (_DWORD)a3, 0, 0, 0, 0, 0);
  result = nullptr;
  if ( named_type )
  {
    result = sub_568850(*(_QWORD *)(a1 + 248), *a3, 0, 0);
    *a3 = result;
  }
  return result;
}
