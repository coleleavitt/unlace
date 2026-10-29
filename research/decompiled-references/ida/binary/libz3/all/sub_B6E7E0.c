__int64 __fastcall sub_B6E7E0(_QWORD *a1, unsigned int **a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **exception; // rbp
  __int64 v6; // rdx
  char **v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // r13
  unsigned int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  _BYTE *v14; // r15
  _BYTE *v15; // r14
  _BYTE *v16; // rbx
  __int64 v17; // rbp
  unsigned __int8 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int16 v22; // ax
  _DWORD *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // r14d
  unsigned int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  _DWORD *v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // r13
  __int64 v37; // [rsp+0h] [rbp-68h]
  _BYTE *v38; // [rsp+8h] [rbp-60h] BYREF
  __int64 v39[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = (_QWORD *)a1[1188];
  if ( v9 )
    *((_DWORD *)v9 - 1) = 0;
  v10 = *a2;
  v11 = a1[1082];
  v12 = **a2;
  if ( !v11 || (unsigned int)v12 >= *(_DWORD *)(v11 - 4) || !*(_QWORD *)(v11 + 8 * v12) )
  {
    v22 = *((_WORD *)v10 + 2);
    if ( v22 )
    {
      if ( v22 != 2 || v10[10] <= 0x400 )
        goto LABEL_6;
    }
    else
    {
      if ( *((_WORD *)v10 + 14) <= 0x400u )
        goto LABEL_6;
      if ( (unsigned __int8)sub_15D2CB0(a1[13], *a2) )
      {
        v23 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL);
        if ( v23 )
        {
          if ( (unsigned int)(*v23 + 1) > 1 )
            goto LABEL_6;
        }
      }
      v9 = (_QWORD *)a1[1188];
    }
    if ( v9 )
    {
      v24 = *((_DWORD *)v9 - 1);
      if ( v24 == *((_DWORD *)v9 - 2) )
      {
        v28 = (3 * v24 + 1) >> 1;
        v29 = 16 * v28 + 8;
        if ( 16 * v24 + 8 >= v29 || v24 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v39, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = sub_186B270(v29);
        v31 = a1[1188];
        v32 = (_DWORD *)v30;
        v9 = (_QWORD *)(v30 + 8);
        if ( v31 )
        {
          v33 = *(unsigned int *)(v31 - 4);
          *(_DWORD *)(v30 + 4) = v33;
          v34 = 0;
          v35 = 16 * v33;
          if ( v35 )
          {
            do
            {
              a3 = (__m128)_mm_loadu_si128((const __m128i *)(v31 + v34));
              *(__m128 *)&v32[v34 / 4 + 2] = a3;
              v34 += 16LL;
            }
            while ( v34 != v35 );
          }
          sub_186B220((void *)(v31 - 8));
          v27 = (__int64)&v9[2 * (unsigned int)v32[1]];
          v26 = v32[1] + 1;
        }
        else
        {
          *(_DWORD *)(v30 + 4) = 0;
          v27 = v30 + 8;
          v26 = 1;
        }
        a1[1188] = v9;
        *v32 = v28;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = (__int64)&v9[2 * v25];
      }
    }
    else
    {
      v36 = (_QWORD *)sub_186B270(0x28u);
      *v36 = 2;
      v26 = 1;
      v9 = v36 + 1;
      a1[1188] = v9;
      v27 = (__int64)v9;
    }
    *(_QWORD *)v27 = v10;
    *(_BYTE *)(v27 + 8) = 1;
    *((_DWORD *)v9 - 1) = v26;
  }
LABEL_6:
  v38 = nullptr;
  result = sub_B66150(a1, a2, 1u, &v38);
  v14 = v38;
  if ( v38 )
  {
    v15 = &v38[16 * *((unsigned int *)v38 - 1)];
    if ( v38 != v15 )
    {
      v16 = v38;
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = v16[8];
          if ( *(_WORD *)(*(_QWORD *)v16 + 4LL) == 1 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v39, "Formulas should not contain unbound variables", v8);
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          if ( !(unsigned __int8)sub_15D2CB0(a1[13], *(_QWORD *)v16) )
            break;
          sub_B6CE00(
            a1,
            (unsigned int *)v17,
            v18,
            *(double *)a3.m128_u64,
            a4,
            a5,
            v19,
            v20,
            v21,
            v37,
            (int)v38,
            v39[0],
            v39[1],
            v39[2],
            v39[3],
            v39[4]);
          v16 += 16;
          if ( v15 == v16 )
            return sub_186B220(v14 - 8);
        }
        if ( *(_WORD *)(v17 + 4) == 2 && *(_DWORD *)(v17 + 16) == 2 )
          sub_B6D160((__int64)a1, (unsigned int *)v17, *(double *)a3.m128_u64, a4, a5);
        else
          sub_B6E0D0(a1, (unsigned int *)v17, *(double *)a3.m128_u64, a4, a5);
        v16 += 16;
      }
      while ( v15 != v16 );
    }
    return sub_186B220(v14 - 8);
  }
  return result;
}

