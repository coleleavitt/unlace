char __fastcall sub_81EDB0(
        unsigned __int64 *a1,
        unsigned int a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  char v16; // bp
  unsigned int *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // r15
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 *v26; // rdi
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  __int64 v29; // r14
  char *v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // r13d
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rdx
  int v44; // [rsp+8h] [rbp-40h]

  v16 = a2;
  if ( *((_DWORD *)a1 + 26) )
  {
    do
      (*(void (__fastcall **)(unsigned __int64 *))(*a1 + 512))(a1);
    while ( (*((_DWORD *)a1 + 26))-- != 1 );
  }
  v19 = (unsigned int *)sub_7E4F60((__int64)a1, a2 >> 1);
  if ( !v19 )
    BUG();
  v20 = sub_7E4F00((__int64)a1, v19);
  v21 = *(_QWORD *)v20;
  v22 = (_QWORD *)v20;
  if ( !*(_WORD *)(*(_QWORD *)v20 + 4LL) )
  {
    if ( (v44 = (_DWORD)a1 + 112, v23 = sub_15F0200(a1 + 14), v26 = a1 + 14, !*(_WORD *)(v21 + 4))
      && (v27 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL)) != nullptr
      && v23 == *v27
      && v27[1] == 1
      || (LODWORD(v20) = sub_15F0200(v26), LODWORD(v26) = v44, !*(_WORD *)(v21 + 4))
      && (v28 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL)) != nullptr
      && (_DWORD)v20 == *v28
      && v28[1] == 2 )
    {
      v29 = v22[22];
      v30 = (char *)(v29 + 88);
      if ( *(int *)(v29 + 88) >> 8 == -1 )
      {
LABEL_35:
        v31 = -1;
      }
      else
      {
        while ( *((_DWORD *)a1 + 3) != *v30 )
        {
          v30 = *((char **)v30 + 1);
          if ( !v30 )
            goto LABEL_35;
        }
        v31 = *(int *)v30 >> 8;
      }
      v32 = a1[42];
      do
      {
        v33 = v31;
        v34 = v31;
        v31 = *(_DWORD *)(v32 + 4LL * v31);
      }
      while ( v34 != v31 );
      LODWORD(v35) = 0;
      v36 = *(_QWORD *)(a1[39] + 8 * v33);
      if ( !*(_WORD *)(*v22 + 4LL) )
        v35 = *(_QWORD *)(*v22 + 16LL);
      v37 = sub_15F0BB0((_DWORD)v26, v35, v33, v32, v24, v25);
      v41 = *(_QWORD *)(v36 + 8);
      v42 = v37;
      if ( (v16 & 1) != 0 )
      {
        if ( v41 )
        {
          v20 = 0;
          if ( !*(_WORD *)(*(_QWORD *)v41 + 4LL) )
            v20 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
          if ( v42 == v20 )
            LOBYTE(v20) = sub_81C420(a1, v41, (__int64)v22);
        }
        else
        {
          LOBYTE(v20) = sub_81E6B0((__int64)a1, v34, v22, a3, v38, v39, v40, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        }
      }
      else
      {
        if ( !v41 )
          goto LABEL_29;
        v20 = 0;
        if ( !*(_WORD *)(*(_QWORD *)v41 + 4LL) )
          v20 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
        if ( v42 != v20 )
LABEL_29:
          LOBYTE(v20) = sub_81D0D0((__int64)a1, (__int64 *)v29, v42);
      }
    }
  }
  return v20;
}

