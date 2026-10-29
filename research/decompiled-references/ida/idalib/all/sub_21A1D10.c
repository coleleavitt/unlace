__int64 __fastcall sub_21A1D10(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, unsigned int); // rax
  __int64 v3; // rax
  _WORD *v4; // rbx
  size_t v5; // r13
  unsigned int v6; // r12d
  size_t v7; // rax
  _QWORD *v9; // rax
  size_t v10; // rax
  _QWORD *v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h]

  v2 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 144LL);
  if ( v2 == sub_21965A0 )
  {
    v3 = a1[10];
    v4 = *(_WORD **)(v3 + 8LL * (unsigned int)a2);
    if ( *((_BYTE *)v4 + 15) )
    {
      v15 &= ~1u;
      v13 = v4;
      v14 = 16;
      if ( *(_DWORD *)v4 == 1701076831 && v4[2] == 30050 && *((_BYTE *)v4 + 6) == 103 )
        goto LABEL_25;
      v5 = 16;
LABEL_5:
      v6 = 1;
      if ( *(_QWORD *)v4 == 0x67756265647A5F5FLL )
        goto LABEL_13;
      goto LABEL_6;
    }
    v10 = strlen(*(const char **)(v3 + 8LL * (unsigned int)a2));
    v15 &= ~1u;
    v13 = v4;
    v5 = v10;
    v14 = v10;
  }
  else
  {
    v2((__int64)&v13, (__int64)a1, a2);
    if ( (v15 & 1) != 0 )
    {
      v9 = v13;
      v13 = nullptr;
      v11 = v9;
      sub_A05760(&v12, &v11);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v6 = 0;
      goto LABEL_13;
    }
    v5 = v14;
    v4 = v13;
  }
  if ( v5 > 6 )
  {
    if ( !memcmp(v4, "__debug", 7u) )
    {
LABEL_25:
      v6 = 1;
      goto LABEL_13;
    }
    if ( v5 > 7 )
      goto LABEL_5;
  }
LABEL_6:
  v7 = j__strlen("__apple");
  if ( v7 <= v5 && (!v7 || !memcmp(v4, "__apple", v7)) )
    goto LABEL_25;
  if ( j__strlen("__gdb_index") == v5 )
  {
    v6 = 1;
    if ( v5 )
    {
      if ( memcmp(v4, "__gdb_index", v5) )
      {
        v6 = 0;
        if ( v5 == j__strlen("__swift_ast") )
          goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = 0;
    if ( j__strlen("__swift_ast") == v5 )
    {
      v6 = 1;
      if ( v5 )
LABEL_12:
        LOBYTE(v6) = memcmp(v4, "__swift_ast", v5) == 0;
    }
  }
LABEL_13:
  sub_111DFC0((__int64 *)&v13);
  return v6;
}
