void __fastcall sub_2B9640(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // r12
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r12
  const char *v14; // rdx
  int v15; // edx
  __int64 *v16; // rbp
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  const char *v21; // rdx
  __int64 v22; // rax
  const char *v23; // rsi
  char v24; // al
  int radix; // eax
  __int64 v26; // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v5 = 88 * a3;
    v6 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
    v7 = **v6;
    if ( (char *)v7 == (char *)sub_2A8A60 )
    {
      if ( !(unsigned int)sub_253040((__int64)(v6 + 1), (__int64)(v6 + 8)) )
        return;
    }
    else if ( !v7() )
    {
      return;
    }
    switch_dbctx(*(int *)(a1 + 8));
    v8 = *(_QWORD *)(a1 + 40) + v5;
    v9 = sub_2B65D0(a2);
    v10 = v8;
    v11 = (unsigned int)*(char *)(v8 + 28);
    v12 = *(_QWORD *)(v8 + 56);
    v13 = (__int64 *)v9;
    if ( (unsigned __int8)is_enum(v12, v11) )
    {
      v14 = s1;
      if ( *(_QWORD *)(v10 + 40) )
        v14 = *(const char **)(v10 + 32);
      sub_674F0(v13, (__int64)"ENUM %s", v14);
      v15 = *(unsigned __int8 *)(v10 + 30);
      if ( (_BYTE)v15 )
        sub_F6610(v13, (__int64)", serial %d", v15);
    }
    else if ( (unsigned __int8)is_stroff(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28)) )
    {
      v21 = s1;
      if ( *(_QWORD *)(v10 + 40) )
        v21 = *(const char **)(v10 + 32);
      sub_674F0(v13, (__int64)"OFFSETOF(%s)", v21);
    }
    else if ( (unsigned __int8)is_char(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28)) )
    {
      sub_2AF0D0(v13, "CHAR");
    }
    else
    {
      if ( !(unsigned __int8)is_numop(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28))
        || (v23 = "HEX", (unsigned int)get_radix(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28)) != 16) )
      {
        if ( (unsigned __int8)is_numop(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28))
          && (unsigned int)get_radix(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28)) == 8 )
        {
          v23 = "OCT";
        }
        else
        {
          v23 = "DEC";
        }
      }
      sub_2AF0D0(v13, v23);
      v24 = *(_BYTE *)(v10 + 31);
      if ( v24 )
        sub_F6610(v13, (__int64)", size %d", v24);
      radix = get_radix(*(_QWORD *)(v10 + 56), (unsigned int)*(char *)(v10 + 28));
      sub_F6610(v13, (__int64)", radix %d", radix);
      v26 = *(_QWORD *)(v10 + 56);
      if ( (v26 & 0x20000) != 0 )
      {
        sub_2AF0D0(v13, " SIGNED");
        v26 = *(_QWORD *)(v10 + 56);
      }
      if ( (v26 & 0x40000) != 0 )
        sub_2AF0D0(v13, " BNOT");
    }
    if ( *(_BYTE *)(v10 + 29) )
    {
      v16 = (__int64 *)sub_2B65D0(a2);
      v17 = *(_BYTE *)(v10 + 29);
      if ( (v17 & 1) != 0 )
      {
        sub_F6610(v16, (__int64)"%s%s", "FIXED", " ");
        v17 = *(_BYTE *)(v10 + 29);
      }
      if ( (v17 & 2) != 0 )
      {
        sub_F6610(v16, (__int64)"%s%s", "NEGDONE", " ");
        v17 = *(_BYTE *)(v10 + 29);
      }
      if ( (v17 & 4) != 0 )
      {
        sub_F6610(v16, (__int64)"%s%s", "BINVDONE", " ");
        v17 = *(_BYTE *)(v10 + 29);
      }
      if ( (v17 & 8) != 0 )
      {
        sub_F6610(v16, (__int64)"%s%s", "NEGATE", " ");
        v17 = *(_BYTE *)(v10 + 29);
      }
      if ( (v17 & 0x10) != 0 )
      {
        sub_F6610(v16, (__int64)"%s%s", "BITNOT", " ");
        v17 = *(_BYTE *)(v10 + 29);
      }
      if ( (v17 & 0x20) != 0 )
        sub_F6610(v16, (__int64)"%s%s", "VALID", " ");
      v18 = v16[1];
      v19 = *v16;
      v20 = v18 - 1;
      if ( v18 - 1 <= 1 )
      {
        if ( v19 )
        {
          v16[1] = 0;
          qfree(v19);
          *v16 = 0;
          v16[2] = 0;
        }
      }
      else
      {
        if ( v16[2] < v20 )
        {
          v22 = qvector_reserve(v16, v19, v18 - 1, 1);
          *v16 = v22;
          v19 = v22;
        }
        v16[1] = v20;
        *(_BYTE *)(v19 + v18 - 2) = 0;
      }
    }
  }
}
