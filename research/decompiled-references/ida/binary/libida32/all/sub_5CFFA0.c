__int64 __fastcall sub_5CFFA0(__int64 **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi

  result = sub_5C6080(a2, a1[3]);
  if ( (_BYTE)result )
  {
    v3 = **a1;
    v4 = v3 + 8 * (*a1)[1];
    if ( v4 != v3 )
    {
      while ( (*(_BYTE *)(*(_QWORD *)v3 + 186LL) & 0xF) == 0xA
           && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 186LL) & 0xF) == 0xC )
      {
        v3 += 8;
        if ( v4 == v3 )
          return result;
      }
      return 0;
    }
  }
  return result;
}

