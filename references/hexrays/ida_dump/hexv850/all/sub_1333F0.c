unsigned __int64 __fastcall sub_1333F0(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 || (unsigned __int64)(a2 + a3) > 0xFFFF )
  {
    if ( !under_debugger )
      sub_37CFE0(50420);
LABEL_9:
    BUG();
  }
  v6 = a3;
  v5 = a2;
  if ( (unsigned __int8)sub_3125B0(a1 + 1160, &v5, 0) )
  {
    if ( !under_debugger )
      sub_37CFE0(51266);
    goto LABEL_9;
  }
  v5 = a2;
  v6 = a3;
  sub_3112F0(a1 + 1160, &v5);
  return v7 - __readfsqword(0x28u);
}
