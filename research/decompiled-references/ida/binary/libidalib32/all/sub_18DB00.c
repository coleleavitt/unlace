unsigned __int64 __fastcall sub_18DB00(_QWORD *a1, __int64 a2)
{
  _BYTE *v4; // rdi
  const char *v5; // rsi
  const char *v7; // rbp
  _BYTE *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  sub_18D9F0(a1, (__int64 *)&v8);
  if ( !(_QWORD)v9 )
  {
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_5;
    v5 = s1;
LABEL_11:
    v7 = *(const char **)a2;
    if ( strcmp(v7, v5) )
      (*(void (__fastcall **)(_QWORD *, const char *))(*a1 + 104LL))(a1, v7);
    goto LABEL_5;
  }
  v4 = v8;
  v5 = v8;
  if ( *(_QWORD *)(a2 + 8) )
    goto LABEL_11;
  if ( !*v8 )
    goto LABEL_6;
  (*(void (__fastcall **)(_QWORD *, const char *))(*a1 + 104LL))(a1, s1);
LABEL_5:
  v4 = v8;
LABEL_6:
  if ( v4 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}

