unsigned __int64 __fastcall sub_38C100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r9
  __int64 v8; // rdi
  char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v5 = 256;
  v12 = __readfsqword(0x28u);
  if ( qword_8CD7E8 )
    v5 = (unsigned int)sub_1F7CC0(qword_8CD7E8, a2, a5);
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v10 = nullptr;
    v11 = 0;
    (*(void (__fastcall **)(__int64, char **, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(
      v8,
      &v10,
      a2 + 100,
      a3,
      a4,
      v5);
    sub_2D4060(a2, &v10);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10, (const char *)&v10);
    }
  }
  return v12 - __readfsqword(0x28u);
}
