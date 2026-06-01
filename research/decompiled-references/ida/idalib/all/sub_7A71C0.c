__int64 __fastcall sub_7A71C0(__int64 a1, __int64 a2, char a3)
{
  bool v6; // zf
  const char *v7; // rsi
  char **v8; // rbx
  __int64 v9; // rdi
  const char *v10; // rsi
  char **i; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  char *v16; // rax
  char *v17; // rdx
  char v18; // cl
  char *v19; // rsi
  __int64 v20; // rax
  _OWORD v21[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_7A1A30(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 584) = a2;
    *(_BYTE *)(a1 + 648) = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 584) == 0;
    *(_BYTE *)(a1 + 648) = 0;
    if ( v6 )
    {
      v20 = operator new(0x38u);
      *(_QWORD *)(v20 + 8) = 1;
      *(_QWORD *)v20 = v20 + 48;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_DWORD *)(v20 + 32) = 1065353216;
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0;
      *(_QWORD *)(a1 + 584) = v20;
    }
    v7 = "__IDC__";
    v8 = &off_2B3A060;
    do
    {
      v9 = a1;
      if ( (unsigned int)sub_7A1E30(a1, v7, v8[1], 0, 0, nullptr) )
        return get_qerrno(v9);
      v7 = v8[2];
      v8 += 2;
    }
    while ( v7 );
    if ( unk_2C81928 || (a3 & 1) != 0 )
    {
      v10 = "__LINUX__";
      for ( i = &off_2B3A020; ; i += 2 )
      {
        v9 = a1;
        if ( (unsigned int)sub_7A1E30(a1, v10, i[1], 0, 0, nullptr) )
          break;
        v10 = i[2];
        if ( !v10 )
        {
          if ( unk_2C81928 )
          {
            if ( dword_2C81CB8 == -1 )
              callui(53, 0, v12, v13, v14, v15);
            if ( dword_2C81CB8 )
            {
              sub_7A1E30(a1, "__QT__", "1", 0, 0, nullptr);
              sub_7A1E30(a1, "__GUI__", "1", 0, 0, nullptr);
            }
            else
            {
              sub_7A1E30(a1, "__TXT__", "1", 0, 0, nullptr);
            }
            sub_7A1E30(a1, "__IDA_VERSION__", &xmmword_2CD46A0, 0, 0, nullptr);
            v21[0] = _mm_load_si128((const __m128i *)&xmmword_2CD46A0);
            v21[1] = _mm_load_si128((const __m128i *)&xmmword_2CD46B0);
            v16 = strchr((const char *)v21, 46);
            v17 = v16;
            if ( v16 )
            {
              do
              {
                v18 = v17[1];
                v19 = v17++;
                *(v17 - 1) = v18;
              }
              while ( v18 );
              if ( (unsigned __int64)(v19 - v16) <= 1 )
              {
                *v19 = 48;
                *v17 = 0;
              }
            }
            sub_7A1E30(a1, "__IDAVER__", v21, 0, 0, nullptr);
          }
          return 0;
        }
      }
      return get_qerrno(v9);
    }
  }
  return 0;
}
