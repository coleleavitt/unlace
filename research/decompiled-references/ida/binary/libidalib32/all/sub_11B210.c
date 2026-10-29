__int64 sub_11B210()
{
  __int64 path; // rax
  char v1; // dl
  __int64 result; // rax

  path = get_path();
  v1 = sub_11B110(path, 0);
  result = 0;
  if ( v1 )
  {
    sub_CB4C0(nullptr);
    sub_8F660((__int64)"Database has been saved\n");
    return 1;
  }
  return result;
}

