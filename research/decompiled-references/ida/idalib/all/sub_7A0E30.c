_QWORD *__fastcall sub_7A0E30(__int64 a1, const char *a2)
{
  __int64 *v2; // r13
  size_t v3; // rax
  size_t v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  void *v7; // rcx
  _QWORD *result; // rax
  int v9; // edx
  _QWORD *v10; // [rsp+8h] [rbp-50h]
  char v11; // [rsp+1Eh] [rbp-3Ah] BYREF
  char v12; // [rsp+1Fh] [rbp-39h] BYREF
  const void *v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v13[1] = (const void *)__readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 584);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = std::string::_Rep::_S_create(v3, 0, &v11);
    v6 = v5;
    v7 = (void *)(v5 + 24);
    if ( v4 == 1 )
      *(_BYTE *)(v5 + 24) = *a2;
    else
      v7 = memcpy((void *)(v5 + 24), a2, v4);
    if ( (_UNKNOWN *)v6 == &std::string::_Rep::_S_empty_rep_storage )
    {
      v13[0] = v7;
      result = sub_7A0D60(v2, v13);
    }
    else
    {
      *(_QWORD *)v6 = v4;
      *(_DWORD *)(v6 + 16) = 0;
      *(_BYTE *)(v6 + v4 + 24) = 0;
      v13[0] = v7;
      result = sub_7A0D60(v2, v13);
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF);
      }
      else
      {
        v9 = *(_DWORD *)(v6 + 16);
        *(_DWORD *)(v6 + 16) = v9 - 1;
      }
      if ( v9 <= 0 )
      {
        v10 = result;
        std::string::_Rep::_M_destroy(v6, &v12);
        result = v10;
      }
    }
  }
  else
  {
    v13[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    result = sub_7A0D60(v2, v13);
  }
  if ( result )
    result += 2;
  return result;
}
