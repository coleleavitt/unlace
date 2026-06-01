int __fastcall sub_427E80(std::string *this, unsigned __int64 a2, char *a3)
{
  int *v3; // rbx
  int *v4; // rbp
  int result; // eax
  unsigned __int8 *v6; // r12
  int *v7; // r12
  int v8; // edi

  std::string::assign(this, a3, a2);
  v3 = *(int **)this;
  if ( *(int *)(*(_QWORD *)this - 8LL) >= 0 )
  {
    std::string::_M_leak_hard(this);
    v3 = *(int **)this;
  }
  v4 = v3;
  if ( *(v3 - 2) >= 0 )
  {
    std::string::_M_leak_hard(this);
    v3 = *(int **)this;
  }
  result = *(v3 - 2);
  v6 = (unsigned __int8 *)v3 + *((_QWORD *)v3 - 3);
  if ( result >= 0 )
  {
    result = std::string::_M_leak_hard(this);
    v3 = *(int **)this;
  }
  if ( v3 != (int *)v6 )
  {
    v7 = (int *)&v6[(char *)v4 - (char *)v3];
    do
    {
      v8 = *(unsigned __int8 *)v3;
      v4 = (int *)((char *)v4 + 1);
      v3 = (int *)((char *)v3 + 1);
      result = tolower(v8);
      *((_BYTE *)v4 - 1) = result;
    }
    while ( v7 != v4 );
  }
  return result;
}

