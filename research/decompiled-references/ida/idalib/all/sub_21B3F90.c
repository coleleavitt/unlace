bool *__fastcall sub_21B3F90(bool *a1, unsigned __int8 **a2)
{
  void (*v3)(void); // rax
  unsigned __int8 *v4; // rax
  void (*v5)(void); // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  char v9; // dl
  char v10; // dl
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall ***v20)(); // r14
  __int64 v21; // rbp
  char v22; // dl
  unsigned __int8 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // [rsp+8h] [rbp-1C0h]
  __int64 v30; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-1A0h]
  char v33; // [rsp+30h] [rbp-198h]
  __m128i v34[2]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v35; // [rsp+60h] [rbp-168h]
  __m128i v36[2]; // [rsp+70h] [rbp-158h] BYREF
  __int16 v37; // [rsp+90h] [rbp-138h]
  __m128i v38[3]; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v39[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int16 v40; // [rsp+F0h] [rbp-D8h]
  __m128i v41[3]; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v42; // [rsp+130h] [rbp-98h] BYREF
  __int64 v43; // [rsp+140h] [rbp-88h]
  __int16 v44; // [rsp+150h] [rbp-78h]
  __m128i v45; // [rsp+160h] [rbp-68h] BYREF
  char v46; // [rsp+170h] [rbp-58h]

  v3 = *(void (**)(void))(*(_QWORD *)a2[1] + 64LL);
  if ( (char *)v3 != (char *)sub_21B1110 )
    v3();
  v4 = *a2;
  if ( ((*a2)[16] & 0xFB) != 0x6B && (*a2)[16] != 2 )
  {
    a1[8] &= ~1u;
    *a1 = 0;
    return a1;
  }
  v5 = *(void (**)(void))(*(_QWORD *)a2[1] + 64LL);
  if ( (char *)v5 != (char *)sub_21B1110 )
  {
    v5();
    v4 = *a2;
  }
  if ( (v4[15] & 0x20) == 0 )
  {
    sub_21B2E70((__int64)&v31, a2);
    v8 = v31;
    if ( (v33 & 1) != 0 )
    {
      a1[8] |= 1u;
      v31 = 0;
      *(_QWORD *)a1 = v8;
LABEL_13:
      sub_21B3170(&v31);
      return a1;
    }
    if ( v31 )
    {
      v9 = *(_BYTE *)(v31 + 11);
      if ( v9 && v9 != 6 )
        goto LABEL_25;
      v10 = *(_BYTE *)(v31 + 10);
    }
    else
    {
      v22 = *(_BYTE *)(v32 + 11);
      if ( v22 && v22 != 6 )
        goto LABEL_25;
      v10 = *(_BYTE *)(v32 + 10);
    }
    v11 = v10 & 7;
    if ( v11 != 3 && v11 )
    {
      if ( v11 != 1 )
      {
        if ( v11 != 2 )
        {
          v30 = v11;
          if ( !v31 )
            v8 = v32;
          v42.m128i_i64[0] = (__int64)&v30;
          v44 = 271;
          v12 = a2[1];
          v39[0].m128i_i64[0] = (__int64)" has invalid symbol type ";
          v13 = v8 - *((_QWORD *)v12 + 9);
          v35 = 265;
          v40 = 259;
          v37 = 259;
          v36[0].m128i_i64[0] = (__int64)"symbol csect aux entry with index ";
          v43 = 0;
          v34[0].m128i_i32[0] = v13 / 0x12;
          sub_A41580(v38, v36, v34, v32, 259, v7);
          sub_A41580(v41, v38, v39, v14, v15, v16);
          sub_A41580(&v45, v41, &v42, v17, v18, v19);
          v20 = sub_2195B10();
          v21 = operator new(0x40u);
          sub_2220590(v21, &v45, 3, v20);
          a1[8] |= 1u;
          *(_QWORD *)a1 = v21;
          goto LABEL_13;
        }
        goto LABEL_29;
      }
      if ( sub_21B3E80(a2[1], *a2) )
      {
        v23 = a2[1];
        v24 = *(_QWORD *)v23;
        v41[0] = _mm_loadu_si128((const __m128i *)a2);
        v25 = (*(__int64 (__fastcall **)(unsigned __int8 *))(v24 + 56))(v23);
        (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v41[0].m128i_i64[1] + 24LL))(v41[0].m128i_i64[1], v41);
        if ( v41[0].m128i_i64[0] != v25 )
        {
          (*(void (__fastcall **)(__m128i *, unsigned __int8 *, unsigned __int8 *))(*(_QWORD *)a2[1] + 88LL))(
            &v42,
            a2[1],
            *a2);
          v29 = v42.m128i_i64[0];
          (*(void (__fastcall **)(__m128i *, __int64, __int64))(*(_QWORD *)v41[0].m128i_i64[1] + 88LL))(
            &v45,
            v41[0].m128i_i64[1],
            v41[0].m128i_i64[0]);
          v26 = v45.m128i_i64[0];
          sub_A0AE70(v45.m128i_i64);
          sub_A0AE70(v42.m128i_i64);
          if ( v26 == v29 )
          {
            sub_21B2E70((__int64)&v45, (unsigned __int8 **)v41);
            v27 = v45.m128i_i64[0];
            if ( (v46 & 1) != 0 )
            {
              a1[8] |= 1u;
              v45.m128i_i64[0] = 0;
              *(_QWORD *)a1 = v27;
            }
            else
            {
              if ( !v45.m128i_i64[0] )
                v27 = v45.m128i_i64[1];
              v28 = *(_BYTE *)(v27 + 10);
              a1[8] &= ~1u;
              *a1 = (v28 & 7) != 2;
            }
            sub_21B3170(v45.m128i_i64);
            goto LABEL_13;
          }
        }
LABEL_29:
        a1[8] &= ~1u;
        *a1 = 1;
        goto LABEL_13;
      }
    }
LABEL_25:
    a1[8] &= ~1u;
    *a1 = 0;
    goto LABEL_13;
  }
  a1[8] &= ~1u;
  *a1 = 1;
  return a1;
}
