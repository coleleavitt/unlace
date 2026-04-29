__int64 __fastcall sub_42C50(_QWORD *a1)
{
  const char *v1; // rsi
  __int64 v2; // rdx
  unsigned int tinfo_details; // r13d
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // r12
  __int64 tinfo_pdata; // rax
  char *v13; // rbx
  char *s1; // [rsp+0h] [rbp-88h] BYREF
  __int128 v15; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+28h] [rbp-60h]
  __int128 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+50h] [rbp-38h]
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v1 = (_BYTE *)(&dword_0 + 2);
  v21 = __readfsqword(0x28u);
  v20 = 1;
  v16 = 0;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  if ( (get_tinfo_property(*a1, 2) & 0x3F) == 0xD
    && (v1 = byte_9 + 4, tinfo_details = get_tinfo_details(*a1, 13, &v16), (_BYTE)tinfo_details)
    && (_QWORD)v17 == 2
    && (v11 = v16, v1 = (_BYTE *)(&dword_0 + 2), (get_tinfo_property(*(_QWORD *)(v16 + 64), 2) & 0xF) == 9)
    && (v1 = *(const char **)(v11 + 208), !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v11 + 64), v1, 0))
    && (v1 = (const char *)*a1, s1 = nullptr, v15 = 0, ((unsigned __int16)v1 & 0x100) != 0) )
  {
    tinfo_pdata = get_tinfo_pdata(&s1, v1, 0);
    v13 = s1;
    if ( tinfo_pdata && (_QWORD)v15 )
    {
      v1 = "GFC_COMPLEX_8";
      if ( strcmp(s1, "GFC_COMPLEX_8") )
      {
        v1 = "GFC_COMPLEX_16";
        LOBYTE(tinfo_details) = strcmp(v13, "GFC_COMPLEX_16") == 0;
      }
    }
    else
    {
      tinfo_details = 0;
    }
    if ( v13 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v13, v1, v2, 0.0);
    }
  }
  else
  {
    tinfo_details = 0;
  }
  v4 = v16;
  if ( v16 )
  {
    v5 = v17;
    if ( (_QWORD)v17 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 144 * v6);
        clear_tinfo_t(v7 + 8);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8, v1, v2, 0.0);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9, v1, v2, 0.0);
        }
        ++v6;
        v4 = v16;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v4, v1, v2, 0.0);
  }
  return tinfo_details;
}
