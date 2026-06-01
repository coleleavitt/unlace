unsigned __int64 __fastcall sub_3BA250(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  char v3; // al
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  bool v14; // dl
  _BYTE *v15; // rax
  int v16; // eax
  _BYTE *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = a2;
  vars8 = a3;
  v3 = is_cvt64(a1, a2, a3);
  v4 = vars8;
  if ( v3 )
  {
    v6 = (unsigned int)unpack_dd(&vars0);
    if ( v6 == 0xFFFFFFFFLL )
      v6 = -1;
  }
  else
  {
    v6 = unpack_dq(&vars0);
  }
  *(_QWORD *)a1 = v6;
  if ( (unsigned __int8)is_cvt64(&vars0, v4, v5) )
  {
    v7 = (unsigned int)v6 + (unsigned int)unpack_dd(&vars0);
    if ( v7 == 0xFFFFFFFFLL )
      v7 = -1;
  }
  else
  {
    v7 = v6 + unpack_dq(&vars0);
  }
  *(_QWORD *)(a1 + 8) = v7;
  v8 = unpack_ds(&vars0, vars8, 1);
  v9 = vars8;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = unpack_ds(&vars0, v9, 1);
  v11 = vars8;
  *(_QWORD *)(a1 + 24) = v10;
  v12 = unpack_ds(&vars0, v11, 1);
  v13 = vars8;
  v14 = 0;
  *(_QWORD *)(a1 + 32) = v12;
  v15 = vars0;
  if ( (unsigned __int64)vars0 < v13 )
  {
    v14 = *vars0 != 0;
    v15 = vars0 + 1;
  }
  vars0 = v15;
  *(_BYTE *)(a1 + 40) = v14;
  v16 = -1;
  if ( (dword_2CCC3C8 & 0x8000) == 0 )
    v16 = unpack_dd(&vars0) - 1;
  *(_DWORD *)(a1 + 44) = v16;
  return vars18 - __readfsqword(0x28u);
}
