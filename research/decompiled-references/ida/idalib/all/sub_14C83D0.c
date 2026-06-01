__int64 __fastcall sub_14C83D0(__int64 a1, __m128i a2, __m128 a3)
{
  __int64 v3; // rbp
  char v4; // al
  unsigned int v5; // r13d
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // bp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+8h] [rbp-90h]
  __int16 v20; // [rsp+1Eh] [rbp-7Ah] BYREF
  _BYTE *v21; // [rsp+20h] [rbp-78h] BYREF
  char v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  __int16 v25; // [rsp+3Ch] [rbp-5Ch]
  __int64 (__fastcall *v26)(__int64); // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]

  v3 = 1;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v25 = 63;
  v21 = (_BYTE *)(a1 + 1952);
  v4 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v5 = *(_DWORD *)(a1 + 40);
  v22 = v4;
  v23 = a1;
  v24 = 1507350;
  v26 = sub_146A990;
  v27 = 0;
  v28 = 0;
  if ( !(unsigned __int8)sub_156A040(&v21, 1625, "typeid", 0) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v8 = v28;
    sub_18C79B0(v7, 0, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    {
      if ( (unsigned __int8)sub_15612F0(a1, 0, &v20) )
        goto LABEL_5;
    }
    else
    {
      LOBYTE(v20) = 0;
      if ( sub_147F1B0(a1) )
      {
LABEL_5:
        v9 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
        v11 = v10;
        v19 = v9;
        sub_14808E0((__int64)&v21, nullptr, v10, v12, v13, v14);
        if ( !v11 && HIDWORD(v28) )
        {
          v3 = sub_19A99F0(*(_QWORD *)(a1 + 96), v5, v8, 1, v19);
          goto LABEL_8;
        }
        goto LABEL_7;
      }
    }
    v3 = sub_14BFC10((const __m128i *)a1, 0, a2);
    if ( v3 == 1 )
    {
      v20 = 23;
      sub_15680D0(a1, &v20, 1, 1);
      goto LABEL_8;
    }
    sub_14808E0((__int64)&v21, nullptr, v15, v16, v17, v18);
    if ( HIDWORD(v28) )
    {
      v3 = sub_19A99F0(*(_QWORD *)(a1 + 96), v5, v8, 0, v3 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_8;
    }
LABEL_7:
    v3 = 1;
LABEL_8:
    sub_190D5E0(v7);
  }
  *v21 = v22;
  return v3;
}
