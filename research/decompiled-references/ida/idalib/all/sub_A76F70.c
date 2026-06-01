unsigned __int64 __fastcall sub_A76F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v15; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v16; // [rsp+18h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  ptr[0] = v19;
  v16 = v7 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)a2 | (unsigned __int8)v7) & 7;
  ptr[1] = (void *)0x2000000000LL;
  sub_F57830(ptr, a1, v16, a3, a4);
  v17 = 0;
  v8 = sub_2223360(a1 + 344, ptr, &v17, &off_2B41240);
  if ( !v8 || (v9 = v8 - 24, v8 == 24) )
  {
    v9 = sub_A6FFD0((__int64 *)(a1 + 2352), 64, 4u);
    sub_F57760(v9, v16, 0, a3, a4, a5);
    sub_2223210(a1 + 344, v9 + 24, v17, &off_2B41240);
    sub_A6A720(a1 + 8, v9);
  }
  v15 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 == *(_QWORD *)(v9 + 32) && (v10 = *(_QWORD *)(v9 + 40), a3 == v10) && a4 == v10 )
  {
    v12 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v11 = sub_A6FFD0((__int64 *)(a1 + 2352), 64, 4u);
    sub_F57760(v11, a2, v15, a3, a4, a5);
    sub_A6A720(a1 + 8, v11);
    v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v12;
}
