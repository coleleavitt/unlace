__int64 __fastcall sub_4DD600(int a1, int a2, unsigned int a3, int *a4, int *a5, unsigned int a6, int *a7, int a8)
{
  char **v8; // r12
  char **v9; // r12
  char **exception; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rax
  _DWORD *v16; // rax
  int *v17; // rbx
  _DWORD *v18; // rdx
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // r12d
  unsigned int *v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  int *v29; // rbx
  _DWORD *v30; // rdx
  int v31; // ecx
  int v32; // edi
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _DWORD *v40; // rax
  int *v41; // rbx
  _DWORD *v42; // rdx
  int *v43; // r12
  int v44; // ecx
  int v45; // edi
  __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // r13d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55[11]; // [rsp+10h] [rbp-58h] BYREF

  v12 = a6;
  v13 = a3;
  v14 = sub_186B270(0x70u);
  *(_OWORD *)(v14 + 8) = 0;
  sub_6299B0(v14 + 24);
  sub_6299B0(v14 + 32);
  *(_BYTE *)(v14 + 40) = 0;
  *(_QWORD *)v14 = off_1C66400;
  v15 = (_QWORD *)sub_186B270(0xC0u);
  *v15 = 0;
  v15[3] = 0;
  v15[6] = 0;
  v15[9] = 0;
  v15[12] = 0;
  v15[15] = 0;
  v15[18] = 0;
  v15[21] = 0;
  *(_QWORD *)(v14 + 48) = v15;
  *(_QWORD *)(v14 + 56) = 8;
  *(_DWORD *)(v14 + 64) = 0;
  *(_QWORD *)v14 = off_1C4F848;
  *(_DWORD *)(v14 + 72) = a1;
  *(_DWORD *)(v14 + 76) = a2;
  *(_QWORD *)(v14 + 80) = 0;
  if ( (_DWORD)v13 )
  {
    v16 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v54 = v13;
    v17 = &a4[v13];
    *((_QWORD *)v16 - 1) = 2;
    v18 = v16;
    *(_QWORD *)(v14 + 80) = v16;
    while ( 1 )
    {
      v19 = *a4++;
      *v16 = v19;
      v20 = *(v18 - 1);
      v21 = (unsigned int)(v20 + 1);
      *(v18 - 1) = v21;
      if ( v17 == a4 )
        break;
      v22 = *(v18 - 2);
      if ( v22 == (_DWORD)v21 )
      {
        v23 = (3 * v22 + 1) >> 1;
        v24 = 4 * v23 + 8;
        v25 = v23;
        if ( 4 * v20 + 12 >= (unsigned int)v24 || v22 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v18 - 2, v24);
        v18 = v26 + 2;
        *v26 = v25;
        v27 = v26[1];
        *(_QWORD *)(v14 + 80) = v18;
        v16 = &v18[v27];
      }
      else
      {
        v16 = &v18[v21];
      }
    }
    *(_QWORD *)(v14 + 88) = 0;
    v28 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v28 - 1) = 2;
    v29 = a5;
    *(_QWORD *)(v14 + 88) = v28;
    v30 = v28;
    while ( 1 )
    {
      v31 = *v29++;
      *v28 = v31;
      v32 = *(v30 - 1);
      v33 = (unsigned int)(v32 + 1);
      *(v30 - 1) = v33;
      if ( v29 == &a5[v54] )
        break;
      v34 = *(v30 - 2);
      if ( v34 == (_DWORD)v33 )
      {
        v35 = (3 * v34 + 1) >> 1;
        v36 = 4 * v35 + 8;
        if ( 4 * v32 + 12 >= (unsigned int)v36 || v34 >= v35 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v55, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v30 - 2, v36);
        v30 = v37 + 2;
        *v37 = v35;
        v38 = v37[1];
        *(_QWORD *)(v14 + 88) = v30;
        v28 = &v30[v38];
      }
      else
      {
        v28 = &v30[v33];
      }
    }
  }
  else
  {
    *(_QWORD *)(v14 + 88) = 0;
  }
  *(_QWORD *)(v14 + 96) = 0;
  if ( (_DWORD)v12 )
  {
    v39 = (_QWORD *)sub_186B270(0x10u);
    *v39 = 2;
    v40 = v39 + 1;
    v41 = a7;
    *(_QWORD *)(v14 + 96) = v40;
    v42 = v40;
    v43 = &a7[v12];
    while ( 1 )
    {
      v44 = *v41++;
      *v40 = v44;
      v45 = *(v42 - 1);
      v46 = (unsigned int)(v45 + 1);
      *(v42 - 1) = v46;
      if ( v41 == v43 )
        break;
      v47 = *(v42 - 2);
      if ( v47 == (_DWORD)v46 )
      {
        v48 = (3 * v47 + 1) >> 1;
        v49 = 4 * v48 + 8;
        if ( 4 * v45 + 12 >= (unsigned int)v49 || v47 >= v48 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v55, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v42 - 2, v49);
        v42 = v50 + 2;
        *v50 = v48;
        v51 = v50[1];
        *(_QWORD *)(v14 + 96) = v42;
        v40 = &v42[v51];
      }
      else
      {
        v40 = &v42[v46];
      }
    }
  }
  *(_DWORD *)(v14 + 104) = a8;
  return v14;
}

