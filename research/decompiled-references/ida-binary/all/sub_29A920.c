unsigned __int64 __fastcall sub_29A920(_QWORD *a1, int **a2, unsigned int a3)
{
  int *v4; // rcx
  int *v5; // rax
  int *v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r10
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  unsigned int *v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // r13
  int v23; // ebp
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // ebp
  __int64 v27; // r12
  int *v28; // rbp
  __int64 v29; // rdx
  _QWORD **v30; // rbx
  void *v31; // rdi
  _QWORD v34[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-98h]
  __int128 v36; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  int v38; // [rsp+48h] [rbp-70h] BYREF
  void *v39; // [rsp+50h] [rbp-68h]
  int *v40; // [rsp+58h] [rbp-60h]
  int *v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v4 = a2[1];
  v43 = __readfsqword(0x28u);
  v38 = 0;
  v40 = &v38;
  v41 = &v38;
  v5 = *a2;
  v39 = nullptr;
  v42 = 0;
  if ( !(4LL * (_QWORD)v4) )
    goto LABEL_36;
  v7 = v5;
  do
  {
    v8 = *v7;
    v9 = a1[22] + 24LL * *v7;
    v10 = *(_DWORD *)(v9 + 8) - 1;
    if ( v10 < 0 )
      goto LABEL_21;
    v11 = 4LL * (unsigned int)v10;
    while ( 1 )
    {
      v12 = a1[10];
      v13 = *(int *)(*(_QWORD *)v9 + v11);
      v14 = v13;
      v15 = *(_DWORD *)(*(_QWORD *)v9 + v11);
      v16 = *(_DWORD *)(v12 + 4 * v13) & 0x7FFFFFFF;
      if ( (_DWORD)v13 == v16 )
        break;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v12 + 4LL * v16);
        if ( v17 < 0 )
          v15 = v16;
        v18 = v17 & 0x7FFFFFFF;
        if ( v18 == v16 )
          break;
        v16 = v18;
      }
      if ( (_DWORD)v14 == v15 )
        break;
      if ( *(int *)(v12 + 4LL * v15) >= 0 || (int)a3 < v15 )
        v15 = v14;
LABEL_15:
      if ( v15 != a3 )
        goto LABEL_19;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 216LL))(a1, v8, (unsigned int)v14);
      --v10;
      v11 -= 4;
      if ( v10 == -1 )
        goto LABEL_20;
LABEL_17:
      v8 = *v7;
    }
    if ( v15 <= (int)a3 )
      goto LABEL_15;
LABEL_19:
    sub_29A7C0((__int64)a1, &v37, (v14 << 32) | v8, v15);
    --v10;
    v11 -= 4;
    if ( v10 != -1 )
      goto LABEL_17;
LABEL_20:
    v5 = *a2;
    v4 = a2[1];
LABEL_21:
    ++v7;
    v19 = (unsigned int *)v5;
  }
  while ( &v5[(_QWORD)v4] != v7 );
  if ( v7 != v5 )
  {
    do
    {
      v20 = (int)*v19;
      v21 = 24 * v20;
      v22 = 24 * v20 + a1[22];
      v23 = *(_DWORD *)(v22 + 8) - 1;
      if ( v23 >= 0 )
      {
        v24 = 4LL * (unsigned int)v23;
        do
        {
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 216LL))(
            a1,
            v20,
            *(unsigned int *)(*(_QWORD *)v22 + v24));
          --v23;
          v20 = *v19;
          v24 -= 4;
        }
        while ( v23 != -1 );
        v21 = 24LL * (int)v20;
      }
      v25 = a1[25] + v21;
      v26 = *(_DWORD *)(v25 + 8) - 1;
      if ( v26 >= 0 )
      {
        v27 = 4LL * (unsigned int)v26;
        while ( 1 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 224LL))(
            a1,
            *(unsigned int *)(*(_QWORD *)v25 + v27),
            (unsigned int)v20,
            *(unsigned int *)(*(_QWORD *)v25 + v27),
            a3);
          --v26;
          v27 -= 4;
          if ( v26 == -1 )
            break;
          LODWORD(v20) = *v19;
        }
      }
      ++v19;
    }
    while ( v19 != (unsigned int *)&(*a2)[(_QWORD)a2[1]] );
  }
  v28 = v40;
  v34[1] = -1;
  v34[0] = 0x1FFFFFFFFLL;
  v35 = 0;
  v36 = 0;
  if ( v40 != &v38 )
  {
    do
    {
      v29 = (unsigned int)v28[8];
      LODWORD(v34[0]) = v28[9];
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD *))(*a1 + 208LL))(a1, a3, v29, v34);
      v28 = (int *)std::_Rb_tree_increment(v28);
    }
    while ( v28 != &v38 );
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35, (const char *)a3);
    }
  }
LABEL_36:
  v30 = (_QWORD **)v39;
  if ( v39 )
  {
    do
    {
      sub_2920A0(v30[3]);
      v31 = v30;
      v30 = (_QWORD **)v30[2];
      operator delete(v31, 0x28u);
    }
    while ( v30 );
  }
  return v43 - __readfsqword(0x28u);
}
