__int64 sub_3843C0()
{
  unsigned int v0; // ebx
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdx

  v0 = (unsigned __int8)byte_8BA544;
  if ( byte_8BA544 && (v2 = sub_1F4200()) != 0 && (_QWORD)xmmword_8CF2A8 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_QWORD *)(qword_8CF2A0 + 8 * v4);
      if ( v5 )
      {
        if ( v2 == *(_QWORD *)(v5 + 24) )
          break;
      }
      v4 = ++v3;
      if ( v3 >= (unsigned __int64)xmmword_8CF2A8 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v0;
}
