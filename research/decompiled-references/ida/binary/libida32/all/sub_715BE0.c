__int64 __fastcall sub_715BE0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  void *v4; // rax

  v1 = *a1;
  if ( !*a1 )
  {
    v4 = (void *)qcalloc(12865, 1);
    *a1 = (__int64)v4;
    if ( !v4 )
    {
      if ( !under_debugger )
        interr(843);
      BUG();
    }
    memset(v4, 0, 0x3241u);
    v1 = *a1;
  }
  a1[1] = 0;
  a1[2] = v1 + 5120;
  a1[3] = v1 + 6669;
  a1[4] = v1 + 8218;
  v2 = v1 + 9767;
  result = v1 + 11316;
  a1[5] = v2;
  a1[6] = result;
  return result;
}

