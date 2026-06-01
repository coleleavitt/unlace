__int64 __fastcall vault_with_events_t__::vfunc_50(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 (*v9)(); // rax
  const char *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  char v18; // al
  __int64 v19; // [rsp+8h] [rbp-58h]
  __int64 v20; // [rsp+10h] [rbp-50h]
  unsigned int v21; // [rsp+18h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int128 v23; // [rsp+28h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  v7 = a1[1];
  if ( !v7 )
    return 52;
  v9 = *(__int64 (**)())(*(_QWORD *)v7 + 480LL);
  if ( v9 == sub_178B60 )
    goto LABEL_3;
  v21 = a6;
  v19 = a5;
  v20 = a4;
  v18 = v9();
  a4 = v20;
  a5 = v19;
  a6 = v21;
  if ( v18 )
    return 52;
  v7 = a1[1];
LABEL_3:
  v22 = 0;
  v23 = 0;
  v10 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 376LL))(
                        v7,
                        &v22,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6);
  v11 = (unsigned int)v10;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v10, &v22);
  v12 = v22;
  if ( v22 )
  {
    v13 = v23;
    if ( (_QWORD)v23 )
    {
      v14 = 0;
      do
      {
        v15 = v12 + 32 * v14;
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          *(_QWORD *)(v15 + 16) = 0;
          qfree(v16, v10);
          v12 = v22;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v12, v10);
  }
  return v11;
}
