__int64 __fastcall sub_1740(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  size_t v5; // rax
  char v6; // [rsp+Fh] [rbp-39h] BYREF
  char s[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 40) )
  {
    if ( !a2 )
      return v8 - __readfsqword(0x28u);
    v3 = *(_QWORD *)(a1 + 64) - a2;
    if ( v3 <= 0x19 )
      return v8 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  (*(void (__fastcall **)(void *, __int64, _QWORD))(a1 + 24))(&unk_40C0, 1, *(_QWORD *)(a1 + 16));
  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD *)(a1 + 64) - a2;
    if ( v3 <= 0x19 )
    {
      v6 = v3 + 97;
      if ( !v2 )
        (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))(&v6, 1, *(_QWORD *)(a1 + 16));
      return v8 - __readfsqword(0x28u);
    }
    if ( !v2 )
      (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("_", 1, *(_QWORD *)(a1 + 16));
LABEL_9:
    __snprintf_chk(s, 21, 1, 21, &aLu, v3);
    if ( !*(_QWORD *)(a1 + 40) )
    {
      v5 = strlen(s);
      (*(void (__fastcall **)(char *, size_t, _QWORD))(a1 + 24))(s, v5, *(_QWORD *)(a1 + 16));
    }
    return v8 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)(a1 + 40) )
    return v8 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("_", 1, *(_QWORD *)(a1 + 16));
}

