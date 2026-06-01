__int64 __fastcall sub_DBF490(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r12
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __m128i v10; // [rsp+10h] [rbp-68h]
  _QWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  unsigned int v14; // [rsp+48h] [rbp-30h]

  v3 = a3;
  v9 = _mm_loadu_si128((const __m128i *)sub_E21760(a1, 16));
  sub_E21790(a1, 16);
  sub_E1EE80(v11);
  if ( v12 )
  {
    v6 = v11[0];
    v4 = v13;
LABEL_9:
    v7 = v4 + v6 + 40;
    goto LABEL_10;
  }
  v4 = v13;
  v5 = *(_QWORD *)(v13 + 32);
  if ( *(_DWORD *)(v5 + 24) != v14 && v14 )
    v5 = *(_QWORD *)(v13 + v14 + 32);
  v6 = v11[0];
  if ( !*(_BYTE *)(v5 + 60) )
    goto LABEL_9;
  v7 = v13 + v11[0] + 72;
  if ( v11[0] != v14 )
    goto LABEL_9;
LABEL_10:
  sub_E232A0(v11);
  v10 = _mm_load_si128(&v9);
  *(_QWORD *)v7 = v10.m128i_i64[0];
  *(_DWORD *)(v7 + 8) = v10.m128i_i32[2];
  *(_BYTE *)(*(_QWORD *)(a2 + 160) + v3 + 4) |= 2u;
  return 1;
}
