__int64 __fastcall sub_DCBB00(_QWORD *a1)
{
  char *v2; // rdi
  int v3; // edx
  __int64 v4; // rsi
  char *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rax
  int v15; // eax
  _QWORD *exception; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rbx
  bool v21; // zf
  unsigned int v22; // r14d
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __m128i *v25; // rbx
  unsigned int v26; // r9d
  __m128i *v27; // r12
  unsigned __int64 v28; // rcx
  __int64 v29; // r9
  __m128i *v30; // rsi
  __m128i *v31; // rax
  __m128i *v32; // rdi
  int v33; // edx
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 *v37; // rcx
  __int32 v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned int v44; // ebx
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rcx
  __m128i *v48; // rax
  int v49; // r11d
  __m128i *v50; // rcx
  const __m128i *v51; // rcx
  __m128i *v52; // r10
  __int64 v53; // rdx
  __m128i *v54; // rsi
  __m128i *v55; // rdx
  __m128i v56; // xmm0
  unsigned int v58; // esi
  char **v59; // rbx
  __int64 v60; // [rsp+0h] [rbp-A8h]
  __int64 v61; // [rsp+8h] [rbp-A0h]
  __int64 v62; // [rsp+10h] [rbp-98h]
  __int64 v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+20h] [rbp-88h]
  __int64 v65; // [rsp+28h] [rbp-80h]
  __int64 v66; // [rsp+48h] [rbp-60h] BYREF
  __int64 v67; // [rsp+50h] [rbp-58h] BYREF
  int v68; // [rsp+58h] [rbp-50h]

  v62 = (__int64)(a1 + 190);
  sub_DCADA0((__int64)(a1 + 190));
  if ( *((_DWORD *)a1 + 395) || *((_DWORD *)a1 + 396) )
  {
    v2 = (char *)a1[196];
    v3 = 0;
    v4 = *((unsigned int *)a1 + 394);
    v5 = &v2[24 * v4];
    v6 = a1[196];
    if ( v2 == v5 )
      goto LABEL_15;
    do
    {
      while ( *(_DWORD *)(v6 + 4) )
      {
        *(_DWORD *)(v6 + 4) = 0;
        v6 += 24;
        if ( v5 == (char *)v6 )
          goto LABEL_8;
      }
      v6 += 24;
      ++v3;
    }
    while ( v5 != (char *)v6 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_15;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *((_DWORD *)a1 + 394);
      a1[196] = 0;
      v7 >>= 1;
      v8 = v7;
      *((_DWORD *)a1 + 394) = v7;
      v9 = sub_186B270(24LL * v7);
      if ( !v7 )
      {
LABEL_14:
        a1[196] = v9;
LABEL_15:
        *(_QWORD *)((char *)a1 + 1580) = 0;
        goto LABEL_16;
      }
    }
    else
    {
      a1[196] = 0;
      v58 = (unsigned int)v4 >> 1;
      v8 = v58;
      *((_DWORD *)a1 + 394) = v58;
      v9 = sub_186B270(24LL * v58);
    }
    v10 = (_QWORD *)v9;
    do
    {
      *v10 = 0;
      v10 += 3;
      *(v10 - 2) = 0;
    }
    while ( v10 != (_QWORD *)(v9 + 24 * v8) );
    goto LABEL_14;
  }
LABEL_16:
  v61 = (__int64)(a1 + 193);
  sub_DCADA0((__int64)(a1 + 193));
  v11 = a1[199];
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  sub_DBF660((__int64)a1, "invalid sort declaration, parameters missing");
  v12 = *((_DWORD *)a1 + 356);
  if ( v12 != 2 )
  {
    v13 = 0;
    if ( v12 != 1 )
    {
      while ( 1 )
      {
        if ( v12 != 4
          || (v14 = a1[6],
              v68 = v13,
              ++v13,
              v67 = v14,
              sub_DCB4E0(v62, (__int64)&v67),
              v15 = *((_DWORD *)a1 + 356),
              v15 == 9) )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid sort parameter, symbol or ')' expected");
          goto LABEL_23;
        }
        if ( v15 == 1 )
          break;
        v18 = 0;
        if ( v15 != 2 )
          goto LABEL_26;
LABEL_67:
        v17 = a1[176];
        --*((_DWORD *)a1 + 524);
        if ( !v17 )
        {
LABEL_68:
          v19 = 0;
          goto LABEL_28;
        }
LABEL_27:
        v19 = *(_DWORD *)(v17 - 4);
LABEL_28:
        *((_DWORD *)a1 + 517) = v19;
        v12 = sub_DDB0A0((int)a1 + 16, v60, v61, v62, v63);
        *((_DWORD *)a1 + 356) = v12;
        if ( v12 == 2 )
          goto LABEL_90;
        if ( (_BYTE)v18 )
          goto LABEL_30;
      }
      ++*((_DWORD *)a1 + 524);
LABEL_26:
      v17 = a1[176];
      v18 = 0;
      if ( !v17 )
        goto LABEL_68;
      goto LABEL_27;
    }
LABEL_30:
    sub_DBF660((__int64)a1, "invalid sort declaration, '(' expected");
    if ( *((_DWORD *)a1 + 356) != 4 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort name, identified expected");
      goto LABEL_23;
    }
    v20 = a1[6];
    sub_DC0980(a1);
    v21 = *((_DWORD *)a1 + 356) == 6;
    v66 = v20;
    if ( !v21 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort declaration, arity expected");
      goto LABEL_23;
    }
    v22 = sub_DC09F0((__int64)a1);
    if ( *((_DWORD *)a1 + 356) != 9 )
      sub_DC0980(a1);
    v68 = v13;
    v67 = v66;
    sub_DCB4E0(v61, (__int64)&v67);
    v23 = *((unsigned int *)a1 + 394);
    v24 = v66;
    if ( 3 * (int)v23 < (unsigned int)(4 * (*((_DWORD *)a1 + 395) + *((_DWORD *)a1 + 396))) )
    {
      v65 = v66;
      v64 = 2 * v23;
      v60 = 24LL * (unsigned int)(2 * v23);
      v63 = v60;
      v48 = (__m128i *)sub_186B270(v60);
      v49 = v64;
      v24 = v65;
      v25 = v48;
      v50 = (__m128i *)((char *)v48 + v60);
      if ( v64 )
      {
        do
        {
          v48->m128i_i64[0] = 0;
          v48 = (__m128i *)((char *)v48 + 24);
          v48[-1].m128i_i64[0] = 0;
        }
        while ( v48 != v50 );
      }
      v51 = (const __m128i *)a1[196];
      v26 = v64 - 1;
      v27 = (__m128i *)((char *)v25 + v60);
      v52 = (__m128i *)((char *)v51 + 24 * *((unsigned int *)a1 + 394));
      if ( v51 != v52 )
      {
        do
        {
          while ( v51->m128i_i32[1] != 2 )
          {
            v51 = (const __m128i *)((char *)v51 + 24);
            if ( v52 == v51 )
              goto LABEL_83;
          }
          v53 = 24LL * (v51->m128i_i32[0] & v26);
          v54 = (__m128i *)((char *)v25 + v53);
          if ( v53 == v60 )
          {
LABEL_91:
            if ( v54 == v25 )
            {
LABEL_98:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v55 = v25;
            while ( v55->m128i_i32[1] )
            {
              v55 = (__m128i *)((char *)v55 + 24);
              if ( v54 == v55 )
                goto LABEL_98;
            }
          }
          else
          {
            v55 = (__m128i *)((char *)v25 + v53);
            while ( v55->m128i_i32[1] )
            {
              v55 = (__m128i *)((char *)v55 + 24);
              if ( v27 == v55 )
                goto LABEL_91;
            }
          }
          v56 = _mm_loadu_si128(v51);
          v51 = (const __m128i *)((char *)v51 + 24);
          *v55 = v56;
          v55[1].m128i_i64[0] = v51[-1].m128i_i64[1];
        }
        while ( v52 != v51 );
LABEL_83:
        v52 = (__m128i *)a1[196];
      }
      if ( v52 )
      {
        v63 = v65;
        sub_186B220(v52);
        v49 = v64;
        v26 = v64 - 1;
        v24 = v65;
      }
      a1[196] = v25;
      *((_DWORD *)a1 + 394) = v49;
      *((_DWORD *)a1 + 396) = 0;
      if ( v24 )
        goto LABEL_36;
    }
    else
    {
      v25 = (__m128i *)a1[196];
      v26 = v23 - 1;
      v60 = 24 * v23;
      v27 = (__m128i *)((char *)v25 + 24 * v23);
      if ( v66 )
      {
LABEL_36:
        if ( (v24 & 7) == 1 )
          v28 = v24 >> 3;
        else
          LODWORD(v28) = *(_DWORD *)(v24 - 8);
        goto LABEL_38;
      }
    }
    LODWORD(v28) = -1640531495;
LABEL_38:
    v29 = (unsigned int)v28 & v26;
    v30 = (__m128i *)((char *)v25 + 24 * v29);
    if ( 24 * v29 != v60 )
    {
      v31 = (__m128i *)((char *)v25 + 24 * v29);
      v32 = nullptr;
      while ( 1 )
      {
        v33 = v31->m128i_i32[1];
        if ( v33 == 2 )
        {
          if ( (_DWORD)v28 == v31->m128i_i32[0] && v24 == v31->m128i_i64[1] )
          {
            v34 = (_QWORD *)a1[199];
            v31->m128i_i64[1] = v24;
            v31[1].m128i_i32[0] = v22;
            v31->m128i_i32[1] = 2;
            if ( v34 )
              goto LABEL_61;
            goto LABEL_47;
          }
        }
        else
        {
          if ( !v33 )
          {
            if ( v32 )
              goto LABEL_58;
            v32 = v31;
            goto LABEL_59;
          }
          v32 = v31;
        }
        v31 = (__m128i *)((char *)v31 + 24);
        if ( v31 == v27 )
          goto LABEL_51;
      }
    }
    v32 = nullptr;
    while ( 1 )
    {
LABEL_51:
      if ( v30 == v25 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v38 = v25->m128i_i32[1];
      if ( v38 == 2 )
      {
        if ( (_DWORD)v28 == v25->m128i_i32[0] && v24 == v25->m128i_i64[1] )
        {
          v25->m128i_i64[1] = v24;
          v25[1].m128i_i32[0] = v22;
          v25->m128i_i32[1] = 2;
          goto LABEL_60;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v32 )
LABEL_58:
            --*((_DWORD *)a1 + 396);
          else
            v32 = v25;
LABEL_59:
          v32->m128i_i64[1] = v24;
          v32[1].m128i_i32[0] = v22;
          v32->m128i_i32[1] = 2;
          v32->m128i_i32[0] = v28;
          ++*((_DWORD *)a1 + 395);
LABEL_60:
          v34 = (_QWORD *)a1[199];
          if ( v34 )
          {
LABEL_61:
            v39 = *((_DWORD *)v34 - 1);
            if ( v39 == *((_DWORD *)v34 - 2) )
            {
              v44 = (3 * v39 + 1) >> 1;
              v45 = 8 * v44 + 8;
              if ( 8 * v39 + 8 >= (unsigned int)v45 || v39 >= v44 )
              {
                v59 = (char **)__cxa_allocate_exception(0x28u);
                sub_DBF430(&v67, "Overflow encountered when expanding vector");
                *v59 = (char *)off_1C63128;
                sub_2333C0(v59 + 1, &v67);
                sub_233E40((__int64)&v67);
                __cxa_throw(v59, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v46 = (unsigned int *)sub_186B300(v34 - 1, v45);
              v47 = v46[1];
              v34 = v46 + 2;
              *v46 = v44;
              a1[199] = v46 + 2;
              LODWORD(v46) = v47;
              v37 = &v34[v47];
              v36 = (_DWORD)v46 + 1;
            }
            else
            {
              v40 = v39;
              v36 = v39 + 1;
              v37 = &v34[v40];
            }
          }
          else
          {
LABEL_47:
            v35 = (_QWORD *)sub_186B270(0x18u);
            v34 = v35 + 1;
            *v35 = 2;
            v36 = 1;
            a1[199] = v34;
            v37 = v34;
          }
          v41 = *a1;
          v42 = *(_QWORD *)(*a1 + 312LL);
          *v37 = v66;
          *((_DWORD *)v34 - 1) = v36;
          if ( !v42 )
          {
            sub_DFBCB0(v41);
            v42 = *(_QWORD *)(v41 + 312);
          }
          v43 = sub_DE17C0(v42, v22, &v66);
          sub_DFAB80(*a1, v43 + 24, v43);
          if ( *((_DWORD *)a1 + 356) == 2 )
          {
            ++v13;
            v18 = 1;
            goto LABEL_67;
          }
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid sort declaration, ')' expected");
LABEL_23:
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        v32 = v25;
      }
      v25 = (__m128i *)((char *)v25 + 24);
    }
  }
  v18 = 0;
LABEL_90:
  sub_DC0980(a1);
  return v18;
}

