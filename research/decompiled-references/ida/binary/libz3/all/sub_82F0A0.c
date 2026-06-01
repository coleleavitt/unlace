__int64 __fastcall sub_82F0A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rsi
  _DWORD *v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // r15
  unsigned int v22; // esi
  __m128i v23; // xmm0
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // [rsp+0h] [rbp-100h]
  _BYTE v31[8]; // [rsp+8h] [rbp-F8h] BYREF
  int v32[8]; // [rsp+10h] [rbp-F0h] BYREF
  unsigned int *v33; // [rsp+30h] [rbp-D0h]
  __m128i v34; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v36[32]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  char v39; // [rsp+88h] [rbp-78h]
  _QWORD v40[5]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v41; // [rsp+B8h] [rbp-48h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
    return 0;
  v11 = (unsigned int)sub_FF9E10(*(_QWORD *)(a1 + 496), a2);
  v12 = sub_FF9E10(*(_QWORD *)(a1 + 496), a3);
  if ( v12 == -1 || (_DWORD)v11 == -1 )
    return 0;
  if ( (_DWORD)v11 == v12 )
    return 0;
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(__int64 **)(v13 + 8 * v11);
  v15 = *(__int64 **)(v13 + 8LL * v12);
  v30 = (__int64)v14;
  if ( v14[8] == v15[8] )
    return 0;
  v16 = *v14;
  v17 = *v15;
  if ( a5 )
    goto LABEL_21;
  if ( *(_WORD *)(v16 + 4) )
  {
    if ( *(_WORD *)(v17 + 4) )
      goto LABEL_21;
    v20 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v20 || *v20 == 5 && !v20[1] )
      goto LABEL_21;
    goto LABEL_19;
  }
  v18 = *(_QWORD *)(v16 + 16);
  v19 = *(_DWORD **)(v18 + 24);
  if ( !v19 )
  {
    if ( *(_WORD *)(v17 + 4) )
      goto LABEL_21;
    v20 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v20 )
      goto LABEL_21;
    if ( *v20 != 5 )
      goto LABEL_19;
LABEL_46:
    if ( !v20[1] )
      goto LABEL_21;
    v19 = *(_DWORD **)(v18 + 24);
    if ( !v19 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( *v19 == 5 )
  {
    if ( !v19[1] )
      goto LABEL_21;
    if ( *(_WORD *)(v17 + 4) )
      goto LABEL_21;
    v20 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v20 )
      goto LABEL_21;
  }
  else if ( *(_WORD *)(v17 + 4) || (v20 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) == nullptr )
  {
    if ( !*v19 && v19[1] == 4 )
      return 0;
    goto LABEL_21;
  }
  if ( *v20 == 5 )
    goto LABEL_46;
LABEL_13:
  if ( !*v19 && v19[1] == 4 )
    return 0;
LABEL_19:
  if ( !*v20 && v20[1] == 4 )
    return 0;
LABEL_21:
  v21 = sub_15D1F10(v16);
  if ( v21 != sub_15D1F10(v17) )
    return 0;
  sub_829BD0((_QWORD *)a1);
  sub_83B2E0(v31, a4);
  sub_83B400(v35, a4);
  while ( v31[0] )
  {
    if ( v33 == v37 )
      goto LABEL_39;
    v22 = *v33;
LABEL_25:
    sub_82E330(a1, v22);
    if ( v31[0] )
    {
      v33 += 10;
    }
    else
    {
      v24 = v34.m128i_i64[0] + 12;
      v34.m128i_i64[0] = v24;
      if ( v34.m128i_i64[1] != v24 )
      {
        v25 = 0;
        while ( *(_DWORD *)(v24 + 4) != 2 )
        {
          v24 += 12;
          v25 = 1;
          if ( v34.m128i_i64[1] == v24 )
          {
            v34.m128i_i64[0] = v34.m128i_i64[1];
            goto LABEL_27;
          }
          v5 = v24;
        }
        if ( v25 )
          v34.m128i_i64[0] = v5;
      }
    }
LABEL_27:
    v39 = v31[0];
    v40[0] = 0;
    v40[1] = 0;
    v40[2] = 1;
    v40[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v40, v32);
    v23 = _mm_load_si128(&v34);
    v40[4] = v33;
    v41 = v23;
    sub_25A130((char *)v40);
  }
  if ( v34.m128i_i64[0] != v38 )
  {
    v22 = *(_DWORD *)(v34.m128i_i64[0] + 8);
    goto LABEL_25;
  }
LABEL_39:
  sub_25A130(v36);
  sub_25A130((char *)v32);
  v26 = sub_880D40(a1, a4, v30, v15);
  v27 = sub_7E5C30(a1, (const void **)(a1 + 752), (__int64 *)(a1 + 776), v30, (__int64)v15, v26);
  sub_7CA650(*(_QWORD *)(a1 + 80), v30, (__int64)v15, (__int64)(v27 - 1), v28, v29);
  return 1;
}

