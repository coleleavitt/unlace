__int64 __fastcall sub_B6E460(_QWORD *a1, unsigned int **a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  __int64 v13; // rax
  unsigned int **v14; // rbx
  unsigned int **v15; // r13
  __int64 v16; // rax
  unsigned int *v17; // rbp
  __int64 v18; // rdx
  __int16 v19; // ax
  _DWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 result; // rax
  __int64 v27; // r15
  _BYTE *v28; // r14
  _BYTE *v29; // rbx
  __int64 v30; // rbp
  unsigned __int8 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rsi
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  _QWORD *v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-88h]
  int v44; // [rsp+8h] [rbp-80h]
  unsigned int v45; // [rsp+Ch] [rbp-7Ch]
  _QWORD *v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+18h] [rbp-70h]
  __int64 v48; // [rsp+20h] [rbp-68h]
  _BYTE *v49; // [rsp+28h] [rbp-60h] BYREF
  __int64 v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v13 = a1[1188];
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  if ( a3 )
  {
    v14 = a2;
    v15 = &a2[a3];
    do
    {
      while ( 1 )
      {
        v16 = a1[1082];
        v17 = *v14;
        if ( v16 )
        {
          v18 = *v17;
          if ( (unsigned int)v18 < *(_DWORD *)(v16 - 4) )
          {
            if ( *(_QWORD *)(v16 + 8 * v18) )
              goto LABEL_6;
          }
        }
        v19 = *((_WORD *)v17 + 2);
        if ( !v19 )
          break;
        if ( v19 == 2 && v17[10] > 0x400 )
          goto LABEL_14;
LABEL_6:
        if ( v15 == ++v14 )
          goto LABEL_18;
      }
      if ( *((_WORD *)v17 + 14) <= 0x400u )
        goto LABEL_6;
      if ( (unsigned __int8)sub_15D2CB0(a1[13], *v14) )
      {
        v20 = *(_DWORD **)(*((_QWORD *)v17 + 2) + 24LL);
        if ( v20 )
        {
          if ( (unsigned int)(*v20 + 1) > 1 )
            goto LABEL_6;
        }
      }
LABEL_14:
      v21 = (_QWORD *)a1[1188];
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v45 = (3 * v22 + 1) >> 1;
          v35 = 16 * v45 + 8;
          if ( 16 * v22 + 8 >= v35 || v22 >= (3 * v22 + 1) >> 1 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v50, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = sub_186B270(v35);
          v37 = a1[1188];
          v38 = (_DWORD *)v36;
          v21 = (_QWORD *)(v36 + 8);
          if ( v37 )
          {
            v39 = *(unsigned int *)(v37 - 4);
            *(_DWORD *)(v36 + 4) = v39;
            v40 = 0;
            v41 = 16 * v39;
            if ( v41 )
            {
              do
              {
                a4 = (__m128)_mm_loadu_si128((const __m128i *)(v37 + v40));
                *(__m128 *)&v38[v40 / 4 + 2] = a4;
                v40 += 16LL;
              }
              while ( v40 != v41 );
            }
            v47 = (__int64)v38;
            v46 = v21;
            sub_186B220((void *)(v37 - 8));
            v21 = v46;
            v25 = (__int64)&v46[2 * (unsigned int)v38[1]];
            v24 = v38[1] + 1;
          }
          else
          {
            *(_DWORD *)(v36 + 4) = 0;
            v25 = v36 + 8;
            v24 = 1;
          }
          a1[1188] = v21;
          *v38 = v45;
        }
        else
        {
          v23 = v22;
          v24 = v22 + 1;
          v25 = (__int64)&v21[2 * v23];
        }
      }
      else
      {
        v42 = (_QWORD *)sub_186B270(0x28u);
        *v42 = 2;
        v24 = 1;
        v21 = v42 + 1;
        a1[1188] = v21;
        v25 = (__int64)v21;
      }
      ++v14;
      *(_QWORD *)v25 = v17;
      *(_BYTE *)(v25 + 8) = 1;
      *((_DWORD *)v21 - 1) = v24;
    }
    while ( v15 != v14 );
  }
LABEL_18:
  v49 = nullptr;
  result = sub_B66150(a1, a2, a3, &v49);
  v27 = (__int64)v49;
  if ( v49 )
  {
    v28 = &v49[16 * *((unsigned int *)v49 - 1)];
    if ( v49 != v28 )
    {
      v29 = v49;
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)v29;
          v31 = v29[8];
          if ( *(_WORD *)(*(_QWORD *)v29 + 4LL) == 1 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v50, "Formulas should not contain unbound variables", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          if ( !(unsigned __int8)sub_15D2CB0(a1[13], *(_QWORD *)v29) )
            break;
          sub_B6CE00(
            a1,
            (unsigned int *)v30,
            v31,
            *(double *)a4.m128_u64,
            a5,
            a6,
            v32,
            v33,
            v34,
            v43,
            v44,
            (int)v46,
            v47,
            v48,
            (__int64)v49,
            v50[0]);
          v29 += 16;
          if ( v28 == v29 )
            return sub_186B220((void *)(v27 - 8));
        }
        if ( *(_WORD *)(v30 + 4) == 2 && *(_DWORD *)(v30 + 16) == 2 )
          sub_B6D160((__int64)a1, (unsigned int *)v30, *(double *)a4.m128_u64, a5, a6);
        else
          sub_B6E0D0(a1, (unsigned int *)v30, *(double *)a4.m128_u64, a5, a6);
        v29 += 16;
      }
      while ( v28 != v29 );
    }
    return sub_186B220((void *)(v27 - 8));
  }
  return result;
}

