__int64 __fastcall sub_14C7C00(__int64 a1, int a2, __m128i a3)
{
  bool v3; // zf
  char v4; // al
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 result; // rax
  _BYTE *vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  int vars18; // [rsp+18h] [rbp+18h]
  __int16 vars1C; // [rsp+1Ch] [rbp+1Ch]
  __int64 (__fastcall *vars20)(__int64); // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v3 = *(_WORD *)(a1 + 32) == 20;
  vars0 = (_BYTE *)(a1 + 1952);
  v4 = *(_BYTE *)(a1 + 1952);
  v5 = *(_DWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 1952) = 1;
  vars8 = v4;
  vars10 = a1;
  vars18 = 1376276;
  vars1C = 63;
  vars20 = sub_14789E0;
  vars28 = 0;
  vars30 = 0;
  if ( v3 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 90) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      sub_1568800(&vars0);
    else
      LODWORD(vars30) = sub_14789E0(a1);
  }
  v6 = sub_14C4CD0((const __m128i *)a1, a3);
  v11 = sub_14808E0((__int64)&vars0, (__int64 *)((char *)&word_3E + 1), v7, v8, v9, v10);
  if ( v6 == 1 || v11 )
    result = 1;
  else
    result = sub_1E4FE10(
               *(_QWORD *)(a1 + 96),
               *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
               a2 & 0xFFFFFFFE,
               v5,
               vars30,
               (unsigned int)v6 & 0xFFFFFFFE,
               HIDWORD(vars30));
  *vars0 = vars8;
  return result;
}
