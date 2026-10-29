unsigned __int64 __fastcall sub_1DB8C50(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned __int64 a9,
        int a10,
        int a11)
{
  unsigned __int8 v11; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // rsi
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  _DWORD *v25; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]

  v11 = a4;
  v15 = a9;
  if ( a3 )
  {
    v16 = 0;
    v17 = a9 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)&byte_8[a9 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v18 & 8) != 0 )
      v16 = *(__int64 *)((char *)&qword_18 + (v18 & 0xFFFFFFFFFFFFFFF0LL));
    v19 = v16 | ((unsigned __int8)a9 | (unsigned __int8)v18) & 7;
    v20 = *(_QWORD *)v17;
    v21 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
    v22 = *(_QWORD *)(*(_QWORD *)v17 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v17 + 8LL) >> 3) & 1;
    if ( v22 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
      v27 = sub_F64F00(a9, v20, v22, a4, v21);
      v21 = v28;
      v23 = v27 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v19 & 0xFFFFFFFFFFFFFE38LL) == 0 )
        goto LABEL_6;
    }
    else
    {
      v23 = v20 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v19 & 0xFFFFFFFFFFFFFE38LL) == 0 )
      {
LABEL_6:
        v15 = (unsigned int)v19 & 0xFFFFFE3F | v23;
        goto LABEL_7;
      }
    }
    v15 = sub_A70C40(v21, v23, v19 & 0xFFFFFFFFFFFFFE3FLL);
  }
LABEL_7:
  v24 = sub_A77C90(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v15, a5, a6, a7, v11);
  sub_1EA6140(a2, v24, 4, 4);
  *v25 = a11;
  return v24;
}
