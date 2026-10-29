__int64 __fastcall qfilesize(char *a1)
{
  __int64 v2; // [rsp+28h] [rbp-40h]

  if ( a1 && !(unsigned int)qstat(a1) )
    return v2;
  else
    return 0;
}
