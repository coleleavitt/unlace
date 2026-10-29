__int64 __fastcall sub_694910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 *a6)
{
  unsigned int *v7; // r12
  _DWORD *v8; // rbx
  int v9; // edi
  _DWORD *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  _DWORD *v15; // r8
  _DWORD *i; // rax
  int v17; // ecx
  __int64 v18; // rbp
  _DWORD *v19; // r13
  __int64 v20; // rax
  _DWORD *v21; // rax
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // r15
  __int64 v30; // rsi
  unsigned int v31; // esi
  __int64 v32; // rax
  int v33; // edi
  _DWORD *v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // ecx
  _DWORD *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int *v49; // rax
  char *v50; // rdx
  char *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // r13
  int v58; // eax
  char **exception; // r13
  __int64 v60; // [rsp+8h] [rbp-100h]
  unsigned int v61; // [rsp+8h] [rbp-100h]
  __int64 v62; // [rsp+10h] [rbp-F8h]
  int *v63; // [rsp+20h] [rbp-E8h]
  __int64 v64; // [rsp+20h] [rbp-E8h]
  __int64 v65; // [rsp+28h] [rbp-E0h]
  unsigned int v66; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v67; // [rsp+37h] [rbp-D1h]
  int *v69; // [rsp+40h] [rbp-C8h]
  __int64 v70; // [rsp+48h] [rbp-C0h]
  int v75[2]; // [rsp+78h] [rbp-90h] BYREF
  int v76[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v77; // [rsp+88h] [rbp-80h] BYREF
  _DWORD *v78; // [rsp+90h] [rbp-78h]
  unsigned int *v79; // [rsp+98h] [rbp-70h] BYREF
  int v80[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-60h]
  __m128i v82; // [rsp+B0h] [rbp-58h] BYREF

  *(_QWORD *)v75 = 0;
  v67 = sub_691980(a1, a3, (unsigned int **)v75);
  v69 = *(int **)v75;
  if ( !v67 )
    goto LABEL_46;
  if ( !*(_QWORD *)v75 || (v70 = *(_QWORD *)v75 + 4LL * *(unsigned int *)(*(_QWORD *)v75 - 4LL), v70 == *(_QWORD *)v75) )
  {
    v65 = 0;
    v7 = nullptr;
    v8 = nullptr;
    goto LABEL_25;
  }
  v65 = 0;
  v7 = nullptr;
  v63 = *(int **)v75;
  v8 = nullptr;
LABEL_5:
  v9 = *v63;
  v10 = *(_DWORD **)a4;
  v11 = *(unsigned int *)(a4 + 8);
  v12 = v11 - 1;
  v11 *= 16;
  v13 = (_DWORD *)(*(_QWORD *)a4 + v11);
  v14 = 16LL * (*v63 & v12);
  v15 = (_DWORD *)(*(_QWORD *)a4 + v14);
  if ( v14 != v11 )
  {
    for ( i = (_DWORD *)(*(_QWORD *)a4 + v14); v13 != i; i += 4 )
    {
      v17 = i[1];
      if ( v17 == 2 )
      {
        if ( v9 == *i && v9 == i[2] )
        {
LABEL_12:
          v18 = (unsigned int)i[3];
          v62 = 8 * v18;
          v19 = *(_DWORD **)(*a5 + 8 * v18);
          if ( v65 )
          {
            v20 = *(unsigned int *)(v65 - 4);
            if ( (_DWORD)v20 != *(_DWORD *)(v65 - 8) )
            {
              *(_DWORD *)(v65 + 4 * v20) = *v19;
              v21 = v19;
              ++*(_DWORD *)(v65 - 4);
              goto LABEL_15;
            }
          }
          *(_QWORD *)v76 = v65;
          sub_692C60((unsigned int **)v76);
          v52 = *(_QWORD *)v76;
          v21 = *(_DWORD **)(*a5 + 8 * v18);
          v65 = *(_QWORD *)v76;
          *(_DWORD *)(*(_QWORD *)v76 + 4LL * *(unsigned int *)(*(_QWORD *)v76 - 4LL)) = *v19;
          ++*(_DWORD *)(v52 - 4);
          if ( v21 )
          {
LABEL_15:
            v22 = 1;
            do
            {
              if ( v22 >= *(v21 - 1) )
                break;
              v23 = v21[v22];
              v24 = v23 + 1;
              if ( v8 )
              {
                v66 = *(v8 - 1);
                if ( v66 < v24 )
                {
                  v46 = *(v8 - 2);
                  if ( v46 < v24 )
                  {
                    do
                    {
LABEL_61:
                      v47 = (3 * v46 + 1) >> 1;
                      v48 = v47 + 8;
                      if ( v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_68CF80(v82.m128i_i64, "Overflow encountered when expanding vector");
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, &v82);
                        sub_233E40((__int64)&v82);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v61 = (3 * v46 + 1) >> 1;
                      v49 = (unsigned int *)sub_186B300(v8 - 2, v48);
                      v8 = v49 + 2;
                      *v49 = v61;
                      v46 = v61;
                    }
                    while ( v61 < v24 );
                    v49[1] = v24;
                    v50 = (char *)v8 + v24;
                    v51 = (char *)v8 + v66;
                    if ( v24 == v66 )
                      goto LABEL_19;
                  }
                  else
                  {
                    *(v8 - 1) = v24;
                    v50 = (char *)v8 + v24;
                    v51 = (char *)v8 + v66;
                  }
                  goto LABEL_65;
                }
              }
              else if ( v23 != -1 )
              {
                v45 = sub_186B270(0xAu);
                v46 = 2;
                *(_QWORD *)v45 = 2;
                v8 = (_DWORD *)(v45 + 8);
                if ( v24 > 2 )
                {
                  v66 = 0;
                  goto LABEL_61;
                }
                *(_DWORD *)(v45 + 4) = v24;
                v51 = (char *)(v45 + 8);
                v50 = (char *)v8 + v24;
LABEL_65:
                memset(v51, 0, v50 - v51);
              }
LABEL_19:
              v25 = (char *)v8 + v23;
              if ( !*v25 )
              {
                *v25 = 1;
                if ( !v7 || (v26 = *(v7 - 1), (_DWORD)v26 == *(v7 - 2)) )
                {
                  v78 = v8;
                  v79 = v7;
                  sub_2FD3F0(&v79);
                  v7 = v79;
                  v8 = v78;
                  v26 = *(v79 - 1);
                }
                v7[v26] = v23;
                ++*(v7 - 1);
              }
              ++v22;
              v21 = *(_DWORD **)(*a5 + v62);
            }
            while ( v21 );
          }
          if ( (int *)v70 == ++v63 )
          {
LABEL_25:
            *(_QWORD *)v80 = 0;
            v27 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)v76 = v65;
            v81 = v27;
            sub_6941B0(a1, (_BYTE **)v76, a3, (__int64 *)v80);
            v60 = *(_QWORD *)v80;
            v64 = v81;
            if ( !v7 )
            {
              v29 = 0;
              v30 = 0;
              v53 = *(_QWORD *)(a1 + 8);
              goto LABEL_74;
            }
            v28 = (__m128i)(unsigned __int64)v27;
            v29 = 0;
LABEL_27:
            v30 = *(v7 - 1);
            if ( (_DWORD)v30 )
            {
              v31 = v30 - 1;
              v32 = v7[v31];
              *(v7 - 1) = v31;
              v33 = v32;
              *((_BYTE *)v8 + v32) = 0;
              v34 = *(_DWORD **)a2;
              v35 = *(unsigned int *)(a2 + 8);
              v36 = v35 - 1;
              v35 *= 24;
              v37 = (_DWORD *)(*(_QWORD *)a2 + v35);
              v38 = 24LL * (v33 & v36);
              v39 = *(_QWORD *)a2 + v38;
              if ( v38 == v35 )
              {
LABEL_79:
                while ( (_DWORD *)v39 != v34 )
                {
                  v58 = v34[1];
                  if ( v58 == 2 )
                  {
                    if ( v33 == *v34 && v33 == v34[2] )
                      goto LABEL_36;
                  }
                  else if ( !v58 )
                  {
                    break;
                  }
                  v34 += 6;
                }
LABEL_88:
                sub_1872CE0("");
                sub_1873130(114, 919);
              }
              v40 = (_DWORD *)(*(_QWORD *)a2 + v38);
              while ( 1 )
              {
                v41 = v40[1];
                if ( v41 == 2 )
                {
                  if ( v33 == *v40 && v33 == v40[2] )
                  {
                    v34 = v40;
LABEL_36:
                    v42 = *((_QWORD *)v34 + 2);
                    v77 = v42;
                    if ( v42 )
                      ++*(_DWORD *)(v42 + 8);
                    v82 = v28;
                    sub_68D130((unsigned int **)&v82.m128i_i64[1], &v77);
                    v29 = v82.m128i_i64[1];
                    v27 = v82.m128i_i64[0];
                    v28 = _mm_load_si128(&v82);
                    goto LABEL_27;
                  }
                }
                else if ( !v41 )
                {
                  goto LABEL_88;
                }
                v40 += 6;
                if ( v37 == v40 )
                  goto LABEL_79;
              }
            }
            v53 = *(_QWORD *)(a1 + 8);
            if ( v29 )
              v30 = *(unsigned int *)(v29 - 4);
LABEL_74:
            v54 = sub_15EC1C0(v27, v30);
            v55 = v54;
            if ( v54 )
              ++*(_DWORD *)(v54 + 8);
            v56 = sub_15E1B70(v53);
            v57 = v56;
            if ( v56 )
              ++*(_DWORD *)(v56 + 8);
            sub_68CF60(*a6, a6[1]);
            *a6 = v57;
            sub_68CF60(v55, v27);
            v82.m128i_i64[0] = v27;
            v82.m128i_i64[1] = v29;
            sub_2334C0(v82.m128i_i64);
            sub_68CF60(v60, v64);
            goto LABEL_40;
          }
          goto LABEL_5;
        }
      }
      else if ( !v17 )
      {
        goto LABEL_39;
      }
    }
  }
  for ( ; v15 != v10; v10 += 4 )
  {
    v44 = v10[1];
    if ( v44 == 2 )
    {
      if ( v9 == *v10 && v9 == v10[2] )
      {
        i = v10;
        goto LABEL_12;
      }
    }
    else if ( !v44 )
    {
      break;
    }
  }
LABEL_39:
  v67 = 0;
LABEL_40:
  if ( v7 )
    sub_186B220(v7 - 2);
  if ( v8 )
    sub_186B220(v8 - 2);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
LABEL_46:
  if ( v69 )
    sub_186B220(v69 - 2);
  return v67;
}

