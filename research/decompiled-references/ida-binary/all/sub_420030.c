__int64 __fastcall vault_with_events_t__::vfunc_42(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int8 (*v9)(void); // rax
  const char *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v7 = a1[1];
  v21 = __readfsqword(0x28u);
  v8 = a5;
  if ( !v7 )
    goto LABEL_13;
  v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v7 + 480LL);
  if ( (char *)v9 != (char *)sub_178B60 )
  {
    if ( !v9() )
    {
      v7 = a1[1];
      goto LABEL_3;
    }
LABEL_13:
    v16 = 52;
    LODWORD(v10) = 52;
    goto LABEL_11;
  }
LABEL_3:
  v20 = 0;
  v19 = 0;
  v10 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 304LL))(
                        v7,
                        &v19,
                        a2,
                        a3,
                        a4,
                        (unsigned int)v8);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v10, &v19);
  v11 = v19;
  if ( v19 )
  {
    v12 = v20;
    if ( (_QWORD)v20 )
    {
      v13 = 0;
      do
      {
        v14 = v11 + 32 * v13;
        v15 = *(_QWORD *)(v14 + 8);
        if ( v15 )
        {
          *(_QWORD *)(v14 + 16) = 0;
          qfree(v15, v10);
          v11 = v19;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v20 = 0;
    qfree(v11, v10);
  }
  v16 = (unsigned int)v10;
LABEL_11:
  sub_416510((__int64)(a1 + 2), 7, v16, a2, a3, a4, v8);
  return (unsigned int)v10;
}
