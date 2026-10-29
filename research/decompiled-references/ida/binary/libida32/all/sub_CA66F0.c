__int64 __fastcall sub_CA66F0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+34h] [rbp-24h]
  char v17; // [rsp+38h] [rbp-20h]

  v5 = *a1;
  v15 = 1;
  v6 = *(_QWORD *)(v5 + 552);
  v12 = v5;
  *(_QWORD *)(v5 + 552) = &v11;
  v7 = *a1;
  v13 = v6;
  v17 = 0;
  v14 = 0;
  v11 = &off_2B21618;
  v8 = sub_CA5C60(v7, a2, v6, a4, a5);
  if ( (_BYTE)v8 && v17 )
  {
    v10 = 4;
    v8 = sub_C97CD0((__int64)&v11, 0);
    sub_C807C0(v12, v16, &v10);
  }
  sub_C974D0((__int64)&v11);
  return v8;
}

