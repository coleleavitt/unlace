__int64 __fastcall sub_B4FE40(__int64 a1, unsigned int *a2, int a3, _QWORD *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  unsigned int *v6; // r13
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 *v10; // rbx
  void *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  __int64 v14; // r14
  _QWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // r13
  __int64 v19; // rbx
  unsigned int *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  _QWORD *v27; // rsi
  unsigned int v28; // r10d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  _QWORD *v33; // rax
  unsigned int v34; // eax
  _QWORD *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  size_t v39; // rdi
  unsigned int *v40; // rax
  __int64 *v41; // r13
  unsigned int *v42; // rbp
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 *v45; // r10
  unsigned __int64 v46; // rsi
  __int64 *v47; // r9
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  __m128i v50; // xmm0
  unsigned __int64 v51; // rsi
  __int64 *v52; // rdx
  __int64 v53; // r9
  __int64 *v54; // r14
  void *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rax
  _DWORD *v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // [rsp+0h] [rbp-98h]
  __int64 v61; // [rsp+0h] [rbp-98h]
  unsigned int *v63; // [rsp+10h] [rbp-88h]
  unsigned int v64; // [rsp+10h] [rbp-88h]
  _QWORD *v65; // [rsp+18h] [rbp-80h]
  _QWORD *v66; // [rsp+18h] [rbp-80h]
  __int64 v68; // [rsp+20h] [rbp-78h]
  __int64 v69; // [rsp+20h] [rbp-78h]
  unsigned int v71; // [rsp+2Ch] [rbp-6Ch]
  __int64 v72[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a2;
  v8 = *(__int64 **)(a1 + 104);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[v9];
      do
      {
        while ( *v8 )
        {
          v11 = (void *)(*v8++ - 8);
          sub_186B220(v11);
          if ( v8 == v10 )
          {
            v8 = *(__int64 **)(a1 + 104);
            goto LABEL_7;
          }
        }
        ++v8;
      }
      while ( v8 != v10 );
      v8 = *(__int64 **)(a1 + 104);
    }
LABEL_7:
    *((_DWORD *)v8 - 1) = 0;
    v12 = a2[5];
    *(_DWORD *)(a1 + 168) = v12;
    v13 = *((_DWORD *)v8 - 1);
    v60 = v12 + 1;
    if ( v13 >= v12 + 1 )
    {
LABEL_8:
      if ( !v12 )
        return sub_B4F7F0(a1, v6, 0);
      goto LABEL_9;
    }
    if ( v8 )
    {
LABEL_34:
      v64 = v13;
      while ( 1 )
      {
        v36 = *((_DWORD *)v8 - 2);
        v37 = v60;
        if ( v36 >= v60 )
          break;
        while ( 1 )
        {
          v38 = (3 * v36 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v36 + 8 >= (unsigned int)v39 || v36 >= v38 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v72, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v72);
            sub_233E40((__int64)v72);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B270(v39);
          v41 = *(__int64 **)(a1 + 104);
          v42 = v40;
          v8 = (__int64 *)(v40 + 2);
          if ( !v41 )
            break;
          v43 = *((unsigned int *)v41 - 1);
          v44 = 8 * v43;
          v40[1] = v43;
          v45 = &v41[v43];
          if ( v41 != v45 )
          {
            v46 = v44 - 8;
            v47 = v41;
            if ( (unsigned __int64)(v44 - 8) <= 8 || v8 < v41 + 2 && v41 < (__int64 *)v40 + 3 )
            {
              v58 = v40 + 2;
              do
              {
                v59 = *v47;
                *v47++ = 0;
                v58 += 2;
                *((_QWORD *)v58 - 1) = v59;
              }
              while ( v47 != v45 );
            }
            else
            {
              v48 = 0;
              v49 = (v46 >> 3) + 1;
              do
              {
                v50 = _mm_loadu_si128((const __m128i *)&v41[v48 / 2]);
                *(_OWORD *)&v41[v48 / 2] = 0;
                *(__m128i *)&v40[v48 + 2] = v50;
                v48 += 4LL;
              }
              while ( v48 != 4 * (v49 >> 1) );
              if ( (v49 & 1) != 0 )
              {
                v51 = v49 & 0xFFFFFFFFFFFFFFFELL;
                v52 = &v41[v51];
                v53 = *v52;
                *v52 = 0;
                v8[v51] = v53;
              }
            }
          }
          v54 = &v41[v43];
          if ( (_DWORD)v43 )
          {
            do
            {
              while ( *v41 )
              {
                v55 = (void *)(*v41++ - 8);
                sub_186B220(v55);
                if ( v54 == v41 )
                  goto LABEL_50;
              }
              ++v41;
            }
            while ( v54 != v41 );
LABEL_50:
            v41 = *(__int64 **)(a1 + 104);
          }
          sub_186B220(v41 - 1);
          *v42 = v38;
          v37 = v60;
          v36 = *((_DWORD *)v8 - 2);
          *(_QWORD *)(a1 + 104) = v8;
          if ( v36 >= v60 )
            goto LABEL_52;
        }
        v40[1] = 0;
        *(_QWORD *)(a1 + 104) = v8;
        *v40 = v38;
      }
LABEL_52:
      v6 = a2;
      *((_DWORD *)v8 - 1) = v37;
      v56 = 8LL * v37;
      v12 = *(_DWORD *)(a1 + 168);
      v57 = 8LL * v64;
      if ( v57 != v56 )
        memset(&v8[(unsigned __int64)v57 / 8], 0, v56 - v57);
      goto LABEL_8;
    }
LABEL_33:
    v35 = (_QWORD *)sub_186B270(0x18u);
    v8 = v35 + 1;
    *v35 = 2;
    *(_QWORD *)(a1 + 104) = v35 + 1;
    goto LABEL_34;
  }
  v34 = a2[5];
  *(_DWORD *)(a1 + 168) = v34;
  v60 = v34 + 1;
  if ( v34 != -1 )
  {
    v13 = 0;
    goto LABEL_33;
  }
LABEL_9:
  v63 = v6;
  v14 = 0;
  v15 = &a4[a3];
  while ( 1 )
  {
    v16 = v8[v14];
    if ( v16 )
      *(_DWORD *)(v16 - 4) = 0;
    v17 = *(_QWORD *)&v63[2 * v14 + 20];
    if ( a3 )
    {
      v18 = a4;
      v61 = v14;
      v19 = 8 * v14;
      do
      {
        while ( v17 != sub_15D1F10(*v18) )
        {
          if ( ++v18 == v15 )
            goto LABEL_20;
        }
        v20 = (unsigned int *)*v18;
        sub_B6F780(*(_QWORD *)a1);
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
        v22 = *(_QWORD *)(v21 + 8LL * *v20);
        v23 = *(_QWORD **)(v19 + *(_QWORD *)(a1 + 104));
        if ( v23 )
        {
          v24 = *((_DWORD *)v23 - 1);
          if ( v24 == *((_DWORD *)v23 - 2) )
          {
            v28 = (3 * v24 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v29 || v24 >= v28 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v72, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v72);
              sub_233E40((__int64)v72);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v71 = (3 * v24 + 1) >> 1;
            v68 = v22;
            v65 = (_QWORD *)(v19 + *(_QWORD *)(a1 + 104));
            v30 = (unsigned int *)sub_186B300(v23 - 1, v29);
            v31 = v30[1];
            v23 = v30 + 2;
            v22 = v68;
            *v65 = v30 + 2;
            *v30 = v71;
            LODWORD(v30) = v31;
            v27 = &v23[v31];
            v26 = (_DWORD)v30 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v23[v25];
          }
        }
        else
        {
          v69 = *(_QWORD *)(v21 + 8LL * *v20);
          v66 = (_QWORD *)(v19 + *(_QWORD *)(a1 + 104));
          v33 = (_QWORD *)sub_186B270(0x18u);
          v22 = v69;
          v23 = v33 + 1;
          v27 = v23;
          *v33 = 2;
          v26 = 1;
          *v66 = v23;
        }
        ++v18;
        *v27 = v22;
        *((_DWORD *)v23 - 1) = v26;
      }
      while ( v18 != v15 );
LABEL_20:
      v14 = v61;
    }
    if ( (unsigned int)++v14 >= *(_DWORD *)(a1 + 168) )
      break;
    v8 = *(__int64 **)(a1 + 104);
  }
  v6 = v63;
  return sub_B4F7F0(a1, v6, 0);
}

