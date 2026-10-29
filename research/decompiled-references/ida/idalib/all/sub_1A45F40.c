void __fastcall sub_1A45F40(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // dl
  __int64 *v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // rsi
  __int64 *v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rsi
  __m128i v41; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+20h] [rbp-98h]
  void **p_ptr; // [rsp+28h] [rbp-90h]
  _BYTE *v44; // [rsp+30h] [rbp-88h]
  __int64 v45; // [rsp+38h] [rbp-80h]
  unsigned __int64 v46; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+58h] [rbp-60h]
  _BYTE v49[88]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a3;
  v8 = a2;
  p_ptr = &ptr;
  v44 = v49;
  ptr = v49;
  v48 = 0x400000000LL;
  v45 = a1 + 24;
  while ( 1 )
  {
    v9 = sub_B946F0(v8, a2, a3, a4, a5, a6);
    v11 = v10;
    v46 = v9;
    if ( v10 != v9 )
    {
      do
      {
        v12 = sub_B8EEF0(&v46);
        v14 = sub_B99AD0(v12);
        if ( v14 )
          v14 += 48;
        v16 = *(_QWORD *)(v12 + 8);
        if ( (v16 & 6) != 0 )
        {
          v39 = *(_QWORD *)a1;
          if ( *(char *)(v12 + 29) < 0 )
          {
            v40 = sub_B8C660(v12);
            v16 = *(_QWORD *)(v12 + 8) & 7LL;
          }
          else
          {
            v40 = *(_QWORD *)(v12 - 8);
            LOBYTE(v16) = v16 & 7;
          }
          if ( !sub_1A42210(v39, v40, (unsigned __int8)v16 > 2u, v13, v15, a6) )
          {
            a2 = v12;
            if ( !sub_1A42580(v39, v12, 0) )
              goto LABEL_21;
          }
        }
        v17 = *(_BYTE *)(a1 + 172);
        if ( v17 )
        {
          v18 = *(__int64 **)(a1 + 152);
          a5 = *(unsigned int *)(a1 + 164);
          v19 = a5;
          v20 = &v18[a5];
          if ( v18 != v20 )
          {
            v21 = *(__int64 **)(a1 + 152);
            if ( v14 == *v18 )
            {
LABEL_43:
              v17 = 0;
              goto LABEL_14;
            }
            while ( v20 != ++v21 )
            {
              if ( v14 == *v21 )
                goto LABEL_43;
            }
          }
          if ( (unsigned int)a5 < *(_DWORD *)(a1 + 160) )
          {
            a5 = (unsigned int)(a5 + 1);
            *(_DWORD *)(a1 + 164) = a5;
            *v20 = v14;
            v18 = *(__int64 **)(a1 + 152);
            v21 = &v18[v19];
LABEL_14:
            a2 = *(unsigned int *)(a1 + 164);
            a4 = (unsigned __int64)&v18[a2];
            goto LABEL_15;
          }
        }
        v21 = (__int64 *)sub_2236760(a1 + 152, v14);
        v18 = *(__int64 **)(a1 + 152);
        if ( *(_BYTE *)(a1 + 172) )
          goto LABEL_14;
        a2 = *(unsigned int *)(a1 + 160);
        a4 = (unsigned __int64)&v18[a2];
LABEL_15:
        if ( (__int64 *)a4 != v21 && (unsigned __int64)*v21 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v22 = v21 + 1;
          do
          {
            a2 = (__int64)v22;
            if ( (_QWORD *)a4 == v22 )
              break;
            ++v22;
          }
          while ( *(_QWORD *)a2 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v17 )
        {
          v28 = sub_B99AD0(v12);
          if ( v28 )
            v28 += 48;
          while ( 1 )
          {
            a2 = v6;
            if ( (unsigned __int8)sub_B91990(v28, v6, (__int64)v24, v25, v26, v27) )
              break;
            v33 = *(_QWORD *)(sub_B8C1B0(v28) + 16);
            if ( (v33 & 4) != 0 )
            {
              v24 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
              v28 = *v24;
            }
            else
            {
              v24 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
              v28 = (__int64)v24;
            }
          }
          v41.m128i_i64[0] = sub_B91570(v28, v6, v29, v30, v31, v32);
          v34 = sub_B99AD0(v12);
          v35 = *(unsigned int *)(a1 + 20);
          if ( v34 )
            v34 += 48;
          v42 = v34;
          v36 = *(unsigned int *)(a1 + 16);
          v37 = (__m128i)_mm_loadh_ps((const double *)v41.m128i_i64);
          if ( v36 + 1 > v35 )
          {
            a2 = v45;
            v41 = v37;
            sub_2237220(a1 + 8, v45, v36 + 1, 16);
            v36 = *(unsigned int *)(a1 + 16);
            v37 = _mm_load_si128(&v41);
          }
          *(__m128i *)(*(_QWORD *)(a1 + 8) + 16 * v36) = v37;
          v38 = (unsigned int)v48;
          a4 = HIDWORD(v48);
          ++*(_DWORD *)(a1 + 16);
          if ( v38 + 1 > a4 )
          {
            a2 = (__int64)v44;
            sub_2237220(p_ptr, v44, v38 + 1, 8);
            v38 = (unsigned int)v48;
          }
          *((_QWORD *)ptr + v38) = v14;
          LODWORD(v48) = v48 + 1;
        }
LABEL_21:
        if ( (v46 & 4) != 0 && (v46 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v23 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          v46 = v23;
        }
        else
        {
          v46 = 0;
          v23 = 0;
        }
      }
      while ( v11 != v23 );
    }
    if ( !(_DWORD)v48 )
      break;
    a3 = (unsigned int)v48;
    v8 = *((_QWORD *)ptr + (unsigned int)v48 - 1);
    LODWORD(v48) = v48 - 1;
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
