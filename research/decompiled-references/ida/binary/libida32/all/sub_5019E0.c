__int64 __fastcall sub_5019E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 *v8; // rbx
  unsigned int *v9; // rax
  __int64 v10; // r9
  int v11; // r10d
  unsigned int v13; // r13d
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int *v24; // rax
  unsigned int *v25; // r14
  unsigned int *v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned int *v29; // rax
  unsigned int *v30; // rax
  unsigned int *v31; // r14
  unsigned int *v32; // r9
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  char *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD v39[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *((unsigned __int8 *)a1 + 144);
  v39[3] = __readfsqword(0x28u);
  if ( !(_BYTE)v4 )
    goto LABEL_41;
  v5 = (int)a2 - *(_DWORD *)(a1[1] + 68);
  if ( v5 >= a1[5] )
    goto LABEL_40;
  v6 = v5 << 6;
  v7 = a3;
  *(_DWORD *)(a1[4] + v6 + 56) = a2;
  v8 = (__int64 *)(a1[4] + v6);
  a1 = v8;
  v9 = sub_4FED00((unsigned int **)v8, a3);
  if ( v9 == (unsigned int *)(*v8 + 17 * v8[1]) )
    return v4;
  a2 = *v9;
  if ( v7 < (unsigned int)a2 )
    return v4;
  v13 = v9[1];
  if ( v7 >= v13 || !v9 || v7 == (_DWORD)a2 )
    return v4;
  a3 = *(_QWORD *)v9;
  v14 = *(_QWORD *)((char *)v9 + 5);
  v15 = *(_BYTE *)(v10 + 144) == 0;
  v39[0] = a3;
  *(_QWORD *)((char *)v39 + 5) = v14;
  if ( v15 )
  {
LABEL_41:
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  a4 = (unsigned int)(v11 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL));
  if ( (unsigned __int64)(int)a4 >= *(_QWORD *)(v10 + 40) )
LABEL_40:
    sub_4FC970(a1, a2, a3, a4);
  v16 = (__int64)(int)a4 << 6;
  *(_DWORD *)(*(_QWORD *)(v10 + 32) + v16 + 56) = v11;
  v18 = sub_4FED00((unsigned int **)(*(_QWORD *)(v10 + 32) + v16), a2);
  v19 = *(_QWORD *)v17 + 17LL * *(_QWORD *)(v17 + 8);
  if ( v18 == (unsigned int *)v19
    || (unsigned int)a2 < *v18
    || (v20 = v18[1], (unsigned int)a2 >= (unsigned int)v20)
    || (unsigned int)v20 < v7
    && (unsigned int *)v19 != (unsigned int *)((char *)v18 + 17)
    && *(unsigned int *)((char *)v18 + 17) < v7 )
  {
    sub_4FED90(v17, a2);
  }
  else
  {
    sub_4FD960(*(unsigned int *)(v17 + 56), *v18, v20, v7);
    v18[1] = v7;
    *((_BYTE *)v18 + 16) = 1;
  }
  v21 = sub_4FED00((unsigned int **)v8, v7);
  if ( v21 != (unsigned int *)(*v8 + 17 * v8[1]) )
  {
    v23 = *v21;
    if ( v7 < (unsigned int)v23 || v7 >= v21[1] )
    {
LABEL_25:
      if ( v13 > (unsigned int)v23 )
        v13 = v23;
      if ( v7 >= v13 )
LABEL_28:
        sub_384000(1336, v7, v23, v22);
      goto LABEL_29;
    }
    v24 = sub_4FED00((unsigned int **)v8, v7);
    v25 = v24;
    if ( v26 == v24
      || (v27 = *v24, v7 < (unsigned int)v27)
      || (v28 = v24[1], v7 >= (unsigned int)v28)
      || v7 == (_DWORD)v27 )
    {
      sub_4FED90((__int64)v8, v7);
    }
    else
    {
      sub_4FD960(*((unsigned int *)v8 + 14), v27, v28, v7);
      v25[1] = v7;
      *((_BYTE *)v25 + 16) = 1;
    }
    v29 = sub_4FED00((unsigned int **)v8, v7);
    if ( v29 != (unsigned int *)(*v8 + 17 * v8[1]) )
    {
      v23 = *v29;
      goto LABEL_25;
    }
  }
LABEL_29:
  v30 = sub_4FED00((unsigned int **)v8, v7);
  v31 = v30;
  if ( v30 != v32 )
  {
    v33 = *v30;
    if ( v7 >= v33 || v33 < v13 )
      goto LABEL_28;
  }
  v34 = *((unsigned int *)v8 + 14);
  v39[0] = __PAIR64__(v13, v7);
  sub_4FCEA0(v34, (unsigned int *)v39, 183);
  v35 = v8[1];
  v36 = (char *)v31 - *v8;
  if ( v8[2] < (unsigned __int64)(v35 + 1) )
  {
    v38 = qvector_reserve(v8, *v8, v35 + 1, 17);
    *v8 = v38;
    v31 = (unsigned int *)&v36[v38];
    v35 = v8[1];
  }
  memmove((char *)v31 + 17, v31, 17 * v35 - (_QWORD)v36);
  v37 = v39[0];
  *((_BYTE *)v31 + 12) = 0;
  *(_QWORD *)v31 = 0;
  v31[2] = 0;
  *((_BYTE *)v31 + 16) = 0;
  v8[3] = (__int64)v31;
  ++v8[1];
  *(_QWORD *)v31 = v37;
  *(_QWORD *)((char *)v31 + 5) = *(_QWORD *)((char *)v39 + 5);
  *(_BYTE *)(v8[3] + 16) = 1;
  return v4;
}

