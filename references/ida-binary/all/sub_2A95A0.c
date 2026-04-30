unsigned __int64 __fastcall sub_2A95A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rbp
  __m128 si128; // xmm0
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm4_8
  double v24; // xmm5_8
  int v25; // eax
  const char *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // r14
  char *v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // r14
  char *v34; // rsi
  unsigned __int64 v35; // r14
  size_t v36; // r8
  __int64 v37; // r15
  size_t v38; // r9
  char *v39; // rsi
  __int64 (*v40)(); // rax
  const void *v41; // rbx
  size_t v42; // rax
  size_t v43; // r14
  size_t v44; // rbp
  unsigned __int64 v45; // rdx
  char *v46; // rax
  const char *v47; // r15
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // rsi
  int v52; // edx
  __int64 v53; // [rsp+0h] [rbp-B8h]
  size_t v54; // [rsp+0h] [rbp-B8h]
  int v55; // [rsp+8h] [rbp-B0h]
  size_t v56; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+18h] [rbp-A0h]
  __int64 v59; // [rsp+28h] [rbp-90h]
  char *v60; // [rsp+30h] [rbp-88h] BYREF
  __int128 v61; // [rsp+38h] [rbp-80h]
  int v62; // [rsp+48h] [rbp-70h]
  unsigned int v63; // [rsp+50h] [rbp-68h] BYREF
  __int64 v64; // [rsp+54h] [rbp-64h]
  unsigned int v65; // [rsp+5Ch] [rbp-5Ch]
  _BYTE v66[20]; // [rsp+60h] [rbp-58h]
  int v67; // [rsp+74h] [rbp-44h]
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 440);
  v68 = __readfsqword(0x28u);
  if ( v14 )
    v14 = *(_QWORD *)(v14 + 8);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
  v17 = *(_DWORD *)(a1 + 224) == -1;
  v64 = 0;
  v67 = -1;
  *(__m128 *)&v66[4] = si128;
  if ( v17 )
  {
    v19 = sub_1EA6C0(
            *(_QWORD *)(a1 + 16) + 384LL,
            a2,
            a3,
            a4,
            a5,
            a6,
            si128,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            v53,
            v55,
            (int)src,
            v58,
            *((__int64 *)&v58 + 1),
            v59,
            (__int64)v60,
            v61,
            SDWORD2(v61),
            v62,
            v63,
            SHIDWORD(v64),
            *(__int64 *)v66);
    if ( (unsigned __int8)sub_2BC880(a1, &v63, 0, 0, v14, v19) )
    {
      if ( v63 == 3 )
      {
        v60 = nullptr;
        v61 = 0;
        v41 = *((const void **)&unk_8BA600 + 5 * *(int *)v66 + 3);
        if ( v41 )
        {
          v42 = strlen(*((const char **)&unk_8BA600 + 5 * *(int *)v66 + 3));
          v43 = v42 + 1;
          v44 = v42;
          v60 = (char *)qvector_reserve(&v60, 0, v42 + 1, 1);
          *(_QWORD *)&v61 = v43;
          memmove(v60, v41, v44);
          v60[v44] = 0;
        }
        sub_2D4060(a2, &v60);
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60, (const char *)&v60);
        }
      }
      else if ( v63 > 3 )
      {
        if ( v63 == 4 )
        {
          v40 = *(__int64 (**)())(*(_QWORD *)a1 + 848LL);
          if ( v40 != sub_2A7F90 )
            ((void (__fastcall *)(__int64, __int64, _QWORD))v40)(a1, a2, v65);
        }
      }
      else if ( v63 == 1 )
      {
        v26 = "To: ";
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL) + 24LL * (int)v65;
        v28 = 0;
        if ( v65 == (_DWORD)v64 )
        {
          v52 = *(_DWORD *)(v27 + 8) - 1;
          if ( v52 < 0 )
            return v68 - __readfsqword(0x28u);
          v26 = "From: ";
          v28 = 272LL * (unsigned int)v52;
        }
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v27 + v28) + 8LL))(
                *(_QWORD *)(*(_QWORD *)v27 + v28),
                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL));
        v58 = 0;
        src = nullptr;
        get_nice_colored_name(&src, v29, 0);
        v60 = nullptr;
        v61 = 0;
        v30 = strlen(v26);
        v31 = (char *)qvector_reserve(&v60, 0, v30 + 1, 1);
        v60 = v31;
        *(_QWORD *)&v61 = v30 + 1;
        if ( (unsigned int)v30 >= 8 )
        {
          *(_QWORD *)v31 = *(_QWORD *)v26;
          *(_QWORD *)&v31[(unsigned int)v30 - 8] = *(_QWORD *)&v26[(unsigned int)v30 - 8];
          v45 = (unsigned __int64)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v46 = &v31[-v45];
          v47 = (const char *)(v26 - v46);
          v48 = (v30 + (_DWORD)v46) & 0xFFFFFFF8;
          if ( v48 >= 8 )
          {
            v49 = v48 & 0xFFFFFFF8;
            v50 = 0;
            do
            {
              v51 = v50;
              v50 += 8;
              *(_QWORD *)(v45 + v51) = *(_QWORD *)&v47[v51];
            }
            while ( v50 < v49 );
          }
        }
        else if ( (v30 & 4) != 0 )
        {
          *(_DWORD *)v31 = *(_DWORD *)v26;
          *(_DWORD *)&v31[(unsigned int)v30 - 4] = *(_DWORD *)&v26[(unsigned int)v30 - 4];
        }
        else if ( (_DWORD)v30 )
        {
          *v31 = *v26;
          if ( (v30 & 2) != 0 )
            *(_WORD *)&v31[(unsigned int)v30 - 2] = *(_WORD *)&v26[(unsigned int)v30 - 2];
        }
        v32 = 2;
        v60[v30] = 0;
        v33 = v61;
        if ( (_QWORD)v61 )
        {
          v32 = v61 + 1;
          v33 = v61 - 1;
        }
        v34 = v60;
        if ( *((_QWORD *)&v61 + 1) < v32 )
        {
          v60 = (char *)qvector_reserve(&v60, v60, v32, 1);
          v34 = v60;
        }
        *(_QWORD *)&v61 = v32;
        v34[v33] = 32;
        v60[v33 + 1] = 0;
        v35 = v58;
        if ( (_QWORD)v58 )
        {
          v36 = v58 - 1;
          if ( (_QWORD)v58 != 1 )
          {
            v37 = v61;
            v38 = v58 - 1;
            if ( (_QWORD)v61 )
            {
              v37 = v61 - 1;
              v38 = v36 + v61 - 1;
              v35 = v58 + v61 - 1;
            }
            v39 = v60;
            if ( *((_QWORD *)&v61 + 1) < v35 )
            {
              v56 = v38;
              v54 = v58 - 1;
              v60 = (char *)qvector_reserve(&v60, v60, v35, 1);
              v38 = v56;
              v39 = v60;
              v36 = v54;
            }
            *(_QWORD *)&v61 = v35;
            v39[v38] = 0;
            memcpy(&v60[v37], src, v36);
          }
        }
        sub_2A9360(a1, a2, v14, v65, &v60);
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60, (const char *)a2);
        }
        if ( src )
        {
          *(_QWORD *)&v58 = 0;
          qfree(src, (const char *)a2);
        }
      }
      else if ( v63 == 2
             && !(unsigned __int8)sub_2A91F0(
                                    a1,
                                    a2,
                                    v65,
                                    *(double *)si128.m128_u64,
                                    a8,
                                    a9,
                                    a10,
                                    v23,
                                    v24,
                                    a13,
                                    a14,
                                    v20,
                                    v21,
                                    v22) )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 856LL))(a1, a2, v14, v65);
      }
      v25 = dword_8BA8F4;
      if ( (unsigned __int64)dword_8BA8F4 >= *(_QWORD *)(a2 + 8) )
        v25 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 100) = v25;
    }
  }
  return v68 - __readfsqword(0x28u);
}
