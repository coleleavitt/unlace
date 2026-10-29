__int64 __fastcall vault_with_events_t__::vfunc_39(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  unsigned __int8 (*v9)(void); // rdx
  __int64 v10; // r13
  __int64 v11; // rdx

  v7 = *(__int64 **)(a1 + 8);
  if ( !v7 )
    goto LABEL_6;
  v8 = *v7;
  v9 = *(unsigned __int8 (**)(void))(*v7 + 480);
  if ( (char *)v9 != (char *)sub_178B60 )
  {
    if ( !v9() )
    {
      v7 = *(__int64 **)(a1 + 8);
      v8 = *v7;
      goto LABEL_3;
    }
LABEL_6:
    v11 = 52;
    LODWORD(v10) = 52;
    goto LABEL_4;
  }
LABEL_3:
  v10 = (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v8 + 280))(v7, a2, a3, a4);
  v11 = v10;
LABEL_4:
  sub_416510(a1 + 16, 4, v11, a3, a4, a2);
  return (unsigned int)v10;
}
