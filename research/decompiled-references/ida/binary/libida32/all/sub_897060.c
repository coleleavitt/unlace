unsigned __int64 __fastcall sub_897060(unsigned __int64 *a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v6 = unpack_dd(a1);
  if ( *a1 >= a1[1] )
  {
    if ( !under_debugger )
      interr(1765);
LABEL_20:
    BUG();
  }
  v7 = v6;
  v8 = unpack_dd(a1);
  v9 = v7 + v8;
  if ( !a3 )
  {
    if ( !(unsigned __int8)sub_896D40((__int64 **)a2, v7, v9) )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( v7 >= v9 )
    goto LABEL_4;
  if ( (unsigned int)sub_8969D0((__int64 **)a2, v7, v9) )
  {
    if ( !under_debugger )
      interr(1728);
    goto LABEL_20;
  }
LABEL_13:
  v13 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 44) = -1;
  *(_QWORD *)(a2 + 56) = 0;
  v14 = *(_QWORD *)(a2 + 16) + 16 * v13;
  *(_DWORD *)(a2 + 64) = -1;
  *(_QWORD *)(a2 + 80) = v14;
  *(_QWORD *)(a2 + 48) = v14;
  *(_QWORD *)(a2 + 72) = 0;
  sub_8964D0(a2);
LABEL_4:
  if ( !a4 )
    return v16 - __readfsqword(0x28u);
  v10 = *a1;
  v11 = *a1 + 4LL * v8;
  if ( a1[1] < v11 || v11 < v10 || (*a1 = v11, !v10) )
  {
    if ( !under_debugger )
      interr(1766);
    goto LABEL_20;
  }
  if ( a3 )
  {
    v15[0] = off_2B13F38;
    v15[1] = v10;
    sub_895AA0((__int64 **)a2, v7, v8, (__int64)v15, 1, 0);
  }
  return v16 - __readfsqword(0x28u);
}

