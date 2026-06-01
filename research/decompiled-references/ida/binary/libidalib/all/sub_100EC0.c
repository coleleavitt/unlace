__int64 __fastcall sub_100EC0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // ebx
  int v7; // r14d
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rax
  char v12; // al
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  int v15; // ebp
  int v16; // eax
  __m128i *outctx; // r15
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r12
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // [rsp+10h] [rbp-A8h]
  __int64 v30; // [rsp+18h] [rbp-A0h]
  int v31; // [rsp+2Ch] [rbp-8Ch]
  int v32; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 (**v34)(); // [rsp+50h] [rbp-68h] BYREF
  int v35; // [rsp+58h] [rbp-60h]
  __int128 v36; // [rsp+60h] [rbp-58h]
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = sub_15D8D0(a1 + 440);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(__int16 *)(v2 + 28);
  *(_QWORD *)&v33 = -1;
  *((_QWORD *)&v33 + 1) = -1;
  v5 = sub_100B80(a1, &v33, v3, v4, 0, 0);
  v6 = v33;
  v7 = DWORD2(v33);
  *(_BYTE *)(a1 + 1249) = 0;
  v8 = HIDWORD(v33);
  v9 = v5;
  if ( v6 == 2 )
  {
    v10 = *(_QWORD *)(a1 + 760);
    if ( !*(_BYTE *)(v10 + 44) || *(_DWORD *)(v10 + 36) > 1u )
      return 0;
    *(_BYTE *)(a1 + 1249) = 1;
  }
  v36 = -1;
  v35 = 0;
  v34 = off_231218;
  sub_163F30(a1, 0);
  hexplace_t__copyfrom();
  v12 = *(_BYTE *)(a1 + 1249);
  if ( v12 )
    v9 = *((_QWORD *)&v36 + 1);
  v13 = *(_QWORD *)(a1 + 1232);
  if ( v13 == -1 || v9 != v13 )
  {
    *(_QWORD *)(a1 + 1232) = v9;
    *(_DWORD *)(a1 + 1240) = v6;
    *(_BYTE *)(a1 + 1250) = 0;
    if ( v9 != -1 )
    {
LABEL_11:
      v14 = *(_DWORD **)(a1 + 760);
      v15 = v14[7] * v14[6];
      if ( v12 )
      {
        if ( v15 <= v8 )
          v8 = v15 - 1;
      }
      else
      {
        v28 = sub_FF780(v14 + 4);
        if ( v28 <= v8 )
          v8 = v28 - 1;
      }
      v16 = 0;
      if ( v8 >= 0 )
        v16 = v8;
      v31 = v16;
      sub_FECD0(*(_QWORD **)(a1 + 1320));
      *(_QWORD *)(a1 + 1328) = a1 + 1312;
      *(_QWORD *)(a1 + 1320) = 0;
      *(_QWORD *)(a1 + 1336) = a1 + 1312;
      *(_QWORD *)(a1 + 1344) = 0;
      *(_QWORD *)(a1 + 1216) = 0;
      outctx = (__m128i *)create_outctx();
      hexplace_t__out_one_item();
      v20 = *(_QWORD *)(a1 + 1208);
      v21 = _mm_loadu_si128((const __m128i *)(a1 + 1216));
      *(_QWORD *)(a1 + 1208) = outctx[1].m128i_i64[1];
      *(_QWORD *)(a1 + 1216) = outctx[2].m128i_i64[0];
      *(_QWORD *)(a1 + 1224) = outctx[2].m128i_i64[1];
      outctx[1].m128i_i64[1] = v20;
      outctx[2] = v21;
      if ( outctx )
        (*(void (__fastcall **)(__m128i *, __m128i *))(outctx->m128i_i64[0] + 8))(outctx, outctx);
      if ( *(_QWORD *)(a1 + 1216) > 1u )
        tag_remove();
      if ( !*(_BYTE *)(a1 + 1249) )
        goto LABEL_23;
      if ( !*(_QWORD *)(a1 + 1216) )
      {
        v22 = v15;
        v23 = qustrlen();
        if ( v23 < v15 )
          goto LABEL_29;
        goto LABEL_23;
      }
      v22 = v15;
      v23 = qustrlen();
      if ( v23 >= v15 )
      {
LABEL_23:
        if ( !v6 )
          v6 = 1;
        v32 = v31 + sub_100210(*(_QWORD *)(a1 + 760) + 16LL, (__int64)&v34, v7, v6, v18, v19);
        sub_16B660(a1, &v32, 0);
        return 1;
      }
      while ( 1 )
      {
LABEL_29:
        v26 = *(_QWORD *)(a1 + 1216);
        if ( v26 )
        {
          v24 = v26 + 1;
          v19 = *(_QWORD *)(a1 + 1216);
          v25 = *(_QWORD *)(a1 + 1208);
          --v26;
          if ( *(_QWORD *)(a1 + 1224) < v24 )
            goto LABEL_31;
        }
        else
        {
          v25 = *(_QWORD *)(a1 + 1208);
          v19 = 1;
          v24 = 2;
          if ( *(_QWORD *)(a1 + 1224) < 2u )
          {
LABEL_31:
            v30 = v19;
            v29 = v24;
            v27 = qvector_reserve();
            v19 = v30;
            v24 = v29;
            *(_QWORD *)(a1 + 1208) = v27;
            v25 = v27;
          }
        }
        *(_QWORD *)(a1 + 1216) = v24;
        ++v23;
        *(_BYTE *)(v25 + v26) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 1208) + v19) = 0;
        if ( v22 == v23 )
          goto LABEL_23;
      }
    }
    *(_QWORD *)(a1 + 1216) = 0;
    *(_BYTE *)(a1 + 1249) = 0;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1240) != v6 )
  {
    *(_QWORD *)(a1 + 1232) = v9;
    *(_DWORD *)(a1 + 1240) = v6;
    *(_BYTE *)(a1 + 1250) = 0;
    goto LABEL_11;
  }
  return 1;
}

