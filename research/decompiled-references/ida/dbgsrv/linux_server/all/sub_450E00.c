/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450E00
// Address: 0x0000000000450E00

//----- (0000000000450E00) ----------------------------------------------------
__int64 __fastcall sub_450E00(__int64 a1, __int64 a2, char a3)
{
  bool v5; // zf
  const char *v6; // rsi
  char **v7; // rbx
  const char *v8; // rsi
  char **i; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  double v15; // xmm0_8
  unsigned __int8 v16; // al
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char *v20; // rax
  char *v21; // rdx
  char v22; // cl
  char *v23; // rsi
  __int64 v24; // rax
  _OWORD v25[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  sub_44BB80(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 584) = a2;
    *(_BYTE *)(a1 + 648) = 1;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 584) == 0;
    *(_BYTE *)(a1 + 648) = 0;
    if ( v5 )
    {
      v24 = operator new(0x38u);
      *(_QWORD *)(v24 + 8) = 1;
      *(_QWORD *)v24 = v24 + 48;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 24) = 0;
      *(_DWORD *)(v24 + 32) = 1065353216;
      *(_QWORD *)(v24 + 40) = 0;
      *(_QWORD *)(v24 + 48) = 0;
      *(_QWORD *)(a1 + 584) = v24;
    }
    v6 = "__IDC__";
    v7 = &off_4C2D20;
    do
    {
      if ( (unsigned int)sub_44BF80(a1, v6, v7[1], 0, 0, nullptr) )
        return sub_479E90();
      v6 = v7[2];
      v7 += 2;
    }
    while ( v6 );
    if ( LOBYTE(qword_4C8430[0]) || (a3 & 1) != 0 )
    {
      v8 = "__LINUX__";
      for ( i = &off_4C2CE0; !(unsigned int)sub_44BF80(a1, v8, i[1], 0, 0, nullptr); i += 2 )
      {
        v8 = i[2];
        if ( !v8 )
        {
          if ( LOBYTE(qword_4C8430[0]) )
          {
            v14 = dword_4C61E0;
            if ( dword_4C61E0 == -1 )
            {
              v15 = off_4C7FB0(53, 0, v10, v11, v12, v13);
              dword_4C61E0 = v16;
              off_4C7FB0(52, (unsigned int)&xmmword_4C8220, 32, v17, v18, v19, v15);
              v14 = dword_4C61E0;
            }
            if ( v14 )
            {
              sub_44BF80(a1, "__QT__", "1", 0, 0, nullptr);
              sub_44BF80(a1, "__GUI__", "1", 0, 0, nullptr);
            }
            else
            {
              sub_44BF80(a1, "__TXT__", "1", 0, 0, nullptr);
            }
            sub_44BF80(a1, "__IDA_VERSION__", &xmmword_4C8220, 0, 0, nullptr);
            v25[0] = _mm_load_si128((const __m128i *)&xmmword_4C8220);
            v25[1] = _mm_load_si128((const __m128i *)&xmmword_4C8230);
            v20 = strchr((const char *)v25, 46);
            v21 = v20;
            if ( v20 )
            {
              do
              {
                v22 = v21[1];
                v23 = v21++;
                *(v21 - 1) = v22;
              }
              while ( v22 );
              if ( (unsigned __int64)(v23 - v20) <= 1 )
              {
                *v23 = 48;
                *v21 = 0;
              }
            }
            sub_44BF80(a1, "__IDAVER__", v25, 0, 0, nullptr);
          }
          return 0;
        }
      }
      return sub_479E90();
    }
  }
  return 0;
}
// 450F5B: variable 'v10' is possibly undefined
// 450F5B: variable 'v11' is possibly undefined
// 450F5B: variable 'v12' is possibly undefined
// 450F5B: variable 'v13' is possibly undefined
// 450F6F: variable 'v16' is possibly undefined
// 450F77: variable 'v17' is possibly undefined
// 450F77: variable 'v18' is possibly undefined
// 450F77: variable 'v19' is possibly undefined
// 4C2CE0: using guessed type char *off_4C2CE0;
// 4C2D20: using guessed type char *off_4C2D20;
// 4C61E0: using guessed type int dword_4C61E0;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
// 4C8220: using guessed type __int128 xmmword_4C8220;
// 4C8230: using guessed type __int128 xmmword_4C8230;
// 4C8430: using guessed type __int64 qword_4C8430[2];
