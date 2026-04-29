__int64 __fastcall sub_3F0200(__int64 a1, int a2)
{
  char v2; // al
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+8h] [rbp-20h]
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]
  char v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v2 - 2) > 2u && (unsigned __int8)(v2 - 6) > 1u )
    return 0xFFFFFFFFLL;
  v4 = a1;
  v5 = a2;
  v6 = -1;
  v7 = 0;
  sub_3EFA20((int *)&v4, 1, 1);
  if ( !v7 && !(unsigned __int8)sub_3F0150((__int64)&v4) )
    sub_3E07C0();
  return v6;
}
