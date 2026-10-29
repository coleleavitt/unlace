__int64 sub_6091E0()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = add_encoding((int)"UTF-8");
  result = get_default_encoding_idx(1);
  if ( v0 != (_DWORD)result )
    sub_368890();
  return result;
}
