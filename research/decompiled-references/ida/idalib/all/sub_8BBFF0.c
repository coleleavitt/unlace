__int64 __fastcall sub_8BBFF0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a4 )
    sub_8BBF00((__int64 **)a1, a4, a2, a3);
  if ( (unsigned __int8)sub_8BA640((__int64 **)a1, a2, a3) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 48) = -1;
    *(_QWORD *)(a1 + 64) = 0;
    v7 = 3 * v6;
    v8 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 72) = -1;
    *(_QWORD *)(a1 + 80) = 0;
    v9 = v8 + 8 * v7;
    *(_QWORD *)(a1 + 88) = v9;
    *(_QWORD *)(a1 + 56) = v9;
    sub_8B9FB0(a1);
  }
  return 0;
}
