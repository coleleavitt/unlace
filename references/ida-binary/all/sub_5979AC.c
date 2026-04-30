__int64 __fastcall sub_5979AC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int64 i; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+18h] [rbp-18h] BYREF

  for ( i = sub_59843E(*(_QWORD *)(a1 + 24)); ; sub_5984AE(&i) )
  {
    v8[0] = sub_598466(*(_QWORD *)(a1 + 24));
    if ( !(unsigned __int8)sub_59848C(&i, v8) )
      break;
    v2 = *a2;
    if ( v2 >= *(_QWORD *)sub_5984CE(&i) )
    {
      v3 = *a2 + a2[1];
      v4 = *(_QWORD *)sub_5984CE(&i);
      if ( v3 <= v4 + *(_QWORD *)(sub_5984CE(&i) + 8) )
        return 1;
    }
  }
  return 0;
}
