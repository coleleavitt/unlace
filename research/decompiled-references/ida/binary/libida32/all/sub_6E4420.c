__int64 __fastcall sub_6E4420(_QWORD *a1, const char *a2)
{
  const char **v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r15
  _QWORD *v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (const char **)&off_2B0E300;
  v13[1] = __readfsqword(0x28u);
  v12 = 0;
  while ( strcmp(*v2, a2) )
  {
    v2 += 2;
    if ( &unk_2B0E3B0 == (_UNKNOWN *)v2 )
      goto LABEL_4;
  }
  v13[0] = *((unsigned __int8 *)v2 + 8);
  copy_tinfo_t(&v12);
  clear_tinfo_t(v13);
  v9 = sub_6D3E90(a1, &v12);
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
LABEL_4:
    v3 = 0;
    goto LABEL_5;
  }
  v10 = sub_6E4310(a1, (__int64)&v12, v5, v6, v7, v8);
  v11 = sub_B56930(a1[6], 0);
  sub_B68340(v11, v10);
  *(_QWORD *)(v11 + 40) = sub_6D3CC0((__int64)a1, a2);
  *(_QWORD *)(v11 + 80) = sub_A5DBD0(a1[6], v9, 0) & 0xFFFFFFFFFFFFFFFBLL | *(_QWORD *)(v11 + 80) & 3LL;
  sub_6D3180((__int64)a1, a2, v11, 2);
  sub_B70D90(v10, v11);
  v3 = sub_A4CD00(a1[6], v11, 0);
LABEL_5:
  clear_tinfo_t(&v12);
  return v3;
}

