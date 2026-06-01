char __fastcall sub_1189A00(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int v4[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+8h] [rbp-30h]
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = sub_22B7A20(a1);
  if ( !(unsigned __int8)sub_22B7EA0(a1) || v2 > 0x14 )
    return a2 > v2;
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0;
  v6[0] = 21;
  v6[1] = 0;
  return sub_A09E20((unsigned int *)v6, v4);
}
