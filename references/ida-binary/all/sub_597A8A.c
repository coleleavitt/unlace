__int64 __fastcall sub_597A8A(__int64 a1, _QWORD *a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  size_t v6; // rbx
  const void *v7; // rax
  _BYTE v12[256]; // [rsp+20h] [rbp-290h] BYREF
  _BYTE v13[256]; // [rsp+120h] [rbp-190h] BYREF
  __int64 dest; // [rsp+220h] [rbp-90h] BYREF
  __int64 v15; // [rsp+228h] [rbp-88h]
  _BYTE v16[80]; // [rsp+230h] [rbp-80h] BYREF
  __int64 v17; // [rsp+280h] [rbp-30h] BYREF
  __int64 v18; // [rsp+288h] [rbp-28h] BYREF
  __int64 v19; // [rsp+290h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+298h] [rbp-18h] BYREF

  v5 = sub_59837C(*(_QWORD *)(a1 + 16));
  sub_5984EC(v16, v5);
  if ( a5 )
  {
    v18 = sub_5985B0(v16);
    sub_5985DA(&v17, &v18);
    sub_598604(v16, v17, a5, a5 + 16);
  }
  else
  {
    sub_59A1CA(*(_QWORD *)(a1 + 16), a2, a3, a4, v16);
  }
  dest = 0;
  v15 = 0;
  v19 = sub_5986CE(v16);
  v20[0] = 16;
  v6 = *(_QWORD *)sub_598413(v20, &v19);
  v7 = (const void *)sub_5986B0(v16, 0);
  memcpy(&dest, v7, v6);
  sub_59A94A(*(_QWORD *)(a1 + 16), a2, v12, 255, v13, 255);
  sub_5970BA(a1, (__int64)"M ");
  sub_598238(a1, *a2);
  sub_5970BA(a1, (__int64)" ");
  sub_598238(a1, a2[4]);
  sub_5970BA(a1, (__int64)" ");
  sub_598238(a1, a2[1]);
  sub_5970BA(a1, (__int64)" ");
  sub_59829C(a1, (unsigned int)dest);
  sub_5982FC(a1, WORD2(dest));
  sub_5982FC(a1, HIWORD(dest));
  sub_598172(a1, (unsigned __int8)v15);
  sub_598172(a1, BYTE1(v15));
  sub_598172(a1, BYTE2(v15));
  sub_598172(a1, BYTE3(v15));
  sub_598172(a1, BYTE4(v15));
  sub_598172(a1, BYTE5(v15));
  sub_598172(a1, BYTE6(v15));
  sub_598172(a1, HIBYTE(v15));
  sub_5970BA(a1, (__int64)"0 ");
  sub_5970EA(a1, (__int64)v13);
  sub_597166(a1);
  return sub_5983F8(v16);
}
