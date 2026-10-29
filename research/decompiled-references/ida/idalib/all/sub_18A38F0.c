__int64 __fastcall sub_18A38F0(__int64 a1, _QWORD *a2, unsigned __int64 *a3, unsigned __int64 a4, char a5, __int64 a6)
{
  unsigned __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 *v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 **v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r8d
  unsigned int v19; // eax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r13
  _QWORD *v22; // rdx
  __int64 *v23; // rax
  __int64 *v24; // r13
  __int64 v25; // rbx
  unsigned __int64 *v27; // rax
  int v28; // edx
  __int64 v29; // [rsp+0h] [rbp-98h]
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  __m128 v33; // [rsp+20h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  _QWORD v36[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a3;
  v7 = *(_QWORD *)a6;
  v35 = 0x400000001LL;
  v29 = (__int64)a2;
  v8 = (__int64 *)(v7 + 8LL * *(unsigned int *)(a6 + 8));
  v31 = a4;
  ptr = v36;
  v36[0] = a3;
  if ( v8 == (__int64 *)v7 )
    goto LABEL_17;
  v9 = (__int64 *)v7;
  do
  {
    while ( 1 )
    {
      v12 = *v9;
      if ( v6 == (unsigned __int64 *)*v9 )
        goto LABEL_6;
      if ( (*(_BYTE *)(v12 + 29) & 1) == 0 )
        goto LABEL_3;
      v13 = sub_B8C3D0(*v9, (__int64)a2, (__int64)a3, a4, v7, a6);
      a3 = (unsigned __int64 *)*v13;
      a4 = *v13 + 8LL * *((unsigned int *)v13 + 2);
      if ( *v13 < a4 )
        break;
      if ( a3 == (unsigned __int64 *)a4 )
        goto LABEL_3;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 386 )
      {
        v27 = (unsigned __int64 *)(a4 + 8);
        while ( a3 != v27 )
        {
          a4 = *v27++;
          if ( *(_WORD *)(a4 + 36) == 386 )
            goto LABEL_6;
        }
LABEL_3:
        v10 = (unsigned int)v35;
        a4 = HIDWORD(v35);
        v11 = (unsigned int)v35 + 1LL;
        if ( v11 > HIDWORD(v35) )
        {
          a2 = v36;
          sub_2237220(&ptr, v36, v11, 8);
          v10 = (unsigned int)v35;
        }
        a3 = (unsigned __int64 *)ptr;
        *((_QWORD *)ptr + v10) = v12;
        LODWORD(v35) = v35 + 1;
      }
LABEL_6:
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
    v14 = (unsigned __int64 **)*v13;
    while ( 1 )
    {
      a3 = *v14;
      if ( *((_WORD *)*v14 + 18) == 386 )
        break;
      if ( (unsigned __int64 **)a4 == ++v14 )
        goto LABEL_3;
    }
    if ( (unsigned __int64 **)a4 == v14 )
      goto LABEL_3;
    ++v9;
  }
  while ( v8 != v9 );
LABEL_15:
  if ( (unsigned int)v35 > 1 )
    sub_18A3390((__int64 *)a1, (__int64 **)&ptr, v29, v31, a5);
LABEL_17:
  v15 = *(unsigned int *)(a1 + 80);
  v16 = *(_QWORD *)(a1 + 64);
  if ( (_DWORD)v15 )
  {
    v30 = *(_QWORD *)(a1 + 64);
    v17 = sub_FDE780(v29);
    v18 = v15 - 1;
    v19 = (v15 - 1) & v17;
    v15 = *(unsigned int *)(a1 + 80);
    v20 = (_QWORD *)(v30 + 40LL * v19);
    if ( v29 == *v20 )
      goto LABEL_19;
    if ( *v20 == -1 )
    {
LABEL_34:
      v16 = *(_QWORD *)(a1 + 64);
      goto LABEL_35;
    }
    v28 = 1;
    while ( 1 )
    {
      v19 = v18 & (v28 + v19);
      v20 = (_QWORD *)(v30 + 40LL * v19);
      if ( v29 == *v20 )
        break;
      ++v28;
      if ( *v20 == -1 )
        goto LABEL_34;
    }
LABEL_19:
    sub_171EC50(&v33, v20, (_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v15), a1 + 64, 1);
    v21 = v33.m128_u64[0];
  }
  else
  {
LABEL_35:
    sub_171EC50(&v33, (_QWORD *)(v16 + 40 * v15), (_QWORD *)(v16 + 40 * v15), a1 + 64, 1);
    v21 = v33.m128_u64[0];
  }
  v22 = (_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(unsigned int *)(a1 + 80));
  sub_171EC50(&v33, v22, v22, a1 + 64, 1);
  if ( v33.m128_u64[0] == v21 )
  {
    LODWORD(v25) = 1;
  }
  else
  {
    v23 = (__int64 *)(v21 + 8);
    v24 = (__int64 *)(v21 + 24);
    if ( (*((_BYTE *)v6 + 58) & 2) != 0 )
      v24 = v23;
    v25 = (*v24 >> 2) & 1;
  }
  if ( ptr != v36 )
    free(ptr);
  return (unsigned int)v25;
}
