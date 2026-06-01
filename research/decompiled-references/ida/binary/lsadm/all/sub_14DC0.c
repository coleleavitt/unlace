unsigned __int64 __fastcall sub_14DC0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  size_t v5; // rax
  const char *v6; // r15
  size_t v7; // rdx
  const char *v8; // rsi
  const char *v9; // r15
  size_t v10; // rdx
  const char *v11; // rsi
  const char *v12; // r15
  size_t v13; // rdx
  size_t v14; // rax
  size_t v15; // rax
  unsigned __int64 i; // rbx
  __int64 v17; // rdx
  _BYTE v19[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  v5 = sub_28E10(v19, v20) - (_QWORD)v19;
  if ( v5 )
    sub_148F0(a1, v19, v5);
  sub_148F0(a1, (char *)a2 + 2, 6u);
  v6 = s1;
  if ( a2[2] )
    v6 = (const char *)a2[1];
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = "";
  }
  v8 = v6;
  v9 = s1;
  sub_148F0(a1, v8, v7);
  if ( a2[5] )
    v9 = (const char *)a2[4];
  if ( v9 )
  {
    v10 = strlen(v9) + 1;
  }
  else
  {
    v10 = 1;
    v9 = "";
  }
  v11 = v9;
  v12 = s1;
  sub_148F0(a1, v11, v10);
  if ( a2[8] )
    v12 = (const char *)a2[7];
  if ( v12 )
  {
    v13 = strlen(v12) + 1;
  }
  else
  {
    v13 = 1;
    v12 = "";
  }
  sub_148F0(a1, v12, v13);
  v14 = sub_28E10(v19, v20) - (_QWORD)v19;
  if ( v14 )
    sub_148F0(a1, v19, v14);
  v15 = sub_28E10(v19, v20) - (_QWORD)v19;
  if ( v15 )
    sub_148F0(a1, v19, v15);
  for ( i = 0; i < a2[12]; ++i )
  {
    v17 = 5 * i;
    sub_336D0(a2[11] + 8 * v17, a1, a3);
  }
  return v20[0] - __readfsqword(0x28u);
}

