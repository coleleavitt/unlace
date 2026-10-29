unsigned __int64 __fastcall sub_A54D50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v13[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = (__int64 *)(a1 + 2352);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    ptr[0] = v13;
    ptr[1] = (void *)0x2000000000LL;
    sub_F39F60(ptr, a1, a2, (_BYTE)a3 == 1);
    v11 = 0;
    v5 = sub_21FF620(a1 + 408, ptr, &v11, &off_2B16F80);
    if ( v5 && (v6 = v5 - 40) != 0 )
    {
      v7 = v6;
      v8 = sub_A4C290(v4, 48, 4u);
      sub_F41BC0(v8, a1, a2, a3, v7 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v8 = sub_A4C290(v4, 48, 4u);
      sub_F41BC0(v8, a1, a2, a3, 0);
      *(_QWORD *)(v8 + 40) = 0;
      sub_21FF4D0(a1 + 408, v8 + 40, v11, &off_2B16F80);
    }
    if ( ptr[0] != v13 )
      free(ptr[0]);
  }
  else
  {
    v10 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL]
         | (unsigned __int8)*(_QWORD *)(a2 + 8))
        & 7;
    v8 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    sub_F41BC0(v8, a1, a2, a3, v10);
  }
  sub_A469E0(a1 + 8, v8);
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}

