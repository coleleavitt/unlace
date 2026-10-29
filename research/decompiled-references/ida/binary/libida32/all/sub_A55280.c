unsigned __int64 __fastcall sub_A55280(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v16; // [rsp+18h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a1 + 720;
  v15 = a3;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  sub_993300((__int64)ptr, a4);
  v17 = 0;
  v8 = sub_21FF620(a1 + 720, ptr, &v17, &off_2B16F20);
  if ( v8 && (v9 = v8 - 24) != 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      v14 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
      if ( a2 == v14 )
      {
        v16 = 0;
      }
      else
      {
        v16 = sub_A55280(a1, v14, 0, a4);
        sub_21FF620(v6, ptr, &v17, &off_2B16F20);
      }
      v15 = 0;
    }
    else
    {
      v16 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
    }
    v12 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
    sub_F3A3D0(v12, a2, v15, a4, v16);
    sub_21FF4D0(v6, v12 + 24, v17, &off_2B16F20);
    v13 = v12;
    v10 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A469E0(a1 + 8, v13);
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v10;
}

