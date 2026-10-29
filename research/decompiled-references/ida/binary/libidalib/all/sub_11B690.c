__int64 sub_11B690()
{
  __int64 path; // rax
  char v1; // dl
  __int64 result; // rax

  path = get_path();
  v1 = sub_11B590(path, 0);
  result = 0;
  if ( v1 )
  {
    sub_CCA40(nullptr);
    sub_8F740((__int64)"Database has been saved\n");
    return 1;
  }
  return result;
}

