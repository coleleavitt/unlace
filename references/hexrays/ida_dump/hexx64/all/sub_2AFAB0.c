__int64 __fastcall sub_2AFAB0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 (***v3)(void); // rdi
  unsigned __int8 (*v4)(void); // rax
  __int64 result; // rax
  __int64 v6; // rdx

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_6;
  v3 = (unsigned __int8 (***)(void))(56 * a2 + *(_QWORD *)(a1 + 40));
  v4 = **v3;
  if ( (char *)v4 != (char *)sub_2AD590 )
  {
    if ( v4() )
      goto LABEL_4;
LABEL_6:
    sub_2ADE80();
  }
  if ( !(unsigned int)sub_257C70((__int64)(v3 + 1), (__int64)(v3 + 4)) )
    goto LABEL_6;
LABEL_4:
  switch_dbctx(*(int *)(a1 + 8));
  result = 56 * a2 + *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(result + 32);
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 48) = -2;
  *(_QWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 16) = *(_DWORD *)(result + 40);
  return result;
}
