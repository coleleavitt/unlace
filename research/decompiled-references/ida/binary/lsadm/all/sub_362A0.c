unsigned __int64 __fastcall sub_362A0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx
  char *v14; // rax
  void *v15; // rdi
  __int64 v16; // r14
  _QWORD *v17; // rbx
  char *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 i; // rbp
  char *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // r12
  __int64 j; // rbp
  char *v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  char *v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rbp
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  char *v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  char *v45; // rax
  void *v46; // rdi
  unsigned __int64 v48; // [rsp+0h] [rbp-2A8h]
  unsigned __int64 v50; // [rsp+10h] [rbp-298h]
  int v51; // [rsp+100h] [rbp-1A8h] BYREF
  __int16 v52; // [rsp+104h] [rbp-1A4h]
  __int64 v53; // [rsp+108h] [rbp-1A0h]
  __int64 v54; // [rsp+110h] [rbp-198h]
  __int64 v55; // [rsp+118h] [rbp-190h]
  void *v56; // [rsp+120h] [rbp-188h]
  __int128 v57; // [rsp+128h] [rbp-180h]
  void *v58; // [rsp+138h] [rbp-170h]
  __int128 v59; // [rsp+140h] [rbp-168h]
  void *v60; // [rsp+150h] [rbp-158h]
  __int128 v61; // [rsp+158h] [rbp-150h]
  __int128 v62; // [rsp+168h] [rbp-140h]
  __int64 v63; // [rsp+178h] [rbp-130h]
  void *v64; // [rsp+180h] [rbp-128h]
  __int128 v65; // [rsp+188h] [rbp-120h]
  void *v66; // [rsp+198h] [rbp-110h]
  __int128 v67; // [rsp+1A0h] [rbp-108h]
  _BYTE v68[32]; // [rsp+1B0h] [rbp-F8h] BYREF
  void *v69; // [rsp+1D0h] [rbp-D8h]
  __int64 v70; // [rsp+1D8h] [rbp-D0h]
  void *v71; // [rsp+1E8h] [rbp-C0h]
  __int64 v72; // [rsp+1F0h] [rbp-B8h]
  void *v73; // [rsp+200h] [rbp-A8h]
  __int64 v74; // [rsp+208h] [rbp-A0h]
  void *v75; // [rsp+230h] [rbp-78h]
  __int64 v76; // [rsp+238h] [rbp-70h]
  void *ptr; // [rsp+248h] [rbp-60h]
  __int64 v78; // [rsp+250h] [rbp-58h]
  unsigned __int64 v79; // [rsp+268h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v2 = a1[1];
  v50 = v2;
  if ( v2 != a2 )
  {
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = nullptr;
    v58 = nullptr;
    v60 = nullptr;
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = nullptr;
    v66 = nullptr;
    v65 = 0;
    v67 = 0;
    if ( a2 < v2 )
    {
      v48 = a2;
      v16 = 176 * a2;
      do
      {
        v17 = (_QWORD *)(v16 + *a1);
        v18 = (char *)v17[19];
        if ( v18 )
        {
          v19 = v17[20];
          if ( v19 )
          {
            v20 = 0;
            for ( i = 0; i != v19; ++i )
            {
              v22 = &v18[v20];
              v23 = *(void **)&v18[v20 + 48];
              if ( v23 )
              {
                *((_QWORD *)v22 + 7) = 0;
                j__free(v23);
              }
              v24 = *((void **)v22 + 3);
              if ( v24 )
              {
                *((_QWORD *)v22 + 4) = 0;
                j__free(v24);
              }
              v25 = *(void **)v22;
              if ( *(_QWORD *)v22 )
              {
                *((_QWORD *)v22 + 1) = 0;
                j__free(v25);
              }
              v18 = (char *)v17[19];
              v20 += 88;
            }
          }
          v17[20] = 0;
          j__free(v18);
        }
        v26 = (void *)v17[16];
        if ( v26 )
        {
          v17[17] = 0;
          j__free(v26);
        }
        v27 = (char *)v17[10];
        if ( v27 )
        {
          v28 = v17[11];
          if ( v28 )
          {
            for ( j = 0; j != v28; ++j )
            {
              v30 = &v27[24 * j];
              v31 = *(void **)v30;
              if ( *(_QWORD *)v30 )
              {
                *((_QWORD *)v30 + 1) = 0;
                j__free(v31);
                v27 = (char *)v17[10];
              }
            }
          }
          v17[11] = 0;
          j__free(v27);
        }
        v32 = (void *)v17[7];
        if ( v32 )
        {
          v17[8] = 0;
          j__free(v32);
        }
        v33 = (void *)v17[4];
        if ( v33 )
        {
          v17[5] = 0;
          j__free(v33);
        }
        ++v48;
        v16 += 176;
      }
      while ( v50 != v48 );
      a1[1] = a2;
    }
    else if ( (unsigned __int64)&v51 < *a1 || (unsigned __int64)&v51 >= 176LL * a1[2] + *a1 )
    {
      sub_35FF0((__int64)a1, a2, (__int64)&v51);
    }
    else
    {
      sub_358B0((__int64)v68, (__int64)&v51);
      sub_35FF0((__int64)a1, a2, (__int64)v68);
      v3 = (char *)ptr;
      if ( ptr )
      {
        v4 = v78;
        if ( v78 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            v7 = &v3[v5];
            v8 = *(void **)&v3[v5 + 48];
            if ( v8 )
            {
              *((_QWORD *)v7 + 7) = 0;
              j__free(v8);
            }
            v9 = *((void **)v7 + 3);
            if ( v9 )
            {
              *((_QWORD *)v7 + 4) = 0;
              j__free(v9);
            }
            v10 = *(void **)v7;
            if ( *(_QWORD *)v7 )
            {
              *((_QWORD *)v7 + 1) = 0;
              j__free(v10);
            }
            ++v6;
            v3 = (char *)ptr;
            v5 += 88;
          }
          while ( v4 != v6 );
        }
        v78 = 0;
        j__free(v3);
      }
      if ( v75 )
      {
        v76 = 0;
        j__free(v75);
      }
      v11 = (char *)v73;
      if ( v73 )
      {
        v12 = v74;
        if ( v74 )
        {
          v13 = 0;
          do
          {
            v14 = &v11[24 * v13];
            v15 = *(void **)v14;
            if ( *(_QWORD *)v14 )
            {
              *((_QWORD *)v14 + 1) = 0;
              j__free(v15);
              v11 = (char *)v73;
            }
            ++v13;
          }
          while ( v12 != v13 );
        }
        v74 = 0;
        j__free(v11);
      }
      if ( v71 )
      {
        v72 = 0;
        j__free(v71);
      }
      if ( v69 )
      {
        v70 = 0;
        j__free(v69);
      }
    }
    v34 = (char *)v66;
    if ( v66 )
    {
      v35 = v67;
      if ( (_QWORD)v67 )
      {
        v36 = 0;
        v37 = 0;
        do
        {
          v38 = &v34[v36];
          v39 = *(void **)&v34[v36 + 48];
          if ( v39 )
          {
            *((_QWORD *)v38 + 7) = 0;
            j__free(v39);
          }
          v40 = *((void **)v38 + 3);
          if ( v40 )
          {
            *((_QWORD *)v38 + 4) = 0;
            j__free(v40);
          }
          v41 = *(void **)v38;
          if ( *(_QWORD *)v38 )
          {
            *((_QWORD *)v38 + 1) = 0;
            j__free(v41);
          }
          ++v37;
          v34 = (char *)v66;
          v36 += 88;
        }
        while ( v35 != v37 );
      }
      *(_QWORD *)&v67 = 0;
      j__free(v34);
    }
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      j__free(v64);
    }
    v42 = (char *)v60;
    if ( v60 )
    {
      v43 = v61;
      if ( (_QWORD)v61 )
      {
        v44 = 0;
        do
        {
          v45 = &v42[24 * v44];
          v46 = *(void **)v45;
          if ( *(_QWORD *)v45 )
          {
            *((_QWORD *)v45 + 1) = 0;
            j__free(v46);
            v42 = (char *)v60;
          }
          ++v44;
        }
        while ( v43 != v44 );
      }
      *(_QWORD *)&v61 = 0;
      j__free(v42);
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      j__free(v58);
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      j__free(v56);
    }
  }
  return v79 - __readfsqword(0x28u);
}

