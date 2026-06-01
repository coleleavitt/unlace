// Alternative name is '_ZN14FactorPointersC2EiiPiS0_'
void __fastcall FactorPointers::FactorPointers(FactorPointers *this, int a2, int a3, int *a4, int *a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r15d
  unsigned __int64 v20; // r12
  _DWORD *v21; // rax
  void *v22; // rax
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdx
  int *v31; // rsi
  __int64 v32; // rdx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rdx
  int *v41; // rsi
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  _OWORD *v45; // rdx
  __int64 v46; // rcx

  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_46;
  v6 = 8LL * a2;
  v10 = operator new[](v6);
  v11 = v10 + v6;
  *(_QWORD *)this = v10;
  if ( v10 == v10 + v6 )
    goto LABEL_15;
  v12 = v6 - 8;
  v13 = v10 + 8;
  v14 = (v10 >> 3) & 1;
  v15 = v10 + 8;
  if ( v12 > 0x20 )
  {
    if ( v14 )
      *(_QWORD *)v10 = 0xBFF0000000000000LL;
    else
      v15 = v10;
    v16 = (v12 >> 3) - v14 + 1;
    v17 = v10 + 8 * v14;
    v18 = 0;
    do
    {
      ++v18;
      v17 += 16LL;
      *(_OWORD *)(v17 - 16) = xmmword_28D580;
    }
    while ( v16 >> 1 > v18 );
    v10 = v15 + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( v16 == (v16 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_15;
    v13 = v10 + 8;
  }
  *(_QWORD *)v10 = 0xBFF0000000000000LL;
  if ( v11 != v13 )
  {
    *(_QWORD *)(v10 + 8) = 0xBFF0000000000000LL;
    if ( v11 != v10 + 16 )
    {
      *(_QWORD *)(v10 + 16) = 0xBFF0000000000000LL;
      if ( v11 != v10 + 24 )
      {
        *(_QWORD *)(v10 + 24) = 0xBFF0000000000000LL;
        if ( v11 != v10 + 32 )
          *(_QWORD *)(v10 + 32) = 0xBFF0000000000000LL;
      }
    }
  }
LABEL_15:
  v19 = a2 + 1;
  if ( (unsigned __int64)(a2 + 1) > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_46;
  v20 = 4LL * v19;
  v21 = (_DWORD *)operator new[](v20);
  *((_QWORD *)this + 1) = v21;
  if ( a2 != -1 )
  {
    v43 = a2 + 8;
    if ( v19 >= 0 )
      v43 = a2 + 1;
    v44 = v43 >> 3;
    if ( v44 > 0 )
    {
      v45 = v21;
      v46 = (unsigned int)(v44 - 1);
      do
      {
        *v45 = -1;
        v45 += 2;
        *(v45 - 1) = -1;
      }
      while ( v45 != (_OWORD *)&v21[8 * v46 + 8] );
      v21 += 8 * (int)v46 + 8;
    }
    switch ( v19 % 8 )
    {
      case 1:
        goto LABEL_44;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_42;
      case 4:
        goto LABEL_41;
      case 5:
        goto LABEL_40;
      case 6:
        goto LABEL_39;
      case 7:
        v21[6] = -1;
LABEL_39:
        v21[5] = -1;
LABEL_40:
        v21[4] = -1;
LABEL_41:
        v21[3] = -1;
LABEL_42:
        v21[2] = -1;
LABEL_43:
        v21[1] = -1;
LABEL_44:
        *v21 = -1;
        break;
      default:
        break;
    }
  }
  *((_QWORD *)this + 2) = operator new[](v20 - 4);
  *((_QWORD *)this + 3) = operator new[](v20 - 4);
  v22 = (void *)operator new[](v20);
  *((_QWORD *)this + 4) = v22;
  memset(v22, -1, v20);
  if ( (unsigned __int64)a3 > 0x1FFFFFFFFFFFFFFELL )
LABEL_46:
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 5) = operator new[](4LL * a3);
  *((_QWORD *)this + 6) = operator new[](4LL * a3);
  v23 = a2 - 1;
  *((_QWORD *)this + 7) = operator new[](v20 - 4);
  if ( v23 >= 0 )
  {
    v24 = v23;
    v25 = *((_QWORD *)this + 2);
    v26 = v23 - 1LL;
    v27 = *((_QWORD *)this + 1);
    v28 = *((_QWORD *)this + 3);
    v29 = v26 - (unsigned int)v23;
    while ( 1 )
    {
      v30 = a4[v24];
      *(_DWORD *)(v25 + 4 * v24) = -1;
      v31 = (int *)(v27 + 4 * v30);
      v32 = *v31;
      *(_DWORD *)(v28 + 4 * v24) = v32;
      if ( (_DWORD)v32 == -1 )
      {
        *v31 = v24;
        v24 = v26;
        if ( v26 == v29 )
          break;
      }
      else
      {
        *(_DWORD *)(v25 + 4 * v32) = v24;
        *v31 = v24;
        v24 = v26;
        if ( v26 == v29 )
          break;
      }
      --v26;
    }
  }
  v33 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v34 = (int)v33;
    v35 = *((_QWORD *)this + 5);
    v36 = (int)v33 - 1LL;
    v37 = *((_QWORD *)this + 4);
    v38 = *((_QWORD *)this + 6);
    v39 = v36 - v33;
    while ( 1 )
    {
      v40 = a5[v34];
      *(_DWORD *)(v35 + 4 * v34) = -1;
      v41 = (int *)(v37 + 4 * v40);
      v42 = *v41;
      *(_DWORD *)(v38 + 4 * v34) = v42;
      if ( (_DWORD)v42 == -1 )
      {
        *v41 = v34;
        v34 = v36;
        if ( v36 == v39 )
          return;
      }
      else
      {
        *(_DWORD *)(v35 + 4 * v42) = v34;
        *v41 = v34;
        v34 = v36;
        if ( v39 == v36 )
          return;
      }
      --v36;
    }
  }
}

