__int64 __fastcall sub_2BB520(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = 56 * a3;
  v5 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a2 + 40));
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2A8D10 )
  {
    if ( !(unsigned int)sub_2533F0((__int64)(v5 + 1), (__int64)(v5 + 4)) )
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
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = (const char *)sub_25BBF0(*(_DWORD *)(v9 + 16));
  sub_67670((__int64 *)a1, (__int64)"%a,%s,%s", 0.0, *(const char **)(v9 + 8), v10);
  sub_13BF40(v12, (__int64)"%a,%s,%s");
  sub_13BF40(&v11, (__int64)"%a,%s,%s");
  return a1;
}
