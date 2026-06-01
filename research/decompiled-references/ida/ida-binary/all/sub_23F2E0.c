__int64 __fastcall sub_23F2E0(int a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // r8d
  double v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v16; // [rsp+8h] [rbp-90h]
  int v17; // [rsp+10h] [rbp-88h] BYREF
  __int64 v18; // [rsp+18h] [rbp-80h]
  __int128 v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int128 v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !dbg || dword_8CC5F0 >= 0 || !a1 )
  {
    v13 = qword_8CC390;
    v14 = qword_8CC390 + 56 * xmmword_8CC398;
    if ( qword_8CC390 != v14 )
    {
      if ( ((56 * (_BYTE)xmmword_8CC398) & 8) == 0 || (*(_BYTE *)(qword_8CC390 + 35) = 0, v13 += 56, v14 != v13) )
      {
        do
        {
          *(_BYTE *)(v13 + 35) = 0;
          v13 += 112;
          *(_BYTE *)(v13 - 21) = 0;
        }
        while ( v14 != v13 );
      }
    }
LABEL_27:
    sub_1E32C0(0xFFu);
    return 1;
  }
  v5 = qword_8CC430;
  v6 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 != v6 )
  {
    while ( a1 != *(_DWORD *)v5 )
    {
      v5 += 256;
      if ( v6 == v5 )
        return 0;
    }
    if ( v5 && sub_23F1C0(v5, -1, a2, a4, a5) )
    {
      v7 = nullptr;
      if ( *(_QWORD *)(v5 + 72) )
        v7 = (_QWORD *)(v5 + 64);
      v8 = (_QWORD *)(v5 + 40);
      v9 = qword_8CC390;
      v16 = v8;
      v10 = qword_8CC390 + 56 * xmmword_8CC398;
      if ( qword_8CC390 != v10 )
      {
        do
        {
          v17 = -2;
          v18 = -1;
          v19 = 0;
          sub_236190(v9, (const char *)&v17, v16);
          v12 = 0.0;
          v20 = -2;
          v21 = -1;
          v22 = 0;
          if ( v7 )
          {
            sub_236190(v9, (const char *)&v20, v7);
            *(_BYTE *)(v9 + 35) = 2 - sub_235060(&v17, (__int64)&v20);
            if ( v11 >= -1 && v21 )
            {
              *(_QWORD *)&v22 = 0;
              v12 = qfree(v21, (const char *)&v20);
            }
          }
          else
          {
            *(_BYTE *)(v9 + 35) = 2 - sub_235060(&v17, (__int64)&v20);
          }
          if ( v17 >= -1 )
          {
            if ( v18 )
            {
              *(_QWORD *)&v19 = 0;
              qfree(v18, (const char *)&v20, v12);
            }
          }
          v9 += 56;
        }
        while ( v10 != v9 );
      }
      if ( (unsigned __int8)sub_1A1870() )
        return 1;
      goto LABEL_27;
    }
  }
  return 0;
}
