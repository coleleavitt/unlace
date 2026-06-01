unsigned __int64 __fastcall rangeset_t_swap(__int64 a1, __int64 **a2, __int64 a3)
{
  int v4; // eax
  __int64 *v6; // rax
  void *v7; // rdi
  __int64 *v8; // rdx
  __m128i v9; // xmm0
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // r9
  char *v19; // r13
  unsigned __int64 v20; // rdx
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi
  bool v27; // cf
  __int64 *v28; // r13
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // r9
  char *v33; // r12
  unsigned __int64 v34; // rdx
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r10
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r10
  _QWORD *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // [rsp+0h] [rbp-A0h]
  __int64 v52; // [rsp+0h] [rbp-A0h]
  __int64 v53; // [rsp+0h] [rbp-A0h]
  __int64 v54; // [rsp+0h] [rbp-A0h]
  __int64 v55; // [rsp+0h] [rbp-A0h]
  __int64 v56; // [rsp+0h] [rbp-A0h]
  __int64 v57; // [rsp+0h] [rbp-A0h]
  __int64 v58; // [rsp+0h] [rbp-A0h]
  __int64 v59; // [rsp+10h] [rbp-90h]
  __int64 v60; // [rsp+10h] [rbp-90h]
  __int64 v61; // [rsp+20h] [rbp-80h] BYREF
  int v62; // [rsp+28h] [rbp-78h]
  __int64 v63; // [rsp+2Ch] [rbp-74h] BYREF
  int v64; // [rsp+34h] [rbp-6Ch]
  void *ptr; // [rsp+38h] [rbp-68h] BYREF
  __int128 v66; // [rsp+40h] [rbp-60h]
  int v67; // [rsp+50h] [rbp-50h]
  char v68; // [rsp+54h] [rbp-4Ch]
  unsigned __int64 v69; // [rsp+60h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 32);
  v69 = __readfsqword(0x28u);
  v66 = 0;
  ptr = nullptr;
  v67 = v4;
  if ( v4 == -1 )
  {
    v68 = 0;
    v6 = *a2;
    v7 = nullptr;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = ptr;
    v6 = *a2;
    v68 = 0;
    goto LABEL_3;
  }
  v13 = *(__int64 **)a1;
  v14 = *(_QWORD *)(a1 + 8);
  v68 = 1;
  v15 = &v13[v14];
  if ( v13 >= v15 )
  {
    v6 = *a2;
    v28 = *a2;
    v29 = (unsigned __int64)&(*a2)[(_QWORD)a2[1]];
  }
  else
  {
    v16 = v66;
    do
    {
      v18 = *v13;
      v19 = (char *)ptr;
      LOBYTE(v62) = 1;
      v20 = v16 + 1;
      v61 = v18;
      if ( &v61 < ptr || &v61 >= (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v66 + 1)) )
      {
        if ( *((_QWORD *)&v66 + 1) < v20 )
        {
          v51 = *((_QWORD *)&v66 + 1);
          v22 = qvector_reserve(&ptr, 0, v20, 12);
          v19 = (char *)v22;
          v23 = *((_QWORD *)&v66 + 1);
          v24 = ptr;
          *((_QWORD *)&v66 + 1) = v51;
          v25 = v66 - 1;
          if ( (__int64)v66 - 1 >= 0 )
          {
            do
            {
              v26 = *v24;
              v22 += 12;
              v24 = (_QWORD *)((char *)v24 + 12);
              *(_QWORD *)(v22 - 12) = v26;
              *(_DWORD *)(v22 - 4) = *((_DWORD *)v24 - 1);
              v27 = v25-- == 0;
            }
            while ( !v27 );
            v24 = ptr;
          }
          v52 = v23;
          qfree(v24);
          v16 = v66;
          ptr = v19;
          *((_QWORD *)&v66 + 1) = v52;
        }
        v21 = &v19[12 * v16];
        *(_QWORD *)v21 = v61;
        *((_DWORD *)v21 + 2) = v62;
      }
      else
      {
        if ( *((_QWORD *)&v66 + 1) < v20 )
        {
          v59 = v18;
          v55 = *((_QWORD *)&v66 + 1);
          v41 = qvector_reserve(&ptr, 0, v20, 12);
          v19 = (char *)v41;
          v42 = *((_QWORD *)&v66 + 1);
          v43 = ptr;
          v44 = v66 - 1;
          *((_QWORD *)&v66 + 1) = v55;
          if ( (__int64)v66 - 1 >= 0 )
          {
            do
            {
              v45 = *v43;
              v41 += 12;
              v43 = (_QWORD *)((char *)v43 + 12);
              *(_QWORD *)(v41 - 12) = v45;
              *(_DWORD *)(v41 - 4) = *((_DWORD *)v43 - 1);
              v27 = v44-- == 0;
            }
            while ( !v27 );
            v43 = ptr;
          }
          v56 = v42;
          qfree(v43);
          v16 = v66;
          ptr = v19;
          v18 = v59;
          *((_QWORD *)&v66 + 1) = v56;
        }
        v17 = &v19[12 * v16];
        *(_QWORD *)v17 = v18;
        v17[8] = 1;
      }
      ++v13;
      v16 = v66 + 1;
      *(_QWORD *)&v66 = v66 + 1;
    }
    while ( v13 < v15 );
    v6 = *a2;
    v28 = *a2;
    v29 = (unsigned __int64)&(*a2)[(_QWORD)a2[1]];
    if ( !v68 )
      goto LABEL_44;
  }
  if ( (unsigned __int64)v6 >= v29 )
  {
LABEL_44:
    v7 = ptr;
    goto LABEL_3;
  }
  v30 = v66;
  do
  {
    v32 = *v28;
    v33 = (char *)ptr;
    LOBYTE(v64) = 0;
    v34 = v30 + 1;
    v63 = v32;
    if ( &v63 < ptr || &v63 >= (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v66 + 1)) )
    {
      if ( *((_QWORD *)&v66 + 1) < v34 )
      {
        v53 = *((_QWORD *)&v66 + 1);
        v36 = qvector_reserve(&ptr, 0, v34, 12);
        v33 = (char *)v36;
        v37 = *((_QWORD *)&v66 + 1);
        v38 = ptr;
        *((_QWORD *)&v66 + 1) = v53;
        v39 = v66 - 1;
        if ( (__int64)v66 - 1 >= 0 )
        {
          do
          {
            v40 = *v38;
            v36 += 12;
            v38 = (_QWORD *)((char *)v38 + 12);
            *(_QWORD *)(v36 - 12) = v40;
            *(_DWORD *)(v36 - 4) = *((_DWORD *)v38 - 1);
            v27 = v39-- == 0;
          }
          while ( !v27 );
          v38 = ptr;
        }
        v54 = v37;
        qfree(v38);
        v30 = v66;
        ptr = v33;
        *((_QWORD *)&v66 + 1) = v54;
      }
      v35 = &v33[12 * v30];
      *(_QWORD *)v35 = v63;
      *((_DWORD *)v35 + 2) = v64;
    }
    else
    {
      if ( *((_QWORD *)&v66 + 1) < v34 )
      {
        v60 = v32;
        v57 = *((_QWORD *)&v66 + 1);
        v46 = qvector_reserve(&ptr, 0, v34, 12);
        v33 = (char *)v46;
        v47 = *((_QWORD *)&v66 + 1);
        v48 = ptr;
        v49 = v66 - 1;
        *((_QWORD *)&v66 + 1) = v57;
        if ( (__int64)v66 - 1 >= 0 )
        {
          do
          {
            v50 = *v48;
            v46 += 12;
            v48 = (_QWORD *)((char *)v48 + 12);
            *(_QWORD *)(v46 - 12) = v50;
            *(_DWORD *)(v46 - 4) = *((_DWORD *)v48 - 1);
            v27 = v49-- == 0;
          }
          while ( !v27 );
          v48 = ptr;
        }
        v58 = v47;
        qfree(v48);
        v30 = v66;
        ptr = v33;
        v32 = v60;
        *((_QWORD *)&v66 + 1) = v58;
      }
      v31 = &v33[12 * v30];
      *(_QWORD *)v31 = v32;
      v31[8] = 0;
    }
    ++v28;
    v30 = v66 + 1;
    *(_QWORD *)&v66 = v66 + 1;
  }
  while ( (unsigned __int64)v28 < v29 );
  v7 = ptr;
  v6 = *a2;
LABEL_3:
  v8 = *(__int64 **)a1;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *a2 = v8;
  v10 = a2[3];
  *(__m128i *)(a2 + 1) = v9;
  v11 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v10;
  a2[3] = v11;
  if ( v7 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v7);
  }
  return v69 - __readfsqword(0x28u);
}

