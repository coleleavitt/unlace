__int64 __fastcall sub_92A620(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  void *v7; // r12
  __int64 v8; // rsi
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  void *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  void *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // edx
  _QWORD *v34; // rax
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // ebx
  size_t v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rdi
  __int64 v51; // rcx
  char v52; // si
  __int64 v53; // rcx
  char v54; // si
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // r15
  void *v58; // rbx
  _QWORD *v59; // rsi
  _QWORD *v60; // rax
  char **exception; // rbp
  _QWORD *v62; // [rsp+0h] [rbp-98h]
  _DWORD *v63; // [rsp+0h] [rbp-98h]
  unsigned int v64; // [rsp+Ch] [rbp-8Ch]
  __int64 v65[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v66; // [rsp+30h] [rbp-68h]
  __int64 v67; // [rsp+38h] [rbp-60h] BYREF
  __int64 v68; // [rsp+40h] [rbp-58h]
  __int64 v69; // [rsp+48h] [rbp-50h]
  __int64 v70; // [rsp+50h] [rbp-48h]
  int v71; // [rsp+58h] [rbp-40h]

  sub_9210C0((_QWORD *)a1, 0);
  v2 = *(_QWORD *)(a1 + 224);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 232);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 48 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v8 = v4 + 24;
        v4 += 48;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = *(_QWORD *)(a1 + 240);
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  v9 = *(_QWORD **)(a1 + 248);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 )
    {
      v62 = &v9[v10];
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(unsigned int *)(v11 - 4);
          if ( (_DWORD)v12 )
          {
            v13 = v11 + 48 * v12;
            do
            {
              v14 = *(_QWORD *)(v11 + 40);
              if ( v14 )
                sub_186B220((void *)(v14 - 8));
              v15 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v11 + 8);
              v16 = v11 + 24;
              v11 += 48;
              sub_182CBA0(v15, v16);
            }
            while ( v13 != v11 );
            v11 = *v9;
          }
          sub_186B220((void *)(v11 - 8));
        }
        ++v9;
      }
      while ( v9 != v62 );
      v9 = *(_QWORD **)(a1 + 248);
    }
    *((_DWORD *)v9 - 1) = 0;
  }
  v17 = *(_QWORD *)(a1 + 256);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v18 = *(_QWORD *)(a1 + 328);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = v18 + 40 * v19;
      do
      {
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v18 + 8);
        v22 = v18 + 24;
        v18 += 40;
        sub_182CBA0(v21, v22);
      }
      while ( v18 != v20 );
      v18 = *(_QWORD *)(a1 + 328);
    }
    *(_DWORD *)(v18 - 4) = 0;
  }
  v23 = *(_QWORD *)(a1 + 264);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 40 * v24;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23 + 8);
        v27 = v23 + 24;
        v23 += 40;
        sub_182CBA0(v26, v27);
      }
      while ( v25 != v23 );
      v23 = *(_QWORD *)(a1 + 264);
    }
    *(_DWORD *)(v23 - 4) = 0;
  }
  v28 = *(_QWORD *)(a1 + 272);
  if ( v28 )
    *(_DWORD *)(v28 - 4) = 0;
  v29 = *(_QWORD **)(a1 + 240);
  *(_BYTE *)(a1 + 280) = 0;
  v66 = -1;
  v67 = 0;
  v68 = 0;
  v69 = 1;
  v70 = 0;
  v71 = -2;
  if ( v29 )
  {
    v30 = *((unsigned int *)v29 - 1);
    if ( (_DWORD)v30 == *((_DWORD *)v29 - 2) )
    {
      v39 = 3 * v30 + 1;
      v40 = v39 & 0xFFFFFFFE;
      v41 = v39 >> 1;
      v64 = v41;
      v42 = 16 * (v40 + v41) + 8;
      if ( 48 * (int)v30 + 8 >= (unsigned int)v42 || (unsigned int)v30 >= v41 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v65, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = sub_186B270(v42);
      v44 = *(_QWORD **)(a1 + 240);
      v63 = (_DWORD *)v43;
      v29 = (_QWORD *)(v43 + 8);
      if ( v44 )
      {
        v45 = v43;
        v46 = *((unsigned int *)v44 - 1);
        v47 = 3 * v46;
        *(_DWORD *)(v45 + 4) = v46;
        v48 = v44;
        v49 = v29;
        v50 = &v44[2 * v47];
        if ( v50 != v44 )
        {
          do
          {
            v51 = *v48;
            v52 = *((_BYTE *)v49 + 12);
            v48 += 6;
            v49 += 6;
            *(v49 - 6) = v51;
            *((_DWORD *)v49 - 10) = *((_DWORD *)v48 - 10);
            *((_BYTE *)v49 - 36) = v52 & 0xFC | *((_BYTE *)v48 - 36) & 3;
            v53 = *(v48 - 4);
            *(v48 - 4) = 0;
            v54 = *((_BYTE *)v49 - 20);
            *(v49 - 4) = v53;
            *((_DWORD *)v49 - 6) = *((_DWORD *)v48 - 6);
            *((_BYTE *)v49 - 20) = v54 & 0xFC | *((_BYTE *)v48 - 20) & 3;
            v55 = *(v48 - 2);
            *(v48 - 2) = 0;
            *(v49 - 2) = v55;
            *((_DWORD *)v49 - 2) = *((_DWORD *)v48 - 2);
          }
          while ( v50 != v48 );
        }
        v56 = *((unsigned int *)v44 - 1);
        if ( (_DWORD)v56 )
        {
          v57 = &v44[6 * v56];
          do
          {
            v58 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v44 + 1);
            v59 = v44 + 3;
            v44 += 6;
            sub_182CBA0(v58, v59);
          }
          while ( v44 != v57 );
          v44 = *(_QWORD **)(a1 + 240);
        }
        sub_186B220(v44 - 1);
        v34 = &v29[6 * (unsigned int)v63[1]];
      }
      else
      {
        *(_DWORD *)(v43 + 4) = 0;
        v34 = (_QWORD *)(v43 + 8);
      }
      *(_QWORD *)(a1 + 240) = v29;
      *v63 = v64;
      v32 = v66;
      v33 = HIDWORD(v66);
    }
    else
    {
      v31 = 3 * v30;
      v32 = -1;
      v33 = -1;
      v34 = &v29[2 * v31];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x68u);
    *v60 = 2;
    v32 = v66;
    v29 = v60 + 1;
    v33 = HIDWORD(v66);
    *(_QWORD *)(a1 + 240) = v60 + 1;
    v34 = v60 + 1;
  }
  *((_DWORD *)v34 + 1) = v33;
  v35 = v67;
  *(_DWORD *)v34 = v32;
  *((_DWORD *)v34 + 2) = v35;
  *((_BYTE *)v34 + 12) = BYTE4(v67) & 3 | *((_BYTE *)v34 + 12) & 0xFC;
  v36 = v68;
  v68 = 0;
  v34[2] = v36;
  *((_DWORD *)v34 + 6) = v69;
  *((_BYTE *)v34 + 28) = BYTE4(v69) & 3 | *((_BYTE *)v34 + 28) & 0xFC;
  v37 = v70;
  v70 = 0;
  v34[4] = v37;
  *((_DWORD *)v34 + 10) = v71;
  ++*((_DWORD *)v29 - 1);
  sub_25A130((char *)&v67);
  return sub_965AC0(a1);
}

