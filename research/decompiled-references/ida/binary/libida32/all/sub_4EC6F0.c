void *__fastcall sub_4EC6F0(__int64 a1, __int64 *a2, char **a3)
{
  void (__fastcall *v3)(_BYTE *, char *, char *); // rcx
  size_t v4; // rax
  char *v6; // rsi
  _BYTE v8[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-20h]

  v3 = *(void (__fastcall **)(_BYTE *, char *, char *))(a1 + 48);
  v4 = (size_t)a3[1];
  v9 = __readfsqword(0x28u);
  v6 = *a3;
  if ( v3 )
  {
    v3(v8, v6, &v6[v4]);
    if ( *(_WORD *)(a1 + 4) )
      sub_4EC4D0(a2, v8, *(unsigned __int16 *)(a1 + 4));
    return (void *)(v9 - __readfsqword(0x28u));
  }
  if ( !v4 )
    return (void *)(v9 - __readfsqword(0x28u));
  return sub_4EC4D0(a2, v6, v4);
}

