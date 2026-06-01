__int64 __fastcall sub_4EECA0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  char **exception; // r12
  char **v7; // r12
  __int64 v11; // rbx
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // r13
  unsigned int *v15; // r15
  unsigned int *v16; // rbp
  _QWORD *v17; // r15
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // ecx
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r10d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  _QWORD *v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 i; // rcx
  __int64 v37; // rsi
  int v38; // eax
  unsigned int *v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // r10d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rsi
  unsigned __int32 v45; // eax
  __m128 v46; // xmm0
  _QWORD *v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned int *v53; // [rsp+8h] [rbp-90h]
  __int64 v54; // [rsp+8h] [rbp-90h]
  __int64 v55; // [rsp+8h] [rbp-90h]
  _QWORD *v56; // [rsp+8h] [rbp-90h]
  __int64 v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+10h] [rbp-88h]
  unsigned int v59; // [rsp+10h] [rbp-88h]
  unsigned int v60; // [rsp+10h] [rbp-88h]
  _QWORD *v61; // [rsp+10h] [rbp-88h]
  _QWORD *v62; // [rsp+18h] [rbp-80h]
  _QWORD *v63; // [rsp+18h] [rbp-80h]
  __int64 v64; // [rsp+20h] [rbp-78h]
  __int64 v66[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( a1 == a2[1] && a1 == a3[1] )
  {
    v11 = sub_186B270(0x38u);
    v12 = sub_4EC5D0(a3);
    v13 = sub_4EC5D0(a2);
    *(_QWORD *)(v11 + 8) = 0;
    v14 = (__int64)v13;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)v11 = qword_1C666F0;
    if ( a4 )
    {
      v58 = a4;
      v15 = &a5[v58];
      do
        sub_4EE3A0((_QWORD *)(v11 + 16), a5++);
      while ( v15 != a5 );
      v16 = a6;
      *(_QWORD *)(v11 + 24) = 0;
      v17 = (_QWORD *)(v11 + 24);
      v53 = &a6[v58];
      do
        sub_4EE3A0((_QWORD *)(v11 + 24), v16++);
      while ( v16 != v53 );
      v18 = *(_QWORD **)(v11 + 8);
      if ( v18 )
      {
        v19 = *(_QWORD **)(v14 + 16);
        *((_DWORD *)v18 - 1) = 0;
        if ( v19 )
        {
          v20 = *((unsigned int *)v19 - 1);
          if ( (_DWORD)v20 )
          {
            v21 = 0;
            v22 = 8 * v20;
            while ( 1 )
            {
              v26 = *((_DWORD *)v18 - 1);
              if ( v26 == *((_DWORD *)v18 - 2) )
              {
                v27 = (3 * v26 + 1) >> 1;
                v28 = 8 * v27 + 8;
                if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v66, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v66);
                  sub_233E40((__int64)v66);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v62 = v19;
                v59 = (3 * v26 + 1) >> 1;
                v54 = v21;
                v29 = (unsigned int *)sub_186B300(v18 - 1, v28);
                v18 = v29 + 2;
                v21 = v54;
                *(_QWORD *)(v11 + 8) = v29 + 2;
                v19 = v62;
                *v29 = v59;
                v30 = v29[1];
                v31 = v30;
                v25 = &v18[v30];
                v24 = v31 + 1;
              }
              else
              {
                v23 = v26;
                v24 = v26 + 1;
                v25 = &v18[v23];
              }
LABEL_13:
              v21 += 8;
              *v25 = *v19;
              *((_DWORD *)v18 - 1) = v24;
              if ( v22 == v21 )
                break;
              v19 = (_QWORD *)(v21 + *(_QWORD *)(v14 + 16));
            }
            v33 = (_QWORD *)v12[2];
            if ( !v33 )
              goto LABEL_31;
            v34 = *((unsigned int *)v33 - 1);
            if ( !(_DWORD)v34 )
              goto LABEL_31;
            v35 = 8 * v34;
            i = 0;
            goto LABEL_27;
          }
        }
LABEL_38:
        v33 = (_QWORD *)v12[2];
        if ( !v33 || (v50 = *((unsigned int *)v33 - 1), !(_DWORD)v50) )
        {
LABEL_31:
          *(_QWORD *)v11 = &off_1C4FDE8;
          v45 = sub_4ED4D0(a1, (__int64 *)(v11 + 8));
          sub_4EC660(a1, v45);
          v46 = _mm_loadh_ps((const double *)(v14 + 32));
          *(_QWORD *)(v11 + 48) = v12[4];
          *(__m128 *)(v11 + 32) = v46;
          sub_4EDDC0(v14, (_QWORD *)(v11 + 16), 0);
          sub_4EDDC0((__int64)v12, v17, 0);
          return v11;
        }
        v35 = 8 * v50;
        if ( !v18 )
        {
          v61 = (_QWORD *)v12[2];
          v57 = 8 * v50;
          v51 = (_QWORD *)sub_186B270(0x18u);
          v18 = v51 + 1;
          v35 = v57;
          v33 = v61;
          i = 0;
          *v51 = 2;
          v39 = (unsigned int *)v18;
          v38 = 1;
          *(_QWORD *)(v11 + 8) = v18;
          goto LABEL_25;
        }
        for ( i = 0; ; v33 = (_QWORD *)(i + v12[2]) )
        {
LABEL_27:
          v40 = *((_DWORD *)v18 - 1);
          if ( v40 == *((_DWORD *)v18 - 2) )
          {
            v41 = (3 * v40 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v66, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v64 = i;
            v63 = v33;
            v60 = (3 * v40 + 1) >> 1;
            v55 = v35;
            v43 = (unsigned int *)sub_186B300(v18 - 1, v42);
            v44 = v43[1];
            v18 = v43 + 2;
            v35 = v55;
            v33 = v63;
            *(_QWORD *)(v11 + 8) = v43 + 2;
            *v43 = v60;
            i = v64;
            v39 = &v43[2 * v44 + 2];
            v38 = v44 + 1;
          }
          else
          {
            v37 = v40;
            v38 = v40 + 1;
            v39 = (unsigned int *)&v18[v37];
          }
LABEL_25:
          i += 8;
          *(_QWORD *)v39 = *v33;
          *((_DWORD *)v18 - 1) = v38;
          if ( v35 == i )
            break;
        }
        goto LABEL_31;
      }
      v47 = *(_QWORD **)(v14 + 16);
      if ( !v47 )
        goto LABEL_38;
      v48 = *((unsigned int *)v47 - 1);
      if ( !(_DWORD)v48 )
        goto LABEL_38;
    }
    else
    {
      v47 = (_QWORD *)v13[2];
      *(_QWORD *)(v11 + 24) = 0;
      v17 = (_QWORD *)(v11 + 24);
      if ( !v47 || (v48 = *((unsigned int *)v47 - 1), !(_DWORD)v48) )
      {
        v18 = nullptr;
        goto LABEL_38;
      }
    }
    v56 = v47;
    v22 = 8 * v48;
    v49 = (_QWORD *)sub_186B270(0x18u);
    *v49 = 2;
    v25 = v49 + 1;
    v19 = v56;
    v21 = 0;
    *(_QWORD *)(v11 + 8) = v25;
    v18 = v25;
    v24 = 1;
    goto LABEL_13;
  }
  return 0;
}

