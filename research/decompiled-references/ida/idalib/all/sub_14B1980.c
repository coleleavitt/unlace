void __fastcall sub_14B1980(__m128i *a1, unsigned int a2, __int64 *a3, unsigned int *a4, double a5, __m128 a6)
{
  unsigned __int64 v10; // rsi
  bool v11; // zf
  __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r10
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // eax
  __int32 v20; // edx
  __int64 *v21; // rdi
  __int64 *v22; // r10
  __int64 *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 *v26; // [rsp+0h] [rbp-148h]
  __int64 *v27; // [rsp+0h] [rbp-148h]
  int *m128i_i32; // [rsp+0h] [rbp-148h]
  __int64 *v29; // [rsp+0h] [rbp-148h]
  unsigned __int32 v30; // [rsp+8h] [rbp-140h]
  __int64 *v31; // [rsp+8h] [rbp-140h]
  unsigned int v32; // [rsp+14h] [rbp-134h]
  __int64 *v33; // [rsp+18h] [rbp-130h]
  __m128i *v34; // [rsp+20h] [rbp-128h] BYREF
  __int8 v35; // [rsp+28h] [rbp-120h]
  __m128i *v36; // [rsp+30h] [rbp-118h]
  int v37; // [rsp+38h] [rbp-110h]
  __int16 v38; // [rsp+3Ch] [rbp-10Ch]
  __int64 (__fastcall *v39)(__int64); // [rsp+40h] [rbp-108h]
  __int64 v40; // [rsp+48h] [rbp-100h]
  __int64 v41; // [rsp+50h] [rbp-F8h]
  unsigned __int8 *v42; // [rsp+60h] [rbp-E8h] BYREF
  void *v43; // [rsp+68h] [rbp-E0h]
  __int64 v44; // [rsp+70h] [rbp-D8h]
  __int64 v45; // [rsp+78h] [rbp-D0h] BYREF
  unsigned int v46; // [rsp+B0h] [rbp-98h] BYREF
  unsigned __int8 v47; // [rsp+B4h] [rbp-94h]
  __int64 v48; // [rsp+B8h] [rbp-90h]
  void *ptr[2]; // [rsp+C0h] [rbp-88h]
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __int64 v51; // [rsp+D8h] [rbp-70h]
  __int64 v52; // [rsp+E0h] [rbp-68h]
  int v53; // [rsp+E8h] [rbp-60h]
  __int64 v54; // [rsp+F0h] [rbp-58h]
  __int64 v55; // [rsp+100h] [rbp-48h]
  int v56; // [rsp+108h] [rbp-40h]

  v10 = (unsigned __int64)&v46;
  *(_OWORD *)ptr = 0;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  if ( (unsigned __int8)sub_156E250(a1, &v46) )
  {
    if ( !HIDWORD(v50) )
      return;
LABEL_7:
    free(ptr[1]);
    return;
  }
  v11 = a1[2].m128i_i16[0] == 24;
  v36 = a1;
  v34 = a1 + 122;
  v12 = a1[122].m128i_i8[0];
  v37 = 1638424;
  v35 = v12;
  a1[122].m128i_i8[0] = 1;
  v38 = 63;
  v39 = sub_1478A90;
  v40 = 0;
  v41 = 0;
  if ( !v11 )
    goto LABEL_5;
  if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v34) )
    {
LABEL_5:
      sub_1564840(&v42, a1, &a1[1], 14);
      sub_AE9DF0(&v42, 24, 4u);
      sub_AEA040((__int64)&v42);
      goto LABEL_6;
    }
  }
  else
  {
    LODWORD(v41) = sub_1478A90((__int64)a1);
  }
  if ( v56 == 1 )
    goto LABEL_13;
  if ( v56 == 2 )
  {
    sub_1564820(&v42, a1, v46, 2149);
    sub_AE9DF0(&v42, v47, 2u);
    sub_AEA040((__int64)&v42);
LABEL_13:
    sub_156E210(&v34);
    goto LABEL_6;
  }
  v16 = &v45;
  while ( 1 )
  {
    v17 = a1[2].m128i_u16[0];
    if ( (_WORD)v17 == 25 )
      break;
    if ( (_WORD)v17 == 1 )
      break;
    v13 = (unsigned int)(v17 - 456);
    if ( (unsigned __int16)(v17 - 456) <= 2u || (_WORD)v17 == 460 )
      break;
    if ( (unsigned __int16)(v17 - 395) > 1u )
    {
      if ( (_WORD)v17 == 63 )
      {
        v10 = 1;
        v29 = v16;
        sub_156E1F0(a1, 1, a2);
        v16 = v29;
      }
      else
      {
        v18 = v17 - 141;
        if ( v18 > 2u || (v19 = dword_2617160[v18], v19 == 3) )
        {
          v10 = *a4;
          v27 = v16;
          LODWORD(v42) = 0;
          v43 = nullptr;
          v44 = 0;
          sub_14AF050(a1, v10, a3, (int *)&v42, 0, (__m128i)0LL, a6);
          v16 = v27;
        }
        else
        {
          v20 = a1[1].m128i_i32[0];
          *a4 = v19;
          v32 = v19;
          v21 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = v20;
          v33 = v16;
          v30 = v20;
          m128i_i32 = a1[1].m128i_i32;
          sub_14634E0(v21, a1[1].m128i_i32);
          if ( a1[2].m128i_i16[0] == 62 )
          {
            v24 = a1[6].m128i_i64[0];
            v25 = a1[1].m128i_u32[0];
            v43 = v33;
            v42 = nullptr;
            v44 = 0x200000000LL;
            sub_183BF40(v24, v32, v30, v25, &v42);
            v22 = v33;
            if ( v43 != v33 )
            {
              free(v43);
              v22 = v33;
            }
          }
          else
          {
            sub_1564840(&v42, a1, m128i_i32, 14);
            sub_AE9DF0(&v42, 62, 4u);
            sub_AEA040((__int64)&v42);
            v22 = v33;
          }
          v23 = (__int64 *)a1->m128i_i64[1];
          v31 = v22;
          v10 = (unsigned __int64)&a1[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v23, m128i_i32);
          v16 = v31;
        }
      }
    }
    else
    {
      v10 = a2;
      v26 = v16;
      sub_14B1980(a1, a2, a3, a4, v15, dword_2617160);
      v16 = v26;
    }
  }
  sub_14808E0((__int64)&v34, (__int64 *)v10, v13, v14, v15, (__int64)dword_2617160);
LABEL_6:
  v34->m128i_i8[0] = v35;
  if ( HIDWORD(v50) )
    goto LABEL_7;
}
