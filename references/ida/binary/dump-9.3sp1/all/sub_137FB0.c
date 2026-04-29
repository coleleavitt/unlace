unsigned __int64 __fastcall sub_137FB0(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 || (unsigned __int64)(a2 + a3) > 0xFFFF )
  {
    if ( !under_debugger )
      sub_383060(50420);
LABEL_9:
    BUG();
  }
  v6 = a3;
  v5 = a2;
  if ( (unsigned __int8)sub_317E70(a1 + 1160, &v5, 0) )
  {
    if ( !under_debugger )
      sub_383060(51266);
    goto LABEL_9;
  }
  v5 = a2;
  v6 = a3;
  sub_316BB0(a1 + 1160, &v5);
  return v7 - __readfsqword(0x28u);
}
