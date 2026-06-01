__int64 __fastcall sub_5AC9C0(_QWORD *a1, unsigned int *a2, char *a3)
{
  int v3; // r9d
  char *v4; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // r13d
  int v8; // ebp
  __int64 v9; // r9
  char *v10; // rax
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // [rsp+0h] [rbp-128h] BYREF
  char v16; // [rsp+4h] [rbp-124h] BYREF
  int v17; // [rsp+8h] [rbp-120h] BYREF
  char v18; // [rsp+Ch] [rbp-11Ch]
  _QWORD v19[3]; // [rsp+10h] [rbp-118h] BYREF
  char v20; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v21[8]; // [rsp+E8h] [rbp-40h] BYREF

  v3 = a2[26];
  v21[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( v3 > 0 )
  {
    if ( a3 )
      *(_DWORD *)a3 = -1;
    return 0xFFFFFFFFLL;
  }
  v5 = *a2;
  v6 = a2[1];
  v7 = sub_3BCF60((__int64)a1, *a2);
  v15 = -1;
  if ( !v4 )
    v4 = &v16;
  *(_DWORD *)v4 = -1;
  v8 = sub_375980(0x37u, a2, &v15, v4);
  if ( v6 < a2[1] )
  {
    v12 = sub_4ECA50((__int64)(a1 + 203), v5);
    v13 = sub_4EE890((__int64)(a1 + 203), v12);
    if ( v13 )
    {
      v14 = *v13;
      if ( v14 < a2[1] )
        a2[1] = v14;
    }
  }
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( v8 >= 0 )
      {
        if ( !under_debugger )
          interr(1397);
        BUG();
      }
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( a2[1] != v7 )
      return 0xFFFFFFFFLL;
    v19[0] = -1;
    v19[2] = 0;
    v19[1] = 0xFFFFFFFFLL;
    v10 = &v20;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 24;
      *((_WORD *)v10 - 11) = 0;
      *((_WORD *)v10 - 10) = 0;
      *((_DWORD *)v10 - 1) = 0;
      *((_WORD *)v10 - 9) = 0;
      *((_QWORD *)v10 - 2) = 0;
      *((_DWORD *)v10 - 2) = 0;
    }
    while ( v21 != (_QWORD *)v10 );
    if ( (int)decode_insn(v19, v5, v21, 0, 0, v9) > 0 && (unsigned __int8)sub_4B5BC0(a1, (__int64)v19, 1u) )
      return 0xFFFFFFFFLL;
    v18 = 0;
    v17 = -1;
    sub_3DD450(a1, (__int64)&v17, v5);
    if ( v17 == v7 )
      return 0xFFFFFFFFLL;
    v15 = v17;
    if ( (unsigned __int8)sub_3DD610(a1, (__int64)&v17, v5) )
      return 0xFFFFFFFFLL;
  }
  result = v15;
  if ( v15 >= *a2 && v15 < a2[1] )
    return 0xFFFFFFFFLL;
  return result;
}

