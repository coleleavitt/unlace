__int64 __fastcall sub_C36960(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  unsigned int v7; // ebp
  unsigned int v9; // [rsp+0h] [rbp-F8h] BYREF
  char v10; // [rsp+4h] [rbp-F4h]
  _QWORD v11[3]; // [rsp+40h] [rbp-B8h] BYREF
  char v12; // [rsp+58h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v15; // [rsp+78h] [rbp-80h]
  _BYTE v16[120]; // [rsp+80h] [rbp-78h] BYREF

  v6 = *(_QWORD **)(a1 + 16);
  v12 |= 1u;
  v10 &= ~1u;
  ptr = v16;
  v15 = 0x800000000LL;
  memset(v11, 0, sizeof(v11));
  v13 = 0;
  v16[65] = 0;
  v9 = 0;
  sub_C245D0((__int64)v11, v6, a3);
  if ( (unsigned __int8)sub_C36570(
                          a1,
                          (_DWORD *)a4,
                          *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL) | 1LL,
                          (__int64)v11,
                          (__int64)&v9,
                          1u)
    && (unsigned __int8)sub_C26740((unsigned int *)a1, *(_QWORD **)(a1 + 16), a4) )
  {
    v7 = sub_C2CC80(a1, a2, (__int64)&v9, a4);
  }
  else
  {
    v7 = 0;
  }
  if ( v9 > 1 )
    sub_A4F8E0((int *)&v9);
  if ( ptr != v16 )
    free(ptr);
  return v7;
}
