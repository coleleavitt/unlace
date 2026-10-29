__int64 __fastcall sub_A13F70(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbp
  int *v3; // rax
  void *v4; // rbx
  void *v5; // rbx
  __int64 v6; // rbx
  __int64 result; // rax
  int *v8; // r12
  void *v9; // rbp
  __int64 v10; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-308h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-2F8h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-2D8h] BYREF
  int v15[2]; // [rsp+40h] [rbp-2C8h] BYREF
  int v16[2]; // [rsp+48h] [rbp-2C0h]
  int v17[174]; // [rsp+50h] [rbp-2B8h] BYREF

  *(_QWORD *)v15 = v17;
  *(_QWORD *)v16 = 0x1000000000LL;
  sub_994D00((__int64)a1, a2, 1, (char **)v15);
  sub_A053D0((__int64)a1, a2, v16[0], *(__int64 *)v15);
  v2 = *(unsigned int *)(a1[79] + 24LL * a2 + 12);
  *(_BYTE *)(a1[82] + 4 * v2 + 3) = *(_BYTE *)(a1[82] + 4 * v2 + 3) & 0xCF | 0x10;
  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( sub_9AE7C0((__int64)a1, v2, (__int64)v11) )
  {
    sub_98B520(a1[83] + (v2 << 6), (int *)v11);
    sub_9D7A30((__int64)a1, v2);
  }
  v3 = sub_9AA360((__int64)a1, v2);
  sub_98B520(a1[83] + (v2 << 6), v3);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v4, v14);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v5, v12);
  v6 = *(_QWORD *)v15;
  result = 5LL * (unsigned int)v16[0];
  v8 = (int *)(*(_QWORD *)v15 + 40LL * (unsigned int)v16[0]);
  if ( *(int **)v15 != v8 )
  {
    do
    {
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v6);
      v10 = v6 + 16;
      v6 += 40;
      result = sub_182CBA0(v9, v10);
    }
    while ( v8 != (int *)v6 );
    v8 = *(int **)v15;
  }
  if ( v8 )
  {
    if ( v8 != v17 )
      return sub_186B220(v8);
  }
  return result;
}

