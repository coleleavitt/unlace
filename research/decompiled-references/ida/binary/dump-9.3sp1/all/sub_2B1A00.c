_BOOL8 __fastcall sub_2B1A00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  bool (__fastcall ***v7)(__int64); // rdi
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BOOL8 result; // rax
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  __int128 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_11;
  v4 = 88 * a3;
  v5 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2AD660 )
  {
    if ( !(unsigned int)sub_257C40((__int64)(v5 + 1), (__int64)(v5 + 8)) )
      goto LABEL_11;
  }
  else if ( !v6() )
  {
    goto LABEL_11;
  }
  v7 = (bool (__fastcall ***)(__int64))(v4 + *(_QWORD *)(a2 + 40));
  v8 = **v7;
  if ( v8 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v7 + 1), (__int64)(v7 + 8)) )
      goto LABEL_6;
LABEL_11:
    sub_2ADE60();
  }
  if ( !((unsigned __int8 (*)(void))v8)() )
    goto LABEL_11;
LABEL_6:
  v9 = v4 + *(_QWORD *)(a2 + 40);
  v10 = *(_QWORD *)(a1 + 40) + v4;
  v11 = v9;
  switch_dbctx();
  v12 = (unsigned int)sub_257C40(v10 + 8, v11 + 8);
  result = 1;
  if ( !(_DWORD)v12 )
  {
    v15 = *(_QWORD *)(v11 + 24);
    v18 = 0;
    v17 = v15;
    v19 = 0;
    sub_2AE320(&v18, v11 + 32, v12, v13);
    v20 = *(_QWORD *)(v11 + 56);
    v16 = sub_810D0(v10 + 24, (__int64)&v17);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    return v16 != 0;
  }
  return result;
}
