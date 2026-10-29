_BOOL8 __fastcall sub_3AF60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  _BOOL4 v6; // r12d
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v2 = a1[61] - a1[60];
  v9 = __readfsqword(0x28u);
  v3 = qlseek(a1[59], 0, 1);
  v4 = a1[60];
  v5 = v3 - v4;
  v6 = qlseek(a1[59], v2 + v4 - 4, 0) != -1
    && qlread(a1[59], &v8, 4) == 4
    && v8 == 541413968
    && qlseek(a1[59], v2 - 8, 0) != -1
    && (int)sub_396B0((__int64)a1, a2, 4, 1) >= 0;
  qlseek(a1[59], v5 + a1[60], 0);
  return v6;
}

