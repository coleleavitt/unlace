void __fastcall __noreturn sub_689F50(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbp
  _BYTE *v5; // r12
  size_t v6; // r15
  _BYTE *i; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rcx
  const char *v10; // rsi
  char v11; // al
  size_t v12; // rax
  __int64 v13; // rsi
  void *dest; // [rsp+10h] [rbp-B0h]
  void *v15; // [rsp+28h] [rbp-98h] BYREF
  __int128 v16; // [rsp+30h] [rbp-90h]
  void *ptr; // [rsp+48h] [rbp-78h] BYREF
  __int128 v18; // [rsp+50h] [rbp-70h]
  unsigned __int64 v19; // [rsp+80h] [rbp-40h]
  __int64 v20; // [rsp+98h] [rbp-28h]

  v20 = v2;
  v19 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  v18 = 0;
  if ( !a2 )
    sub_378D50();
  ptr = nullptr;
  if ( !(unsigned __int8)sub_689730((__int64 *)&ptr, a2) )
    sub_378D50();
  if ( sub_7BEA80(a1 + 344, *a1, &v15, -1, 83) > 0 )
  {
    v5 = v15;
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
      sub_7BE7C0(a1 + 344, v13, -1, v5, 0, 83);
    else
      sub_7BE850(a1 + 344, v13, -1, 83);
  }
LABEL_16:
  sub_6899B0((__int64)a1, (__int64)&v15, a2);
  sub_368890();
}
