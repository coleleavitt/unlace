__int64 __fastcall vault_with_events_t__::vfunc_47(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int8 (*v8)(void); // rax
  const char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v6 = a1[1];
  v19 = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_13;
  v8 = *(unsigned __int8 (**)(void))(*(_QWORD *)v6 + 480LL);
  if ( (char *)v8 != (char *)sub_178B60 )
  {
    if ( !v8() )
    {
      v6 = a1[1];
      goto LABEL_3;
    }
LABEL_13:
    v15 = 52;
    LODWORD(v9) = 52;
    goto LABEL_11;
  }
LABEL_3:
  v18 = 0;
  v17 = 0;
  v9 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 344LL))(
                       v6,
                       &v17,
                       a2,
                       a3,
                       a4);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v9, &v17);
  v10 = v17;
  if ( v17 )
  {
    v11 = v18;
    if ( (_QWORD)v18 )
    {
      v12 = 0;
      do
      {
        v13 = v10 + 32 * v12;
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          qfree(v14, v9);
          v10 = v17;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v10, v9);
  }
  v15 = (unsigned int)v9;
LABEL_11:
  sub_416510((__int64)(a1 + 2), 2, v15, a2, a3, a4);
  return (unsigned int)v9;
}
