__int64 __fastcall sub_B49070(__int64 a1, _BYTE *a2)
{
  char **exception; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD **v7; // r12
  _QWORD *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rcx
  char *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rsi
  __int64 result; // rax
  _QWORD *v19; // rbp
  _QWORD *v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // r14
  bool v28; // zf
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  char *v32; // rbx
  char *v33; // rbp
  __int64 v34; // rsi
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // ecx
  int v49; // eax
  _QWORD *v50; // rax
  __m128i v51; // [rsp+0h] [rbp-B8h] BYREF
  int v52; // [rsp+10h] [rbp-A8h]
  int v53; // [rsp+18h] [rbp-A0h]
  unsigned int v54; // [rsp+1Ch] [rbp-9Ch]
  int v55; // [rsp+20h] [rbp-98h]
  int v56; // [rsp+28h] [rbp-90h] BYREF
  int v57; // [rsp+2Ch] [rbp-8Ch] BYREF
  _QWORD *v58; // [rsp+30h] [rbp-88h] BYREF
  int v59[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v60; // [rsp+40h] [rbp-78h] BYREF
  char *v61; // [rsp+48h] [rbp-70h]
  __m128i v62; // [rsp+50h] [rbp-68h] BYREF
  int v63[4]; // [rsp+60h] [rbp-58h] BYREF
  __m128i v64; // [rsp+70h] [rbp-48h]

  v5 = *(_QWORD *)a2;
  ++*(_DWORD *)(a1 + 372);
  v6 = *(_QWORD *)(v5 + 16);
  v61 = nullptr;
  v58 = nullptr;
  v7 = (_QWORD **)sub_15FB1F0(a1 + 56, v6);
  v60 = *(_QWORD *)(a1 + 24);
  v8 = (_QWORD *)sub_186B270(0x28u);
  v8[1] = a2;
  v58 = v8 + 1;
  v8[2] = 0;
  *v8 = 0x100000002LL;
  if ( (a2[44] & 8) == 0 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= *(_DWORD *)(*(_QWORD *)a2 + 24LL) )
        break;
      v12 = **(_QWORD **)&a2[8 * v11 + 112];
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v13 = v61;
      if ( v61 )
      {
        v14 = *((_DWORD *)v61 - 1);
        if ( v14 == *((_DWORD *)v61 - 2) )
        {
          v35 = (3 * v14 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v36 || v14 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v63, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v63);
            sub_233E40((__int64)v63);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = (3 * v14 + 1) >> 1;
          v51.m128i_i64[0] = v12;
          v37 = (unsigned int *)sub_186B300(v61 - 8, v36);
          v38 = v37[1];
          LODWORD(v9) = v54;
          v13 = (char *)(v37 + 2);
          v61 = (char *)(v37 + 2);
          v12 = v51.m128i_i64[0];
          *v37 = v54;
          LODWORD(v37) = v38;
          v17 = (__int64 *)&v13[8 * v38];
          v16 = (_DWORD)v37 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = (__int64 *)&v61[8 * v15];
        }
      }
      else
      {
        v51.m128i_i64[0] = v12;
        v50 = (_QWORD *)sub_186B270(0x18u);
        v13 = (char *)(v50 + 1);
        *v50 = 2;
        v12 = v51.m128i_i64[0];
        v16 = 1;
        v61 = v13;
        v17 = (__int64 *)v13;
      }
      *v17 = v12;
      ++v11;
      *((_DWORD *)v13 - 1) = v16;
    }
    while ( (a2[44] & 8) == 0 );
  }
  result = *(_QWORD *)(a1 + 24);
  v19 = *v7;
  if ( !*(_QWORD *)(result + 912) )
  {
    result = 0;
    goto LABEL_44;
  }
  if ( !v19 )
  {
    v56 = 0;
    v57 = 0;
    goto LABEL_28;
  }
  if ( !*((_DWORD *)v19 - 1) )
  {
    v56 = 0;
    v57 = 0;
LABEL_14:
    result = *((unsigned int *)v19 - 1);
    v20 = &v19[result];
    if ( v20 != v19 )
    {
      v51 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C57400), (__m128i)(unsigned __int64)sub_B45000);
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(a1 + 24);
          v22 = *v19;
          *(_QWORD *)v63 = *(_QWORD *)a2;
          v23 = sub_15DC610(
                  v21,
                  v22,
                  1,
                  (int)v63,
                  v9,
                  v10,
                  v51.m128i_i32[0],
                  v51.m128i_i32[2],
                  v52,
                  v53,
                  v55,
                  v56,
                  (int)v58,
                  v59[0],
                  v60,
                  v61);
          v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)v21);
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          v64 = 0u;
          v24 = *(_QWORD *)&a2[8 * v57 + 112];
          *(_OWORD *)v63 = 0;
          *(_QWORD *)v59 = v24;
          v25 = (_QWORD *)operator new(0x38u);
          v26 = _mm_load_si128(&v51);
          v27 = *(_QWORD *)(a1 + 24);
          *v25 = a1;
          v25[1] = v59;
          v25[2] = &v62;
          v25[3] = &v56;
          v25[4] = &v57;
          v25[5] = &v60;
          v64 = v26;
          v28 = *(_QWORD *)(v27 + 912) == 0;
          v25[6] = &v58;
          *(_QWORD *)v63 = v25;
          if ( !v28 )
            sub_B45000((__int64 *)v63);
          sub_B48640(a1, *(_DWORD ***)v59, v62.m128i_i64[0], 0xFFFFFFFE);
          v29 = *(_QWORD *)(v27 + 912);
          ++v57;
          if ( v29 )
            std::__ostream_insert<char,std::char_traits<char>>();
          result = v64.m128i_i64[0];
          if ( v64.m128i_i64[0] )
            result = ((__int64 (__fastcall *)(int *, int *, __int64))v64.m128i_i64[0])(v63, v63, 3);
          v30 = v62.m128i_i64[0];
          if ( v62.m128i_i64[0] )
          {
            v31 = v62.m128i_i64[1];
            v28 = (*(_DWORD *)(v62.m128i_i64[0] + 8))-- == 1;
            if ( v28 )
              break;
          }
          if ( v20 == ++v19 )
            goto LABEL_28;
        }
        result = sub_15D7BC0(v31, v30);
        ++v19;
      }
      while ( v20 != v19 );
    }
    goto LABEL_28;
  }
  v39 = sub_15F0420(a1 + 56);
  v10 = *(_QWORD *)(v6 + 16);
  v40 = *(_QWORD *)(v39 + 56);
  v41 = *(unsigned int *)(v39 + 64);
  if ( v10 )
  {
    if ( (*(_QWORD *)(v6 + 16) & 7LL) == 1 )
      v9 = v10 >> 3;
    else
      LODWORD(v9) = *(_DWORD *)(v10 - 8);
  }
  else
  {
    LODWORD(v9) = -1640531495;
  }
  v42 = v41 - 1;
  v43 = 24 * v41;
  v44 = v40 + v43;
  v45 = 24LL * ((unsigned int)v9 & v42);
  v46 = v40 + v45;
  if ( v45 == v43 )
  {
LABEL_58:
    while ( v46 != v40 )
    {
      v49 = *(_DWORD *)(v40 + 4);
      if ( v49 == 2 )
      {
        if ( (_DWORD)v9 == *(_DWORD *)v40 && v10 == *(_QWORD *)(v40 + 8) )
        {
          v47 = v40;
          goto LABEL_56;
        }
      }
      else if ( !v49 )
      {
        break;
      }
      v40 += 24;
    }
LABEL_69:
    BUG();
  }
  v47 = v40 + v45;
  while ( 1 )
  {
    v48 = *(_DWORD *)(v47 + 4);
    if ( v48 != 2 )
    {
      if ( !v48 )
        goto LABEL_69;
      goto LABEL_52;
    }
    if ( (_DWORD)v9 == *(_DWORD *)v47 && v10 == *(_QWORD *)(v47 + 8) )
      break;
LABEL_52:
    v47 += 24;
    if ( v44 == v47 )
      goto LABEL_58;
  }
LABEL_56:
  result = *(unsigned int *)(v47 + 16);
  v19 = *v7;
LABEL_44:
  v56 = result;
  v57 = 0;
  if ( v19 )
    goto LABEL_14;
LABEL_28:
  if ( v58 )
    result = sub_186B220(v58 - 1);
  v32 = v61;
  if ( v61 )
  {
    result = *((unsigned int *)v61 - 1);
    v33 = &v61[8 * result];
    if ( v61 >= v33 )
      return sub_186B220(v32 - 8);
    do
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)v32;
        if ( *(_QWORD *)v32 )
        {
          v28 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v28 )
            break;
        }
        v32 += 8;
        if ( v32 >= v33 )
          goto LABEL_37;
      }
      result = sub_15D7BC0(v60, v34);
      v32 += 8;
    }
    while ( v32 < v33 );
LABEL_37:
    v32 = v61;
    if ( v61 )
      return sub_186B220(v32 - 8);
  }
  return result;
}

