__int64 __fastcall sub_7605E0(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebp
  _QWORD *v8; // r12
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r14
  unsigned __int16 v12; // dx
  unsigned int v13; // r12d
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r13
  char v17; // al
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 v20; // rsi
  unsigned __int16 v21; // ax
  int v22; // esi
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  int v25; // ecx
  int v26; // edx
  __int64 v27; // r15
  char v28; // al
  _QWORD *exception; // rax
  unsigned int v30; // edx
  unsigned int v31; // ebp
  _QWORD *v32; // r14
  __int64 v33; // rdx
  __int64 *v34; // rdx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rsi
  __int64 *v38; // rsi
  __int64 v39; // rbp
  _QWORD *v40; // rdi
  __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  _QWORD *v49; // rax
  __int64 k; // r10
  __int64 j; // rax
  __int64 v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 i; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 *v64; // [rsp+18h] [rbp-150h]
  __int64 *v65; // [rsp+18h] [rbp-150h]
  __int64 *v66; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v68; // [rsp+28h] [rbp-140h]
  __int64 v69; // [rsp+30h] [rbp-138h] BYREF
  int v70; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 12);
    if ( v6 >= v7 )
    {
      v54 = 2 * v7;
      v55 = sub_186B270(8 * v54);
      v6 = *(_DWORD *)(a2 + 8);
      v56 = *(_QWORD **)a2;
      v8 = (_QWORD *)v55;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (_QWORD *)v55 == v56 + 1 )
        {
          for ( i = 0; i != v6; ++i )
            v8[i] = v56[i];
        }
        else
        {
          v57 = 0;
          do
          {
            *(__m128i *)&v8[v57] = _mm_loadu_si128((const __m128i *)&v56[v57]);
            v57 += 2;
          }
          while ( v57 != 2LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            v8[v6 & 0xFFFFFFFE] = v56[v6 & 0xFFFFFFFE];
        }
      }
      if ( v56 != (_QWORD *)(a2 + 16) && v56 )
      {
        sub_186B220(v56);
        v6 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v8;
      *(_DWORD *)(a2 + 12) = v54;
    }
    else
    {
      v8 = *(_QWORD **)a2;
    }
    v8[v6] = v3;
    *(_DWORD *)(a2 + 8) = v6 + 1;
  }
  v9 = &v69;
  v69 = v3;
  ptr = &v69;
  v70 = 0;
  v68 = 0x1000000001LL;
  LODWORD(v10) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = &v9[2 * (unsigned int)v10];
      v12 = *(_WORD *)(v3 + 4);
      if ( v12 != 2 )
        break;
      if ( *((_DWORD *)v11 + 2) )
        goto LABEL_38;
      v27 = *(_QWORD *)(v3 + 24);
      *((_DWORD *)v11 + 2) = 1;
      if ( *(_DWORD *)(v27 + 8) > 1u )
      {
        v28 = *(_BYTE *)(v27 + 6);
        if ( (v28 & 1) != 0 )
        {
LABEL_38:
          exception = __cxa_allocate_exception(8u);
          *exception = &off_1C6A348;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'bv1_blaster_tactic::imp::not_target,
            (void (*)(void *))sub_75C880);
        }
        *(_BYTE *)(v27 + 6) = v28 | 1;
        v30 = *(_DWORD *)(a2 + 8);
        v31 = *(_DWORD *)(a2 + 12);
        if ( v30 >= v31 )
        {
          v43 = 2 * v31;
          v44 = sub_186B270(8 * v43);
          v30 = *(_DWORD *)(a2 + 8);
          v45 = *(_QWORD **)a2;
          v32 = (_QWORD *)v44;
          if ( v30 )
          {
            if ( v30 - 1 <= 2 || (_QWORD *)v44 == v45 + 1 )
            {
              for ( j = 0; j != v30; ++j )
                v32[j] = v45[j];
            }
            else
            {
              v46 = 0;
              do
              {
                *(__m128i *)&v32[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
                v46 += 2;
              }
              while ( v46 != 2LL * (v30 >> 1) );
              if ( (v30 & 1) != 0 )
                v32[v30 & 0xFFFFFFFE] = v45[v30 & 0xFFFFFFFE];
            }
          }
          if ( v45 && v45 != (_QWORD *)(a2 + 16) )
          {
            sub_186B220(v45);
            v30 = *(_DWORD *)(a2 + 8);
          }
          *(_QWORD *)a2 = v32;
          *(_DWORD *)(a2 + 12) = v43;
        }
        else
        {
          v32 = *(_QWORD **)a2;
        }
        v32[v30] = v27;
        *(_DWORD *)(a2 + 8) = v30 + 1;
      }
      v33 = (unsigned int)v68;
      if ( (unsigned int)v68 >= HIDWORD(v68) )
      {
        v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v68)));
        v42 = 0;
        v33 = (unsigned int)v68;
        if ( (_DWORD)v68 )
        {
          do
          {
            *(__m128i *)&v9[v42] = _mm_loadu_si128((const __m128i *)&ptr[v42]);
            v42 += 2;
          }
          while ( 2LL * (unsigned int)v68 != v42 );
        }
        if ( ptr != &v69 && ptr )
        {
          v64 = v9;
          sub_186B220(ptr);
          v33 = (unsigned int)v68;
          v9 = v64;
        }
        ptr = v9;
        HIDWORD(v68) *= 2;
      }
      else
      {
        v9 = ptr;
      }
      v34 = &v9[2 * v33];
      *v34 = v27;
      *((_DWORD *)v34 + 2) = 0;
      v35 = (unsigned int)v68;
      v36 = v68 + 1;
LABEL_45:
      LODWORD(v68) = v36;
      LODWORD(v10) = v36 - 1;
      v3 = v9[2 * v35];
    }
    if ( v12 > 2u )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    if ( v12 )
    {
      v62 = __cxa_allocate_exception(8u);
      *v62 = &off_1C6A348;
      __cxa_throw(
        v62,
        (struct type_info *)&`typeinfo for'bv1_blaster_tactic::imp::not_target,
        (void (*)(void *))sub_75C880);
    }
    v13 = *(_DWORD *)(v3 + 24);
    v14 = *((_DWORD *)v11 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(_QWORD *)(v3 + 8 * v15 + 32);
        *((_DWORD *)v11 + 2) = v14;
        if ( *(_DWORD *)(v16 + 8) > 1u )
        {
          v17 = *(_BYTE *)(v16 + 6);
          if ( (v17 & 1) != 0 )
            goto LABEL_24;
          *(_BYTE *)(v16 + 6) = v17 | 1;
          v18 = *(_DWORD *)(a2 + 8);
          v19 = *(_DWORD *)(a2 + 12);
          if ( v18 >= v19 )
          {
            v39 = 2 * v19;
            v20 = sub_186B270(8 * v39);
            v18 = *(_DWORD *)(a2 + 8);
            v40 = *(_QWORD **)a2;
            if ( v18 )
            {
              if ( v18 - 1 <= 2 || (_QWORD *)v20 == v40 + 1 )
              {
                for ( k = 0; k != v18; ++k )
                  *(_QWORD *)(v20 + k * 8) = v40[k];
              }
              else
              {
                v41 = 0;
                do
                {
                  *(__m128i *)(v20 + v41 * 8) = _mm_loadu_si128((const __m128i *)&v40[v41]);
                  v41 += 2;
                }
                while ( v41 != 2LL * (v18 >> 1) );
                if ( (v18 & 1) != 0 )
                  *(_QWORD *)(v20 + 8LL * (v18 & 0xFFFFFFFE)) = v40[v18 & 0xFFFFFFFE];
              }
            }
            if ( v40 != (_QWORD *)(a2 + 16) && v40 )
            {
              sub_186B220(v40);
              v18 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v20;
            *(_DWORD *)(a2 + 12) = v39;
          }
          else
          {
            v20 = *(_QWORD *)a2;
          }
          *(_QWORD *)(v20 + 8LL * v18) = v16;
          *(_DWORD *)(a2 + 8) = v18 + 1;
        }
        v21 = *(_WORD *)(v16 + 4);
        if ( v21 == 2 )
        {
          v37 = (unsigned int)v68;
          if ( (unsigned int)v68 >= HIDWORD(v68) )
          {
            v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v68)));
            v47 = 0;
            v37 = (unsigned int)v68;
            if ( (_DWORD)v68 )
            {
              do
              {
                *(__m128i *)&v9[v47] = _mm_loadu_si128((const __m128i *)&ptr[v47]);
                v47 += 2;
              }
              while ( v47 != 2LL * (unsigned int)v68 );
            }
            if ( ptr != &v69 && ptr )
            {
              v65 = v9;
              sub_186B220(ptr);
              v37 = (unsigned int)v68;
              v9 = v65;
            }
            ptr = v9;
            HIDWORD(v68) *= 2;
          }
          else
          {
            v9 = ptr;
          }
          v38 = &v9[2 * v37];
          *((_DWORD *)v38 + 2) = 0;
          v35 = (unsigned int)v68;
          *v38 = v16;
          v36 = v68 + 1;
          goto LABEL_45;
        }
        if ( v21 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v21 )
        {
          v61 = __cxa_allocate_exception(8u);
          *v61 = &off_1C6A348;
          __cxa_throw(
            v61,
            (struct type_info *)&`typeinfo for'bv1_blaster_tactic::imp::not_target,
            (void (*)(void *))sub_75C880);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          v52 = (unsigned int)v68;
          if ( (unsigned int)v68 >= HIDWORD(v68) )
          {
            v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v68)));
            v58 = 0;
            v52 = (unsigned int)v68;
            if ( (_DWORD)v68 )
            {
              do
              {
                *(__m128i *)&v9[v58] = _mm_loadu_si128((const __m128i *)&ptr[v58]);
                v58 += 2;
              }
              while ( v58 != 2LL * (unsigned int)v68 );
            }
            if ( ptr && ptr != &v69 )
            {
              v66 = v9;
              sub_186B220(ptr);
              v52 = (unsigned int)v68;
              v9 = v66;
            }
            ptr = v9;
            HIDWORD(v68) *= 2;
          }
          else
          {
            v9 = ptr;
          }
          v53 = &v9[2 * v52];
          *((_DWORD *)v53 + 2) = 0;
          v35 = (unsigned int)v68;
          *v53 = v16;
          v36 = v68 + 1;
          goto LABEL_45;
        }
        v22 = *a1;
        v23 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
        if ( v23 )
        {
          if ( v22 == *v23 )
          {
            v48 = v23[1];
            if ( v48 != 37 )
            {
              if ( v48 > 37 )
              {
                if ( v48 != 40 )
                  goto LABEL_124;
              }
              else if ( v48 )
              {
                if ( v48 == 33 )
                {
                  v49 = __cxa_allocate_exception(8u);
                  *v49 = &off_1C6A348;
                  __cxa_throw(
                    v49,
                    (struct type_info *)&`typeinfo for'bv1_blaster_tactic::imp::not_target,
                    (void (*)(void *))sub_75C880);
                }
LABEL_124:
                sub_10E0BA();
              }
            }
          }
        }
        else if ( v22 == -1 )
        {
          goto LABEL_124;
        }
        v14 = *((_DWORD *)v11 + 2);
LABEL_24:
        if ( v14 >= v13 )
        {
          LODWORD(v10) = v68 - 1;
          break;
        }
      }
    }
    LODWORD(v68) = v10;
    v24 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    v25 = *a1;
    if ( v24 )
    {
      if ( v25 == *v24 )
      {
        v26 = v24[1];
        if ( v26 != 37 )
        {
          if ( v26 <= 37 )
          {
            if ( v26 )
            {
              if ( v26 == 33 )
              {
                v60 = __cxa_allocate_exception(8u);
                *v60 = &off_1C6A348;
                __cxa_throw(
                  v60,
                  (struct type_info *)&`typeinfo for'bv1_blaster_tactic::imp::not_target,
                  (void (*)(void *))sub_75C880);
              }
LABEL_116:
              sub_10E0BA();
            }
          }
          else if ( v26 != 40 )
          {
            goto LABEL_116;
          }
        }
      }
    }
    else if ( v25 == -1 )
    {
      goto LABEL_116;
    }
    v9 = ptr;
    if ( !(_DWORD)v10 )
      break;
    v10 = (unsigned int)(v10 - 1);
    v3 = ptr[2 * v10];
  }
  result = (__int64)&v69;
  if ( ptr != &v69 )
  {
    if ( ptr )
      return sub_186B220(ptr);
  }
  return result;
}

