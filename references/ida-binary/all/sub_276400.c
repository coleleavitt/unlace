unsigned __int64 __fastcall sub_276400(
        char *a1,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        const __m128i *a8)
{
  int v9; // ebp
  bool v10; // cc
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r12
  char *v15; // r13
  unsigned __int64 v16; // rdx
  char *v17; // rax
  char *v18; // r10
  char *v19; // r11
  char *v20; // r15
  __int32 v21; // eax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int32 v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rax
  unsigned __int64 v28; // rdx
  char *v29; // rax
  __int64 v30; // r8
  unsigned int v31; // r11d
  size_t v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rcx
  char *v35; // r11
  unsigned int v36; // eax
  __int64 v39; // [rsp+18h] [rbp-A0h]
  void *v40; // [rsp+28h] [rbp-90h]
  char *v41; // [rsp+30h] [rbp-88h]
  unsigned int v42; // [rsp+30h] [rbp-88h]
  char *v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+30h] [rbp-88h]
  int v45; // [rsp+30h] [rbp-88h]
  size_t v46; // [rsp+30h] [rbp-88h]
  size_t v47; // [rsp+38h] [rbp-80h]
  __int64 v48; // [rsp+38h] [rbp-80h]
  __int64 n; // [rsp+40h] [rbp-78h]
  char *src; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+50h] [rbp-68h] BYREF
  __int32 v52; // [rsp+58h] [rbp-60h]
  __m128i v53; // [rsp+60h] [rbp-58h]
  __int64 v54; // [rsp+70h] [rbp-48h]
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v9 = a5;
  v10 = a4 <= a5;
  v11 = a5;
  if ( v10 )
    v11 = a4;
  v55 = __readfsqword(0x28u);
  v12 = _mm_loadu_si128(a8 + 1);
  v13 = a8[2].m128i_i64[0];
  if ( a7 >= v11 )
  {
    v52 = a8->m128i_i32[2];
    v51 = (__int64)diffpos_sorting_strategy_t___vtable;
    v53 = v12;
    v54 = v13;
    sub_275D40(a1, a2, a3, a4, a5, a6, (__int64)&v51);
  }
  else
  {
    v52 = a8->m128i_i32[2];
    v51 = (__int64)diffpos_sorting_strategy_t___vtable;
    if ( a4 > a5 )
    {
      v54 = v13;
      v39 = a4 / 2;
      v28 = *(_QWORD *)&a1[8 * (a4 / 2)];
      v53 = v12;
      v29 = (char *)sub_2727C0(a2, (__int64)a3, v28, (__int64)&v51);
      v18 = a2;
      v19 = &a1[8 * (a4 / 2)];
      v15 = v29;
      v14 = (v29 - a2) >> 3;
    }
    else
    {
      v14 = a5 / 2;
      v54 = v13;
      v15 = &a2[8 * (a5 / 2)];
      v16 = *(_QWORD *)v15;
      v53 = v12;
      v17 = (char *)sub_272730(a1, (__int64)a2, v16, (__int64)&v51);
      v18 = a2;
      v19 = v17;
      v39 = (v17 - a1) >> 3;
    }
    v40 = (void *)(a4 - v39);
    if ( a4 - v39 <= v14 || v14 > a7 )
    {
      if ( (__int64)v40 > a7 )
      {
        v44 = (int)v19;
        v36 = (unsigned int)sub_272D20(v19, v18, v15);
        LODWORD(v19) = v44;
        LODWORD(v20) = v36;
      }
      else
      {
        LODWORD(v20) = (_DWORD)v15;
        if ( v40 )
        {
          v30 = v15 - v18;
          v20 = &v15[-(v18 - v19)];
          if ( v18 - v19 <= 8 )
          {
            if ( v18 - v19 == 8 )
            {
              *(_QWORD *)a6 = *(_QWORD *)v19;
              if ( v30 <= 8 )
              {
                if ( v30 == 8 )
                  *(_QWORD *)v19 = *(_QWORD *)v18;
              }
              else
              {
                LODWORD(v19) = (unsigned int)memmove(v19, v18, v15 - v18);
              }
              *((_QWORD *)v15 - 1) = *(_QWORD *)a6;
            }
            else if ( v30 <= 8 )
            {
              if ( v30 == 8 )
                *(_QWORD *)v19 = *(_QWORD *)v18;
            }
            else
            {
              LODWORD(v19) = (unsigned int)memmove(v19, v18, v15 - v18);
            }
          }
          else
          {
            src = v18;
            n = v15 - v18;
            v47 = v18 - v19;
            v41 = v19;
            memmove(a6, v19, v18 - v19);
            v31 = (unsigned int)v41;
            v32 = v47;
            if ( n <= 8 )
            {
              if ( n == 8 )
                *(_QWORD *)v41 = *(_QWORD *)src;
            }
            else
            {
              v33 = (unsigned int)memmove(v41, src, n);
              v32 = v47;
              v31 = v33;
            }
            v42 = v31;
            memmove(v20, a6, v32);
            LODWORD(v19) = v42;
          }
        }
      }
    }
    else
    {
      LODWORD(v20) = (_DWORD)v19;
      if ( v14 )
      {
        v20 = (char *)(v15 - v18);
        v34 = v18 - v19;
        if ( v15 - v18 <= 8 )
        {
          if ( v15 - v18 == 8 )
          {
            *(_QWORD *)a6 = *(_QWORD *)v18;
            if ( v34 <= 8 )
            {
              if ( v34 == 8 )
                *((_QWORD *)v15 - 1) = *(_QWORD *)v19;
            }
            else
            {
              v46 = (size_t)v19;
              memmove(&v15[-v34], v19, v18 - v19);
              v19 = (char *)v46;
            }
            *(_QWORD *)v19 = *(_QWORD *)a6;
          }
          else if ( v34 <= 8 )
          {
            if ( v34 == 8 )
              *((_QWORD *)v15 - 1) = *(_QWORD *)v19;
          }
          else
          {
            v45 = (int)v19;
            memmove(&v15[-v34], v19, v18 - v19);
            LODWORD(v19) = v45;
          }
        }
        else
        {
          v48 = v18 - v19;
          v43 = v19;
          memmove(a6, v18, v15 - v18);
          v35 = v43;
          if ( v48 <= 8 )
          {
            if ( v48 == 8 )
              *((_QWORD *)v15 - 1) = *(_QWORD *)v43;
          }
          else
          {
            memmove(&v15[-v48], v43, v48);
            v35 = v43;
          }
          LODWORD(v19) = (unsigned int)memmove(v35, a6, (size_t)v20);
        }
        LODWORD(v20) = (_DWORD)v19 + (_DWORD)v20;
      }
    }
    v21 = a8->m128i_i32[2];
    v22 = _mm_loadu_si128(a8 + 1);
    v51 = (__int64)diffpos_sorting_strategy_t___vtable;
    v52 = v21;
    v23 = a8[2].m128i_i64[0];
    v53 = v22;
    v54 = v23;
    sub_276400((_DWORD)a1, (_DWORD)v19, (_DWORD)v20, v39, v14, (_DWORD)a6, a7, (__int64)&v51);
    v24 = a8->m128i_i32[2];
    v25 = _mm_loadu_si128(a8 + 1);
    v51 = (__int64)diffpos_sorting_strategy_t___vtable;
    v52 = v24;
    v26 = a8[2].m128i_i64[0];
    v53 = v25;
    v54 = v26;
    sub_276400((_DWORD)v20, (_DWORD)v15, (_DWORD)a3, (_DWORD)v40, v9 - v14, (_DWORD)a6, a7, (__int64)&v51);
  }
  return v55 - __readfsqword(0x28u);
}
