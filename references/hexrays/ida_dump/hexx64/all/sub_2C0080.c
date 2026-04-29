__int64 __fastcall sub_2C0080(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = 56 * a3;
  v5 = 56 * a3 + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD170 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 40) )
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
  v10 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 104) += 2;
    v11[0] = v8;
  }
  else
  {
    v11[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_1AF780((_QWORD *)(v9 + 16));
  sub_6B870((__int64 *)a1, (__int64)"%a fields: %s", 0.0, *(const char **)(v9 + 8));
  sub_140140(v11, (__int64)"%a fields: %s");
  sub_140140(&v10, (__int64)"%a fields: %s");
  return a1;
}
