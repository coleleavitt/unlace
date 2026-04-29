__int64 __fastcall sub_2BBAF0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rdx
  int v11; // ecx
  __int64 v13; // [rsp-8h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+10h] [rbp-30h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a2 + 48) )
    goto LABEL_12;
  v4 = 264 * a3;
  v5 = 264 * a3 + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AA7C0 )
  {
    if ( *(_DWORD *)(v5 + 120) == *(_DWORD *)(v5 + 248) && !(unsigned int)sub_1335A0(v5 + 8, v5 + 136) )
      goto LABEL_12;
  }
  else if ( !v6() )
  {
LABEL_12:
    sub_7D780(a1, (const char *)&unk_3FC793);
    return a1;
  }
  switch_dbctx(*(int *)(a2 + 8));
  v7 = *(_QWORD *)(a2 + 72);
  v8 = *(_QWORD *)(a2 + 40);
  v14 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v15[0] = v7;
  }
  else
  {
    v15[0] = 0;
  }
  v9 = v4 + v8;
  *(_QWORD *)a1 = 0;
  v10 = "inserted before";
  *(_OWORD *)(a1 + 8) = 0;
  v11 = *(_DWORD *)(v9 + 112);
  if ( v11 != 1 )
  {
    v10 = "inserted after";
    if ( v11 != 2 )
    {
      v10 = "deleted";
      if ( v11 )
        v10 = "?";
    }
  }
  v13 = *(unsigned int *)(v9 + 120);
  sub_67670(
    (__int64 *)a1,
    (__int64)"%a (mcode: %d, serial: %d, blknum: %d): %s at maturity %d",
    0.0,
    *(_QWORD *)(v9 + 8),
    *(_DWORD *)(v9 + 16),
    *(_DWORD *)(v9 + 20),
    (const char *)*(unsigned int *)(v9 + 24),
    (_DWORD)v10);
  sub_13BF40(v15, v13);
  sub_13BF40(&v14, v13);
  return a1;
}
