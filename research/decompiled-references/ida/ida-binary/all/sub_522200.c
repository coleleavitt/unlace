__int64 __fastcall sub_522200(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = *(const char **)(a3 + 328);
  if ( v3 )
  {
    v4 = *(__int64 **)(a3 + 200);
    v5 = &v8;
    v8 = 0;
    v9 = 0;
    if ( v4 )
      v5 = v4;
    v6 = (*(unsigned __int8 (__fastcall **)(__int64, const char *, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v3, v5) == 0
       ? 7
       : 3;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, v3);
    }
  }
  else
  {
    return 7;
  }
  return v6;
}
