unsigned __int64 __fastcall sub_351F0(__int64 a1, char **a2, int a3)
{
  size_t v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  size_t v7; // rdx
  const char *v8; // rsi
  size_t v9; // rdx
  const char *v10; // rsi
  size_t v11; // rdx
  size_t v12; // rax
  size_t v13; // rax
  const char *v14; // rsi
  __int64 v15; // rbp
  __int64 v17; // [rsp+10h] [rbp-68h]
  _BYTE v18[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v19[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  sub_33BC0(a1, a2, a3);
  v17 = *(_QWORD *)(a1 + 160);
  v4 = sub_28E10(v18, (unsigned __int64)v19, v17) - v18;
  if ( v4 )
    sub_30190(a2, v18, v4);
  v5 = 0;
  v6 = 0;
  if ( v17 )
  {
    do
    {
      v14 = s1;
      v15 = v5 + *(_QWORD *)(a1 + 152);
      if ( *(_QWORD *)(v15 + 8) )
        v14 = *(const char **)v15;
      if ( v14 )
      {
        v7 = strlen(v14) + 1;
      }
      else
      {
        v7 = 1;
        v14 = "";
      }
      sub_30190(a2, v14, v7);
      v8 = s1;
      if ( *(_QWORD *)(v15 + 32) )
        v8 = *(const char **)(v15 + 24);
      if ( v8 )
      {
        v9 = strlen(v8) + 1;
      }
      else
      {
        v9 = 1;
        v8 = "";
      }
      sub_30190(a2, v8, v9);
      v10 = s1;
      if ( *(_QWORD *)(v15 + 56) )
        v10 = *(const char **)(v15 + 48);
      if ( v10 )
      {
        v11 = strlen(v10) + 1;
      }
      else
      {
        v11 = 1;
        v10 = "";
      }
      sub_30190(a2, v10, v11);
      v12 = sub_28F50(v18, (unsigned __int64)v20, *(_QWORD *)(v15 + 72)) - v18;
      if ( v12 )
        sub_30190(a2, v18, v12);
      v13 = sub_28F50(v18, (unsigned __int64)v20, *(_QWORD *)(v15 + 80)) - v18;
      if ( v13 )
        sub_30190(a2, v18, v13);
      ++v6;
      v5 += 88;
    }
    while ( v17 != v6 );
  }
  return v20[0] - __readfsqword(0x28u);
}

