__int64 __fastcall vault_with_events_t__::vfunc_36(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v6)(void); // rax
  const char *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v4 = a1[1];
  v17 = __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_13;
  v6 = *(unsigned __int8 (**)(void))(*(_QWORD *)v4 + 480LL);
  if ( (char *)v6 != (char *)sub_178B60 )
  {
    if ( !v6() )
    {
      v4 = a1[1];
      goto LABEL_3;
    }
LABEL_13:
    v13 = 52;
    LODWORD(v7) = 52;
    goto LABEL_11;
  }
LABEL_3:
  v15 = 0;
  v16 = 0;
  v7 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 256LL))(
                       v4,
                       &v15,
                       a2,
                       a3);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v7, &v15);
  v8 = v15;
  if ( v15 )
  {
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      v10 = 0;
      do
      {
        v11 = v8 + 32 * v10;
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 16) = 0;
          qfree(v12, v7);
          v8 = v15;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v16 = 0;
    qfree(v8, v7);
  }
  v13 = (unsigned int)v7;
LABEL_11:
  sub_416510((__int64)(a1 + 2), 3, v13, a2, a3);
  return (unsigned int)v7;
}
