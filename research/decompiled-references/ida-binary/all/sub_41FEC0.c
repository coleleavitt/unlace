__int64 __fastcall vault_with_events_t__::vfunc_35(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // r9
  __int64 (*v10)(); // rax
  const char *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v19; // al
  unsigned int v20; // [rsp+Ch] [rbp-5Ch]
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = a1[1];
  v23 = __readfsqword(0x28u);
  v8 = a4;
  if ( !v7 )
    goto LABEL_13;
  v9 = (unsigned int)a5;
  v10 = *(__int64 (**)())(*(_QWORD *)v7 + 480LL);
  if ( v10 != sub_178B60 )
  {
    v20 = a5;
    v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(), __int64, __int64, _QWORD))v10)(
            v7,
            a2,
            sub_178B60,
            a4,
            a5,
            (unsigned int)a5);
    v9 = v20;
    if ( !v19 )
    {
      v7 = a1[1];
      goto LABEL_3;
    }
LABEL_13:
    v17 = 52;
    LODWORD(v11) = 52;
    goto LABEL_11;
  }
LABEL_3:
  v21 = 0;
  v22 = 0;
  v11 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v7 + 248LL))(
                        v7,
                        &v21,
                        a2,
                        a3,
                        v8,
                        v9);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v11, &v21);
  v12 = v21;
  if ( v21 )
  {
    v13 = v22;
    if ( (_QWORD)v22 )
    {
      v14 = 0;
      do
      {
        v15 = v12 + 32 * v14;
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          *(_QWORD *)(v15 + 16) = 0;
          qfree(v16, v11);
          v12 = v21;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v22 = 0;
    qfree(v12, v11);
  }
  v17 = (unsigned int)v11;
LABEL_11:
  sub_416510((__int64)(a1 + 2), 1, v17, a3, v8);
  return (unsigned int)v11;
}
