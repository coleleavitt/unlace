__int64 __fastcall sub_419680(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 (*v6)(); // rax
  const char *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  char v14; // al
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  __int128 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v4 = a1[1];
  if ( !v4 )
    goto LABEL_12;
  v5 = a3;
  v6 = *(__int64 (**)())(*(_QWORD *)v4 + 480LL);
  if ( v6 == sub_178B60 )
    goto LABEL_3;
  v14 = v6();
  v5 = a3;
  if ( v14 )
  {
LABEL_12:
    LODWORD(v7) = 52;
    return (unsigned int)v7;
  }
  v4 = a1[1];
LABEL_3:
  v16 = 0;
  v17 = 0;
  v7 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v4 + 288LL))(
                       v4,
                       &v16,
                       a2,
                       v5);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v7, &v16);
  v8 = v16;
  if ( v16 )
  {
    v9 = v17;
    if ( (_QWORD)v17 )
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
          v8 = v16;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v8, v7);
  }
  return (unsigned int)v7;
}
