__int64 __fastcall sub_3A9390(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // r14d
  int v29; // r15d
  _QWORD *v30; // rdx
  __int64 v31; // rax
  _DWORD *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  _DWORD *v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  char **exception; // rbx
  int v41; // [rsp+8h] [rbp-88h]
  unsigned int v42; // [rsp+10h] [rbp-80h]
  __int64 v44; // [rsp+20h] [rbp-70h] BYREF
  __int64 v45; // [rsp+28h] [rbp-68h] BYREF
  __int64 v46[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v47[10]; // [rsp+40h] [rbp-50h] BYREF

  v5 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0();
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v27 = *(_QWORD *)(a1 + 160);
    if ( v27 )
      v28 = *(_DWORD *)(v27 - 4);
    else
      v28 = 0;
    if ( !v5 )
    {
LABEL_38:
      *(_DWORD *)(a1 + 128) += v5;
      goto LABEL_4;
    }
    v29 = 0;
    while ( 1 )
    {
      if ( !v27 || (v33 = *(_DWORD *)(v27 - 4), v33 == *(_DWORD *)(v27 - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 160));
        v27 = *(_QWORD *)(a1 + 160);
        v33 = *(_DWORD *)(v27 - 4);
      }
      *(_QWORD *)(v27 + 8LL * v33) = 0;
      *(_DWORD *)(v27 - 4) = v33 + 1;
      v30 = *(_QWORD **)(a1 + 528);
      if ( !v30 )
        break;
      v31 = *((unsigned int *)v30 - 1);
      if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
      {
        v32 = (_DWORD *)v30 + v31;
        goto LABEL_30;
      }
      v34 = (unsigned int)(3 * v31 + 1) >> 1;
      v35 = 4 * v34 + 8;
      if ( 4 * (int)v31 + 8 >= (unsigned int)v35 || (unsigned int)v31 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_399470(v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int)(3 * v31 + 1) >> 1;
      ++v29;
      v36 = (unsigned int *)sub_186B300(v30 - 1, v35);
      v37 = v36 + 2;
      *v36 = v42;
      v38 = v36[1];
      *(_QWORD *)(a1 + 528) = v37;
      v37[v38] = v28;
      ++*(v37 - 1);
      if ( v29 == v5 )
        goto LABEL_38;
LABEL_31:
      v27 = *(_QWORD *)(a1 + 160);
    }
    v39 = (_QWORD *)sub_186B270(0x10u);
    v30 = v39 + 1;
    *v39 = 2;
    *(_QWORD *)(a1 + 528) = v39 + 1;
    v32 = v39 + 1;
LABEL_30:
    ++v29;
    *v32 = v28;
    ++*((_DWORD *)v30 - 1);
    if ( v29 == v5 )
      goto LABEL_38;
    goto LABEL_31;
  }
LABEL_4:
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_3A7D10(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v46[1] = 0;
  v11 = *(_DWORD *)(a2 + 72);
  v12 = *(unsigned int *)(a3 + 12);
  v13 = *(_QWORD *)(a1 + 56);
  v46[0] = v10;
  v14 = *(_QWORD *)(v13 + 8 * v12);
  v41 = *(_DWORD *)(a2 + 76);
  sub_3A6490((__int64)v46, v11, (__int64 *)(a2 + 80 + 16LL * *(unsigned int *)(a2 + 20)));
  v15 = *(unsigned int *)(a2 + 20);
  v16 = *(_QWORD *)(a1 + 8);
  v47[1] = 0;
  v47[0] = v16;
  sub_3A6490((__int64)v47, v41, (__int64 *)(a2 + 80 + 16 * v15));
  v17 = *(_WORD *)(v14 + 4) == 0;
  v18 = **(_QWORD **)(a1 + 144);
  v45 = v14;
  if ( v17 && (*(_BYTE *)(v14 + 30) & 1) != 0
    || (v14 = sub_15DBA30(*(_QWORD *)(v18 + 8), a2, 0, 0, 1, (unsigned int)&v45, v14)) != 0 )
  {
    ++*(_DWORD *)(v14 + 8);
  }
  sub_399450(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 480) = v14;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v19 = *(_QWORD *)(a1 + 480);
  v44 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_399930((unsigned int **)(a1 + 56), &v44);
  v20 = *(_QWORD *)(a1 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v5;
  v21 = *(_QWORD *)(a1 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v5;
  sub_15844D0(a1);
  v22 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v22 = *(_QWORD *)(a1 + 480);
  }
  sub_399450(v22, *(_QWORD *)(a1 + 488));
  v23 = *(_QWORD *)(a1 + 504);
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_399410(v24, v23);
  *(_QWORD *)(a1 + 496) = 0;
  v25 = *(_QWORD *)(a1 + 40);
  v26 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v26 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v26 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
  sub_2334C0(v47);
  return sub_2334C0(v46);
}

