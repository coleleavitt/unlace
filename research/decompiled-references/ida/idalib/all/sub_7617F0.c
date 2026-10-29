__int64 __fastcall sub_7617F0(int a1, _DWORD *a2)
{
  __int16 v2; // bx
  char *v3; // r12
  const char *v4; // rdi
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rbp
  char *v10; // rax
  int v11; // eax
  char *v12; // rdx
  __int64 result; // rax
  int *v14; // rsi
  __int64 v15; // rdx
  unsigned int *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // [rsp+0h] [rbp-48h] BYREF
  int v20; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v2 = a1;
  v21 = __readfsqword(0x28u);
  v19 = 0;
  sub_76EF20(&v19);
  if ( byte_2CD44A1 > 0 )
    sub_770D00(&v19);
  v3 = qword_2CD44C0;
  v4 = &qword_2CD44C0[-a1];
  v5 = strstr(v4, "__pt__");
  v9 = v5;
  if ( !v5 )
  {
    result = v19;
    if ( a2 )
      *a2 = v19;
    return result;
  }
  v10 = v5 + 6;
  if ( v3 < v10 )
    return v19;
  qword_2CD44C0 = v10;
  if ( !v9[6] )
    sub_76E6C0(v4, "__pt__", v6, v7);
  v11 = sub_76E990(v4, "__pt__", v6, v7, v8);
  v12 = qword_2CD44C0;
  if ( v3 != &qword_2CD44C0[v11] || (++qword_2CD44C0, *v12 == 95) )
  {
    qword_2CD44C0 = v3;
    return v19;
  }
  sub_76EB20(&v19, (unsigned __int16)(v2 - ((_WORD)v3 - (_WORD)v9)));
  v14 = (_DWORD *)&word_3C;
  sub_76FD20(&v19, 60);
  if ( qword_2CD44C0 >= v3 )
    return v19;
  while ( 1 )
  {
    v18 = sub_761300(&v19, (__int64)v14, v15, v16, v17);
    v14 = &v20;
    v20 = v18;
    sub_770B70(&v19, &v20);
    if ( v3 == qword_2CD44C0 )
      break;
    sub_770C10(&v19);
    if ( qword_2CD44C0 >= v3 )
      return v19;
  }
  return sub_771250(&v19, 62);
}
