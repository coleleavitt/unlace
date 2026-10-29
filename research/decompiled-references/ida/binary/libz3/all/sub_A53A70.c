__int64 __fastcall sub_A53A70(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  int *v4; // rax
  void *v5; // rbx
  void *v6; // rbx
  void *v7; // rbx
  __int64 v8; // rbx
  __int64 result; // rax
  int *v10; // r12
  void *v11; // rbp
  __int64 v12; // rsi
  _QWORD v13[2]; // [rsp+0h] [rbp-328h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-318h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-308h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-2E8h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-2D8h] BYREF
  int v19[2]; // [rsp+60h] [rbp-2C8h] BYREF
  char v20[8]; // [rsp+68h] [rbp-2C0h]
  int v21[174]; // [rsp+70h] [rbp-2B8h] BYREF

  *(_QWORD *)v19 = v21;
  *(_QWORD *)v20 = 0x1000000000LL;
  sub_9A1BC0((__int64)a1, a2, 1, (char **)v19);
  sub_A0BE10((__int64)a1, a2, *(unsigned int *)v20, *(__int64 *)v19);
  v2 = *(unsigned int *)(a1[87] + 24LL * a2 + 12);
  v3 = *(_DWORD *)(a1[87] + 24LL * a2 + 12);
  *(_BYTE *)(a1[90] + 4 * v2 + 3) = *(_BYTE *)(a1[90] + 4 * v2 + 3) & 0xCF | 0x10;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  v15[0] = 0;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  if ( sub_9AF7C0((__int64)a1, v2, (__int64)v13) )
  {
    sub_98B5F0(a1[91] + 96 * v2, (int *)v13);
    sub_9D7AD0((__int64)a1, v2);
  }
  v4 = sub_9ACE50((__int64)a1, v3);
  sub_98B5F0(a1[91] + 96 * v2, v4);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v5, v18);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v6, v16);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v7, v14);
  v8 = *(_QWORD *)v19;
  result = 5LL * *(unsigned int *)v20;
  v10 = (int *)(*(_QWORD *)v19 + 40LL * *(unsigned int *)v20);
  if ( *(int **)v19 != v10 )
  {
    do
    {
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v8);
      v12 = v8 + 16;
      v8 += 40;
      result = sub_182CBA0(v11, v12);
    }
    while ( v10 != (int *)v8 );
    v10 = *(int **)v19;
  }
  if ( v10 )
  {
    if ( v10 != v21 )
      return sub_186B220(v10);
  }
  return result;
}

