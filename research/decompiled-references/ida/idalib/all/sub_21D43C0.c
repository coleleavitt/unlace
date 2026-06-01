__int64 __fastcall sub_21D43C0(__int64 *a1, char a2, __int64 *a3, const char *a4)
{
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r13
  size_t v14; // rax
  _QWORD *v15; // rsi
  char v16; // dl
  __int64 v17; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = *a3;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, 5);
  sub_21CFFC0((__int64)ptr);
  sub_9B7040((__int64)ptr, v6);
  sub_9B7040((__int64)ptr, SHIDWORD(v6));
  v7 = j__strlen(a4);
  if ( v7 )
    sub_2222BB0(ptr, a4, v7);
  else
    sub_2222BB0(ptr, 0, 0);
  v8 = sub_2223360(a1 + 12, ptr, &v17, off_2BE9FD0);
  if ( v8 )
  {
    v9 = v8 + 8;
  }
  else if ( a2 )
  {
    v11 = (_QWORD *)sub_21D40A0(a1, 48, 3u);
    *v11 = 0;
    v12 = v11;
    v13 = *a3;
    v14 = j__strlen(a4);
    v15 = v12;
    *((_WORD *)v12 + 8) = 16389;
    v16 = *((_BYTE *)v12 + 18);
    v9 = (__int64)(v12 + 1);
    *(_QWORD *)(v9 + 16) = v13;
    *(_QWORD *)(v9 + 24) = v14;
    *(_QWORD *)(v9 + 32) = a4;
    *(_BYTE *)(v9 + 10) = v16 & 0xF0 | 5;
    *(_QWORD *)v9 = off_2BE6840;
    sub_2223210(a1 + 12, v15, v17, off_2BE9FD0);
  }
  else
  {
    v9 = 0;
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v9;
}
