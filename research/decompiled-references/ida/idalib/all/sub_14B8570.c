__int64 __fastcall sub_14B8570(__int64 a1, __m128i a2, __m128 a3)
{
  char v3; // al
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r13
  __int16 v12; // [rsp+Eh] [rbp-6Ah] BYREF
  _BYTE *v13; // [rsp+10h] [rbp-68h] BYREF
  char v14; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-50h]
  __int16 v17; // [rsp+2Ch] [rbp-4Ch]
  __int64 (__fastcall *v18)(__int64); // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v17 = 63;
  v13 = (_BYTE *)(a1 + 1952);
  v3 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v4 = *(_DWORD *)(a1 + 40);
  v14 = v3;
  v15 = a1;
  v16 = 1507350;
  v18 = sub_146A990;
  v19 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_156A040(&v13, 14, &byte_22F0C30, 0) )
  {
    v10 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
    if ( !(_BYTE)v6 )
    {
      v11 = *(unsigned int *)(a1 + 16);
      sub_14808E0((__int64)&v13, nullptr, v6, v7, v8, v9);
      result = sub_1967CB0(*(_QWORD *)(a1 + 96), v4, 5, 1, v10, (v11 << 32) | v4);
      goto LABEL_3;
    }
    v12 = 23;
    sub_15680D0(a1, &v12, 1, 1);
  }
  result = 1;
LABEL_3:
  *v13 = v14;
  return result;
}
