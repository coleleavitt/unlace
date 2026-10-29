__int64 __fastcall sub_6BB7E0(_QWORD *a1, __int64 a2, const char *a3, _BYTE *a4, int a5, unsigned __int8 a6)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned int v13; // eax
  __int64 idati; // rax
  const char *v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v10 = a1[2];
  v11 = a2;
  v19 = __readfsqword(0x28u);
  v13 = save_tinfo(a2, v10, 0, a3, a5 | 5u);
  if ( v13 )
  {
    v16 = (const char *)tinfo_errstr(v13);
    sub_6BB730(a1, 0, (__int64)"Could not store type %s: %s", a3, v16);
    return 0;
  }
  else
  {
    if ( a4 && *a4 )
    {
      v10 = 5;
      v11 = a2;
      set_tinfo_property4(a2, 5, a4, 0, 0, 0);
    }
    if ( a6 && a3 )
    {
      idati = a1[2];
      v17[1] = a3;
      v18 = 256;
      if ( !idati )
        idati = get_idati(v11, v10);
      v17[0] = idati;
      create_tinfo(a2, a6, 61, v17);
    }
    return 1;
  }
}

