__int64 __fastcall sub_20C2E50(_BYTE *a1, __int64 a2)
{
  void **v2; // rbx
  void *v4[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( !(_BYTE)byte_2CFDCE0 && __cxa_guard_acquire(&byte_2CFDCE0) )
  {
    sub_20C2310(qword_2CFDD00, qword_2CFDDB8, qword_2CFDDC0);
    __cxa_atexit((void (*)(void *))sub_2012820, qword_2CFDD00, &off_2B25620);
    __cxa_guard_release(&byte_2CFDCE0);
  }
  LODWORD(v2) = 1;
  if ( !qword_2CFDD18 )
    return (unsigned int)v2;
  v2 = v4;
  v4[0] = v5;
  sub_20C2190(v4, a1, (__int64)&a1[a2]);
  LOBYTE(v2) = sub_20C2D80(qword_2CFDD00, (__int64)v4) != 0;
  if ( v4[0] == v5 )
    return (unsigned int)v2;
  operator delete(v4[0]);
  return (unsigned int)v2;
}
