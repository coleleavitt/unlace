__int64 __fastcall sub_36B220(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _WORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+4h] [rbp-34h]
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v1 = a1[5];
  v12 = __readfsqword(0x28u);
  v2 = a1[9];
  v8 = 0;
  v6[0] = v1;
  v7 = v2;
  v9 = a1[13];
  v10 = a1[17];
  v3 = a1[21];
  v4 = a1[1];
  v11 = v3;
  ((void (__fastcall *)(__int64, _WORD *))set_fixup)(v4, v6);
  return 0;
}
