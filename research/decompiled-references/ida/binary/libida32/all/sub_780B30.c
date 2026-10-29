_QWORD *__fastcall sub_780B30(__int64 a1, const char *a2)
{
  __int64 *v2; // r13
  size_t v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  void *v6; // rcx
  _QWORD *result; // rax
  int v8; // edx
  _QWORD *v9; // [rsp+8h] [rbp-50h]
  const void *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v10[1] = (const void *)__readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 584);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = strlen(a2);
  if ( v3 )
  {
    v4 = std::string::_Rep::_S_create();
    v5 = v4;
    v6 = (void *)(v4 + 24);
    if ( v3 == 1 )
      *(_BYTE *)(v4 + 24) = *a2;
    else
      v6 = memcpy((void *)(v4 + 24), a2, v3);
    if ( (_UNKNOWN *)v5 == &std::string::_Rep::_S_empty_rep_storage )
    {
      v10[0] = v6;
      result = sub_780A60(v2, v10);
    }
    else
    {
      *(_QWORD *)v5 = v3;
      *(_DWORD *)(v5 + 16) = 0;
      *(_BYTE *)(v5 + v3 + 24) = 0;
      v10[0] = v6;
      result = sub_780A60(v2, v10);
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), 0xFFFFFFFF);
      }
      else
      {
        v8 = *(_DWORD *)(v5 + 16);
        *(_DWORD *)(v5 + 16) = v8 - 1;
      }
      if ( v8 <= 0 )
      {
        v9 = result;
        std::string::_Rep::_M_destroy();
        result = v9;
      }
    }
  }
  else
  {
    v10[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    result = sub_780A60(v2, v10);
  }
  if ( result )
    result += 2;
  return result;
}

