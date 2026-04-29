__int64 __fastcall sub_2BFAC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_8;
  v4 = 80 * a3;
  v5 = 80 * a3 + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 56) && *(_DWORD *)(v5 + 16) == *(_DWORD *)(v5 + 64) )
      goto LABEL_8;
  }
  else if ( !v6() )
  {
LABEL_8:
    sub_81980(a1, (const char *)&unk_418793);
    return a1;
  }
  switch_dbctx(*(int *)(a2 + 8));
  v7 = *(_QWORD *)(a2 + 72);
  v8 = *(_QWORD *)(a2 + 40);
  v12 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v13[0] = v7;
  }
  else
  {
    v13[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  v9 = v8 + v4;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1, (__int64)"%a ", *(_QWORD *)(v9 + 8));
  v10 = *(unsigned int *)(v9 + 16);
  sub_1AF8F0((__int64 *)a1, v10);
  sub_140140(v13, v10);
  sub_140140(&v12, v10);
  return a1;
}
