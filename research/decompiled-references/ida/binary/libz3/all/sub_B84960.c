__int64 __fastcall sub_B84960(__int64 a1, unsigned int a2, unsigned int a3, int *a4, unsigned __int64 *a5)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v9; // rax
  unsigned int v10; // r15d
  int v11; // r10d
  int v12; // r10d
  unsigned __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rax
  char v16; // si
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  size_t v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  char v34; // di
  __int64 v35; // rcx
  char v36; // di
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rsi
  _QWORD *v40; // rax
  char **exception; // rbp
  int v42; // [rsp+8h] [rbp-D0h]
  void *v43; // [rsp+8h] [rbp-D0h]
  _QWORD *v44; // [rsp+18h] [rbp-C0h]
  _DWORD *v45; // [rsp+20h] [rbp-B8h]
  unsigned int v46; // [rsp+2Ch] [rbp-ACh]
  unsigned int v47; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v48[4]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-78h]
  __int64 v50; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-68h]
  __int64 v52; // [rsp+78h] [rbp-60h]
  unsigned __int64 v53; // [rsp+80h] [rbp-58h]
  int v54; // [rsp+88h] [rbp-50h]
  unsigned __int64 v55; // [rsp+8Ch] [rbp-4Ch]
  char v56; // [rsp+94h] [rbp-44h]

  v6 = a2;
  v7 = a3;
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = *(_DWORD *)(a1 + 128);
  v47 = v10;
  v49 = __PAIR64__(a3, a2);
  v42 = v11;
  v50 = 0;
  v51 = 0;
  v52 = 1;
  v53 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, a4);
  v12 = v42;
  v13 = *a5;
  v56 = 0;
  v14 = *(_QWORD **)(a1 + 40);
  v54 = v42;
  v55 = v13;
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v46 = (unsigned int)(3 * v15 + 1) >> 1;
      v24 = 56 * v46 + 8;
      if ( 56 * (int)v15 + 8 >= (unsigned int)v24 || (unsigned int)v15 >= (unsigned int)(3 * v15 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v48, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = sub_186B270(v24);
      v26 = *(_QWORD **)(a1 + 40);
      v45 = (_DWORD *)v25;
      v14 = (_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v27 = v25;
        v28 = *((unsigned int *)v26 - 1);
        *(_DWORD *)(v27 + 4) = v28;
        v29 = 7 * v28;
        v30 = v26;
        v31 = &v26[v29];
        v32 = v14;
        if ( v26 != v31 )
        {
          do
          {
            v33 = *v30;
            v34 = *((_BYTE *)v32 + 12);
            v30 += 7;
            v32 += 7;
            *(v32 - 7) = v33;
            *((_DWORD *)v32 - 12) = *((_DWORD *)v30 - 12);
            *((_BYTE *)v32 - 44) = v34 & 0xFC | *((_BYTE *)v30 - 44) & 3;
            v35 = *(v30 - 5);
            *(v30 - 5) = 0;
            v36 = *((_BYTE *)v32 - 28);
            *(v32 - 5) = v35;
            *((_DWORD *)v32 - 8) = *((_DWORD *)v30 - 8);
            *((_BYTE *)v32 - 28) = v36 & 0xFC | *((_BYTE *)v30 - 28) & 3;
            v37 = *(v30 - 3);
            *(v30 - 3) = 0;
            *(v32 - 3) = v37;
            *((_DWORD *)v32 - 4) = *((_DWORD *)v30 - 4);
            *(_QWORD *)((char *)v32 - 12) = *(_QWORD *)((char *)v30 - 12);
            *((_BYTE *)v32 - 4) = *((_BYTE *)v30 - 4);
          }
          while ( v31 != v30 );
        }
        v38 = *((unsigned int *)v26 - 1);
        if ( (_DWORD)v38 )
        {
          v44 = &v26[7 * v38];
          do
          {
            v43 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v26 + 1);
            v39 = v26 + 3;
            v26 += 7;
            sub_182CBA0(v43, v39);
          }
          while ( v26 != v44 );
          v26 = *(_QWORD **)(a1 + 40);
        }
        sub_186B220(v26 - 1);
        v17 = &v14[7 * (unsigned int)v45[1]];
      }
      else
      {
        *(_DWORD *)(v25 + 4) = 0;
        v17 = (unsigned __int64 *)(v25 + 8);
      }
      *(_QWORD *)(a1 + 40) = v14;
      v12 = v54;
      *v45 = v46;
      v16 = v56;
    }
    else
    {
      v16 = 0;
      v17 = &v14[7 * v15];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x78u);
    v14 = v40 + 1;
    *v40 = 2;
    v12 = v54;
    *(_QWORD *)(a1 + 40) = v40 + 1;
    v16 = v56;
    v17 = v40 + 1;
  }
  v18 = v49;
  *((_DWORD *)v17 + 10) = v12;
  *((_BYTE *)v17 + 52) = v16;
  *v17 = v18;
  *((_DWORD *)v17 + 2) = v50;
  *((_BYTE *)v17 + 12) = BYTE4(v50) & 3 | *((_BYTE *)v17 + 12) & 0xFC;
  v19 = v51;
  v51 = 0;
  v17[2] = v19;
  *((_DWORD *)v17 + 6) = v52;
  *((_BYTE *)v17 + 28) = BYTE4(v52) & 3 | *((_BYTE *)v17 + 28) & 0xFC;
  v20 = v53;
  v53 = 0;
  v17[4] = v20;
  *(unsigned __int64 *)((char *)v17 + 44) = v55;
  ++*((_DWORD *)v14 - 1);
  sub_25A130((char *)&v50);
  v21 = *(_QWORD *)(a1 + 184);
  if ( !v21 || (v22 = *(unsigned int *)(v21 - 4), (_DWORD)v22 == *(_DWORD *)(v21 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 184));
    v21 = *(_QWORD *)(a1 + 184);
    v22 = *(unsigned int *)(v21 - 4);
  }
  *(_DWORD *)(v21 + 4 * v22) = 0;
  ++*(_DWORD *)(v21 - 4);
  sub_B76360((unsigned int **)(*(_QWORD *)(a1 + 48) + 8 * v6), &v47);
  sub_B76360((unsigned int **)(*(_QWORD *)(a1 + 56) + 8 * v7), &v47);
  return v10;
}

