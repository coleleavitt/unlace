__int64 __fastcall sub_2B0650(__int64 a1, unsigned __int64 a2)
{
  bool (__fastcall ***v3)(__int64); // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v3 = (bool (__fastcall ***)(__int64))(88 * a2 + *(_QWORD *)(a1 + 40));
  v4 = **v3;
  if ( v4 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v3 + 1), (__int64)(v3 + 8)) )
      goto LABEL_4;
LABEL_8:
    sub_2ADE80();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v5 = *(_QWORD *)(a1 + 40) + 88 * a2;
  v6 = *(_QWORD *)(v5 + 64);
  v7 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = v6;
  result = *(unsigned int *)(v5 + 72);
  *(_DWORD *)(v5 + 16) = result;
  if ( v7 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    result = qfree();
  }
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 80) = -2;
  *(_OWORD *)(v5 + 40) = 0;
  return result;
}
