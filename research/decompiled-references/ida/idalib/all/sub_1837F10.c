__int64 __fastcall sub_1837F10(_QWORD *a1, _BYTE *a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-58h]
  __int64 v10; // [rsp+10h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-30h]

  WORD2(v8) = 0;
  v11 = 0;
  LODWORD(v8) = 14;
  v10 = sub_B8C1B0(*(_QWORD *)(*a1 + 544LL));
  result = sub_1DBA9B0(*a1, a2, v3, v4, v5, v6, v8, a3, v10, 0, 0, v11, 0, 0);
  *a2 = 1;
  return result;
}
