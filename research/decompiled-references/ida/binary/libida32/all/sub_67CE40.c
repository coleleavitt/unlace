__int64 __fastcall sub_67CE40(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  char v6; // dl
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int8 *v11; // rax
  unsigned __int8 v12; // dl
  char v13; // al
  unsigned int v14; // ebp
  char *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbx
  char *v18; // rdx
  void *v19; // rax
  int v21; // eax
  char *v22; // rdi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r8
  char *v25; // r14
  __int64 v26; // rax
  char *v27; // rsi
  unsigned __int64 v28; // r14
  char *v29; // rsi
  void *v30; // rcx
  char *v31; // r15
  char *v32; // rdi
  __int64 v33; // r14
  __int64 v34; // r15
  char *v35; // rdx
  void *v36; // rax
  __int64 v37; // rax
  char *v38; // rsi
  char *v39; // rdi
  __int64 v40; // r15
  __int64 v41; // r14
  char *v42; // rcx
  void *v43; // rdx
  char *v44; // rax
  char *v45; // rax
  __int64 v46; // [rsp-8h] [rbp-F8h]
  int v47; // [rsp+8h] [rbp-E8h]
  int v48; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v49; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+8h] [rbp-E8h]
  int v51; // [rsp+10h] [rbp-E0h]
  unsigned __int64 v52; // [rsp+10h] [rbp-E0h]
  __int64 v53; // [rsp+18h] [rbp-D8h] BYREF
  __int128 v54; // [rsp+20h] [rbp-D0h]
  __int128 v55; // [rsp+30h] [rbp-C0h]
  int v56; // [rsp+40h] [rbp-B0h]
  void *v57; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+50h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-90h] BYREF
  __int128 v60; // [rsp+68h] [rbp-88h]
  __int64 v61; // [rsp+78h] [rbp-78h]
  void *v62; // [rsp+80h] [rbp-70h]
  __int128 v63; // [rsp+88h] [rbp-68h]
  int v64; // [rsp+98h] [rbp-58h]
  __int16 v65; // [rsp+A0h] [rbp-50h]
  char v66; // [rsp+A2h] [rbp-4Eh]
  unsigned __int64 v67; // [rsp+B0h] [rbp-40h]

  v6 = 0;
  v67 = __readfsqword(0x28u);
  v65 = 96;
  v9 = *(unsigned __int8 **)a4;
  v57 = nullptr;
  v66 = 0;
  LOBYTE(ptr) = 0;
  v58 = 0;
  if ( (unsigned __int64)v9 < *(_QWORD *)(a4 + 8) )
    v6 = *v9++;
  *(_QWORD *)a4 = v9;
  sub_67B300(a1, (unsigned __int64 *)&v57, v6, a3, a4);
  v10 = *(_QWORD *)(a4 + 8);
  v11 = *(unsigned __int8 **)a4;
  if ( *(_QWORD *)a4 >= v10 )
    goto LABEL_19;
  v12 = *v11;
  *(_QWORD *)a4 = v11 + 1;
  switch ( v12 )
  {
    case 1u:
      if ( HIBYTE(v65) == 1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v60 = 0;
          qfree(ptr);
          ptr = nullptr;
          *((_QWORD *)&v60 + 1) = 0;
        }
        v61 = -1;
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v62);
          v62 = nullptr;
          *((_QWORD *)&v63 + 1) = 0;
        }
        v64 = -1;
      }
      else
      {
        if ( HIBYTE(v65) == 2 )
        {
          v39 = (char *)ptr;
          if ( ptr )
          {
            v40 = v60;
            v41 = 0;
            if ( (_QWORD)v60 )
            {
              do
              {
                v42 = &v39[40 * v41];
                v43 = *(void **)v42;
                if ( *(_QWORD *)v42 )
                {
                  *((_QWORD *)v42 + 1) = 0;
                  qfree(v43);
                  v39 = (char *)ptr;
                }
                ++v41;
              }
              while ( v40 != v41 );
            }
            *(_QWORD *)&v60 = 0;
            qfree(v39);
          }
        }
        ptr = nullptr;
        v61 = -1;
        v62 = nullptr;
        HIBYTE(v65) = 1;
        v60 = 0;
        v63 = 0;
      }
      sub_67B640(a1, (__int64)&ptr, a3, (unsigned __int8 **)a4);
      goto LABEL_19;
    case 2u:
      if ( HIBYTE(v65) == 2 )
      {
        v32 = (char *)ptr;
        if ( ptr )
        {
          v33 = v60;
          if ( (_QWORD)v60 )
          {
            v34 = 0;
            do
            {
              v35 = &v32[40 * v34];
              v36 = *(void **)v35;
              if ( *(_QWORD *)v35 )
              {
                *((_QWORD *)v35 + 1) = 0;
                qfree(v36);
                v32 = (char *)ptr;
              }
              ++v34;
            }
            while ( v33 != v34 );
          }
          *(_QWORD *)&v60 = 0;
          qfree(v32);
          ptr = nullptr;
          v10 = *(_QWORD *)(a4 + 8);
          *((_QWORD *)&v60 + 1) = 0;
        }
      }
      else
      {
        if ( HIBYTE(v65) == 1 )
        {
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree(v62);
          }
          if ( ptr )
          {
            *(_QWORD *)&v60 = 0;
            qfree(ptr);
          }
          v10 = *(_QWORD *)(a4 + 8);
        }
        ptr = nullptr;
        HIBYTE(v65) = 2;
        v60 = 0;
      }
      v21 = unpack_dw(a4, v10);
      v22 = (char *)ptr;
      v23 = v60;
      v24 = (unsigned __int16)v21;
      v25 = (char *)ptr;
      if ( (unsigned __int16)v21 != (_QWORD)v60 )
      {
        v53 = 0;
        v54 = 0;
        v55 = -1;
        if ( (unsigned __int16)v21 >= (unsigned __int64)v60 )
        {
          if ( &v53 < ptr || &v53 >= (__int64 *)((char *)ptr + 40 * *((_QWORD *)&v60 + 1)) )
          {
            if ( *((_QWORD *)&v60 + 1) >= (unsigned __int64)(unsigned __int16)v21
              || (v49 = (unsigned __int16)v21,
                  v44 = (char *)qvector_reserve(&ptr, ptr, (unsigned __int16)v21, 40),
                  v23 = v60,
                  v24 = v49,
                  ptr = v44,
                  v25 = v44,
                  (unsigned __int64)v60 < v49) )
            {
              v37 = 40 * v23;
              do
              {
                v38 = &v25[v37];
                ++v23;
                v37 += 40;
                *(_QWORD *)v38 = 0;
                *(_OWORD *)(v38 + 8) = 0;
                *(_OWORD *)(v38 + 24) = -1;
                v25 = (char *)ptr;
              }
              while ( v24 != v23 );
            }
          }
          else if ( *((_QWORD *)&v60 + 1) >= (unsigned __int64)(unsigned __int16)v21
                 || (v50 = (unsigned __int16)v21,
                     v45 = (char *)qvector_reserve(&ptr, ptr, (unsigned __int16)v21, 40),
                     v23 = v60,
                     v24 = v50,
                     ptr = v45,
                     v25 = v45,
                     (unsigned __int64)v60 < v50) )
          {
            v26 = 40 * v23;
            do
            {
              v27 = &v25[v26];
              ++v23;
              v26 += 40;
              *(_QWORD *)v27 = 0;
              *(_OWORD *)(v27 + 8) = 0;
              *(_OWORD *)(v27 + 24) = -1;
              v25 = (char *)ptr;
            }
            while ( v24 != v23 );
          }
          *(_QWORD *)&v60 = v24;
LABEL_47:
          v31 = &v25[40 * v24];
          do
          {
            sub_67B6B0(a1, (__int64)v25, a3, (unsigned __int8 **)a4);
            v25 += 40;
          }
          while ( v25 != v31 );
          if ( !a2 )
          {
LABEL_21:
            v13 = HIBYTE(v65);
            v14 = 1;
            if ( HIBYTE(v65) == 2 )
              goto LABEL_8;
            goto LABEL_22;
          }
LABEL_20:
          sub_67CC70(a2, &v57);
          goto LABEL_21;
        }
        v28 = (unsigned __int16)v21;
        do
        {
          v29 = &v22[40 * v28];
          v30 = *(void **)v29;
          if ( *(_QWORD *)v29 )
          {
            *((_QWORD *)v29 + 1) = 0;
            v52 = v24;
            v48 = v21;
            qfree(v30);
            v22 = (char *)ptr;
            v24 = v52;
            v21 = v48;
          }
          ++v28;
        }
        while ( v28 < v23 );
        *(_QWORD *)&v60 = v24;
        v25 = v22;
      }
      if ( (_WORD)v21 )
        goto LABEL_47;
LABEL_19:
      if ( !a2 )
        goto LABEL_21;
      goto LABEL_20;
    case 0u:
      goto LABEL_19;
  }
  sub_82BC50(
    "bad try block type\n",
    v46,
    (int)&v57,
    v47,
    v51,
    v53,
    v54,
    SDWORD2(v54),
    v55,
    SDWORD2(v55),
    v56,
    (__int64)v57);
  v13 = HIBYTE(v65);
  v14 = 0;
  if ( HIBYTE(v65) == 2 )
  {
LABEL_8:
    v15 = (char *)ptr;
    if ( !ptr )
      goto LABEL_23;
    v16 = v60;
    if ( (_QWORD)v60 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[40 * v17];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = (char *)ptr;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    goto LABEL_29;
  }
LABEL_22:
  if ( v13 == 1 )
  {
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    v15 = (char *)ptr;
    if ( ptr )
    {
LABEL_29:
      *(_QWORD *)&v60 = 0;
      qfree(v15);
    }
  }
LABEL_23:
  HIBYTE(v65) = 0;
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return v14;
}

