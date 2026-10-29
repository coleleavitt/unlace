__int64 __fastcall sub_12F1180(_QWORD *a1, int a2, int a3, int a4, unsigned __int8 a5, __int64 a6, unsigned __int8 a7)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 result; // rax
  __int64 *v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v7 = a1[2];
  v8 = *(_QWORD *)(v7 + 160);
  v9 = (*(_BYTE *)(v8 + 1) & 0x40) != 0;
  v10 = *(_DWORD *)(*(_QWORD *)(v7 + 64) + 224LL) != 0;
  v19 = (__int64 *)a1[26];
  v20 = (__int64)(a1[27] - (_QWORD)v19) >> 4;
  v11 = *(_QWORD *)(v8 + 432);
  v12 = (*(_QWORD *)(v8 + 440) - v11) >> 4;
  v13 = sub_12EF2D0(a1);
  sub_12F0D80(
    v22,
    a2,
    a3,
    **(const char ***)(a1[2] + 48LL),
    *(_QWORD *)(*(_QWORD *)(a1[2] + 48LL) + 8LL),
    a4,
    a5,
    a1[12],
    a1[10],
    a1[14],
    v13,
    v11,
    v12,
    v19,
    v20,
    a6,
    a7,
    v10,
    v9);
  result = a1[21];
  a1[21] = v22[0];
  v22[0] = result;
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32))-- == 1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 24) + 8LL))(result + 24);
  }
  return result;
}
