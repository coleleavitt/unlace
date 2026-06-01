__int64 __fastcall sub_14BCD0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-80h]
  __int64 v12; // [rsp+10h] [rbp-70h] BYREF
  __int64 v13; // [rsp+18h] [rbp-68h] BYREF
  char v14[4]; // [rsp+20h] [rbp-60h] BYREF
  int v15; // [rsp+24h] [rbp-5Ch]
  char v16[24]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v4 = sub_11A4A0(a3, &v12, 12);
  if ( !v4 )
    return 0;
  v5 = sub_11A4A0(v4, &v13, 9);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v7 = *(_QWORD *)(v5 + 40);
  if ( *(_DWORD *)v7 != 25 )
    return 0;
  if ( (unsigned __int8)sub_12E6A0(a1, a2, v7 + 32, a2, v12, 0) )
  {
    v8 = (unsigned __int8 *)(v7 + 48);
    if ( (unsigned __int8)sub_12E6A0(a1, a2, v7 + 48, a2, v13, 0) )
      goto LABEL_10;
  }
  if ( !(unsigned __int8)sub_12E6A0(a1, a2, v7 + 32, a2, v13, 0) )
    return 0;
  v8 = (unsigned __int8 *)(v7 + 48);
  if ( !(unsigned __int8)sub_12E6A0(a1, a2, v7 + 48, a2, v12, 0) )
    return 0;
  v9 = v13;
  v13 = v12;
  v12 = v9;
LABEL_10:
  v11 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  sub_121540((__int64)v14, (unsigned __int8 *)(v7 + 32));
  sub_121540((__int64)v16, v8);
  sub_B0740((__int64)a1, a2, (__int64)v14, a2, (__int64)v14, a2, v12, 0);
  sub_B0740((__int64)a1, a2, (__int64)v16, a2, (__int64)v16, a2, v13, 0);
  sub_11A5D0((char *)(a3 + 32), v14);
  sub_11A5D0((char *)(a3 + 48), v16);
  sub_1291D0(a3, v11, 11, -1, 1);
  v10 = 2 * v15;
  *(_DWORD *)(*(_QWORD *)(a3 + 40) + 68LL) = 2 * v15;
  *(_DWORD *)(a3 + 36) = v10;
  sub_11A960((__int64)v16);
  sub_11A960((__int64)v14);
  return 1;
}
