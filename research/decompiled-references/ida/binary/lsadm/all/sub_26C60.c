__int64 __fastcall sub_26C60(unsigned __int8 *a1)
{
  __int64 v1; // rbx
  int v2; // edx
  unsigned __int8 *v3; // rax
  unsigned __int8 *v5; // [rsp+8h] [rbp-20h] BYREF

  v1 = 0;
  v5 = a1;
  if ( *a1 )
  {
    do
    {
      v2 = sub_26960(&v5);
      v3 = v5;
      if ( v2 == -1 )
        v3 = ++v5;
      ++v1;
    }
    while ( *v3 );
  }
  return v1;
}

