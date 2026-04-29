__int64 __fastcall sub_F5430(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rsi
  char *v5; // r13
  char *i; // r12
  const char *v7; // r12
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_BYTE *)(v1 + 64) == 8 && *(_BYTE *)(v1 + 32) == 6 )
  {
    v3 = *(_QWORD *)(v1 + 72);
    if ( *(_QWORD *)(v3 + 32) == 1 )
    {
      v4 = *(_QWORD *)(v1 + 40);
      v13 = 0;
      v12 = 0;
      if ( (unsigned __int8)sub_1D2AB0(&v12, v4, 0, 0) )
      {
        v15 = 0;
        s1 = nullptr;
        calc_c_cpp_name(&s1, v12, 0, 0);
        v5 = s1;
        if ( !(_QWORD)v15 )
          goto LABEL_9;
        for ( i = s1; *i == 95; ++i )
          ;
        if ( !strncmp(i, "Unwind_SjLj_", 0xCu) && ((v7 = i + 12, !strcmp(v7, "Register")) || !strcmp(v7, "Unregister")) )
        {
          if ( v5 )
          {
            *(_QWORD *)&v15 = 0;
            qfree(v5);
          }
          if ( a1[5] == -1 )
          {
            v10 = *(_QWORD *)(v3 + 24);
            if ( *(_BYTE *)v10 == 10 )
            {
              v11 = *(_QWORD *)(v10 + 8);
              if ( *(_BYTE *)v11 == 5 )
                a1[5] = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
            }
          }
          v8 = a1[2];
          sub_11D5A0(a1[4]);
          v9 = *(_DWORD *)(v8 + 24);
          BYTE1(v9) &= ~2u;
          LOBYTE(v9) = v9 | 0x80;
          *(_DWORD *)(v8 + 24) = v9;
        }
        else
        {
LABEL_9:
          if ( v5 )
          {
            *(_QWORD *)&v15 = 0;
            qfree(v5);
          }
        }
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
    }
  }
  return 0;
}
