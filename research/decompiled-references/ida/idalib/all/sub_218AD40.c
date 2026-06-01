__int64 *__fastcall sub_218AD40(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19[2]; // [rsp+10h] [rbp-48h] BYREF
  char v20; // [rsp+20h] [rbp-38h]

  v6 = (__int64)a2;
  v7 = a2[15];
  if ( v7 )
  {
    a2 += 7;
    v8 = *(_QWORD *)(v7 + 32);
    v18 = 0;
    sub_216E690((__int64)v19, a2, a3, a4, a5, a6);
    if ( (v20 & 1) == 0 )
    {
      LODWORD(v18) = (unsigned __int64)(v7 - v19[0]) >> 6;
      HIDWORD(v18) = v8 / 0x18;
    }
    v9 = v18;
    v10 = v6;
    sub_20EAA70(v19);
  }
  else
  {
    v9 = sub_218AC70((__int64)a2, (__int64)a2, a3, a4, a5, a6);
    v10 = v11;
  }
  v15 = sub_218AC70(v6, (__int64)a2, v11, v12, v13, v14);
  a1[2] = v9;
  *a1 = v15;
  a1[3] = v10;
  a1[1] = v17;
  return a1;
}
