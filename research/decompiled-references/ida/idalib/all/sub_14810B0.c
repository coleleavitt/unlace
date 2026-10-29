__int64 __fastcall sub_14810B0(__int64 a1)
{
  char v1; // al
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
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
  vars10 = a1;
  vars0 = (_BYTE *)(a1 + 1952);
  v1 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  vars8 = v1;
  vars1C = 63;
  vars18 = 1507350;
  vars20 = sub_146A990;
  vars28 = 0;
  vars30 = 0;
  if ( !(unsigned __int8)sub_156A040(&vars0, 14, &byte_22F0C30, 0) )
  {
    v5 = sub_14C4CD0(a1);
    if ( v5 == 1 )
    {
      sub_156E210(&vars0);
    }
    else if ( !(unsigned __int8)sub_14808E0((__int64)&vars0, (__int64 *)&byte_9[5], v3, v4, v6, v7) )
    {
      result = v5;
      goto LABEL_3;
    }
  }
  result = 1;
LABEL_3:
  *vars0 = vars8;
  return result;
}
