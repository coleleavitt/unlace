__int64 __fastcall sub_1F62B00(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r11
  __int64 v22; // r10
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  int v27; // r12d
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r15
  __int64 v30; // r9
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r15
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 result; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned int v41; // edx
  int v42; // r8d
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // r15
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-70h]
  int v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+10h] [rbp-68h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  int v59; // [rsp+10h] [rbp-68h]
  __m128i v60; // [rsp+20h] [rbp-58h] BYREF
  __int64 v61; // [rsp+30h] [rbp-48h]

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  *(_DWORD *)(v4 + 24) += 2;
  v5 = sub_1EE7490(v4);
  v6 = *a1;
  *(_DWORD *)(a2 + 16) = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a2 + 20) = v7;
  *(_QWORD *)(a2 + 24) = sub_1F19370(v8);
  v9 = *(_DWORD *)(a2 + 32);
  if ( v9 )
  {
    v10 = a2 + 40;
    v55 = a2 + 16LL * (unsigned int)(v9 - 1) + 56;
    while ( 1 )
    {
      v16 = *a1;
      v17 = *(unsigned int *)(*a1 + 24);
      v18 = *(_QWORD *)(*a1 + 16);
      v19 = *(_QWORD *)(*a1 + 32);
      v20 = *(_QWORD *)(*a1 + 8);
      v21 = *(_QWORD *)(v18 + 856);
      v22 = v18;
      v23 = *(_QWORD *)(v19 + 8 * v17);
      v24 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
      v25 = (unsigned int)(v17 + 2);
      *(_DWORD *)(*a1 + 24) = v25;
      v26 = *(_QWORD *)(v19 + 8 * v24);
      if ( v21 )
      {
        v58 = v18;
        sub_1EDF870(v20, v18);
        v16 = *a1;
        v18 = v58;
        v22 = *(_QWORD *)(*a1 + 16);
        v20 = *(_QWORD *)(*a1 + 8);
        v25 = *(unsigned int *)(*a1 + 24);
        v19 = *(_QWORD *)(*a1 + 32);
        v21 = *(_QWORD *)(v22 + 856);
      }
      v27 = __ROR4__(v26, 1);
      v28 = HIDWORD(v26);
      if ( v28 )
        v18 = *(_QWORD *)(*(_QWORD *)(v18 + 3320) + 8LL * (unsigned int)(v28 - 1));
      if ( v27 )
        v27 = v27 + *(_DWORD *)(v18 + 1648) - 2;
      v29 = *(_QWORD *)(v19 + 8 * v25);
      *(_DWORD *)(v16 + 24) = v25 + 1;
      if ( v21 )
      {
        v57 = v22;
        sub_1EDF870(v20, v22);
        v22 = v57;
      }
      v30 = (unsigned int)__ROR4__(v29, 1);
      v31 = HIDWORD(v29);
      if ( v31 )
        v22 = *(_QWORD *)(*(_QWORD *)(v22 + 3320) + 8LL * (unsigned int)(v31 - 1));
      if ( (_DWORD)v30 )
        v30 = (unsigned int)(v30 + *(_DWORD *)(v22 + 1648) - 2);
      if ( (_DWORD)v23 == 1 )
      {
        v59 = v30;
        v48 = *(_QWORD **)(*a1 + 8);
        v49 = sub_1EE13A0((__int64)v48, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
        v54 = sub_1EDB980(v48, v49, v50, v51, v52, v53);
        if ( !v27 )
          v27 = v59;
        *(_DWORD *)(v10 + 4) = v59;
        *(_QWORD *)(v10 + 8) = v54 | 1;
        *(_DWORD *)v10 = v27;
        goto LABEL_8;
      }
      if ( (int)v23 <= 1 )
        break;
      if ( (_DWORD)v23 == 2 )
      {
        v32 = *a1;
        v56 = v30;
        v33 = *(unsigned int *)(*a1 + 24);
        v34 = *(_QWORD **)(*a1 + 8);
        v35 = *(_QWORD *)(*a1 + 16);
        *(_DWORD *)(v32 + 24) = v33 + 1;
        v36 = sub_1EE0AD0((__int64)v34, v35, *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8 * v33));
        v37 = sub_1EE2910(v34, v36);
        if ( !v27 )
          v27 = v56;
        *(_DWORD *)(v10 + 4) = v56;
        v10 += 16;
        *(_QWORD *)(v10 - 8) = v37 | 2;
        *(_DWORD *)(v10 - 16) = v27;
        if ( v10 == v55 )
          goto LABEL_27;
      }
      else
      {
        if ( (_DWORD)v23 == 3 )
        {
          v11 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
          v12 = v11[294];
          v11[304] += 24LL;
          v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v11[295] >= v13 + 24 && v12 )
          {
            v11[294] = v13 + 24;
            v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v14 = sub_986170((__int64)(v11 + 294), 24, 24, 3, v24, v30);
            v13 = v14;
          }
          v15 = *a1;
          *(_QWORD *)(v14 + 16) = 0;
          *(_OWORD *)v14 = 0;
          *(_DWORD *)(v14 + 8) = 0;
          sub_1F1E140((__int64)&v60, v15);
          *(__m128i *)v14 = _mm_loadu_si128(&v60);
          *(_QWORD *)(v14 + 16) = v61;
          *(_DWORD *)v10 = 0;
          *(_DWORD *)(v10 + 4) = 0;
          *(_QWORD *)(v10 + 8) = v13 | 3;
        }
LABEL_8:
        v10 += 16;
        if ( v10 == v55 )
          goto LABEL_27;
      }
    }
    if ( !(_DWORD)v23 )
    {
      v45 = *a1;
      v46 = *(unsigned int *)(*a1 + 24);
      *(_DWORD *)(v45 + 24) = v46 + 1;
      v47 = *(_QWORD *)(*(_QWORD *)(v45 + 32) + 8 * v46);
      *(_DWORD *)v10 = v27;
      *(_DWORD *)(v10 + 4) = v30;
      *(_QWORD *)(v10 + 8) = (unsigned int)(4 * v47);
    }
    goto LABEL_8;
  }
LABEL_27:
  result = *(unsigned int *)(a2 + 36);
  if ( (_DWORD)result )
  {
    v39 = 0;
    v40 = *(_QWORD *)(*a1 + 8);
    v41 = *(_DWORD *)(v40 + 13072);
    v42 = v41 - result;
    do
    {
      v43 = v41--;
      v39 += 8;
      v44 = *(_QWORD *)(*(_QWORD *)(v40 + 13064) + 8 * v43 - 8);
      *(_DWORD *)(v40 + 13072) = v41;
      result = a2 + 16LL * *(unsigned int *)(a2 + 32);
      *(_QWORD *)(v39 + result + 32) = v44;
    }
    while ( v41 != v42 );
  }
  return result;
}
