__int64 __fastcall sub_225B1E0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int i; // r15d
  _WORD *v8; // rdx
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 *v13; // r15
  __int64 *j; // r14
  __int64 v15; // rdx
  int v16; // r15d
  _WORD *v17; // rdx
  __int64 v18; // rdi

  if ( a4 )
  {
    for ( i = 0; i != a4; ++i )
    {
      while ( 1 )
      {
        v8 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 > 1u )
          break;
        ++i;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == i )
          goto LABEL_5;
      }
      *v8 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
  }
LABEL_5:
  v9 = sub_995540(a2, "RedirectingFileSystem (UseExternalNames: ");
  v10 = "true";
  if ( !*(_BYTE *)(a1 + 114) )
    v10 = "false";
  v11 = sub_995540(v9, v10);
  result = sub_995540(v11, ")\n");
  if ( a3 )
  {
    v13 = *(__int64 **)(a1 + 24);
    for ( j = *(__int64 **)(a1 + 16); v13 != j; ++j )
    {
      v15 = *j;
      sub_225AFE0(a1, a2, v15, a4);
    }
    if ( a4 )
    {
      v16 = 0;
      do
      {
        while ( 1 )
        {
          v17 = *(_WORD **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 24) - (_QWORD)v17 > 1u )
            break;
          ++v16;
          sub_227BF10(a2, "  ", 2);
          if ( a4 == v16 )
            goto LABEL_14;
        }
        ++v16;
        *v17 = 8224;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      while ( a4 != v16 );
    }
LABEL_14:
    sub_995540(a2, "ExternalFS:\n");
    v18 = *(_QWORD *)(a1 + 72);
    if ( a3 == 1 )
      a3 = 0;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 128LL))(
             v18,
             a2,
             a3,
             (unsigned int)(a4 + 1));
  }
  return result;
}
