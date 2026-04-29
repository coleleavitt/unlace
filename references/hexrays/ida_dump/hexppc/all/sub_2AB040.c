__int64 __fastcall sub_2AB040(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v3 = 56 * a2 + *(_QWORD *)(a1 + 40);
  v4 = **(bool (__fastcall ***)(__int64))v3;
  if ( v4 == sub_2A94F0 )
  {
    if ( *(_QWORD *)(v3 + 8) != *(_QWORD *)(v3 + 40) )
      goto LABEL_4;
LABEL_8:
    sub_2AA200();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 40) + 56 * a2;
  result = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 8) = result;
  if ( v7 )
  {
    *(_QWORD *)(v5 + 24) = 0;
    result = qfree(v7);
  }
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 48) = -2;
  *(_OWORD *)(v5 + 24) = 0;
  return result;
}
