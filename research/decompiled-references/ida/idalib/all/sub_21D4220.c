__int64 __fastcall sub_21D4220(__int64 *a1, char a2, const char *a3, __int64 *a4)
{
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  size_t v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  char v16; // dl
  __int64 v17; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = *a4;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, 21);
  sub_21CFFC0((__int64)ptr);
  v7 = j__strlen(a3);
  if ( v7 )
    sub_2222BB0(ptr, a3, v7);
  else
    sub_2222BB0(ptr, 0, 0);
  sub_9B7040((__int64)ptr, v6);
  sub_9B7040((__int64)ptr, SHIDWORD(v6));
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
    v13 = j__strlen(a3);
    v14 = v12;
    v15 = *a4;
    *((_WORD *)v12 + 8) = 16405;
    v9 = (__int64)(v12 + 1);
    v16 = *(_BYTE *)(v9 + 10);
    *(_QWORD *)(v9 + 16) = v13;
    *(_QWORD *)(v9 + 32) = v15;
    *(_QWORD *)(v9 + 24) = a3;
    *(_BYTE *)(v9 + 10) = v16 & 0xF0 | 5;
    *(_QWORD *)v9 = off_2BE6F00;
    sub_2223210(a1 + 12, v14, v17, off_2BE9FD0);
  }
  else
  {
    v9 = 0;
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v9;
}
