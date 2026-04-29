unsigned __int64 __fastcall sub_6200(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  char *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  char *v7; // r12
  __int64 v8; // r15
  void *v9; // rax
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdi
  char v15; // al
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+18h] [rbp-288h]
  __int128 v24; // [rsp+30h] [rbp-270h] BYREF
  __int64 v25; // [rsp+40h] [rbp-260h]
  __int128 v26; // [rsp+48h] [rbp-258h]
  __int64 v27; // [rsp+58h] [rbp-248h]
  _QWORD *v28; // [rsp+60h] [rbp-240h]
  __int128 v29; // [rsp+68h] [rbp-238h]
  __int128 v30; // [rsp+80h] [rbp-220h] BYREF
  __int64 v31; // [rsp+90h] [rbp-210h]
  __int128 v32; // [rsp+98h] [rbp-208h]
  __int64 v33; // [rsp+A8h] [rbp-1F8h]
  __int128 v34; // [rsp+B0h] [rbp-1F0h]
  _BYTE *v35; // [rsp+C0h] [rbp-1E0h]
  __int128 v36; // [rsp+C8h] [rbp-1D8h]
  __int128 v37; // [rsp+E0h] [rbp-1C0h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-1B0h]
  __int128 v39; // [rsp+F8h] [rbp-1A8h]
  __int64 v40; // [rsp+108h] [rbp-198h]
  __int64 v41; // [rsp+110h] [rbp-190h]
  int v42; // [rsp+118h] [rbp-188h]
  __int128 v43; // [rsp+120h] [rbp-180h]
  __int64 v44; // [rsp+130h] [rbp-170h]
  __int128 v45; // [rsp+138h] [rbp-168h]
  __int64 v46; // [rsp+148h] [rbp-158h]
  __int64 v47; // [rsp+150h] [rbp-150h]
  int v48; // [rsp+158h] [rbp-148h]
  int v49; // [rsp+160h] [rbp-140h]
  __int64 v50; // [rsp+168h] [rbp-138h]
  void *v51; // [rsp+170h] [rbp-130h] BYREF
  __int128 v52; // [rsp+178h] [rbp-128h]
  __int64 v53; // [rsp+188h] [rbp-118h]
  int v54; // [rsp+190h] [rbp-110h]
  __int64 v55; // [rsp+198h] [rbp-108h]
  _BYTE v56[192]; // [rsp+1A0h] [rbp-100h] BYREF
  char v57; // [rsp+260h] [rbp-40h] BYREF
  unsigned __int64 v58; // [rsp+268h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  if ( !a2 )
    return v58 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 40);
  v51 = 0;
  v52 = 0;
  v3 = *(_QWORD *)(v2 + 128);
  v23 = v2;
  if ( v3 )
  {
    *((_QWORD *)&v52 + 1) = *(_QWORD *)(v2 + 128);
    v51 = (void *)qalloc_or_throw();
    memcpy(v51, *(const void **)(v23 + 120), 16 * v3);
    *(_QWORD *)&v52 = v3;
  }
  v4 = &v57;
  v5 = 7;
  v53 = 0;
  v54 = -1;
  v6 = v23 + 168;
  v55 = *(_QWORD *)(v23 + 160);
  v7 = v56;
  do
  {
    *(_QWORD *)v7 = 0;
    *(_OWORD *)(v7 + 8) = 0;
    v8 = *(_QWORD *)(v6 + 8);
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw();
      *(_QWORD *)v7 = v9;
      *((_QWORD *)v7 + 2) = v8;
      memcpy(v9, *(const void **)v6, 8 * v8);
      *((_QWORD *)v7 + 1) = v8;
    }
    v7 += 24;
    --v5;
    v6 += 24;
  }
  while ( &v57 != v7 );
  v25 = 0;
  v28 = 0;
  v10 = *(_BYTE *)(v23 + 360);
  v11 = *(_DWORD *)(a1 + 56);
  v24 = 0;
  v26 = 0;
  v57 = v10;
  v12 = *(_QWORD *)(a1 + 40);
  v29 = 0;
  v27 = v12;
  if ( !v11 )
    goto LABEL_9;
  v15 = sub_87B0((unsigned int)&v24, (unsigned int)&v51, *(_QWORD *)(a1 + 64), v11, 0, -1);
  v18 = v28;
  if ( v15 && (_QWORD)v29 )
  {
    v19 = *(_QWORD *)(a1 + 40);
    v38 = 0;
    v40 = v19;
    v46 = v19;
    v41 = -1;
    v42 = 0;
    v44 = 0;
    v47 = -1;
    v48 = -1;
    v49 = 0;
    v50 = -1;
    v37 = 0;
    v39 = 0;
    v43 = 0;
    v45 = 0;
    if ( (unsigned __int8)sub_81A0((unsigned int)&v37, (unsigned int)&v51, *v28, 0, v16, v17) )
    {
      v20 = *(_QWORD *)(a1 + 40);
      v31 = 0;
      v33 = v20;
      v35 = 0;
      v30 = 0;
      v32 = 0;
      v34 = -1;
      v36 = 0;
      v35 = (_BYTE *)qvector_reserve();
      *(_QWORD *)&v36 = 1;
      *v35 = 0;
      if ( (unsigned __int8)sub_7690(&v30, &v51, v41, 0) )
      {
        a2[1] = 0;
        sub_5A80(*(_QWORD *)(a1 + 40), a2, (__int64)&v51, 0, v29, (__int64)&v24, 0);
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree();
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree();
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree();
        }
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree();
        }
        do
        {
          v21 = *((_QWORD *)v4 - 3);
          v4 -= 24;
          if ( v21 )
          {
            *((_QWORD *)v4 + 1) = 0;
            qfree();
          }
        }
        while ( v4 != v56 );
        if ( v51 )
          goto LABEL_15;
        return v58 - __readfsqword(0x28u);
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree();
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
    v18 = v28;
  }
  if ( !v18 )
  {
LABEL_9:
    if ( !v25 )
      goto LABEL_11;
    goto LABEL_10;
  }
  *(_QWORD *)&v29 = 0;
  qfree();
  if ( v25 )
  {
LABEL_10:
    *(_QWORD *)&v26 = 0;
    qfree();
    goto LABEL_11;
  }
  do
  {
LABEL_11:
    v13 = *((_QWORD *)v4 - 3);
    v4 -= 24;
    if ( v13 )
    {
      *((_QWORD *)v4 + 1) = 0;
      qfree();
    }
  }
  while ( v4 != v56 );
  if ( v51 )
  {
LABEL_15:
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return v58 - __readfsqword(0x28u);
}
