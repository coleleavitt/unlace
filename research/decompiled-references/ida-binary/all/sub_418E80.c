__int64 __fastcall sub_418E80(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 (*v7)(); // rax
  const char *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  char v15; // al
  unsigned int v16; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h] BYREF
  __int128 v19; // [rsp+18h] [rbp-30h]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v5 = a1[1];
  if ( !v5 )
    goto LABEL_12;
  v6 = a4;
  v7 = *(__int64 (**)())(*(_QWORD *)v5 + 480LL);
  if ( v7 == sub_178B60 )
    goto LABEL_3;
  v16 = a3;
  v15 = v7();
  a3 = v16;
  v6 = a4;
  if ( v15 )
  {
LABEL_12:
    LODWORD(v8) = 52;
    return (unsigned int)v8;
  }
  v5 = a1[1];
LABEL_3:
  v18 = 0;
  v19 = 0;
  v8 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, _QWORD, __int64))(*(_QWORD *)v5 + 344LL))(
                       v5,
                       &v18,
                       a2,
                       a3,
                       v6);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v8, &v18);
  v9 = v18;
  if ( v18 )
  {
    v10 = v19;
    if ( (_QWORD)v19 )
    {
      v11 = 0;
      do
      {
        v12 = v9 + 32 * v11;
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree(v13, v8);
          v9 = v18;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v9, v8);
  }
  return (unsigned int)v8;
}
