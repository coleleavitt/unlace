unsigned __int64 __fastcall sub_652280(__int64 a1, int a2, char *a3, char a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // dl
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r13
  const char *v14; // rcx
  char *v15; // rax
  const char *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // r14
  char *v21; // rax
  unsigned __int8 v22; // dl
  char v23; // r12
  __int64 v24; // rdi
  char *v25; // rcx
  char *v26; // rdx
  const char *v27; // rsi
  char *v28; // rdx
  const char *v29; // r8
  char *v30; // rdx
  const char *v31; // r10
  char *v32; // rdx
  const char *v33; // r9
  char v34; // dl
  unsigned int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  int v38; // ebp
  int v39; // eax
  int v41; // edx
  char v42; // [rsp+Fh] [rbp-69h]
  char v43; // [rsp+1Fh] [rbp-59h] BYREF
  char *v44; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v44 = a3;
  v6 = (unsigned __int64)&a3[a2];
  v7 = *(_QWORD *)(a1 + 1704);
  v8 = *(_QWORD *)(a1 + 1672);
  v45 = v6;
  v43 = 0;
  v9 = sub_6488B0(v8, v7, &v43, (__int64)&v44);
  v10 = v43;
  v11 = v45;
  v12 = v9;
  if ( (v43 & 2) != 0 )
  {
    v38 = unpack_dd(&v44);
    v39 = v38 + unpack_dd(&v44);
    if ( a4 )
    {
      v41 = v39;
      v39 = v38;
      v38 = v41;
    }
    if ( *(_DWORD *)(v12 + 20) == v39 )
    {
      *(_DWORD *)(v12 + 20) = v38;
      return v46 - __readfsqword(0x28u);
    }
    if ( !under_debugger )
      interr(1739);
    goto LABEL_72;
  }
  if ( (*(_BYTE *)(v9 + 8) & 2) == 0 )
  {
    v13 = 0;
    if ( a4 )
      goto LABEL_4;
    goto LABEL_19;
  }
  v42 = v43;
  v17 = unpack_dd(&v44);
  v10 = v42;
  v13 = (unsigned int)(v17 - 1);
  if ( !v17 )
  {
    if ( a4 )
      goto LABEL_13;
LABEL_18:
    v11 = v45;
LABEL_19:
    v20 = v44;
    v21 = v44;
    do
    {
      if ( (unsigned __int64)v21 >= v11 )
      {
        v20 = nullptr;
        goto LABEL_23;
      }
      ++v21;
    }
    while ( *(v21 - 1) );
    v44 = v21;
LABEL_23:
    v22 = v10 & 4;
    v23 = v22 >> 2;
    if ( v22 )
      v24 = unpack_dq(&v44);
    else
      v24 = (unsigned int)unpack_dd(&v44);
    v25 = v44;
    v26 = v44;
    do
    {
      if ( (unsigned __int64)v26 >= v45 )
      {
        v27 = nullptr;
        goto LABEL_29;
      }
      ++v26;
    }
    while ( *(v26 - 1) );
    v27 = v44;
    v44 = v26;
    v25 = v26;
LABEL_29:
    v28 = v25;
    do
    {
      if ( (unsigned __int64)v28 >= v45 )
      {
        v29 = nullptr;
        goto LABEL_33;
      }
      ++v28;
    }
    while ( *(v28 - 1) );
    v29 = v25;
    v44 = v28;
    v25 = v28;
LABEL_33:
    v30 = v25;
    do
    {
      if ( (unsigned __int64)v30 >= v45 )
      {
        v31 = nullptr;
        goto LABEL_37;
      }
      ++v30;
    }
    while ( *(v30 - 1) );
    v31 = v25;
    v44 = v30;
    v25 = v30;
LABEL_37:
    v32 = v25;
    do
    {
      if ( (unsigned __int64)v32 >= v45 )
      {
        v33 = nullptr;
        goto LABEL_41;
      }
      ++v32;
    }
    while ( *(v32 - 1) );
    v33 = v25;
    v44 = v32;
    v25 = v32;
LABEL_41:
    v34 = 0;
    if ( (unsigned __int64)v25 < v45 )
      v34 = *v25++;
    v44 = v25;
    v35 = (unsigned int)sub_64BB80(v12, v20, v27, v31, v29, v33, v34, v24, v23);
    if ( !(_DWORD)v13 )
      goto LABEL_46;
    if ( (unsigned int)v13 < *(_DWORD *)(v12 + 48) )
    {
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 4 * v13) = v35 - *(_DWORD *)(v12 + 32);
      goto LABEL_46;
    }
    if ( !under_debugger )
      interr(1742);
LABEL_72:
    BUG();
  }
  if ( ((unsigned int)v13 & 0x7FFFFFFF) >= *(_DWORD *)(v12 + 48) )
    sub_647870(&v44, v11);
  if ( !a4 )
    goto LABEL_18;
  v11 = v45;
  if ( v17 == 1 )
  {
LABEL_4:
    v14 = v44;
    v15 = v44;
    do
    {
      if ( (unsigned __int64)v15 >= v11 )
      {
        v14 = nullptr;
        goto LABEL_8;
      }
      ++v15;
    }
    while ( *(v15 - 1) );
    v44 = v15;
LABEL_8:
    v16 = sub_64F440(v12, v14, 0);
    sub_6501A0(*(_QWORD *)(a1 + 1672), v12, (__int64)v16, 1);
    goto LABEL_46;
  }
LABEL_13:
  v18 = *(_QWORD *)(v12 + 40);
  if ( !v18 || (v19 = *(_DWORD *)(v18 + 4 * v13), v19 == -1) )
  {
    if ( !under_debugger )
      interr(1740);
    goto LABEL_72;
  }
  if ( v19 < 0 )
  {
    if ( !under_debugger )
      interr(1741);
    goto LABEL_72;
  }
  sub_6501A0(*(_QWORD *)(a1 + 1672), v12, *(_QWORD *)(v12 + 32) + (unsigned int)v19, 1);
  *(_DWORD *)(*(_QWORD *)(v12 + 40) + 4 * v13) = -1;
LABEL_46:
  if ( *(_QWORD *)(v12 + 64) )
  {
    qfree(*(void **)(v12 + 56));
    qfree(*(void **)(v12 + 64));
    *(_QWORD *)(v12 + 72) = 0;
    *(_OWORD *)(v12 + 56) = 0;
  }
  *(_DWORD *)(*(_QWORD *)v12 + 32LL) |= 0x40u;
  v36 = *(_QWORD *)(a1 + 1672);
  v37 = *(_DWORD *)(v36 + 2608) + 1;
  if ( *(_DWORD *)(v36 + 2608) == -1 )
    v37 = 1;
  *(_DWORD *)(v36 + 2608) = v37;
  mark_builtin_widgets(1024, 0, 1);
  sub_6B8D40(v36);
  mark_builtin_widgets(512, 0, 1);
  return v46 - __readfsqword(0x28u);
}
