__int64 __fastcall sub_7AB670(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  __int64 v3; // rax
  int v4; // eax
  __int64 v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // r14
  int v10; // r15d
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // eax
  _DWORD *v23; // r8
  int v24; // ecx
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r14
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned int v42; // r13d
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  __int64 v48[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 432);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  if ( *(_DWORD *)(a1 + 424) == v4
    && ((v30 = *(_QWORD *)(a1 + 496)) == 0 ? (v31 = 0) : (v31 = *(_DWORD *)(v30 - 4)), *(_DWORD *)(a1 + 504) == v31) )
  {
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
      while ( (*(_DWORD *)(a1 + 104))-- != 1 );
    }
    v6 = *(_QWORD *)(a1 + 496);
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 504);
      v8 = 0;
      if ( v7 < *(_DWORD *)(v6 - 4) )
      {
        v32 = *(_QWORD *)(a1 + 80);
        v33 = sub_180C100(v32 + 2144, 24);
        v34 = *(_QWORD **)(v32 + 2128);
        *(_QWORD *)v33 = &off_1C4C070;
        v35 = v33;
        *(_QWORD *)(v33 + 8) = a1 + 504;
        *(_DWORD *)(v33 + 16) = v7;
        if ( v34 )
        {
          v36 = *((_DWORD *)v34 - 1);
          if ( v36 == *((_DWORD *)v34 - 2) )
          {
            v42 = (3 * v36 + 1) >> 1;
            v43 = 8 * v42 + 8;
            if ( 8 * v36 + 8 >= v43 || v36 >= v42 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v48, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v48);
              sub_233E40((__int64)v48);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v44 = (unsigned int *)sub_186B300(v34 - 1, v43);
            v45 = v44[1];
            v34 = v44 + 2;
            *(_QWORD *)(v32 + 2128) = v44 + 2;
            *v44 = v42;
            LODWORD(v44) = v45;
            v39 = &v34[v45];
            v38 = (_DWORD)v44 + 1;
          }
          else
          {
            v37 = v36;
            v38 = v36 + 1;
            v39 = &v34[v37];
          }
        }
        else
        {
          v47 = (_QWORD *)sub_186B270(0x18u);
          *v47 = 2;
          v38 = 1;
          v34 = v47 + 1;
          *(_QWORD *)(v32 + 2128) = v34;
          v39 = v34;
        }
        v40 = *(_QWORD *)(a1 + 496);
        *v39 = v35;
        *((_DWORD *)v34 - 1) = v38;
        if ( v40 )
        {
          v41 = *(unsigned int *)(a1 + 504);
          do
          {
            if ( (unsigned int)v41 >= *(_DWORD *)(v40 - 4) )
              break;
            sub_7A9670(a1, 16 * v41 + v40);
            v40 = *(_QWORD *)(a1 + 496);
            v41 = (unsigned int)(*(_DWORD *)(a1 + 504) + 1);
            *(_DWORD *)(a1 + 504) = v41;
          }
          while ( v40 );
        }
        v8 = 1;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)(a1 + 80);
    v10 = *(_DWORD *)(a1 + 424);
    v11 = sub_180C100(v9 + 2144, 24);
    v12 = *(_QWORD **)(v9 + 2128);
    *(_QWORD *)v11 = &off_1C4C070;
    v13 = v11;
    *(_QWORD *)(v11 + 8) = a1 + 424;
    *(_DWORD *)(v11 + 16) = v10;
    if ( v12 )
    {
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v26 = (3 * v14 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v27 || v14 >= v26 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v48, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v12 - 1, v27);
        v29 = v28[1];
        v12 = v28 + 2;
        *(_QWORD *)(v9 + 2128) = v28 + 2;
        *v28 = v26;
        LODWORD(v28) = v29;
        v17 = &v12[v29];
        v16 = (_DWORD)v28 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v12[v15];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      v12 = v46 + 1;
      *v46 = 2;
      v16 = 1;
      *(_QWORD *)(v9 + 2128) = v12;
      v17 = v12;
    }
    v18 = *(_QWORD *)(a1 + 432);
    *v17 = v13;
    *((_DWORD *)v12 - 1) = v16;
    if ( v18 )
    {
      v19 = *(_DWORD *)(a1 + 480);
      v20 = *(unsigned int *)(a1 + 424);
      do
      {
        if ( (unsigned int)v20 >= *(_DWORD *)(v18 - 4) || *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
          break;
        v21 = 48 * v20 + v18;
        v22 = *(_DWORD *)(v21 + 40);
        if ( v22 == -1 )
        {
          sub_7AB500(a1, v21);
        }
        else
        {
          v23 = *(_DWORD **)(v21 + 32);
          v24 = v23 ? *(v23 - 1) : 0;
          sub_7A8D90(a1, v22, *(_QWORD *)(v21 + 8), v24, v23);
        }
        v18 = *(_QWORD *)(a1 + 432);
        v20 = (unsigned int)(*(_DWORD *)(a1 + 424) + 1);
        *(_DWORD *)(a1 + 424) = v20;
      }
      while ( v18 );
      LOBYTE(v20) = v19 < *(_DWORD *)(a1 + 480);
      v8 |= v20;
    }
  }
  return v8;
}

