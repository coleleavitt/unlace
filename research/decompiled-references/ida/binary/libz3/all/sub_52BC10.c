__int64 __fastcall sub_52BC10(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char **exception; // rbp
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rsi
  __int64 *v23; // r12
  __m128 v24; // xmm0
  size_t v25; // rdx
  __int64 v26; // r15
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // edi
  __int64 **v32; // r9
  unsigned int *v33; // rsi
  unsigned int *i; // rax
  __int64 v35; // rdx
  __int64 *v36; // r14
  __int64 v37; // rax
  __int64 *v38; // r12
  __int64 *v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rsi
  int v45; // eax
  __int64 *v46; // rsi
  __int64 v47; // rdi
  __int64 *v48; // rax
  unsigned int v49; // r8d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // r15
  unsigned int v57; // [rsp+8h] [rbp-B0h]
  unsigned int v58; // [rsp+8h] [rbp-B0h]
  __int64 v59; // [rsp+8h] [rbp-B0h]
  __int64 v60; // [rsp+8h] [rbp-B0h]
  __int64 *j; // [rsp+10h] [rbp-A8h]
  unsigned int v62; // [rsp+10h] [rbp-A8h]
  __int64 *v63; // [rsp+18h] [rbp-A0h]
  __int64 *v64; // [rsp+28h] [rbp-90h]
  _QWORD v65[2]; // [rsp+40h] [rbp-78h] BYREF
  int v66; // [rsp+50h] [rbp-68h]
  __int64 v67[11]; // [rsp+60h] [rbp-58h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( result )
  {
    v5 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v5 )
    {
      v8 = 0;
      a2[1] = a1 + 128;
      v9 = 8 * v5;
      while ( 1 )
      {
        v10 = *(_QWORD *)(result + v8);
        sub_520650((__int64 **)a1, *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL), (__int64)a2);
        v11 = *(unsigned int *)(v10 + 68);
        v12 = v10 + 8 * v11;
        if ( (_DWORD)v11 )
        {
          do
          {
            v13 = *(_QWORD *)(v10 + 80);
            v10 += 8;
            sub_520650((__int64 **)a1, *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 16), (__int64)a2);
          }
          while ( v10 != v12 );
        }
        v8 += 8;
        if ( v9 == v8 )
          break;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
      }
      v14 = sub_186B270(0x80u);
      v66 = 0;
      *(_QWORD *)v14 = 0;
      v15 = (unsigned int *)v14;
      *(_DWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_DWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      *(_QWORD *)(v14 + 64) = 0;
      *(_DWORD *)(v14 + 72) = 0;
      *(_QWORD *)(v14 + 80) = 0;
      *(_DWORD *)(v14 + 88) = 0;
      *(_QWORD *)(v14 + 96) = 0;
      *(_DWORD *)(v14 + 104) = 0;
      *(_QWORD *)(v14 + 112) = 0;
      *(_DWORD *)(v14 + 120) = 0;
      v65[0] = v14;
      v16 = *(_QWORD *)(a1 + 8);
      v65[1] = 8;
      v17 = *(_QWORD *)(v16 + 144);
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v19 = *(unsigned int *)(v18 - 4);
        v20 = *(unsigned int *)(v18 - 8);
        v57 = v20;
        v21 = (__int64 *)sub_186B270(8 * v20 + 8);
        v22 = *(__int64 **)(v17 + 8);
        v64 = v21;
        v23 = v21 + 1;
        v24 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(v19));
        *v21 = v24.m128_u64[0];
        if ( v22 )
        {
          v25 = 8LL * *((unsigned int *)v22 - 1);
          if ( v25 <= 8 )
          {
            if ( v25 == 8 )
              v21[1] = *v22;
          }
          else
          {
            memmove(v21 + 1, v22, v25);
          }
        }
        v63 = &v23[v19];
        if ( v23 == v63 )
          goto LABEL_31;
        while ( 1 )
        {
          v26 = *v23;
          if ( (unsigned __int8)sub_51C510((_QWORD *)a1, *v23) )
            goto LABEL_30;
          if ( !(unsigned __int8)sub_51C450(a1, v26) )
          {
            sub_52ABA0((__int64 **)a1, v26, (__int64)v65, 1, a2);
            goto LABEL_30;
          }
          v27 = *(__int64 **)v26;
          v28 = *(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 8);
          if ( *(_QWORD *)v26 == v28 )
          {
            v55 = *v27;
          }
          else
          {
            do
            {
              v55 = *v27;
              v29 = v27;
              if ( (unsigned __int64)*v27 > 1 )
                goto LABEL_19;
              ++v27;
            }
            while ( (__int64 *)v28 != v27 );
            v55 = v29[1];
          }
LABEL_19:
          v30 = sub_63BA90(*(_QWORD *)(a1 + 8), v55);
          v31 = *(_DWORD *)(v55 + 12);
          v32 = (__int64 **)v30;
          v33 = &v15[4 * (v31 & 7)];
          i = v33;
          while ( 1 )
          {
            v35 = *(_QWORD *)i;
            if ( *(_QWORD *)i <= 1u )
            {
              if ( !v35 )
                goto LABEL_25;
              goto LABEL_22;
            }
            if ( *(_DWORD *)(v35 + 12) == v31 && v35 == v55 )
              break;
LABEL_22:
            i += 4;
            if ( v15 + 32 == i )
            {
              if ( v15 != v33 )
              {
                for ( i = v15; v33 != i; i += 4 )
                {
                  v53 = *(_QWORD *)i;
                  if ( *(_QWORD *)i > 1u )
                  {
                    if ( *(_DWORD *)(v53 + 12) == v31 && v53 == v55 )
                      goto LABEL_54;
                  }
                  else if ( !v53 )
                  {
                    break;
                  }
                }
              }
LABEL_25:
              v58 = -1;
              goto LABEL_26;
            }
          }
LABEL_54:
          v58 = i[2];
LABEL_26:
          v36 = *v32;
          if ( *v32 )
          {
            for ( j = &v36[*((unsigned int *)v36 - 1)]; j != v36; ++v36 )
              sub_52A8F0(a1, *v36, v58, (__int64)a2, v24);
          }
          v37 = sub_4DB350(**(_QWORD **)a1, v55);
          sub_52C6B0(a2, v37);
LABEL_30:
          if ( ++v23 == v63 )
          {
LABEL_31:
            sub_186B220(v64);
            break;
          }
        }
      }
      v38 = *(__int64 **)(a1 + 24);
      v39 = &v38[2 * *(unsigned int *)(a1 + 32)];
      if ( v38 != v39 )
      {
        while ( (unsigned __int64)*v38 <= 1 )
        {
          v38 += 2;
          if ( v39 == v38 )
            goto LABEL_48;
        }
        if ( v39 != v38 )
        {
          v40 = *v38;
          do
          {
            v41 = sub_4DA9E0(**(_QWORD **)a1, v40, *((_DWORD *)v38 + 2));
            v42 = (_QWORD *)*a3;
            if ( *a3 )
            {
              v43 = *((_DWORD *)v42 - 1);
              if ( v43 == *((_DWORD *)v42 - 2) )
              {
                v49 = (3 * v43 + 1) >> 1;
                v50 = 8 * v49 + 8;
                if ( 8 * v43 + 8 >= (unsigned int)v50 || v43 >= v49 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v67, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v67);
                  sub_233E40((__int64)v67);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v62 = (3 * v43 + 1) >> 1;
                v59 = v41;
                v51 = (unsigned int *)sub_186B300(v42 - 1, v50);
                v52 = v51[1];
                v42 = v51 + 2;
                *v51 = v62;
                LODWORD(v51) = v52;
                v46 = &v42[v52];
                *a3 = v42;
                v45 = (_DWORD)v51 + 1;
                v41 = v59;
              }
              else
              {
                v44 = v43;
                v45 = v43 + 1;
                v46 = &v42[v44];
              }
            }
            else
            {
              v60 = v41;
              v54 = (_QWORD *)sub_186B270(0x18u);
              v42 = v54 + 1;
              *v54 = 2;
              v41 = v60;
              v46 = v54 + 1;
              *a3 = v54 + 1;
              v45 = 1;
            }
            *v46 = v41;
            *((_DWORD *)v42 - 1) = v45;
            v47 = a3[1];
            if ( v47 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 16LL))(v47, v41);
            v48 = v38 + 2;
            if ( v39 == v38 + 2 )
              break;
            while ( 1 )
            {
              v40 = *v48;
              v38 = v48;
              if ( (unsigned __int64)*v48 > 1 )
                break;
              v48 += 2;
              if ( v39 == v48 )
                goto LABEL_48;
            }
          }
          while ( v39 != v48 );
        }
      }
LABEL_48:
      a2[1] = 0;
      return sub_186B220(v15);
    }
  }
  return result;
}

