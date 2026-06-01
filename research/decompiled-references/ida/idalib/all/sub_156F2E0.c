void __fastcall sub_156F2E0(const __m128i *a1, double a2, __m128 a3)
{
  __int64 *v3; // rsi
  bool v4; // zf
  __int8 v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i *v19; // [rsp+18h] [rbp-178h] BYREF
  __int8 v20; // [rsp+20h] [rbp-170h]
  const __m128i *v21; // [rsp+28h] [rbp-168h]
  int v22; // [rsp+30h] [rbp-160h]
  __int16 v23; // [rsp+34h] [rbp-15Ch]
  __int64 (__fastcall *v24)(__int64); // [rsp+38h] [rbp-158h]
  __int64 v25; // [rsp+40h] [rbp-150h]
  __int64 v26; // [rsp+48h] [rbp-148h]
  __int64 v27; // [rsp+58h] [rbp-138h] BYREF
  void *v28; // [rsp+60h] [rbp-130h]
  __int64 v29; // [rsp+68h] [rbp-128h]
  _BYTE v30[16]; // [rsp+70h] [rbp-120h] BYREF
  __int8 *v31; // [rsp+80h] [rbp-110h] BYREF
  void *v32; // [rsp+88h] [rbp-108h]
  __int64 v33; // [rsp+90h] [rbp-100h]
  _BYTE v34[16]; // [rsp+98h] [rbp-F8h] BYREF
  unsigned __int8 *v35; // [rsp+A8h] [rbp-E8h] BYREF
  void *v36; // [rsp+B0h] [rbp-E0h]
  __int64 v37; // [rsp+B8h] [rbp-D8h]
  _BYTE v38[16]; // [rsp+C0h] [rbp-D0h] BYREF
  __int8 *v39; // [rsp+D0h] [rbp-C0h] BYREF
  void *v40; // [rsp+D8h] [rbp-B8h]
  __int64 v41; // [rsp+E0h] [rbp-B0h]
  _BYTE v42[16]; // [rsp+E8h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v44; // [rsp+100h] [rbp-90h]
  void *ptr[2]; // [rsp+108h] [rbp-88h]
  __int64 v46; // [rsp+118h] [rbp-78h]
  __int64 v47; // [rsp+120h] [rbp-70h]
  __int64 v48; // [rsp+128h] [rbp-68h]
  int v49; // [rsp+130h] [rbp-60h]
  __int64 v50; // [rsp+138h] [rbp-58h]
  __int64 v51; // [rsp+148h] [rbp-48h]
  int v52; // [rsp+150h] [rbp-40h]

  v3 = (__int64 *)&v43;
  *(_OWORD *)ptr = 0;
  v43 = 0;
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( (unsigned __int8)sub_156E250((__int64)a1, &v43, (__m128i)0LL, a3) )
  {
    if ( !HIDWORD(v46) )
      return;
LABEL_7:
    free(ptr[1]);
    return;
  }
  v4 = a1[2].m128i_i16[0] == 24;
  v21 = a1;
  v19 = (__m128i *)&a1[122];
  v5 = a1[122].m128i_i8[0];
  v22 = 1638424;
  v20 = v5;
  a1[122].m128i_i8[0] = 1;
  v23 = 63;
  v24 = sub_1478A90;
  v25 = 0;
  v26 = 0;
  if ( !v4 )
    goto LABEL_5;
  if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800((__int64)&v19) )
    {
LABEL_5:
      sub_FC70B0((__int64)&v35, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 14);
      sub_AE9DF0(&v35, 24, 4u);
      sub_AEA040((__int64)&v35);
      goto LABEL_6;
    }
  }
  else
  {
    LODWORD(v26) = sub_1478A90((__int64)a1);
  }
  if ( v52 == 1 )
  {
    LOWORD(v35) = HIWORD(v22);
    sub_1566E40((__int64)v21, &v35, 1, 2);
    sub_14808E0((__int64)&v19, (__int64 *)&v35, v11, v12, v13, v14);
  }
  else
  {
    v10 = a1[2].m128i_u16[0];
    if ( (_WORD)v10 != 25 && (_WORD)v10 != 1 )
    {
      v6 = (unsigned int)(v10 - 456);
      if ( (unsigned __int16)(v10 - 456) > 2u && (_WORD)v10 != 460 )
      {
        do
        {
          v27 = 0;
          v29 = 0x200000000LL;
          v28 = v30;
          v31 = &a1[31].m128i_i8[8];
          v32 = v34;
          v33 = 0x200000000LL;
          if ( (unsigned __int16)(v10 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
            sub_14AB020((__int64)a1, (unsigned int *)&v27, (__m128i)0LL, a3);
          v37 = 0x200000000LL;
          v36 = v38;
          v35 = nullptr;
          v39 = &a1[31].m128i_i8[8];
          v40 = v42;
          v41 = 0x200000000LL;
          v17 = sub_156E800((__int64)a1, &v27, (__int64 *)&v35, 0, (__m128i)0LL, a3, v15, v16);
          if ( v17 )
          {
            v18 = a1[6].m128i_i64[0];
            if ( !**(_QWORD **)(v18 + 608) )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v18 + 256) + 24LL))(*(_QWORD *)(v18 + 256), v17);
          }
          sub_15DCED0(v39, &v39);
          if ( v40 != v42 )
            free(v40);
          if ( v36 != v38 )
            free(v36);
          v3 = (__int64 *)&v31;
          sub_15DCED0(v31, &v31);
          if ( v32 != v34 )
            free(v32);
          if ( v28 != v30 )
            free(v28);
          v10 = a1[2].m128i_u16[0];
          if ( (_WORD)v10 == 25 )
            break;
          if ( (_WORD)v10 == 1 )
            break;
          v6 = (unsigned int)(v10 - 456);
          if ( (unsigned __int16)(v10 - 456) <= 2u )
            break;
        }
        while ( (_WORD)v10 != 460 );
      }
    }
    sub_14808E0((__int64)&v19, v3, v6, v7, v8, v9);
  }
LABEL_6:
  v19->m128i_i8[0] = v20;
  if ( HIDWORD(v46) )
    goto LABEL_7;
}
