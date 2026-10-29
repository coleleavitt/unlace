__int64 __fastcall sub_15408A0(__int64 a1, void *a2, __m128i a3, __m128 a4)
{
  int *v5; // rbx
  unsigned int v6; // ebp
  _BYTE *v7; // rax
  char v8; // al
  char v9; // r13
  bool v10; // r12
  unsigned int v11; // edx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-B0h]
  int v21; // [rsp+10h] [rbp-A8h] BYREF
  int v22; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v23; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  __int64 v25; // [rsp+28h] [rbp-90h] BYREF
  __m128i v26; // [rsp+30h] [rbp-88h] BYREF
  char v27; // [rsp+40h] [rbp-78h]
  char v28; // [rsp+42h] [rbp-76h]

  v5 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) != 22 )
  {
    v13 = 1;
    sub_1564840(&v26, a1, a1 + 16, 1625);
    sub_1533090((unsigned __int8 **)&v26, (__int64)"switch");
    sub_AEA040((__int64)&v26);
    v26.m128i_i16[0] = 63;
    sub_15680D0(a1, &v26, 1, 0);
    return v13;
  }
  v7 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*v7 & 1) != 0 )
  {
    v9 = 1;
    v10 = 1;
    v11 = 4120;
  }
  else
  {
    v8 = v7[1] & 8;
    v9 = v8 != 0;
    v10 = v8 != 0;
    v11 = v8 == 0 ? 4096 : 4120;
  }
  sub_146B5E0(&v23, a1, v11, 1, 0);
  v27 = 0;
  v28 = 0;
  v24 = 0;
  v26 = 0u;
  v21 = 0;
  v22 = 0;
  if ( !(unsigned __int8)sub_1537490((const __m128i *)a1, &v24, &v26, v6, 2, &v21, a3, a4, &v22) )
  {
    v20 = sub_1C396C0(
            *(_QWORD *)(a1 + 96),
            v6,
            v21,
            (unsigned int)v24 & 0xFFFFFFFE,
            v22,
            v12,
            v26.m128i_i64[0],
            v26.m128i_i64[1]);
    if ( v20 != 1 )
    {
      sub_15ED420(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 2);
      sub_146B5E0(&v25, a1, 8u, v9, *(_WORD *)(a1 + 32) == 24);
      if ( v10 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
        v16 = *(_QWORD *)(v15 + 32);
        if ( v16 )
        {
          --*(_WORD *)(v16 + 14);
          --*(_WORD *)(v15 + 16);
        }
      }
      v17 = sub_153D810(a1, a2, 0, a3, a4);
      if ( v25 )
      {
        sub_1564F70(v25);
        v25 = 0;
      }
      if ( v23 )
      {
        sub_1564F70(v23);
        v23 = 0;
      }
      v13 = sub_1C50070(*(_QWORD *)(a1 + 96), v6, v20 & 0xFFFFFFFFFFFFFFFELL, v17 & 0xFFFFFFFFFFFFFFFELL);
      if ( v25 )
        sub_1564F70(v25);
      goto LABEL_6;
    }
    if ( *(_WORD *)(a1 + 32) == 24 )
    {
      v18 = *(_DWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 92);
      v19 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v18;
      sub_14634E0(v19, v5);
      LOWORD(v25) = 25;
    }
    else
    {
      LOWORD(v25) = 63;
    }
    sub_15680D0(a1, &v25, 1, 0);
  }
  v13 = 1;
LABEL_6:
  if ( v23 )
    sub_1564F70(v23);
  return v13;
}
