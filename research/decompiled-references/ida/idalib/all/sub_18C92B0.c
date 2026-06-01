__int64 __fastcall sub_18C92B0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rbp
  __int64 result; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]

  v6 = a4;
  v10 = a2;
  switch ( a2 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
      v16 = a1[31];
      v17 = *(_QWORD *)(v16 + 18648);
      v18 = sub_A71230(v16, v17, 0);
      v20 = a1[31];
      v21 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(v21 + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          BUG();
        v21 = sub_F63050(
                v21,
                v17,
                (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
                v19);
      }
      v22 = sub_A70010(v20, *(_QWORD *)(v21 + 32));
      v11 = (_QWORD *)a1[31];
      v12 = v22;
      goto LABEL_3;
    case 4u:
    case 5u:
      v11 = (_QWORD *)a1[31];
      v12 = v11[2346];
      goto LABEL_3;
    case 6u:
      v23 = a1[576];
      if ( !v23 )
      {
        v23 = sub_18C8CC0(a1, a3);
        a1[576] = v23;
        result = 1;
        if ( !v23 )
          return result;
      }
      v24 = a1[31];
      v25 = sub_A7A9D0(v24, v23, v10, a4, a5, a6);
      v26 = sub_A70010(v24, v25 | 1);
      v11 = (_QWORD *)a1[31];
      v12 = v26;
LABEL_3:
      v27 = v12;
      v13 = a1[68];
      v14 = sub_EEE9A0(32, v11, 8u);
      sub_BFAD80(v14, a1[31], a2, v27, a3, v6, v13);
      return v14;
    default:
      v11 = (_QWORD *)a1[31];
      v12 = 0;
      goto LABEL_3;
  }
}
