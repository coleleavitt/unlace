__int64 __fastcall sub_637E20(__int64 a1, __int64 a2, char *a3, char **a4)
{
  __int64 *v4; // rbp
  __int64 v5; // rbx
  _BYTE v7[4]; // [rsp+Ch] [rbp-1434h] BYREF
  FILE *v8; // [rsp+10h] [rbp-1430h] BYREF
  char v9[1024]; // [rsp+18h] [rbp-1428h] BYREF
  _BYTE v10[4104]; // [rsp+418h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1420h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = *(__int64 **)(*(_QWORD *)a1 + 1512LL);
  v5 = sub_637640(v4, a2, a3, a4, v9, (__int64)v10, 4096, &v8, (__int64)v7);
  sub_62F430(v4, v5);
  qfclose(v8);
  return v5;
}

