/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE1B0
// Address: 0x00000000000BE1B0

//----- (00000000000BE1B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_BE1B0(__int64 a1, char *a2)
{
  const char *i; // rax
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  const char *v5[6]; // [rsp+18h] [rbp-30h] BYREF

  v5[1] = (const char *)__readfsqword(0x28u);
  if ( a1 )
  {
    if ( a2 )
    {
      for ( i = qstrtok(a2, ":", v5); i; i = qstrtok(nullptr, ":", v5) )
      {
        if ( *i )
        {
          sub_37F60((__int64)ptr, i);
          sub_4AA20(a1, ptr);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            ptr[2] = nullptr;
          }
        }
      }
    }
  }
  return __readfsqword(0x28u);
}
