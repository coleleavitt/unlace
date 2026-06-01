__int64 __fastcall sub_876A60(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp-10h] [rbp-18h]

  result = sub_86B8E0(a1, 33, 1, 0, 130, 0);
  if ( !*a1 )
  {
    a1[36] = 0;
    sub_86D220(a1, 0x5030100u, 2, 0, 2, 0, 127, 1);
    return v2;
  }
  return result;
}
