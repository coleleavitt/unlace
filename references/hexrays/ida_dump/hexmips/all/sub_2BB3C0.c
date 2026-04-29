__int64 __fastcall sub_2BB3C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = 88 * a3;
  v5 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a2 + 40));
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2A8DE0 )
  {
    if ( !(unsigned int)sub_2533C0((__int64)(v5 + 1), (__int64)(v5 + 8)) )
    {
LABEL_4:
      sub_7D780(a1, (const char *)&unk_3FC793);
      return a1;
    }
  }
  else if ( !v6() )
  {
    goto LABEL_4;
  }
  switch_dbctx(*(int *)(a2 + 8));
  v8 = *(_QWORD *)(a2 + 72);
  v9 = v4 + *(_QWORD *)(a2 + 40);
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
  sub_F68D0((__int64 *)a1, (__int64)"%a, opnum=%d", *(_QWORD *)(v9 + 8), *(unsigned int *)(v9 + 16));
  sub_13BF40(v11, (__int64)"%a, opnum=%d");
  sub_13BF40(&v10, (__int64)"%a, opnum=%d");
  return a1;
}
