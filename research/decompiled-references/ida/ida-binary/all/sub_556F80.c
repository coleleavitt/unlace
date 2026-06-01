unsigned __int64 __fastcall sub_556F80(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 i; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v26; // [rsp+0h] [rbp-1A8h]
  int v27; // [rsp+30h] [rbp-178h] BYREF
  __int16 v28; // [rsp+34h] [rbp-174h]
  __int64 v29; // [rsp+38h] [rbp-170h]
  __int64 v30; // [rsp+40h] [rbp-168h]
  __int64 v31; // [rsp+48h] [rbp-160h]
  __int64 v32; // [rsp+50h] [rbp-158h]
  __int128 v33; // [rsp+58h] [rbp-150h]
  __int64 v34; // [rsp+68h] [rbp-140h]
  __int128 v35; // [rsp+70h] [rbp-138h]
  __int64 v36; // [rsp+80h] [rbp-128h]
  __int128 v37; // [rsp+88h] [rbp-120h]
  __int128 v38; // [rsp+98h] [rbp-110h]
  __int64 v39; // [rsp+A8h] [rbp-100h]
  __int64 v40; // [rsp+B0h] [rbp-F8h]
  __int128 v41; // [rsp+B8h] [rbp-F0h]
  int v42; // [rsp+D0h] [rbp-D8h] BYREF
  __int16 v43; // [rsp+D4h] [rbp-D4h]
  __int64 v44; // [rsp+D8h] [rbp-D0h]
  __int64 v45; // [rsp+E0h] [rbp-C8h]
  __int64 v46; // [rsp+E8h] [rbp-C0h]
  __int64 v47; // [rsp+F0h] [rbp-B8h]
  __int128 v48; // [rsp+F8h] [rbp-B0h]
  __int64 v49; // [rsp+108h] [rbp-A0h]
  __int128 v50; // [rsp+110h] [rbp-98h]
  __int64 v51; // [rsp+120h] [rbp-88h]
  __int128 v52; // [rsp+128h] [rbp-80h]
  __int128 v53; // [rsp+138h] [rbp-70h]
  __int64 v54; // [rsp+148h] [rbp-60h]
  __int64 v55; // [rsp+150h] [rbp-58h]
  __int128 v56; // [rsp+158h] [rbp-50h]
  unsigned __int64 v57; // [rsp+168h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v2 = a1[1];
  v26 = v2;
  if ( v2 != a2 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v39 = 0;
    v40 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v38 = 0;
    v41 = 0;
    if ( a2 < v2 )
    {
      v9 = a2;
      v10 = 152 * a2;
      do
      {
        v11 = (_QWORD *)(v10 + *a1);
        v12 = v11[16];
        if ( v12 )
        {
          v11[17] = 0;
          qfree(v12, (const char *)a2);
        }
        v13 = v11[10];
        if ( v13 )
        {
          v14 = v11[11];
          if ( v14 )
          {
            for ( i = 0; i != v14; ++i )
            {
              v16 = (__int64 *)(v13 + 24 * i);
              v17 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v17, (const char *)a2);
                v13 = v11[10];
              }
            }
          }
          v11[11] = 0;
          qfree(v13, (const char *)a2);
        }
        v18 = v11[7];
        if ( v18 )
        {
          v11[8] = 0;
          qfree(v18, (const char *)a2);
        }
        v19 = v11[4];
        if ( v19 )
        {
          v11[5] = 0;
          qfree(v19, (const char *)a2);
        }
        ++v9;
        v10 += 152;
      }
      while ( v26 != v9 );
      a1[1] = a2;
    }
    else if ( (unsigned __int64)&v27 < *a1 || (unsigned __int64)&v27 >= *a1 + 152LL * a1[2] )
    {
      sub_556C40(a1, a2, &v27);
    }
    else
    {
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v49 = 0;
      v51 = 0;
      v54 = 0;
      v55 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 0;
      v53 = 0;
      v56 = 0;
      sub_556C40(a1, a2, &v42);
      if ( v55 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v55, (const char *)a2);
      }
      v4 = v51;
      if ( v51 )
      {
        v5 = v52;
        if ( (_QWORD)v52 )
        {
          v6 = 0;
          do
          {
            v7 = (__int64 *)(v4 + 24 * v6);
            v8 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v8, (const char *)a2);
              v4 = v51;
            }
            ++v6;
          }
          while ( v5 != v6 );
        }
        *(_QWORD *)&v52 = 0;
        qfree(v4, (const char *)a2);
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49, (const char *)a2);
      }
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47, (const char *)a2);
      }
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40, (const char *)a2);
    }
    v20 = v36;
    if ( v36 )
    {
      v21 = v37;
      if ( (_QWORD)v37 )
      {
        v22 = 0;
        do
        {
          v23 = (__int64 *)(v20 + 24 * v22);
          v24 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            qfree(v24, (const char *)a2);
            v20 = v36;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v20, (const char *)a2);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, (const char *)a2);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, (const char *)a2);
    }
  }
  return v57 - __readfsqword(0x28u);
}
