__int64 __fastcall sub_14C9F90(__int64 a1, __m128i a2)
{
  bool v2; // r12
  unsigned int v3; // r13d
  char v4; // al
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  int vars18; // [rsp+18h] [rbp+18h]
  __int16 vars1C; // [rsp+1Ch] [rbp+1Ch]
  __int64 (__fastcall *vars20)(__int64); // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]

  v2 = *(_WORD *)(a1 + 32) != 288;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 40);
  vars10 = a1;
  vars0 = (_BYTE *)(a1 + 1952);
  v4 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  vars8 = v4;
  vars1C = 63;
  vars18 = 1507350;
  vars20 = sub_146A990;
  vars28 = 0;
  vars30 = 0;
  if ( (unsigned __int8)sub_156A040(&vars0, 14, &byte_22F0C30, 0) )
  {
    result = 1;
  }
  else
  {
    v6 = sub_14BFC10((const __m128i *)a1, 0, a2);
    sub_14808E0((__int64)&vars0, nullptr, v7, v8, v9, v10);
    result = sub_1E866F0(*(_QWORD *)(a1 + 96), v2, v3, v6 & 0xFFFFFFFFFFFFFFFELL, HIDWORD(vars30));
  }
  *vars0 = vars8;
  return result;
}
