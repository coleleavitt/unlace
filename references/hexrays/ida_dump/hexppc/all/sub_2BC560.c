__int64 __fastcall sub_2BC560(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // rsi
  int v11; // ecx
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = 56 * a3;
  v5 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a2 + 40));
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2A99C0 )
  {
    if ( !(unsigned int)sub_253FC0((__int64)(v5 + 1), (__int64)(v5 + 4)) )
    {
LABEL_4:
      sub_7DF40(a1, (const char *)&unk_405793);
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
  v12 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 104) += 2;
    v13[0] = v8;
  }
  else
  {
    v13[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = "%a, opnum=%d";
  sub_F7090((__int64 *)a1, (__int64)"%a, opnum=%d", *(_QWORD *)(v9 + 8), *(unsigned int *)(v9 + 16));
  v11 = *(_DWORD *)(v9 + 24) & 7;
  if ( v11 )
  {
    v10 = " MAXCMB%d";
    sub_F7090((__int64 *)a1, (__int64)" MAXCMB%d", 1 << (v11 - 1));
  }
  sub_13C700(v13, (__int64)v10);
  sub_13C700(&v12, (__int64)v10);
  return a1;
}
