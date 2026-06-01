void __fastcall sub_1ED06C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int *v6; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r13
  int v13; // eax
  int *v14; // rdx
  int v15; // ebp
  int *v16; // rax
  __int64 v17; // rsi
  char *v18; // rcx
  unsigned int v19; // eax
  void *v20; // r8
  void *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r12
  int v24; // ebx
  _QWORD *v25; // rdx
  int *v26; // r12
  __int64 v27; // r14
  __int64 v28; // r13
  unsigned int v29; // ecx
  __int64 v30; // r15
  int *v31; // rax
  int *v32; // rax
  __int64 v33; // rax
  int *v34; // rdx
  _BOOL8 v35; // rdi
  unsigned int v36; // edi
  __int64 v37; // rsi
  __int64 v38; // rax
  char *v39; // rsi
  int *v40; // rdi
  char *v41; // r13
  char *v42; // rax
  _QWORD **v43; // rbx
  _QWORD **v44; // rbp
  __int64 v45; // [rsp+0h] [rbp-F8h]
  __int64 v46; // [rsp+8h] [rbp-F0h]
  int v47; // [rsp+28h] [rbp-D0h]
  int v48; // [rsp+2Ch] [rbp-CCh]
  __int64 v49; // [rsp+30h] [rbp-C8h]
  unsigned int v51; // [rsp+48h] [rbp-B0h] BYREF
  int v52; // [rsp+4Ch] [rbp-ACh] BYREF
  void *v53[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v54; // [rsp+60h] [rbp-98h] BYREF
  void *v55[2]; // [rsp+70h] [rbp-88h] BYREF
  char *v56; // [rsp+80h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-68h] BYREF
  int v58; // [rsp+98h] [rbp-60h] BYREF
  void *v59; // [rsp+A0h] [rbp-58h]
  int *v60; // [rsp+A8h] [rbp-50h]
  int *v61; // [rsp+B0h] [rbp-48h]
  __int64 v62; // [rsp+B8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 80);
  v51 = 0;
  v58 = 0;
  v49 = sub_101DD90(v5);
  v55[0] = v53;
  v59 = nullptr;
  v60 = &v58;
  v61 = &v58;
  v62 = 0;
  LODWORD(v53[0]) = -1;
  v6 = sub_1ED0580(&v57, (__int64)&v58, (int **)v55);
  v7 = *(_QWORD **)a3;
  v6[9] = -1;
  v8 = 0;
  if ( *v7 )
  {
    v9 = 0;
    v10 = a1 + 13296;
    do
    {
      v11 = *(_QWORD *)(a2 + 80);
      v12 = *(_QWORD *)(a2 + 72);
      sub_1EAC540((__m128i **)v55, (__int64 *)a3, &v51);
      sub_1EAB120((__int64)v53, v10, v55[0], (size_t)v55[1], v12, v11);
      if ( v55[0] != &v56 )
        operator delete(v55[0]);
      v13 = sub_1022CE0(v49, v53[0], (size_t)v53[1]);
      v14 = (int *)v59;
      v52 = v9;
      v15 = v13;
      v16 = &v58;
      if ( !v59 )
        goto LABEL_12;
      do
      {
        while ( v9 <= v14[8] )
        {
          v16 = v14;
          v14 = *((int **)v14 + 2);
          if ( !v14 )
            goto LABEL_10;
        }
        v14 = *((int **)v14 + 3);
      }
      while ( v14 );
LABEL_10:
      if ( v16 == &v58 || v9 < v16[8] )
      {
LABEL_12:
        v55[0] = &v52;
        v16 = sub_1ED0580(&v57, (__int64)v16, (int **)v55);
      }
      v16[9] = v15;
      if ( v53[0] != &v54 )
        operator delete(v53[0]);
      v7 = *(_QWORD **)a3;
      ++v9;
      v8 = v51;
    }
    while ( *(_QWORD *)(*(_QWORD *)a3 + 8LL * v51) );
  }
  v17 = v8 + 1;
  v18 = nullptr;
  v19 = v17;
  v51 = v17;
  v20 = nullptr;
  v21 = nullptr;
  *(_OWORD *)v55 = 0;
  v56 = nullptr;
  if ( (unsigned int)v17 < *(_DWORD *)(a3 + 8) )
  {
    v46 = a3;
    while ( 1 )
    {
      v22 = v7[v17];
      v48 = v22;
      if ( (_DWORD)v22 )
        v48 = *(_DWORD *)(a2 + 1644) + v22 - 1;
      v51 = v19 + 2;
      v23 = v7[v19 + 1];
      v47 = v23;
      if ( v21 != v20 )
        v55[1] = v21;
      if ( (unsigned int)v23 > 0xCCCCCCCCCCCCCCCDLL * ((v18 - (_BYTE *)v21) >> 2) )
      {
        v41 = nullptr;
        if ( (_DWORD)v23 )
        {
          v42 = (char *)operator new(20LL * (unsigned int)v23);
          v21 = v55[0];
          v41 = v42;
        }
        if ( v21 )
          operator delete(v21);
        v55[0] = v41;
        v55[1] = v41;
        v56 = &v41[20 * (unsigned int)v23];
      }
      v24 = 0;
      if ( (_DWORD)v23 )
      {
        do
        {
          v25 = *(_QWORD **)v46;
          while ( 1 )
          {
            v26 = &v58;
            v27 = v25[v51];
            v28 = v25[v51 + 1];
            v29 = v51 + 3;
            v30 = v25[v51 + 2];
            v31 = (int *)v59;
            v51 += 3;
            if ( !v59 )
              goto LABEL_32;
            do
            {
              while ( (int)v30 <= v31[8] )
              {
                v26 = v31;
                v31 = *((int **)v31 + 2);
                if ( !v31 )
                  goto LABEL_30;
              }
              v31 = *((int **)v31 + 3);
            }
            while ( v31 );
LABEL_30:
            if ( v26 == &v58 || (int)v30 < v26[8] )
            {
LABEL_32:
              v45 = (__int64)v26;
              v32 = (int *)operator new(0x28u);
              v32[8] = v30;
              v26 = v32;
              v32[9] = 0;
              v33 = sub_1ED04A0(&v57, v45, v32 + 8);
              if ( v34 )
              {
                v35 = &v58 == v34 || v33 || v26[8] < v34[8];
                std::_Rb_tree_insert_and_rebalance(v35, v26, v34, &v58);
                ++v62;
              }
              else
              {
                v40 = v26;
                v26 = (int *)v33;
                operator delete(v40);
              }
              v29 = v51;
              v25 = *(_QWORD **)v46;
            }
            v36 = v26[9];
            v37 = v25[v29];
            v51 = v29 + 2;
            v38 = v25[v29 + 1];
            v53[0] = (void *)__PAIR64__(v28, v27);
            v53[1] = (void *)__PAIR64__(v37, v36);
            v54 = v38;
            if ( v55[1] == v56 )
              break;
            v39 = (char *)v55[1] + 20;
            ++v24;
            *(__m128i *)v55[1] = _mm_load_si128((const __m128i *)v53);
            *((_DWORD *)v39 - 1) = v54;
            v55[1] = v39;
            if ( v47 == v24 )
              goto LABEL_40;
          }
          ++v24;
          sub_101E770((__int64)v55, v55[1], (const __m128i *)v53);
        }
        while ( v47 != v24 );
      }
LABEL_40:
      sub_101F360(v49, v48, (char **)v55);
      v17 = v51;
      v19 = v51;
      if ( v51 >= *(_DWORD *)(v46 + 8) )
        break;
      v20 = v55[1];
      v21 = v55[0];
      v7 = *(_QWORD **)v46;
      v18 = v56;
    }
    if ( v55[0] )
      operator delete(v55[0]);
  }
  v43 = (_QWORD **)v59;
  if ( v59 )
  {
    do
    {
      sub_1EB0C40((__int64)&v57, v43[3]);
      v44 = (_QWORD **)v43[2];
      operator delete(v43);
      v43 = v44;
    }
    while ( v44 );
  }
}
