__int64 __fastcall sub_4729C0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // r13
  __int64 v17; // r12
  __int64 v18; // r15
  char *v19; // rax
  char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // r15
  _QWORD *v27; // r13
  __int64 v28; // rbx
  unsigned int v29; // ecx
  _QWORD *v30; // rsi
  __int64 v31; // r12
  char *v32; // rax
  char *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // r12d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r10
  _QWORD *v51; // rax
  char v52; // [rsp+0h] [rbp-118h]
  unsigned int v53; // [rsp+0h] [rbp-118h]
  __int64 v56; // [rsp+18h] [rbp-100h]
  __int64 v57; // [rsp+18h] [rbp-100h]
  __int64 v58[4]; // [rsp+30h] [rbp-E8h] BYREF
  void *v59; // [rsp+50h] [rbp-C8h]
  __int64 v60; // [rsp+58h] [rbp-C0h]
  _BYTE v61[184]; // [rsp+60h] [rbp-B8h] BYREF

  result = 0x1000000000LL;
  v8 = *(_DWORD *)(a2 + 24);
  v59 = v61;
  v60 = 0x1000000000LL;
  if ( !v8 )
    goto LABEL_2;
  v23 = v8 - 1;
  v24 = *(_QWORD *)(a1 + 8);
  v53 = v8;
  if ( *(_QWORD *)(v24 + 848) == sub_15D1F10(*(_QWORD *)(a2 + 8 * v23 + 32)) )
  {
    result = a2 + 32;
    v26 = a2 + 32 + 8LL * v53;
LABEL_34:
    v27 = (_QWORD *)result;
    do
    {
      while ( 1 )
      {
        v28 = *v27;
        result = sub_15D37A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL, *v27);
        if ( (_BYTE)result )
          break;
        if ( (_QWORD *)v26 == ++v27 )
          goto LABEL_40;
      }
      v29 = v60;
      if ( (unsigned int)v60 >= HIDWORD(v60) )
      {
        v31 = (unsigned int)(2 * HIDWORD(v60));
        v32 = (char *)sub_186B270(8 * v31);
        v29 = v60;
        v33 = (char *)v59;
        v30 = v32;
        if ( (_DWORD)v60 )
        {
          if ( (unsigned int)(v60 - 1) <= 2 || v32 == (char *)v59 + 8 )
          {
            v47 = 0;
            v48 = 8LL * (unsigned int)v60;
            do
            {
              a5 = *(_QWORD *)&v33[v47];
              v30[v47 / 8] = a5;
              v47 += 8LL;
            }
            while ( v48 != v47 );
          }
          else
          {
            v34 = 0;
            a5 = 16LL * ((unsigned int)v60 >> 1);
            do
            {
              *(__m128i *)&v30[v34 / 8] = _mm_loadu_si128((const __m128i *)&v33[v34]);
              v34 += 16LL;
            }
            while ( a5 != v34 );
            if ( (v29 & 1) != 0 )
            {
              v35 = v29 & 0xFFFFFFFE;
              a5 = *(_QWORD *)&v33[8 * v35];
              v30[v35] = a5;
            }
          }
        }
        if ( v33 != v61 && v33 )
        {
          sub_186B220(v33);
          v29 = v60;
        }
        v59 = v30;
        HIDWORD(v60) = v31;
      }
      else
      {
        v30 = v59;
      }
      result = v29;
      ++v27;
      a4 = v29 + 1;
      v30[result] = v28;
      LODWORD(v60) = a4;
    }
    while ( (_QWORD *)v26 != v27 );
    goto LABEL_40;
  }
  v25 = 8 * v23;
  result = a2 + 32;
  v26 = a2 + 32 + v25;
  if ( v25 )
    goto LABEL_34;
LABEL_40:
  v8 = v60;
LABEL_2:
  v52 = 1;
LABEL_3:
  while ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *((_QWORD *)v59 + v8 - 1);
      LODWORD(v60) = v8 - 1;
      result = sub_4478E0(v9, v10);
      if ( !(_BYTE)result )
      {
        result = sub_15D37A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL, v10);
        v8 = v60;
        if ( !(_BYTE)result )
          goto LABEL_3;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
        result = sub_15D37A0(v11 + 136, v10);
        if ( !(_BYTE)result )
        {
          result = sub_15D37A0(v11 + 24, v10);
          if ( !(_BYTE)result )
          {
            result = sub_4A7E40(v11, *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 24) - 1) + 32));
            if ( (_BYTE)result )
            {
              if ( !*(_WORD *)(v10 + 4)
                && (v36 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL)) != nullptr
                && !*v36
                && v36[1] == 14
                || (result = sub_3D45E0(
                               *(_QWORD *)(a1 + 8),
                               *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 24) - 1) + 32)),
                    (_BYTE)result) )
              {
                v37 = *(_QWORD *)(a1 + 16);
                if ( (unsigned __int8)sub_15D37A0(*(_QWORD *)(v37 + 16) + 24LL, a2)
                  || (unsigned __int8)sub_15D37A0(*(_QWORD *)(v37 + 16) + 136LL, a2) )
                {
                  sub_4718F0(a1, 0, v10, v38, v39);
                }
                else
                {
                  sub_4718F0(a1, a2, v10, v38, v39);
                }
                v40 = (_QWORD *)*a3;
                if ( *a3 )
                {
                  v41 = *((_DWORD *)v40 - 1);
                  if ( v41 == *((_DWORD *)v40 - 2) )
                  {
                    v43 = (3 * v41 + 1) >> 1;
                    v44 = 8 * v43 + 8;
                    if ( 8 * v41 + 8 >= (unsigned int)v44 || v41 >= v43 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v58, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v58);
                      sub_233E40((__int64)v58);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v45 = (unsigned int *)sub_186B300(v40 - 1, v44);
                    v46 = v45[1];
                    v40 = v45 + 2;
                    *v45 = v43;
                    LODWORD(v45) = v46;
                    *a3 = v40;
                    a4 = (__int64)&v40[v46];
                    result = (unsigned int)((_DWORD)v45 + 1);
                  }
                  else
                  {
                    v42 = v41;
                    result = v41 + 1;
                    a4 = (__int64)&v40[v42];
                  }
                }
                else
                {
                  v51 = (_QWORD *)sub_186B270(0x18u);
                  v40 = v51 + 1;
                  *v51 = 2;
                  a4 = (__int64)(v51 + 1);
                  *a3 = v51 + 1;
                  result = 1;
                }
                *(_QWORD *)a4 = v10;
                v52 = 0;
                *((_DWORD *)v40 - 1) = result;
                v8 = v60;
                goto LABEL_3;
              }
            }
          }
        }
        v12 = *(unsigned int *)(v10 + 24);
        if ( (_DWORD)v12 )
          break;
      }
      v8 = v60;
      if ( !(_DWORD)v60 )
        goto LABEL_6;
    }
    v13 = (unsigned int)(v12 - 1);
    v56 = *(_QWORD *)(a1 + 8);
    v14 = sub_15D1F10(*(_QWORD *)(v10 + 8 * v13 + 32));
    a4 = v56;
    if ( *(_QWORD *)(v56 + 848) == v14 )
    {
      v15 = (__int64 *)(v10 + 32);
      v8 = v60;
      v16 = &v15[v12];
    }
    else
    {
      result = 8 * v13;
      v15 = (__int64 *)(v10 + 32);
      v8 = v60;
      v16 = &v15[v13];
      if ( !(8 * v13) )
        continue;
    }
    LODWORD(v17) = HIDWORD(v60);
    do
    {
      v18 = *v15;
      if ( v8 < (unsigned int)v17 )
      {
        a4 = (__int64)v59;
      }
      else
      {
        v17 = (unsigned int)(2 * v17);
        v19 = (char *)sub_186B270(8 * v17);
        v8 = v60;
        v20 = (char *)v59;
        a4 = (__int64)v19;
        if ( (_DWORD)v60 )
        {
          if ( (unsigned int)(v60 - 1) <= 2 || v19 == (char *)v59 + 8 )
          {
            v49 = 0;
            v50 = 8LL * (unsigned int)v60;
            do
            {
              *(_QWORD *)(a4 + v49) = *(_QWORD *)&v20[v49];
              v49 += 8;
            }
            while ( v49 != v50 );
          }
          else
          {
            v21 = 0;
            v22 = 16LL * ((unsigned int)v60 >> 1);
            do
            {
              *(__m128i *)(a4 + v21) = _mm_loadu_si128((const __m128i *)&v20[v21]);
              v21 += 16;
            }
            while ( v22 != v21 );
            if ( (v8 & 1) != 0 )
              *(_QWORD *)(a4 + 8LL * (v8 & 0xFFFFFFFE)) = *(_QWORD *)&v20[8 * (v8 & 0xFFFFFFFE)];
          }
        }
        if ( v20 && v20 != v61 )
        {
          v57 = a4;
          sub_186B220(v20);
          v8 = v60;
          a4 = v57;
        }
        v59 = (void *)a4;
        HIDWORD(v60) = v17;
      }
      result = v8;
      ++v15;
      ++v8;
      *(_QWORD *)(a4 + 8 * result) = v18;
      LODWORD(v60) = v8;
    }
    while ( v16 != v15 );
  }
LABEL_6:
  if ( v52 )
    result = sub_4718F0(a1, a2, 0, a4, a5);
  if ( v59 )
  {
    if ( v59 != v61 )
      return sub_186B220(v59);
  }
  return result;
}

