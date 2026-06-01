__int64 __fastcall sub_4444E0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  int v3; // eax
  char *v4; // rbx
  __int64 v5; // rbp
  bool v6; // zf
  size_t (**v7)(const char *); // rax
  int v9; // [rsp+4h] [rbp-24h] BYREF

  sub_4AE1A0(&qword_65A598);
  v1 = qword_65A588(qword_65A540, *a1, &v9);
  v2 = v1;
  if ( !v9 )
    *(_QWORD *)(*(_QWORD *)(v1 + 24) + 64LL) = 0;
  v3 = strlen((const char *)*a1);
  v4 = (char *)sub_40FB00(v3 + 1);
  v5 = sub_40FB00(72);
  *(_QWORD *)v5 = strcpy(v4, (const char *)*a1);
  *(_QWORD *)(v5 + 8) = a1[1];
  *(_QWORD *)(v5 + 16) = a1[2];
  *(_QWORD *)(v5 + 24) = a1[3];
  *(_DWORD *)(v5 + 32) = *((_DWORD *)a1 + 10);
  v6 = *((_DWORD *)a1 + 10) == 1;
  *(_QWORD *)(v5 + 40) = a1[4];
  v7 = (size_t (**)(const char *))sub_446F30;
  if ( v6 )
    v7 = &strlen;
  *(_QWORD *)(v5 + 48) = v7;
  *(_QWORD *)(v5 + 64) = v2;
  *(_QWORD *)(v2 + 24) = v5;
  *(_DWORD *)(v5 + 56) = 1;
  sub_4AE230(&qword_65A598);
  return v5;
}

