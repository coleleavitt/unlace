unsigned __int64 __fastcall sub_1E0720(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  const char *v6; // rsi
  const char *v8; // rsi
  const char *v9; // [rsp+0h] [rbp-78h] BYREF
  __int128 v10; // [rsp+8h] [rbp-70h]
  int v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = sub_234FE0((unsigned int)dword_8CC428);
  if ( a2 >= 0 && a2 < (unsigned __int64)xmmword_8CC398 )
  {
    v5 = qword_8CC390 + 56LL * a2;
    if ( v5 )
    {
      v11 = -3;
      v12 = -1;
      v13 = 0;
      if ( v4 )
        sub_23F750((unsigned int)a2, &v11);
      v9 = nullptr;
      v10 = 0;
      if ( (sub_235EA0(v5) & 0x10) != 0 && *(_BYTE *)(v5 + 32) == 0xFF && v11 == -2 && (*(_BYTE *)(a3 + 28) & 1) != 0 )
      {
        v8 = (const char *)v12;
        generate_deref_chain(a1, v12, a3 + 40, 0);
        if ( v11 >= -1 && v12 )
        {
          *(_QWORD *)&v13 = 0;
          qfree(v12, v8);
        }
      }
      else
      {
        sub_24B690(&v9, &v11, (unsigned int)a2);
        v6 = &s1;
        if ( (_QWORD)v10 )
          v6 = v9;
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 12);
        if ( v9 )
        {
          *(_QWORD *)&v10 = 0;
          qfree(v9, v6);
        }
        if ( v11 >= -1 && v12 )
        {
          *(_QWORD *)&v13 = 0;
          qfree(v12, v6);
        }
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}
