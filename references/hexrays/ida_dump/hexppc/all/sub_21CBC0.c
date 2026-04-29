__int64 __fastcall sub_21CBC0(__m128i *a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int *v18; // rax
  __int32 v19; // eax
  int v20; // edx
  int v21; // esi
  __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // r13
  unsigned int v26; // r15d
  __int64 v28; // rax
  int v29; // edx
  int v30; // esi
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 *v33; // r14
  __int64 v34; // rdi
  _QWORD *v35; // r13
  char v36; // al
  __int64 that; // rax
  unsigned int v38; // eax
  __int64 v39; // rax
  int v40; // edx
  int v41; // esi
  _DWORD *v42; // r14
  __int64 v43; // [rsp-10h] [rbp-110h]
  __int64 v44; // [rsp+0h] [rbp-100h]
  unsigned int v45; // [rsp+8h] [rbp-F8h]
  unsigned int v46; // [rsp+8h] [rbp-F8h]
  __int64 v47; // [rsp+8h] [rbp-F8h]
  __m128i v48; // [rsp+10h] [rbp-F0h] BYREF
  __int64 *v49; // [rsp+20h] [rbp-E0h]
  int v50; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+2Ch] [rbp-D4h]
  __int64 *v52; // [rsp+30h] [rbp-D0h]
  unsigned int *v53; // [rsp+38h] [rbp-C8h]
  __int64 v54[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v55[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int128 v58; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v59)(); // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v62; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-38h]

  v51 = a5;
  v63 = __readfsqword(0x28u);
  v53 = a4;
  sub_123FE0((__int64)v54, (__int64)a3, (__int64)a4, 1u);
  v49 = (__int64 *)&v59;
  sub_123FE0((__int64)&v59, (__int64)a3, (__int64)v53, 0x100u);
  v52 = &a1[1].m128i_i64[1];
  sub_60E90(&a1[1].m128i_i64[1], (__int64 *)&v59);
  v8 = a1[2].m128i_i64[1];
  v9 = v61;
  v61 = 0;
  v10 = _mm_loadu_si128(&v62);
  v62 = 0;
  if ( v8 )
  {
    a1[3].m128i_i64[0] = 0;
    v48 = v10;
    qfree(v8);
    v11 = v61;
    a1[2].m128i_i64[1] = v9;
    a1[3] = _mm_load_si128(&v48);
    if ( v11 )
    {
      v62.m128i_i64[0] = 0;
      qfree(v11);
    }
  }
  else
  {
    a1[2].m128i_i64[1] = v9;
    a1[3] = v10;
  }
  qfree(v59);
  sub_60C00(v54, v52, v12, v13, v14, v15);
  v48.m128i_i64[0] = (__int64)&a1[2].m128i_i64[1];
  sub_313AE0(v55, &a1[2].m128i_u64[1]);
  v16 = a1[2].m128i_i64[1];
  if ( v16 )
  {
    a1[3].m128i_i64[0] = 0;
    qfree(v16);
    a1[2].m128i_i64[1] = 0;
    a1[3].m128i_i64[1] = 0;
  }
  if ( sub_60EF0(v54, a1->m128i_i32[0]) )
    goto LABEL_36;
  if ( !a1[4].m128i_i8[0] || v51 == 1 )
    goto LABEL_9;
  v29 = a1->m128i_i32[2];
  v30 = a1->m128i_i32[1];
  v59 = nullptr;
  v60 = nullptr;
  sub_60440(v49, v30, v29);
  v61 = 0;
  v62 = 0;
  if ( (unsigned __int8)sub_60D40(v54, v49) )
  {
    v31 = v61;
    if ( !v61 )
    {
LABEL_43:
      qfree(v59);
      a1[4].m128i_i8[0] = 0;
      goto LABEL_9;
    }
LABEL_42:
    v62.m128i_i64[0] = 0;
    qfree(v31);
    goto LABEL_43;
  }
  v36 = sub_3142F0(v55, &v61);
  v31 = v61;
  if ( v36 )
  {
    if ( !v61 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v61 )
  {
    v62.m128i_i64[0] = 0;
    qfree(v61);
  }
  qfree(v59);
LABEL_9:
  if ( *(_BYTE *)(a2 + 32) != 1 )
    sub_2180A0();
  if ( a1->m128i_i32[0] == *(_DWORD *)(a2 + 24) )
  {
    v35 = (_QWORD *)a1[1].m128i_i64[0];
    if ( (unsigned __int8)sub_60DE0(v35, v52) )
    {
      if ( (unsigned __int8)sub_313DC0(v48.m128i_i64[0], v35 + 2) )
        goto LABEL_56;
    }
  }
  v17 = *v53;
  if ( (_DWORD)v17 == 61 )
  {
    if ( !sub_60EF0(v52, a1->m128i_i32[0]) )
    {
      v17 = *v53;
      goto LABEL_12;
    }
LABEL_36:
    v26 = 0;
    goto LABEL_32;
  }
LABEL_12:
  if ( (unsigned int)(v17 - 8) > 1 )
  {
LABEL_37:
    if ( (unsigned int)v17 <= 0x29 )
    {
      v28 = 0x3FF60000040LL;
      if ( _bittest64(&v28, v17) )
        goto LABEL_31;
    }
  }
  else
  {
    v18 = v53;
    while ( *((_BYTE *)v18 + 32) == 4 )
    {
      v18 = *((unsigned int **)v18 + 5);
      v17 = *v18;
      if ( (unsigned int)(v17 - 8) > 1 )
        goto LABEL_37;
    }
  }
  if ( !a1[4].m128i_i8[0] )
  {
LABEL_29:
    if ( (unsigned int)sub_610E0((__int64)v52) == 1 && *v53 == 19 )
    {
      v32 = *((_QWORD *)v53 + 2);
      if ( v32 )
      {
        if ( *(_BYTE *)(v32 + 64) == 1 && v53[18] == *(_DWORD *)(v32 + 72) )
        {
          if ( sub_11AE80(*((unsigned int **)v53 + 2)) )
          {
            v33 = v49;
            sub_123FE0((__int64)v49, (__int64)a3, v32, 0x100u);
            sub_218390(v52, (__int64)v33);
            sub_90100(v33);
            v34 = a1[2].m128i_i64[1];
            if ( v34 )
            {
              a1[3].m128i_i64[0] = 0;
              qfree(v34);
              a1[2].m128i_i64[1] = 0;
              a1[3].m128i_i64[1] = 0;
            }
          }
        }
      }
    }
    if ( v51 == 1 && a1[4].m128i_i8[0] && 2 * a1->m128i_i32[2] == (unsigned int)sub_610E0((__int64)v52) )
    {
LABEL_56:
      v26 = 1;
      goto LABEL_32;
    }
LABEL_31:
    v26 = 3;
    goto LABEL_32;
  }
  v50 = sub_60F20(v52, 0);
  v19 = a1->m128i_i32[0];
  v20 = a1->m128i_i32[2];
  v21 = a1->m128i_i32[1];
  v56[0] = 0;
  v48.m128i_i32[0] = v19;
  v56[1] = 0;
  sub_60440(v56, v21, v20);
  v22 = a3[7];
  v57 = 0;
  v58 = 0;
  v23 = (_DWORD *)sub_125710((__int64)a3, v56, v22, 0, nullptr, 0, 0x101u);
  v25 = v23;
  if ( v23 && *v23 != 61 )
  {
    if ( v51 != 1 )
    {
      v44 = *(_QWORD *)(a3[60] + 112LL);
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v44 + 176LL))(
              v44,
              a1->m128i_u32[1],
              a1->m128i_u32[2],
              v24,
              v43);
      if ( v45 != -1 )
      {
        that = next_that(*((_QWORD *)v25 + 3), a3[5], sub_1B4790, 0);
        if ( (unsigned __int8)sub_32A5F0(v49, v44, v45, a3[5], that, a3[5]) )
        {
          if ( !*(_BYTE *)(a3[60] + 145LL) )
            goto LABEL_25;
          v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v44 + 176LL))(
                  v44,
                  a1->m128i_u32[0],
                  a1->m128i_u32[2]);
          if ( v38 == -1
            || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall **)()))(*(_QWORD *)v44 + 240LL))(
                 v44,
                 v38,
                 v59) != 1 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( (v51 & 2) == 0 )
      {
LABEL_22:
        if ( (*v25 == 4 || *v25 == 67 && v25[9] == v25[17])
          && (unsigned __int8)sub_11C340((char *)v25 + 32, v49, 0)
          && !v59 )
        {
          goto LABEL_65;
        }
        if ( (a1->m128i_i8[12] & 4) == 0 )
        {
          v39 = a3[7];
          v40 = a1->m128i_i32[2];
          v59 = nullptr;
          v41 = a1->m128i_i32[0];
          v60 = nullptr;
          v47 = v39;
          sub_60440(v49, v41, v40);
          v61 = 0;
          v62 = 0;
          v42 = (_DWORD *)sub_125710((__int64)a3, v49, v47, 0, nullptr, 0, 0x101u);
          if ( v61 )
          {
            v62.m128i_i64[0] = 0;
            qfree(v61);
          }
          qfree(v59);
          if ( v42 )
          {
            if ( *v42 == *v25 && (unsigned int)(*v42 - 12) <= 1 )
            {
LABEL_81:
              v26 = 2;
              goto LABEL_61;
            }
          }
        }
LABEL_25:
        if ( v48.m128i_i32[0] == v50 )
        {
LABEL_26:
          if ( v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree(v57);
          }
          qfree(v56[0]);
          goto LABEL_29;
        }
LABEL_64:
        a1[4].m128i_i8[0] = 0;
        goto LABEL_65;
      }
      v46 = (unsigned __int8)(*(_BYTE *)(a3[60] + 145LL) ^ (v48.m128i_i32[0] != v50)) | 0xE;
      if ( (unsigned __int8)sub_A7C90((__int64)a3, v53, (int)v53 + 64, v46) )
        goto LABEL_81;
      v60 = a3;
      v62.m128i_i16[0] = 257;
      v61 = v46;
      v59 = off_4CC8E0;
      v62.m128i_i8[2] = 0;
      if ( !(unsigned __int8)sub_A6F70((__int64)v49, (__int64)v53) )
      {
        if ( v62.m128i_i8[2] && (a1->m128i_i8[12] & 4) == 0 )
          goto LABEL_81;
        goto LABEL_22;
      }
    }
LABEL_65:
    v26 = 1;
    goto LABEL_61;
  }
  if ( v48.m128i_i32[0] == v50 )
    goto LABEL_26;
  v26 = 0;
  if ( v51 != 1 )
    goto LABEL_64;
LABEL_61:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  qfree(v56[0]);
LABEL_32:
  if ( v55[0] )
  {
    v55[1] = 0;
    qfree(v55[0]);
  }
  qfree(v54[0]);
  return v26;
}
