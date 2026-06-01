__int64 __fastcall sub_14C9D70(__int64 a1, __m128i a2, __m128 a3)
{
  bool v3; // r12
  char v4; // al
  unsigned int v5; // r13d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  size_t v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int16 v18; // [rsp+Eh] [rbp-6Ah] BYREF
  _BYTE *v19; // [rsp+10h] [rbp-68h] BYREF
  char v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+28h] [rbp-50h]
  __int16 v23; // [rsp+2Ch] [rbp-4Ch]
  __int64 (__fastcall *v24)(__int64); // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]

  v3 = *(_WORD *)(a1 + 32) != 315;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v23 = 63;
  v19 = (_BYTE *)(a1 + 1952);
  v4 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v5 = *(_DWORD *)(a1 + 40);
  v20 = v4;
  v21 = a1;
  v22 = 1507350;
  v24 = sub_146A990;
  v25 = 0;
  v26 = 0;
  if ( !(unsigned __int8)sub_156A040(&v19, 14, &byte_22F0C30, 0) )
  {
    v11 = sub_1496480(a1, nullptr, 23, 3u, nullptr, 0, a2, a3);
    if ( (_BYTE)v7 )
    {
      v18 = 66;
      sub_15680D0(a1, &v18, 1, 1);
      v18 = 23;
      sub_15680D0(a1, &v18, 1, 1);
    }
    else
    {
      if ( !v3 )
      {
        sub_14808E0((__int64)&v19, nullptr, v7, v8, v9, v10);
        result = sub_1E88960(*(_QWORD *)(a1 + 96), 0, v5, v11, 0, HIDWORD(v26));
        goto LABEL_3;
      }
      v12 = j__strlen(&byte_22F0C30);
      if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v12) )
      {
        v18 = 23;
        sub_15680D0(a1, &v18, 1, 1);
        result = 1;
        goto LABEL_3;
      }
      v13 = sub_14BFC10((const __m128i *)a1, 0, a2);
      sub_14808E0((__int64)&v19, nullptr, v14, v15, v16, v17);
      if ( v13 != 1 )
      {
        result = sub_1E88960(*(_QWORD *)(a1 + 96), 1, v5, v11, v13 & 0xFFFFFFFFFFFFFFFELL, HIDWORD(v26));
        goto LABEL_3;
      }
    }
  }
  result = 1;
LABEL_3:
  *v19 = v20;
  return result;
}
