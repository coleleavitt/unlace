__int64 __fastcall sub_2B8BA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_4;
  v4 = 48 * a3;
  v5 = 48 * a3 + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A5DE0 )
  {
    if ( *(_DWORD *)(v5 + 8) == *(_DWORD *)(v5 + 40) )
    {
LABEL_4:
      sub_7B2C0(a1, (const char *)&unk_3EF793);
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
  v10 = s1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(v9 + 24) )
    v10 = *(const char **)(v9 + 16);
  sub_652F0((__int64 *)a1, (__int64)"%d:%s", *(_DWORD *)(v9 + 8), v10);
  sub_139A80(v12, (__int64)"%d:%s");
  sub_139A80(&v11, (__int64)"%d:%s");
  return a1;
}
