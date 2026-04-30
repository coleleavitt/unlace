__int64 __fastcall vault_with_events_t__::vfunc_51(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rdi
  __int64 (*v5)(); // rax
  const char *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  char v13; // al
  unsigned __int8 v14; // [rsp+Ch] [rbp-3Ch]
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int128 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v4 = a1[1];
  if ( !v4 )
    goto LABEL_12;
  v5 = *(__int64 (**)())(*(_QWORD *)v4 + 480LL);
  if ( v5 == sub_178B60 )
    goto LABEL_3;
  v14 = a3;
  v13 = v5();
  a3 = v14;
  if ( v13 )
  {
LABEL_12:
    LODWORD(v6) = 52;
    return (unsigned int)v6;
  }
  v4 = a1[1];
LABEL_3:
  v15 = 0;
  v16 = 0;
  v6 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 384LL))(
                       v4,
                       &v15,
                       a2,
                       a3);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v6, &v15);
  v7 = v15;
  if ( v15 )
  {
    v8 = v16;
    if ( (_QWORD)v16 )
    {
      v9 = 0;
      do
      {
        v10 = v7 + 32 * v9;
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 16) = 0;
          qfree(v11, v6);
          v7 = v15;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v16 = 0;
    qfree(v7, v6);
  }
  return (unsigned int)v6;
}
