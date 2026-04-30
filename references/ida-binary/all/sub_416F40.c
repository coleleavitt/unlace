__int64 __fastcall sub_416F40(__int64 a1, const void *a2, _QWORD *a3, char a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // eax
  unsigned int v8; // ebx
  size_t v10; // rax
  size_t v11; // rbx
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax

  v7 = vault_with_events_t__::vfunc_24(*(_QWORD *)(a1 + 32) + 24LL, 0, a2, 0);
  LOBYTE(v4) = v7 == 0;
  if ( v7 )
  {
    v8 = v7;
    if ( a4 )
    {
      if ( v7 == 52 )
        return v4;
    }
    else
    {
      sub_4168C0(v7, (__int64)"Failed to switch to local site");
      if ( v8 == 52 )
        return v4;
    }
    if ( v8 == 46 )
      return v4;
    goto LABEL_12;
  }
  if ( a2 && (v10 = strlen((const char *)a2), (v11 = v10) != 0) )
  {
    v12 = (void *)a3[22];
    v13 = v10 + 1;
    if ( a3[24] < v10 + 1 )
    {
      v14 = qvector_reserve(a3 + 22, a3[22], v13, 1);
      a3[22] = v14;
      v12 = (void *)v14;
    }
    a3[23] = v13;
    memmove(v12, a2, v11);
    *(_BYTE *)(a3[22] + v11) = 0;
  }
  else
  {
    a3[23] = 0;
  }
  if ( !(unsigned __int8)vcred_reg_should_store_info() )
  {
LABEL_12:
    vcred_reg_set_site(a3, 0);
    return v4;
  }
  vcred_reg_set_site(a3, a2);
  return v4;
}
