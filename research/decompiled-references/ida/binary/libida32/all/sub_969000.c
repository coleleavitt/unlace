__int64 __fastcall sub_969000(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v4; // rbp
  void *v6; // [rsp+8h] [rbp-20h] BYREF

  LODWORD(v1) = 1;
  if ( a1 )
  {
    v1 = a1[1];
    v2 = *a1;
    v6 = nullptr;
    v3 = sub_968A30(v2, v1, (__int64 *)&v6);
    v4 = v6;
    LOBYTE(v1) = v1 == v3;
    if ( v6 )
    {
      sub_EA1E10(v6);
      operator delete(v4, 8u);
    }
  }
  return (unsigned int)v1;
}

