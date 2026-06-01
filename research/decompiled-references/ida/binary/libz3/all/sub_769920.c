__int64 __fastcall sub_769920(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // r12
  __int64 v9; // rdx
  char v10; // al
  int v11; // r15d
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 *v14; // r12
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  _QWORD *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  unsigned int v24; // eax
  int v25; // eax
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  __int64 *v32; // r13
  unsigned int v33; // edx
  unsigned int v34; // ebp
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v42; // rbp
  _QWORD *v43; // rdi
  __int64 v44; // rax
  _OWORD *v45; // rax
  __int64 v46; // rdi
  __int64 *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r12
  void (__fastcall ***v52)(void *); // r13
  __int64 v53; // rax
  __int64 i; // rax
  char **exception; // rbx
  __int64 v56; // rdx
  char v57; // [rsp+16h] [rbp-A2h]
  char v58; // [rsp+17h] [rbp-A1h]
  __int64 *v59; // [rsp+18h] [rbp-A0h]
  __int64 v60; // [rsp+18h] [rbp-A0h]
  char v62[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v63; // [rsp+38h] [rbp-80h] BYREF
  __int64 v64; // [rsp+40h] [rbp-78h] BYREF
  __int64 v65; // [rsp+48h] [rbp-70h]
  __int64 v66; // [rsp+50h] [rbp-68h] BYREF
  __int64 v67; // [rsp+58h] [rbp-60h]
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  int v69; // [rsp+70h] [rbp-48h]

  v57 = *((_BYTE *)*a2 + 123) & 8;
  if ( v57 && *(_BYTE *)(a1 + 20) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_10E248((__int64 *)ptr, "quantified variable blasting does not support proof generation", v56);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, ptr);
    sub_233E40((__int64)ptr);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  sub_EE4940(v62, "bit-blast", *a2);
  *(_DWORD *)(a1 + 16) = 0;
  sub_FC07F0(*(_QWORD *)(a1 + 8));
  v5 = sub_FC0730(*(_QWORD *)(a1 + 8));
  v6 = *(_QWORD *)(a1 + 8);
  v65 = v5;
  v64 = 0;
  v7 = sub_FC0730(v6);
  v8 = *a2;
  v67 = v7;
  v66 = 0;
  v9 = v8[9];
  if ( !v9 )
    goto LABEL_56;
  v10 = *(_BYTE *)(v9 + 3) >> 6;
  if ( !v10 )
  {
    do
    {
      v9 = *(_QWORD *)(v9 + 16);
      v10 = *(_BYTE *)(v9 + 3) >> 6;
    }
    while ( !v10 );
    if ( v10 != 1 )
      goto LABEL_6;
LABEL_70:
    v11 = *(_DWORD *)(v9 + 4) + 1;
    goto LABEL_8;
  }
  if ( v10 == 1 )
    goto LABEL_70;
LABEL_6:
  if ( v10 == 2 )
    v11 = *(_DWORD *)(v9 + 4) - 1;
  else
    v11 = *(_DWORD *)(v9 + 4);
LABEL_8:
  if ( !v11 )
    goto LABEL_56;
  v58 = 0;
  v12 = 0;
  v13 = 0;
LABEL_17:
  if ( (*((_BYTE *)v8 + 123) & 0x20) == 0 )
  {
    v17 = v8[9];
    v18 = 17;
    while ( 1 )
    {
      if ( *(char *)(v17 + 3) >= 0 )
      {
        if ( v13 == *(_DWORD *)(v17 + 4) )
        {
          v19 = (_QWORD *)(v17 + 8);
LABEL_22:
          v20 = *v19;
          sub_FC2CE0(*(_QWORD *)(a1 + 8), *v19, &v64, &v66);
          *(_DWORD *)(a1 + 16) += sub_FC0740(*(_QWORD *)(a1 + 8));
          if ( !v57 )
            goto LABEL_10;
          v21 = (*a2)[11];
          if ( !v21 )
            goto LABEL_34;
          v22 = (*a2)[11];
          v23 = *(_BYTE *)(v21 + 3) >> 6;
          if ( v23 )
          {
            if ( v23 != 1 )
              goto LABEL_26;
LABEL_42:
            if ( v13 >= *(_DWORD *)(v22 + 4) + 1 )
              goto LABEL_43;
          }
          else
          {
            do
            {
              v22 = *(_QWORD *)(v22 + 16);
              v23 = *(_BYTE *)(v22 + 3) >> 6;
            }
            while ( !v23 );
            if ( v23 == 1 )
              goto LABEL_42;
LABEL_26:
            if ( v23 == 2 )
              v24 = *(_DWORD *)(v22 + 4) - 1;
            else
              v24 = *(_DWORD *)(v22 + 4);
            if ( v13 >= v24 )
            {
LABEL_43:
              v21 = 0;
              goto LABEL_34;
            }
          }
          v25 = 17;
          while ( 2 )
          {
            if ( *(char *)(v21 + 3) < 0 )
            {
              if ( *(_BYTE *)(v21 + 3) >> 6 != 2 )
              {
                v26 = (__int64 *)(v12 + *(_QWORD *)(v21 + 16));
                goto LABEL_33;
              }
LABEL_52:
              v21 = *(_QWORD *)(v21 + 16);
              if ( !--v25 )
              {
                v59 = *a2;
                sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
                v26 = (__int64 *)(v12 + *(_QWORD *)(v59[11] + 16));
                goto LABEL_33;
              }
              continue;
            }
            break;
          }
          if ( *(_DWORD *)(v21 + 4) != v13 )
            goto LABEL_52;
          v26 = (__int64 *)(v21 + 8);
LABEL_33:
          v21 = *v26;
LABEL_34:
          v27 = sub_FC0730(*(_QWORD *)(a1 + 8));
          v28 = sub_15DE0E0(v27, v21, v66);
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v29 = v66;
          if ( v66 )
          {
            v30 = v67;
            v31 = (*(_DWORD *)(v66 + 8))-- == 1;
            if ( v31 )
            {
              v60 = v28;
              sub_15D7BC0(v30, v29);
              v28 = v60;
            }
          }
          v66 = v28;
LABEL_10:
          if ( v64 != v20 )
          {
            v14 = *a2;
            if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
            {
              v15 = v14[13];
              v16 = 17;
              do
              {
                if ( *(char *)(v15 + 3) >= 0 )
                {
                  if ( *(_DWORD *)(v15 + 4) == v13 )
                    goto LABEL_15;
                }
                else if ( *(_BYTE *)(v15 + 3) >> 6 != 2 )
                {
                  goto LABEL_15;
                }
                v15 = *(_QWORD *)(v15 + 16);
                --v16;
              }
              while ( v16 );
              sub_236900((_QWORD *)(*v14 + 672), v14 + 13);
            }
LABEL_15:
            sub_EDBFA0((int)v14);
            v58 = 1;
          }
          ++v13;
          v8 = *a2;
          v12 += 8;
          if ( v13 == v11 )
            break;
          goto LABEL_17;
        }
      }
      else if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
      {
        v19 = (_QWORD *)(v12 + *(_QWORD *)(v17 + 16));
        goto LABEL_22;
      }
      v17 = *(_QWORD *)(v17 + 16);
      if ( !--v18 )
      {
        sub_233F80((__int64 *)(*v8 + 616), (_DWORD *)v8 + 18);
        v19 = (_QWORD *)(v12 + *(_QWORD *)(v8[9] + 16));
        goto LABEL_22;
      }
    }
  }
  if ( v58 && (*((_BYTE *)v8 + 123) & 4) != 0 )
  {
    v45 = (_OWORD *)sub_186B270(0x80u);
    v46 = *(_QWORD *)(a1 + 8);
    *v45 = 0;
    v45[1] = 0;
    v45[2] = 0;
    v45[3] = 0;
    v45[4] = 0;
    v45[5] = 0;
    v45[6] = 0;
    v45[7] = 0;
    ptr[0] = v45;
    ptr[1] = &byte_8;
    v69 = 0;
    v63 = 0;
    sub_FC0980(v46, ptr, &v63);
    v47 = *a2;
    v48 = sub_FC0730(*(_QWORD *)(a1 + 8));
    v49 = sub_7779A0(v48, ptr, &v63);
    v50 = sub_1336AB0(v47[1], v49);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v52 = (void (__fastcall ***)(void *))v47[1];
    if ( v52 )
    {
      v31 = (*((_DWORD *)v52 + 2))-- == 1;
      if ( v31 )
      {
        (**v52)(v52);
        sub_186B220(v52);
      }
    }
    v53 = v63;
    v47[1] = v51;
    if ( v53 )
      sub_186B220((void *)(v53 - 8));
    if ( ptr[0] )
      sub_186B220(ptr[0]);
    v8 = *a2;
  }
LABEL_56:
  *((_DWORD *)v8 + 30) = (*((_DWORD *)v8 + 30) + 1) & 0x3FFFFFF | v8[15] & 0xFC000000;
  v32 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v32 + 8);
  v33 = *(_DWORD *)(a3 + 8);
  v34 = *(_DWORD *)(a3 + 12);
  if ( v33 >= v34 )
  {
    v42 = 2 * v34;
    v35 = sub_186B270(8 * v42);
    v33 = *(_DWORD *)(a3 + 8);
    v43 = *(_QWORD **)a3;
    if ( v33 )
    {
      if ( v33 - 1 <= 2 || (_QWORD *)v35 == v43 + 1 )
      {
        for ( i = 0; i != v33; ++i )
          *(_QWORD *)(v35 + i * 8) = v43[i];
      }
      else
      {
        v44 = 0;
        do
        {
          *(__m128i *)(v35 + v44 * 8) = _mm_loadu_si128((const __m128i *)&v43[v44]);
          v44 += 2;
        }
        while ( v44 != 2LL * (v33 >> 1) );
        if ( (v33 & 1) != 0 )
          *(_QWORD *)(v35 + 8LL * (v33 & 0xFFFFFFFE)) = v43[v33 & 0xFFFFFFFE];
      }
    }
    if ( v43 != (_QWORD *)(a3 + 16) && v43 )
    {
      sub_186B220(v43);
      v33 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v35;
    *(_DWORD *)(a3 + 12) = v42;
  }
  else
  {
    v35 = *(_QWORD *)a3;
  }
  v36 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v35 + 8LL * v33) = v32;
  *(_DWORD *)(a3 + 8) = v33 + 1;
  sub_FC0750(v36);
  v37 = v66;
  if ( v66 )
  {
    v38 = v67;
    v31 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v38, v37);
  }
  v39 = v64;
  if ( v64 )
  {
    v40 = v65;
    v31 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v40, v39);
  }
  return sub_EE4A00(v62);
}

