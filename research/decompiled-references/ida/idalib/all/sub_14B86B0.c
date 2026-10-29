__int64 __fastcall sub_14B86B0(__int64 a1, __m128i a2, __m128 a3)
{
  unsigned int v3; // r12d
  char v4; // al
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
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
  if ( !(unsigned __int8)sub_156A040(&vars0, 1625, "__builtin_sycl_unique_stable_name", 0) )
  {
    v10 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
    if ( (_BYTE)v6 )
    {
      sub_156E210(&vars0);
    }
    else if ( !(unsigned __int8)sub_14808E0((__int64)&vars0, nullptr, v6, v7, v8, v9) )
    {
      result = sub_1C73FF0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 800LL), v3, (unsigned int)vars30, HIDWORD(vars30), v10);
      goto LABEL_3;
    }
  }
  result = 1;
LABEL_3:
  *vars0 = vars8;
  return result;
}
