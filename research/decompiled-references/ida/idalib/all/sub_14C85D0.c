__int64 __fastcall sub_14C85D0(__int64 a1, __m128i a2, __m128 a3)
{
  char v3; // al
  unsigned int v4; // r13d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // bp
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // [rsp+Eh] [rbp-6Ah] BYREF
  _BYTE *v20; // [rsp+10h] [rbp-68h] BYREF
  char v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  __int16 v24; // [rsp+2Ch] [rbp-4Ch]
  __int64 (__fastcall *v25)(__int64); // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v24 = 63;
  v20 = (_BYTE *)(a1 + 1952);
  v3 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v4 = *(_DWORD *)(a1 + 40);
  v21 = v3;
  v22 = a1;
  v23 = 1507350;
  v25 = sub_146A990;
  v26 = 0;
  v27 = 0;
  if ( (unsigned __int8)sub_156A040(&v20, 1625, "__uuidof", 0) )
    goto LABEL_2;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 )
  {
    LOBYTE(v19) = 0;
    if ( sub_147F1B0(a1) )
      goto LABEL_6;
LABEL_10:
    v14 = *(_QWORD *)(a1 + 96);
    sub_18C74E0(v14, 0, 0, 4);
    v13 = sub_14BFC10((const __m128i *)a1, 0, a2);
    if ( v13 == 1 )
    {
      v19 = 23;
      sub_15680D0(a1, &v19, 1, 1);
    }
    else
    {
      sub_14808E0((__int64)&v20, nullptr, v15, v16, v17, v18);
      v13 = sub_19BED30(*(_QWORD *)(a1 + 96), v4, (unsigned int)v27, 0, v13 & 0xFFFFFFFFFFFFFFFELL, HIDWORD(v27));
    }
    sub_190D5E0(v14);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_15612F0(a1, 0, &v19) )
    goto LABEL_10;
LABEL_6:
  v6 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
  v8 = v7;
  v9 = v6;
  sub_14808E0((__int64)&v20, nullptr, v7, v10, v11, v12);
  if ( !v8 )
  {
    v13 = sub_19BED30(*(_QWORD *)(a1 + 96), v4, (unsigned int)v27, 1, v9, HIDWORD(v27));
LABEL_8:
    result = v13;
    goto LABEL_3;
  }
LABEL_2:
  result = 1;
LABEL_3:
  *v20 = v21;
  return result;
}
