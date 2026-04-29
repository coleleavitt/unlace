unsigned __int64 __fastcall sub_1970(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  size_t v6; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  char s[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = sub_1370(a1, &v7);
  v3 = v2;
  if ( v2 <= 0x10 )
  {
    if ( v2 )
    {
      __snprintf_chk(s, 21, 1, 21, &unk_40C2, v7);
      if ( !*(_QWORD *)(a1 + 40) )
      {
        v6 = strlen(s);
        (*(void (__fastcall **)(char *, size_t, _QWORD))(a1 + 24))(s, v6, *(_QWORD *)(a1 + 16));
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 1;
    }
  }
  else if ( !*(_QWORD *)(a1 + 40) )
  {
    (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("0x", 2, *(_QWORD *)(a1 + 16));
    v4 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 32) - v3;
    if ( !*(_QWORD *)(a1 + 40) )
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(a1 + 24))(v4, v3, *(_QWORD *)(a1 + 16));
  }
  return v9 - __readfsqword(0x28u);
}
