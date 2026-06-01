void __fastcall __noreturn sub_66A950(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbp
  _BYTE *v5; // r12
  size_t v6; // r13
  _BYTE *i; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rcx
  const char *v10; // rsi
  char v11; // al
  size_t v12; // rax
  __int64 v13; // rsi
  char *v14; // [rsp+0h] [rbp-C0h]
  void *dest; // [rsp+10h] [rbp-B0h]
  void *v16; // [rsp+28h] [rbp-98h] BYREF
  __int128 v17; // [rsp+30h] [rbp-90h]
  void *ptr; // [rsp+48h] [rbp-78h] BYREF
  __int128 v19; // [rsp+50h] [rbp-70h]
  unsigned __int64 v20; // [rsp+80h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp-28h]

  v21 = v2;
  v20 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  v19 = 0;
  if ( !a2 )
    sub_375400();
  ptr = nullptr;
  if ( !(unsigned __int8)sub_66A120((__int64 *)&ptr, a2) )
    sub_375400();
  v14 = (char *)a1 + 2556;
  if ( sub_79B6F0((char *)a1 + 2556, *a1, &v16, 0xFFFFFFFFLL, 83) > 0 )
  {
    v5 = v16;
    v6 = strlen(a2);
    for ( i = v5; ; i = v9 + 1 )
    {
      v8 = stristr(i, a2);
      v9 = (_BYTE *)v8;
      if ( !v8 )
        goto LABEL_16;
      if ( v5 == (_BYTE *)v8 || *(_BYTE *)(v8 - 1) == 47 )
      {
        v10 = (const char *)(v8 + v6);
        v11 = *(_BYTE *)(v8 + v6);
        if ( !v11 || v11 == 47 )
          break;
      }
    }
    if ( v5 == v9 )
      v10 += v11 == 47;
    else
      --v9;
    dest = v9;
    v12 = strlen(v10);
    memmove(dest, v10, v12 + 1);
    v13 = *a1;
    if ( *v5 )
      sub_79B440(v14, v13, 0xFFFFFFFFLL, v5, 0, 83);
    else
      sub_79B4D0(v14, v13, 0xFFFFFFFFLL, 83);
  }
LABEL_16:
  sub_66A3A0((__int64)a1, (__int64)&v16, a2);
  sub_365330();
}

