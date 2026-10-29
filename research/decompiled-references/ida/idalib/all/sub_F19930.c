__int16 __fastcall sub_F19930(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r13
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int **v16; // r13
  __int64 v17; // rax
  int **v18; // r14
  __int64 v19; // rbx
  _BOOL4 v20; // r15d
  __int64 v21; // rbx
  int *v22; // r12
  int v23; // ecx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  _BOOL4 v28; // r15d
  __int64 v29; // rbx
  __int64 v30; // rax
  _BOOL4 v31; // r15d
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 *v37; // rax
  int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // rax

  v3 = (__int64 *)(a2 + 48);
  sub_F15AA0(a1, (_WORD *)a2);
  v4 = a1[1];
  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(unsigned int *)(v4 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(a1[1], v4 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v6) = v5;
  v7 = *(unsigned int *)(v4 + 12);
  v8 = (unsigned int)(*(_DWORD *)(v4 + 8) + 1);
  *(_DWORD *)(v4 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(v4, v4 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v8) = 0;
  ++*(_DWORD *)(v4 + 8);
  v9 = &v3[*(unsigned int *)(a2 + 16)];
  while ( v9 != v3 )
  {
    v10 = *v3++;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 24LL))(a1, v10);
  }
  v11 = a1[1];
  v12 = *(_DWORD *)(a2 + 20);
  v13 = *(unsigned int *)(v11 + 8);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
  {
    sub_2237220(a1[1], v11 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(v11 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v11 + 4 * v13) = v12;
  v14 = *(unsigned int *)(v11 + 12);
  v15 = (unsigned int)(*(_DWORD *)(v11 + 8) + 1);
  *(_DWORD *)(v11 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(v11, v11 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(v11 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v11 + 4 * v15) = 0;
  ++*(_DWORD *)(v11 + 8);
  v16 = (int **)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 48);
  v17 = *(unsigned int *)(a2 + 20);
  v18 = &v16[v17];
  if ( v18 != v16 )
  {
    while ( 1 )
    {
      v21 = a1[1];
      v22 = *v16;
      v40 = *(unsigned int *)(v21 + 8);
      v23 = **v16;
      v24 = *(unsigned int *)(v21 + 12);
      v25 = v40 + 1;
      if ( !v23 )
      {
        if ( v25 > v24 )
        {
          sub_2237220(a1[1], v21 + 16, v25, 4);
          v40 = *(unsigned int *)(v21 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v21 + 4 * v40) = 0;
        ++*(_DWORD *)(v21 + 8);
        v19 = a1[1];
        v17 = *(unsigned int *)(v19 + 8);
        v20 = v22[4] == 1;
        if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v19 + 12) )
        {
          sub_2237220(a1[1], v19 + 16, v17 + 1, 4);
          v17 = *(unsigned int *)(v19 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v19 + 4 * v17) = v20;
        ++*(_DWORD *)(v19 + 8);
        if ( v22[4] != 1 )
          LOWORD(v17) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(
                          a1,
                          *(_QWORD *)(*((_QWORD *)v22 + 1) & 0xFFFFFFFFFFFFFFF8LL));
        goto LABEL_19;
      }
      if ( (unsigned int)(v23 - 1) > 1 )
      {
        if ( v25 > v24 )
        {
          sub_2237220(a1[1], v21 + 16, v25, 4);
          v40 = *(unsigned int *)(v21 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v21 + 4 * v40) = 3;
        v38 = *((unsigned __int8 *)v22 + 24);
        ++*(_DWORD *)(v21 + 8);
        v39 = a1[1];
        v17 = *(unsigned int *)(v39 + 8);
        if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v39 + 12) )
        {
          sub_2237220(a1[1], v39 + 16, v17 + 1, 4);
          v17 = *(unsigned int *)(v39 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v39 + 4 * v17) = v38;
        ++*(_DWORD *)(v39 + 8);
        if ( !*((_BYTE *)v22 + 24) )
          LOWORD(v17) = sub_F133C0((__int64)a1, *((_QWORD *)v22 + 1));
        goto LABEL_19;
      }
      if ( v25 > v24 )
      {
        sub_2237220(a1[1], v21 + 16, v25, 4);
        v40 = *(unsigned int *)(v21 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v21 + 4 * v40) = 2;
      ++*(_DWORD *)(v21 + 8);
      v26 = a1[1];
      v27 = *(unsigned int *)(v26 + 8);
      v28 = v22[10] == 1;
      if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v26 + 12) )
      {
        sub_2237220(a1[1], v26 + 16, v27 + 1, 4);
        v27 = *(unsigned int *)(v26 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v26 + 4 * v27) = v28;
      ++*(_DWORD *)(v26 + 8);
      if ( v22[10] != 1 )
        sub_F133C0((__int64)a1, *((_QWORD *)v22 + 1) & 0xFFFFFFFFFFFFFFFCLL);
      v29 = a1[1];
      v30 = *(unsigned int *)(v29 + 8);
      v31 = v22[4] != 0;
      if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(v29 + 12) )
      {
        sub_2237220(a1[1], v29 + 16, v30 + 1, 4);
        v30 = *(unsigned int *)(v29 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v29 + 4 * v30) = v31;
      ++*(_DWORD *)(v29 + 8);
      v32 = *((_QWORD *)v22 + 3);
      v33 = (__int64 *)a1[1];
      if ( (v32 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        break;
      v34 = *((unsigned int *)v33 + 2);
      v35 = *((unsigned int *)v33 + 3);
      v36 = v34 + 1;
      if ( (v32 & 4) != 0 )
      {
        if ( v36 > v35 )
        {
          sub_2237220(a1[1], v33 + 2, v36, 4);
          v34 = *((unsigned int *)v33 + 2);
        }
        v17 = *v33;
        *(_DWORD *)(*v33 + 4 * v34) = 2;
        ++*((_DWORD *)v33 + 2);
LABEL_19:
        if ( v18 == ++v16 )
          return v17;
      }
      else
      {
        if ( v36 > v35 )
        {
          sub_2237220(a1[1], v33 + 2, v36, 4);
          v34 = *((unsigned int *)v33 + 2);
        }
        ++v16;
        *(_DWORD *)(*v33 + 4 * v34) = 1;
        ++*((_DWORD *)v33 + 2);
        v37 = (__int64 *)sub_C0F1A0((_QWORD *)v22 + 3);
        LOWORD(v17) = sub_F133C0((__int64)a1, *v37);
        if ( v18 == v16 )
          return v17;
      }
    }
    v17 = *((unsigned int *)v33 + 2);
    if ( v17 + 1 > (unsigned __int64)*((unsigned int *)v33 + 3) )
    {
      sub_2237220(a1[1], v33 + 2, v17 + 1, 4);
      v17 = *((unsigned int *)v33 + 2);
    }
    *(_DWORD *)(*v33 + 4 * v17) = 0;
    ++*((_DWORD *)v33 + 2);
    goto LABEL_19;
  }
  return v17;
}
