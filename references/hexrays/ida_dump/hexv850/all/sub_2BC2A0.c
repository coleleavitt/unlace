__int64 *__fastcall sub_2BC2A0(__int64 *a1, __int64 a2, unsigned __int64 a3)
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
  v4 = 192 * a3;
  v5 = 192 * a3 + *(_QWORD *)(a2 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A7D10 )
  {
    if ( *(_DWORD *)(v5 + 40) != 2 )
    {
LABEL_4:
      sub_7CDC0((__int64)a1, (const char *)&unk_3F5793);
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
  sub_2B8DD0(a1, (__int64)v11, v9 + 8, v9 + 48);
  sub_13B580(v11, (__int64)v11);
  sub_13B580(&v10, (__int64)v11);
  return a1;
}
