__int64 __fastcall sub_416AE0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a3 == 1 )
  {
    v5 = sub_4A5910(a2, "tcl_version", 0, 513);
    result = 1;
    if ( v5 )
    {
      sub_48AFD0(a2, v5);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, 0);
    return 1;
  }
  return result;
}

