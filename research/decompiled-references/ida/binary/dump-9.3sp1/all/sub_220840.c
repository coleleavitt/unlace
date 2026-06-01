__int64 __fastcall sub_220840(__m128i *a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5, int a6)
{
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // r14
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned int *v21; // rax
  __int32 v22; // eax
  int v23; // edx
  int v24; // esi
  __int64 v25; // rdx
  char *v26; // rax
  __int64 v27; // rcx
  char *v28; // r13
  unsigned int v29; // r15d
  __int64 v31; // rax
  int v32; // edx
  int v33; // esi
  __int64 v34; // rdi
  __int64 v35; // r13
  int v36; // r8d
  int v37; // r9d
  __int64 *v38; // r14
  __int64 v39; // rdi
  _QWORD *v40; // r13
  char v41; // al
  __int64 that; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  int v45; // edx
  int v46; // esi
  _DWORD *v47; // r14
  __int64 v48; // [rsp-10h] [rbp-110h]
  __int64 v49; // [rsp+0h] [rbp-100h]
  unsigned int v50; // [rsp+8h] [rbp-F8h]
  unsigned int v51; // [rsp+8h] [rbp-F8h]
  __int64 v52; // [rsp+8h] [rbp-F8h]
  __m128i v53; // [rsp+10h] [rbp-F0h] BYREF
  __int64 *v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+2Ch] [rbp-D4h]
  __int64 *v57; // [rsp+30h] [rbp-D0h]
  unsigned int *v58; // [rsp+38h] [rbp-C8h]
  __int64 v59[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int128 v63; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v64)(); // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v67; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+C8h] [rbp-38h]

  v56 = a5;
  v68 = __readfsqword(0x28u);
  v58 = a4;
  sub_127A20((__int64)v59, (__int64)a3, (__int64)a4, 1, a5, a6);
  v54 = (__int64 *)&v64;
  sub_127A20((__int64)&v64, (__int64)a3, (__int64)v58, 256, v9, v10);
  v57 = &a1[1].m128i_i64[1];
  sub_648D0(&a1[1].m128i_i64[1], (__int64 *)&v64);
  v11 = a1[2].m128i_i64[1];
  v12 = v66;
  v66 = 0;
  v13 = _mm_loadu_si128(&v67);
  v67 = 0;
  if ( v11 )
  {
    a1[3].m128i_i64[0] = 0;
    v53 = v13;
    qfree(v11);
    v14 = v66;
    a1[2].m128i_i64[1] = v12;
    a1[3] = _mm_load_si128(&v53);
    if ( v14 )
    {
      v67.m128i_i64[0] = 0;
      qfree(v14);
    }
  }
  else
  {
    a1[2].m128i_i64[1] = v12;
    a1[3] = v13;
  }
  qfree((__int64)v64);
  sub_64640(v59, v57, v15, v16, v17, v18);
  v53.m128i_i64[0] = (__int64)&a1[2].m128i_i64[1];
  sub_317C60(v60, &a1[2].m128i_u64[1]);
  v19 = a1[2].m128i_i64[1];
  if ( v19 )
  {
    a1[3].m128i_i64[0] = 0;
    qfree(v19);
    a1[2].m128i_i64[1] = 0;
    a1[3].m128i_i64[1] = 0;
  }
  if ( sub_64930(v59, a1->m128i_i32[0]) )
    goto LABEL_36;
  if ( !a1[4].m128i_i8[0] || v56 == 1 )
    goto LABEL_9;
  v32 = a1->m128i_i32[2];
  v33 = a1->m128i_i32[1];
  v64 = nullptr;
  v65 = nullptr;
  sub_63E80(v54, v33, v32);
  v66 = 0;
  v67 = 0;
  if ( (unsigned __int8)sub_64780(v59, v54) )
  {
    v34 = v66;
    if ( !v66 )
    {
LABEL_43:
      qfree((__int64)v64);
      a1[4].m128i_i8[0] = 0;
      goto LABEL_9;
    }
LABEL_42:
    v67.m128i_i64[0] = 0;
    qfree(v34);
    goto LABEL_43;
  }
  v41 = sub_318470(v60, &v66);
  v34 = v66;
  if ( v41 )
  {
    if ( !v66 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v66 )
  {
    v67.m128i_i64[0] = 0;
    qfree(v66);
  }
  qfree((__int64)v64);
LABEL_9:
  if ( *(_BYTE *)(a2 + 32) != 1 )
    sub_21BD20();
  if ( a1->m128i_i32[0] == *(_DWORD *)(a2 + 24) )
  {
    v40 = (_QWORD *)a1[1].m128i_i64[0];
    if ( (unsigned __int8)sub_64820(v40, v57) )
    {
      if ( (unsigned __int8)sub_317F40(v53.m128i_i64[0], v40 + 2) )
        goto LABEL_56;
    }
  }
  v20 = *v58;
  if ( (_DWORD)v20 == 61 )
  {
    if ( !sub_64930(v57, a1->m128i_i32[0]) )
    {
      v20 = *v58;
      goto LABEL_12;
    }
LABEL_36:
    v29 = 0;
    goto LABEL_32;
  }
LABEL_12:
  if ( (unsigned int)(v20 - 8) > 1 )
  {
LABEL_37:
    if ( (unsigned int)v20 <= 0x29 )
    {
      v31 = 0x3FF60000040LL;
      if ( _bittest64(&v31, v20) )
        goto LABEL_31;
    }
  }
  else
  {
    v21 = v58;
    while ( *((_BYTE *)v21 + 32) == 4 )
    {
      v21 = *((unsigned int **)v21 + 5);
      v20 = *v21;
      if ( (unsigned int)(v20 - 8) > 1 )
        goto LABEL_37;
    }
  }
  if ( !a1[4].m128i_i8[0] )
  {
LABEL_29:
    if ( (unsigned int)sub_64B20((__int64)v57) == 1 && *v58 == 19 )
    {
      v35 = *((_QWORD *)v58 + 2);
      if ( v35 )
      {
        if ( *(_BYTE *)(v35 + 64) == 1 && v58[18] == *(_DWORD *)(v35 + 72) )
        {
          if ( sub_11E8C0(*((unsigned int **)v58 + 2)) )
          {
            v38 = v54;
            sub_127A20((__int64)v54, (__int64)a3, v35, 256, v36, v37);
            sub_21C010(v57, (__int64)v38);
            sub_93B40(v38);
            v39 = a1[2].m128i_i64[1];
            if ( v39 )
            {
              a1[3].m128i_i64[0] = 0;
              qfree(v39);
              a1[2].m128i_i64[1] = 0;
              a1[3].m128i_i64[1] = 0;
            }
          }
        }
      }
    }
    if ( v56 == 1 && a1[4].m128i_i8[0] && 2 * a1->m128i_i32[2] == (unsigned int)sub_64B20((__int64)v57) )
    {
LABEL_56:
      v29 = 1;
      goto LABEL_32;
    }
LABEL_31:
    v29 = 3;
    goto LABEL_32;
  }
  v55 = sub_64960(v57, 0);
  v22 = a1->m128i_i32[0];
  v23 = a1->m128i_i32[2];
  v24 = a1->m128i_i32[1];
  v61[0] = 0;
  v53.m128i_i32[0] = v22;
  v61[1] = 0;
  sub_63E80(v61, v24, v23);
  v25 = a3[7];
  v62 = 0;
  v63 = 0;
  v26 = (char *)sub_129150((__int64)a3, v61, v25, 0, 0, 0, 0x101u);
  v28 = v26;
  if ( v26 && *(_DWORD *)v26 != 61 )
  {
    if ( v56 != 1 )
    {
      v49 = *(_QWORD *)(a3[60] + 112LL);
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v49 + 176LL))(
              v49,
              a1->m128i_u32[1],
              a1->m128i_u32[2],
              v27,
              v48);
      if ( v50 != -1 )
      {
        that = next_that();
        if ( (unsigned __int8)sub_32E930(v54, v49, v50, a3[5], that, a3[5]) )
        {
          if ( !*(_BYTE *)(a3[60] + 145LL) )
            goto LABEL_25;
          v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 176LL))(
                  v49,
                  a1->m128i_u32[0],
                  a1->m128i_u32[2]);
          if ( v43 == -1
            || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall **)()))(*(_QWORD *)v49 + 240LL))(
                 v49,
                 v43,
                 v64) != 1 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( (v56 & 2) == 0 )
      {
LABEL_22:
        if ( (*(_DWORD *)v28 == 4 || *(_DWORD *)v28 == 67 && *((_DWORD *)v28 + 9) == *((_DWORD *)v28 + 17))
          && (unsigned __int8)sub_11FD80(v28 + 32, v54, 0)
          && !v64 )
        {
          goto LABEL_65;
        }
        if ( (a1->m128i_i8[12] & 4) == 0 )
        {
          v44 = a3[7];
          v45 = a1->m128i_i32[2];
          v64 = nullptr;
          v46 = a1->m128i_i32[0];
          v65 = nullptr;
          v52 = v44;
          sub_63E80(v54, v46, v45);
          v66 = 0;
          v67 = 0;
          v47 = (_DWORD *)sub_129150((__int64)a3, v54, v52, 0, 0, 0, 0x101u);
          if ( v66 )
          {
            v67.m128i_i64[0] = 0;
            qfree(v66);
          }
          qfree((__int64)v64);
          if ( v47 )
          {
            if ( *v47 == *(_DWORD *)v28 && (unsigned int)(*v47 - 12) <= 1 )
            {
LABEL_81:
              v29 = 2;
              goto LABEL_61;
            }
          }
        }
LABEL_25:
        if ( v53.m128i_i32[0] == v55 )
        {
LABEL_26:
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree(v62);
          }
          qfree(v61[0]);
          goto LABEL_29;
        }
LABEL_64:
        a1[4].m128i_i8[0] = 0;
        goto LABEL_65;
      }
      v51 = (unsigned __int8)(*(_BYTE *)(a3[60] + 145LL) ^ (v53.m128i_i32[0] != v55)) | 0xE;
      if ( (unsigned __int8)sub_AB6D0((__int64)a3, v58, (int)v58 + 64, v51) )
        goto LABEL_81;
      v65 = a3;
      v67.m128i_i16[0] = 257;
      v66 = v51;
      v64 = off_4DF7C0;
      v67.m128i_i8[2] = 0;
      if ( !(unsigned __int8)sub_AA9B0((__int64)v54, (__int64)v58) )
      {
        if ( v67.m128i_i8[2] && (a1->m128i_i8[12] & 4) == 0 )
          goto LABEL_81;
        goto LABEL_22;
      }
    }
LABEL_65:
    v29 = 1;
    goto LABEL_61;
  }
  if ( v53.m128i_i32[0] == v55 )
    goto LABEL_26;
  v29 = 0;
  if ( v56 != 1 )
    goto LABEL_64;
LABEL_61:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  qfree(v61[0]);
LABEL_32:
  if ( v60[0] )
  {
    v60[1] = 0;
    qfree(v60[0]);
  }
  qfree(v59[0]);
  return v29;
}
