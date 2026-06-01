__int64 __fastcall sub_2BFF20(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_4;
  v4 = 48 * a3 + a2[5];
  v5 = **(unsigned __int8 (***)(void))v4;
  if ( (char *)v5 == (char *)sub_2AD160 )
  {
    if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)(v4 + 40) )
    {
LABEL_4:
      sub_81980(a1, (const char *)&unk_418793);
      return a1;
    }
  }
  else if ( !v5() )
  {
    goto LABEL_4;
  }
  switch_dbctx();
  v7 = a2[9];
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v9[0] = v7;
  }
  else
  {
    v9[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1);
  sub_140140(v9, (__int64)"%d:%s");
  sub_140140(&v8, (__int64)"%d:%s");
  return a1;
}
