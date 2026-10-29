unsigned __int64 __fastcall sub_1E2160(__int64 a1, char a2)
{
  const char *v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int128 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (int)a1 >= 0 && (int)a1 < (unsigned __int64)xmmword_8CC398 && qword_8CC390 + 56LL * (int)a1 )
  {
    v3 = (const char *)&v7;
    v7 = -2;
    v8 = -1;
    v9 = 0;
    if ( (unsigned __int8)sub_23F750(a1, &v7) )
    {
      if ( a2 || !unk_8CD7E8 )
      {
        v3 = nullptr;
        v6 = sub_2E1080(0, 0);
        if ( v6 )
        {
          v3 = (const char *)v8;
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 1104LL))(v6, v8, 1, 0);
        }
      }
      else
      {
        v3 = (const char *)v8;
        sub_192AA0(0, v8, -1, 1u);
      }
      if ( v7 >= -1 )
      {
        v4 = v8;
        if ( v8 )
          goto LABEL_10;
      }
    }
    else if ( v7 >= -1 )
    {
      v4 = v8;
      if ( v8 )
      {
LABEL_10:
        *(_QWORD *)&v9 = 0;
        qfree(v4, v3);
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
