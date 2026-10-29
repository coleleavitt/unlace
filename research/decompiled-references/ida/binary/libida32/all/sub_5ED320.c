__int64 sub_5ED320()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = add_encoding((int)"UTF-8");
  result = get_default_encoding_idx(1);
  if ( v0 != (_DWORD)result )
    sub_365330();
  return result;
}

