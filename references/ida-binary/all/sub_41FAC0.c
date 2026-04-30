__int64 __fastcall vault_with_events_t__::vfunc_25(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 (*v7)(void); // rdx
  __int64 v8; // r13
  __int64 v9; // rdx

  v5 = *(__int64 **)(a1 + 8);
  if ( !v5 )
    goto LABEL_6;
  v6 = *v5;
  v7 = *(unsigned __int8 (**)(void))(*v5 + 480);
  if ( (char *)v7 != (char *)sub_178B60 )
  {
    if ( !v7() )
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      goto LABEL_3;
    }
LABEL_6:
    v9 = 52;
    LODWORD(v8) = 52;
    goto LABEL_4;
  }
LABEL_3:
  v8 = (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64))(v6 + 168))(v5, a2, a3);
  v9 = v8;
LABEL_4:
  sub_416510(a1 + 16, 11, v9, a2, a3);
  return (unsigned int)v8;
}
