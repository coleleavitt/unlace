__int64 __fastcall sub_AE10(char *a1, char *dest, size_t n, __int64 a4)
{
  size_t v6; // rdx
  int v7; // eax
  char *v8; // rbp
  char *v9; // rdi
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // [rsp+8h] [rbp-50h]
  char v13; // [rsp+1Fh] [rbp-39h] BYREF
  char *src[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  src[1] = (char *)__readfsqword(0x28u);
  if ( a1 )
    v6 = strlen(a1);
  sub_23590(src, a1, v6, a4);
  v7 = std::string::compare((std::string *)src, a1);
  v8 = src[0];
  if ( !v7 )
  {
    result = 0;
    v9 = src[0] - 24;
    if ( src[0] - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
      return result;
    goto LABEL_10;
  }
  if ( dest && n )
  {
    strncpy(dest, src[0], n);
    dest[n - 1] = 0;
  }
  v9 = v8 - 24;
  result = *((_QWORD *)v8 - 3);
  if ( v8 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
LABEL_10:
    if ( &_pthread_key_create )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF);
    }
    else
    {
      v11 = *((_DWORD *)v8 - 2);
      *((_DWORD *)v8 - 2) = v11 - 1;
    }
    if ( v11 <= 0 )
    {
      v12 = result;
      std::string::_Rep::_M_destroy(v9, &v13);
      return v12;
    }
  }
  return result;
}
