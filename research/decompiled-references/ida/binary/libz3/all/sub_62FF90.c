__int64 __fastcall sub_62FF90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // ecx
  char *v8; // rdi
  char *v9; // rdx
  unsigned int v10; // esi
  char *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rbp
  void *v15; // rcx
  unsigned int v16; // ecx
  int v17; // r12d
  int v18; // ebx
  unsigned int v19; // r14d
  int i; // r12d
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 *v24; // rbp
  __int64 *v25; // r15
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  __int64 *v30; // rbp
  int v31; // r12d
  int v32; // ebx
  __int64 v33; // rax
  __int64 *v34; // r13
  __int64 v35; // rdx
  unsigned int v37; // esi
  __int64 v38; // [rsp+0h] [rbp-48h]
  int v39[2]; // [rsp+8h] [rbp-40h]
  int v40; // [rsp+10h] [rbp-38h]
  int v41; // [rsp+18h] [rbp-30h]
  int v42; // [rsp+20h] [rbp-28h]
  int v43; // [rsp+28h] [rbp-20h]
  int v44; // [rsp+30h] [rbp-18h]
  void *v45; // [rsp+38h] [rbp-10h]

  *(_QWORD *)v39 = a1;
  if ( *(_DWORD *)(a1 + 1052) || *(_DWORD *)(a1 + 1056) )
  {
    v7 = 0;
    v8 = *(char **)(a1 + 1040);
    v9 = &v8[8 * *(unsigned int *)(*(_QWORD *)v39 + 1048LL)];
    v10 = *(_DWORD *)(*(_QWORD *)v39 + 1048LL);
    v11 = *(char **)(*(_QWORD *)v39 + 1040LL);
    if ( v8 == v9 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v11 )
      {
        *(_QWORD *)v11 = 0;
        v11 += 8;
        if ( v9 == v11 )
          goto LABEL_8;
      }
      v11 += 8;
      ++v7;
    }
    while ( v9 != v11 );
LABEL_8:
    if ( v10 <= 0x10 || 3 * v10 >= 4 * v7 )
      goto LABEL_14;
    if ( v8 )
    {
      sub_186B220(v8);
      v12 = *(_DWORD *)(*(_QWORD *)v39 + 1048LL);
      *(_QWORD *)(*(_QWORD *)v39 + 1040LL) = 0;
      HIDWORD(v38) = v12;
      v13 = v12 >> 1;
      *(_DWORD *)(*(_QWORD *)v39 + 1048LL) = v12 >> 1;
      v14 = v12 >> 1;
      v15 = (void *)sub_186B270(8 * v14);
      if ( !v13 )
      {
LABEL_13:
        *(_QWORD *)(*(_QWORD *)v39 + 1040LL) = v15;
LABEL_14:
        *(_QWORD *)(*(_QWORD *)v39 + 1052LL) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      v37 = v10 >> 1;
      v14 = v37;
      *(_DWORD *)(*(_QWORD *)v39 + 1048LL) = v37;
      *(_QWORD *)(*(_QWORD *)v39 + 1040LL) = 0;
      v15 = (void *)sub_186B270(8LL * v37);
    }
    v15 = memset(v15, 0, 8 * v14);
    goto LABEL_13;
  }
LABEL_15:
  v16 = *(_DWORD *)(a2 + 68);
  *(_BYTE *)(*(_QWORD *)v39 + 1096LL) = 1;
  if ( v16 < *(_DWORD *)(a2 + 56) )
  {
    v17 = v39[0] + 1040;
    v18 = v39[0] + 1064;
    do
    {
      HIDWORD(v38) = v16;
      sub_6350C0(
        v18,
        v17,
        *(_DWORD *)(a2 + 8LL * v16 + 80) & 0xFFFFFFF8,
        v16,
        a5,
        a6,
        v38,
        v39[0],
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v16 = HIDWORD(v38) + 1;
    }
    while ( (unsigned int)(HIDWORD(v38) + 1) < *(_DWORD *)(a2 + 56) );
    v16 = *(_DWORD *)(a2 + 68);
  }
  v19 = 0;
  for ( i = v39[0] + 1040; v19 < v16; ++v19 )
  {
    v21 = *(_QWORD *)(a2 + 8LL * v19 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = *(unsigned int *)(v21 + 24);
    v23 = (__int64 *)(v21 + 32);
    v22 *= 8;
    v24 = (__int64 *)((char *)v23 + v22);
    if ( v22 )
    {
      v25 = v23;
      v26 = v39[0] + 1064;
      do
      {
        v27 = *v25++;
        sub_6350C0(v26, i, v27, v16, a5, a6, v38, v39[0], v40, v41, v42, v43, v44, v45);
      }
      while ( v24 != v25 );
      v16 = *(_DWORD *)(a2 + 68);
    }
  }
  v28 = *(_QWORD *)(a2 + 40);
  v29 = v39[0];
  v30 = (__int64 *)(v28 + 32);
  v31 = v39[0] + 1040;
  v32 = v39[0] + 1064;
  v33 = *(unsigned int *)(v28 + 24);
  v34 = &v30[v33];
  if ( v33 * 8 )
  {
    do
    {
      v35 = *v30++;
      sub_6350C0(v32, v31, v35, v29, a5, a6, v38, v39[0], v40, v41, v42, v43, v44, v45);
    }
    while ( v34 != v30 );
  }
  return *(unsigned __int8 *)(*(_QWORD *)v39 + 1096LL);
}

