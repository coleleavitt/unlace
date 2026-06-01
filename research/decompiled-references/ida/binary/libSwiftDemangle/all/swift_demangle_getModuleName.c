__int64 __fastcall swift_demangle_getModuleName(char *s, char *dest, size_t n)
{
  size_t v4; // rcx
  char *v5; // r12
  __int64 v6; // r14
  int v8; // eax
  char v9; // [rsp+7h] [rbp-41h] BYREF
  _BYTE v10[8]; // [rsp+8h] [rbp-40h] BYREF
  char *src[7]; // [rsp+10h] [rbp-38h] BYREF

  src[1] = (char *)__readfsqword(0x28u);
  sub_22ED0(v10);
  v4 = 0;
  if ( s )
    v4 = strlen(s);
  sub_233A0(src, v10, s, v4);
  v5 = src[0];
  if ( dest && n )
  {
    strncpy(dest, src[0], n);
    dest[n - 1] = 0;
  }
  v6 = *((_QWORD *)v5 - 3);
  if ( v5 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 - 2, 0xFFFFFFFF);
    }
    else
    {
      v8 = *((_DWORD *)v5 - 2);
      *((_DWORD *)v5 - 2) = v8 - 1;
    }
    if ( v8 <= 0 )
      std::string::_Rep::_M_destroy(v5 - 24, &v9);
  }
  sub_22FA0(v10);
  return v6;
}

