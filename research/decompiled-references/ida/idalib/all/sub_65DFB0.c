__int64 __fastcall sub_65DFB0(__int64 a1, __int64 *a2, double a3, double a4, __int64 a5, char **a6)
{
  char *v6; // rax
  char v7; // r12
  __int64 v9; // rax
  unsigned int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = *a6;
  v11[1] = __readfsqword(0x28u);
  v7 = *v6;
  v10 = sub_6584F0(*(_QWORD *)(qword_2CCB598 + 1672), a6, 0, a3, a4);
  if ( !v10 )
    return 0;
  v9 = *(_QWORD *)(a1 + 8);
  v11[0] = &v10;
  if ( !*(_QWORD *)(v9 + 16) )
    std::__throw_bad_function_call();
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(v9 + 24))(v9, v11) )
    return sub_647FB0(a2, v7, v10);
  else
    return 0;
}
