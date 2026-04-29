__int64 __fastcall sub_2C0530(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // rsi
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = a3 << 6;
  v5 = (a3 << 6) + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 48) )
    {
LABEL_4:
      sub_81980(a1, (const char *)&unk_418793);
      return a1;
    }
  }
  else if ( !v6() )
  {
    goto LABEL_4;
  }
  switch_dbctx(*(int *)(a2 + 8));
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 40) + v4;
  v11 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 104) += 2;
    v12[0] = v8;
  }
  else
  {
    v12[0] = 0;
  }
  v10 = "%a";
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1, (__int64)"%a", *(_QWORD *)(v9 + 8));
  if ( *(_QWORD *)(v9 + 24) > 1u )
  {
    v10 = " %s";
    sub_FAAD0((__int64 *)a1, (__int64)" %s", *(const char **)(v9 + 16));
  }
  sub_140140(v12, (__int64)v10);
  sub_140140(&v11, (__int64)v10);
  return a1;
}
