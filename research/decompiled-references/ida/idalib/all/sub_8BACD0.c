unsigned __int64 __fastcall sub_8BACD0(unsigned __int64 *a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v6 = unpack_dq(a1);
  if ( *a1 >= a1[1] )
  {
    if ( !under_debugger )
      interr(1765);
LABEL_20:
    BUG();
  }
  v7 = v6;
  v8 = unpack_dq(a1);
  v9 = v7 + v8;
  if ( !a3 )
  {
    if ( !(unsigned __int8)sub_8BA640((__int64 **)a2, v7, v9) )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( v7 >= v9 )
    goto LABEL_4;
  if ( (unsigned int)sub_8BAA80((__int64 **)a2, v7, v9) )
  {
    if ( !under_debugger )
      interr(1728);
    goto LABEL_20;
  }
LABEL_13:
  v13 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 48) = -1;
  *(_QWORD *)(a2 + 64) = 0;
  v14 = 3 * v13;
  v15 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 72) = -1;
  *(_QWORD *)(a2 + 80) = 0;
  v16 = v15 + 8 * v14;
  *(_QWORD *)(a2 + 88) = v16;
  *(_QWORD *)(a2 + 56) = v16;
  sub_8B9FB0(a2);
LABEL_4:
  if ( !a4 )
    return v18 - __readfsqword(0x28u);
  v10 = *a1;
  v11 = *a1 + 4 * v8;
  if ( a1[1] < v11 || v11 < v10 || (*a1 = v11, !v10) )
  {
    if ( !under_debugger )
      interr(1766);
    goto LABEL_20;
  }
  if ( a3 )
  {
    v17[0] = off_2B3DED8;
    v17[1] = v10;
    sub_8B94D0((__int64 **)a2, v7, v8, (__int64)v17, 1, 0);
  }
  return v18 - __readfsqword(0x28u);
}
