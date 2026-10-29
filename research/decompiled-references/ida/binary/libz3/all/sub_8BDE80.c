__int64 __fastcall sub_8BDE80(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, __int64 *a5, char a6)
{
  __int64 v7; // r14
  _DWORD *i; // rbx
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  size_t v13; // rsi
  unsigned int v14; // r13d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // r9d
  _QWORD *v19; // rbp
  char v20; // r10
  unsigned int *v21; // r14
  unsigned int *v22; // r8
  unsigned int v23; // r13d
  unsigned int *v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ecx
  int v27; // edx
  _BYTE *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r11d
  unsigned int v32; // r11d
  unsigned int v33; // esi
  unsigned int v34; // r11d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  char *v38; // r13
  __int64 j; // rax
  _QWORD *v40; // rdi
  _QWORD *v42; // rax
  char **v43; // r13
  __int64 v44; // rdx
  char **exception; // rbp
  __int64 v46; // rdx
  unsigned __int8 v48; // [rsp+Ch] [rbp-9Ch]
  unsigned __int8 v49; // [rsp+Ch] [rbp-9Ch]
  unsigned __int8 v50; // [rsp+Ch] [rbp-9Ch]
  unsigned __int8 v51; // [rsp+Ch] [rbp-9Ch]
  __int64 v54; // [rsp+18h] [rbp-90h]
  unsigned int *v55; // [rsp+20h] [rbp-88h]
  unsigned int *v56; // [rsp+20h] [rbp-88h]
  unsigned int v57; // [rsp+30h] [rbp-78h]
  unsigned int v58; // [rsp+30h] [rbp-78h]
  unsigned int v59; // [rsp+34h] [rbp-74h]
  unsigned int v60; // [rsp+34h] [rbp-74h]
  unsigned int v61; // [rsp+38h] [rbp-70h]
  char v62; // [rsp+38h] [rbp-70h]
  char v63; // [rsp+3Fh] [rbp-69h]
  unsigned int v64; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v65[11]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a2;
  i = (_DWORD *)a1[3];
  if ( i )
  {
    v10 = *(i - 1);
    if ( v10 )
    {
      v11 = (_QWORD *)sub_186B270(0xAu);
      *v11 = 2;
      for ( i = v11 + 1; ; i = v15 + 2 )
      {
        v16 = *(i - 2);
        if ( v16 >= v10 )
          break;
        v12 = (3 * v16 + 1) >> 1;
        v13 = v12 + 8;
        v14 = v12;
        if ( v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v65, "Overflow encountered when expanding vector", v46);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(i - 2, v13);
        *v15 = v14;
      }
      *(i - 1) = v10;
      memset(i, 0, v10);
    }
    else
    {
      i = nullptr;
    }
  }
  v17 = sub_186B270(0x20u);
  *(_DWORD *)(v17 + 8) = v7;
  v18 = 0;
  v19 = (_QWORD *)(v17 + 8);
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)v17 = 0x100000002LL;
  *((_BYTE *)i + v7) = 1;
  v20 = a6 ^ 1;
  do
  {
    v54 = 12LL * v18;
    v21 = *(unsigned int **)(a1[6] + 8LL * *(unsigned int *)((char *)v19 + v54));
    if ( v21 )
    {
      v22 = &v21[*(v21 - 1)];
      if ( v21 != v22 )
      {
        while ( 1 )
        {
          v23 = *v21;
          v24 = (unsigned int *)(a1[5] + 24LL * *v21);
          if ( !*((_BYTE *)v24 + 20) )
            goto LABEL_15;
          v25 = v24[1];
          v26 = v24[1];
          v27 = v24[2] + *(_DWORD *)(a1[3] + 4LL * *v24) - *(_DWORD *)(a1[3] + 4 * v25);
          if ( v27 )
          {
            if ( !v20 || v27 >= 0 )
              goto LABEL_15;
          }
          if ( v24[3] >= a4 )
            goto LABEL_15;
          if ( a3 == (_DWORD)v25 )
          {
            v48 = *((_BYTE *)v24 + 20);
            v37 = *a5;
            v64 = v24[4];
            sub_893780(*(_QWORD **)(v37 + 176), &v64);
            v31 = v48;
            v38 = (char *)v19 + v54;
            for ( j = *(unsigned int *)((char *)v19 + v54 + 8); (_DWORD)j != -1; j = *((unsigned int *)v38 + 2) )
            {
              v49 = v31;
              v40 = *(_QWORD **)(*a5 + 176);
              LODWORD(v65[0]) = *(_DWORD *)(a1[5] + 24 * j + 16);
              sub_893780(v40, (unsigned int *)v65);
              v31 = v49;
              v38 = (char *)v19 + 12 * *((unsigned int *)v38 + 1);
            }
            if ( i )
            {
              v50 = v31;
              sub_186B220(i - 2);
              v31 = v50;
            }
            if ( !v19 )
              return v31;
            goto LABEL_39;
          }
          v28 = (char *)i + v25;
          if ( *((_BYTE *)i + v25) )
          {
LABEL_15:
            if ( v22 == ++v21 )
              goto LABEL_25;
          }
          else
          {
            if ( v19 )
            {
              v29 = *((unsigned int *)v19 - 1);
              if ( (_DWORD)v29 == *((_DWORD *)v19 - 2) )
              {
                v32 = 3 * v29 + 1;
                v33 = v32 & 0xFFFFFFFE;
                v34 = v32 >> 1;
                v35 = 4 * (v34 + v33) + 8;
                if ( 12 * (int)v29 + 8 >= (unsigned int)v35 || (unsigned int)v29 >= v34 )
                {
                  v43 = (char **)__cxa_allocate_exception(0x28u);
                  sub_12D192(v65, "Overflow encountered when expanding vector", v44);
                  *v43 = (char *)off_1C63128;
                  sub_2333C0(v43 + 1, v65);
                  sub_233E40((__int64)v65);
                  __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v63 = v20;
                v61 = v18;
                v59 = v34;
                v57 = v26;
                v55 = v22;
                v36 = (unsigned int *)sub_186B300(v19 - 1, v35);
                v19 = v36 + 2;
                v22 = v55;
                v26 = v57;
                v28 = (char *)i + v25;
                v18 = v61;
                v20 = v63;
                *v36 = v59;
                v30 = (__int64)&v36[3 * v36[1] + 2];
              }
              else
              {
                v30 = (__int64)v19 + 12 * v29;
              }
            }
            else
            {
              v62 = v20;
              v60 = v18;
              v58 = v24[1];
              v56 = v22;
              v42 = (_QWORD *)sub_186B270(0x20u);
              v19 = v42 + 1;
              *v42 = 2;
              v22 = v56;
              v26 = v58;
              v28 = (char *)i + v25;
              v30 = (__int64)(v42 + 1);
              v18 = v60;
              v20 = v62;
            }
            ++v21;
            *v28 = 1;
            *(_DWORD *)(v30 + 8) = v23;
            *(_QWORD *)v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v18)).m128i_u64[0];
            ++*((_DWORD *)v19 - 1);
            if ( v22 == v21 )
            {
LABEL_25:
              ++v18;
              if ( v19 )
                goto LABEL_26;
              if ( i )
                sub_186B220(i - 2);
              return 0;
            }
          }
        }
      }
    }
    ++v18;
LABEL_26:
    ;
  }
  while ( v18 < *((_DWORD *)v19 - 1) );
  if ( i )
    sub_186B220(i - 2);
  LOBYTE(v31) = 0;
LABEL_39:
  v51 = v31;
  sub_186B220(v19 - 1);
  return v51;
}

