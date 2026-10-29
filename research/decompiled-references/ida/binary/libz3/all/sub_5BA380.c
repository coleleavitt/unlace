__int64 __fastcall sub_5BA380(__int64 a1, _QWORD *a2, int a3, double a4, __int64 a5, int a6, int a7)
{
  char **exception; // r14
  _QWORD *v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // r13
  _DWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  int v15; // r14d
  __int64 v16; // rcx
  size_t v17; // rdx
  int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // r10d
  __int64 v23; // rsi
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 i; // r13
  int v27; // ecx
  _DWORD *v28; // rcx
  __int64 v29; // r10
  _DWORD *v30; // r11
  int *v31; // r10
  _QWORD *v32; // rdi
  __int64 v33; // r14
  __int64 *v34; // r13
  __int64 v35; // r15
  __int64 v36; // r12
  _QWORD *v37; // rax
  __int64 *v38; // rsi
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rsi
  unsigned int v42; // r8d
  size_t v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // rsi
  int *v46; // r15
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  int v50; // r14d
  void *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 result; // rax
  int v55; // ecx
  _DWORD *v56; // rcx
  __int64 v57; // rsi
  _DWORD *v58; // r10
  _DWORD *v59; // rsi
  int v60; // [rsp+0h] [rbp-90h]
  int v61; // [rsp+0h] [rbp-90h]
  __int64 size; // [rsp+8h] [rbp-88h]
  int sizea; // [rsp+8h] [rbp-88h]
  int v65; // [rsp+10h] [rbp-80h]
  __int64 v66; // [rsp+10h] [rbp-80h]
  int v68; // [rsp+18h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-70h]
  int ptra; // [rsp+20h] [rbp-70h]
  __int64 v71; // [rsp+28h] [rbp-68h]
  char v72; // [rsp+28h] [rbp-68h]
  int v73; // [rsp+30h] [rbp-60h]
  int v74; // [rsp+30h] [rbp-60h]
  int v75; // [rsp+38h] [rbp-58h]
  int v76; // [rsp+38h] [rbp-58h]
  int *v77; // [rsp+40h] [rbp-50h] BYREF
  void *v78; // [rsp+48h] [rbp-48h]

  v9 = (_QWORD *)a2[1];
  v71 = *a2;
  if ( !v9 )
  {
    v15 = *(_DWORD *)(*a2 + 12LL);
    v18 = 778;
    goto LABEL_11;
  }
  ptr = (void *)*(v9 - 1);
  a4 = *(double *)&ptr;
  v10 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)(unsigned __int64)ptr, 229));
  size = 4LL * (unsigned int)_mm_cvtsi128_si32((__m128i)(unsigned __int64)ptr) + 8;
  v11 = sub_186B270(size);
  v9 = (_QWORD *)(v11 + 8);
  *(_QWORD *)v11 = ptr;
  v12 = (_DWORD *)a2[1];
  if ( !v12 )
    goto LABEL_5;
  v13 = 4LL * (unsigned int)*(v12 - 1);
  if ( v13 > 4 )
  {
    memmove(v9, v12, v13);
LABEL_5:
    v14 = *(_DWORD *)(v71 + 12);
LABEL_6:
    v15 = v14;
    goto LABEL_7;
  }
  v14 = *(_DWORD *)(v71 + 12);
  v15 = v14;
  if ( v13 == 4 )
  {
    *(_DWORD *)(v11 + 8) = *v12;
    goto LABEL_6;
  }
LABEL_7:
  if ( v10 )
  {
    v16 = sub_186B270(size);
    v17 = 4LL * *(unsigned int *)(v11 + 4);
    *(_QWORD *)v16 = ptr;
    v77 = (int *)(v16 + 8);
    if ( v17 <= 4 )
    {
      if ( v17 == 4 )
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v11 + 8);
      ptr = (void *)v16;
    }
    else
    {
      ptr = (void *)v16;
      memcpy((void *)(v16 + 8), v9, v17);
    }
    v18 = sub_5B7080(&v77, v10);
    sub_186B220(ptr);
  }
  else
  {
    v18 = 778;
  }
LABEL_11:
  v19 = *(unsigned int *)(a1 + 104);
  v20 = *(_QWORD *)(a1 + 96);
  v21 = v18 ^ v15;
  v22 = v19 - 1;
  v19 *= 32;
  v23 = v20 + v19;
  v24 = 32LL * ((v18 ^ v15) & v22);
  v25 = v20 + v24;
  if ( v24 != v19 )
  {
    for ( i = v20 + v24; v23 != i; i += 32 )
    {
      v27 = *(_DWORD *)(i + 4);
      if ( v27 == 2 )
      {
        if ( v21 == *(_DWORD *)i && v71 == *(_QWORD *)(i + 8) )
        {
          v28 = *(_DWORD **)(i + 16);
          if ( v28 )
          {
            v29 = (unsigned int)*(v28 - 1);
            if ( v9 )
            {
              if ( (_DWORD)v29 == *((_DWORD *)v9 - 1) )
              {
                v30 = &v28[v29];
                if ( v28 == v30 )
                  goto LABEL_25;
                v31 = (int *)v9;
                while ( 1 )
                {
                  a7 = *v31;
                  if ( *v28 != *v31 )
                    break;
                  ++v28;
                  ++v31;
                  if ( v30 == v28 )
                    goto LABEL_25;
                }
              }
            }
            else if ( !(_DWORD)v29 )
            {
              v20 = i;
LABEL_61:
              v9 = (_QWORD *)v20;
              goto LABEL_26;
            }
          }
          else
          {
            if ( !v9 )
            {
              v9 = (_QWORD *)i;
              goto LABEL_26;
            }
            a6 = *((_DWORD *)v9 - 1);
            if ( !a6 )
            {
LABEL_25:
              v32 = v9 - 1;
              v9 = (_QWORD *)i;
              sub_186B220(v32);
              goto LABEL_26;
            }
          }
        }
      }
      else if ( !v27 )
      {
        goto LABEL_38;
      }
    }
  }
  for ( ; v25 != v20; v20 += 32 )
  {
    v55 = *(_DWORD *)(v20 + 4);
    if ( v55 == 2 )
    {
      if ( v21 == *(_DWORD *)v20 && v71 == *(_QWORD *)(v20 + 8) )
      {
        v56 = *(_DWORD **)(v20 + 16);
        if ( v56 )
        {
          v57 = (unsigned int)*(v56 - 1);
          if ( v9 )
          {
            if ( (_DWORD)v57 == *((_DWORD *)v9 - 1) )
            {
              v58 = &v56[v57];
              if ( v56 == v58 )
                goto LABEL_54;
              v59 = v9;
              while ( *v56 == *v59 )
              {
                ++v56;
                ++v59;
                if ( v58 == v56 )
                  goto LABEL_54;
              }
            }
          }
          else if ( !(_DWORD)v57 )
          {
            goto LABEL_61;
          }
        }
        else
        {
          if ( !v9 )
            goto LABEL_61;
          if ( !*((_DWORD *)v9 - 1) )
          {
LABEL_54:
            i = v20;
            goto LABEL_25;
          }
        }
      }
    }
    else if ( !v55 )
    {
      break;
    }
  }
LABEL_38:
  if ( v9 )
  {
    i = 0;
    goto LABEL_25;
  }
LABEL_26:
  v33 = v9[3];
  v34 = nullptr;
  v35 = *(unsigned int *)(v33 + 32);
  if ( (_DWORD)v35 )
  {
    v36 = sub_15DB5C0(*(_QWORD *)(a1 + 32), 0, *(_QWORD *)(v33 + 48));
    v37 = (_QWORD *)sub_186B270(0x18u);
    v71 = 0;
    v38 = v37 + 1;
    *v37 = 2;
    v39 = 1;
    v34 = v38;
    while ( 1 )
    {
      ++v71;
      *v38 = v36;
      *((_DWORD *)v34 - 1) = v39;
      if ( v35 == v71 )
        break;
      v36 = sub_15DB5C0(*(_QWORD *)(a1 + 32), (unsigned int)v71, *(_QWORD *)(v33 + 8 * v71 + 48));
      v40 = *((_DWORD *)v34 - 1);
      if ( v40 == *((_DWORD *)v34 - 2) )
      {
        v42 = (3 * v40 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v40 + 8 >= (unsigned int)v43 || v40 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v77, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v77);
          sub_233E40((__int64)&v77);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(ptr) = (3 * v40 + 1) >> 1;
        v44 = (_DWORD *)sub_186B300(v34 - 1, v43);
        v45 = (unsigned int)v44[1];
        a6 = (int)ptr;
        v34 = (__int64 *)(v44 + 2);
        *v44 = (_DWORD)ptr;
        LODWORD(v44) = v45;
        v38 = &v34[v45];
        v39 = (_DWORD)v44 + 1;
      }
      else
      {
        v41 = v40;
        v39 = v40 + 1;
        v38 = &v34[v41];
      }
    }
  }
  v46 = (int *)sub_15DC610(
                 *(_QWORD *)(a1 + 32),
                 *a2,
                 *(_DWORD *)(*a2 + 32LL),
                 (int)v34,
                 a6,
                 a7,
                 v60,
                 size,
                 a3,
                 (int)a2,
                 (int)ptr,
                 v71,
                 v73,
                 v75,
                 (int)v77,
                 v78);
  v49 = sub_15DC610(
          *(_QWORD *)(a1 + 32),
          v33,
          *(_DWORD *)(v33 + 32),
          (int)v34,
          v47,
          v48,
          v61,
          sizea,
          v65,
          v68,
          ptra,
          v72,
          v74,
          v76,
          (int)v77,
          v78);
  v50 = v49;
  v51 = (void *)sub_5B9720(a1, v49);
  v52 = *(_QWORD *)(a1 + 24);
  v77 = v46;
  v78 = v51;
  v53 = sub_62C680((int)v52 + 656, v50, 2, (unsigned int)&v77, 0, (unsigned int)&qword_18D6CD0, 1);
  result = sub_63DAD0(v66, v53, a4);
  if ( v34 )
    return sub_186B220(v34 - 1);
  return result;
}

