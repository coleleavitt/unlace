unsigned __int64 __fastcall choose_xrefs_ah_t__::vfunc_6(
        __int64 a1,
        __int64 a2,
        QT::QGraphicsScene *a3,
        int **a4,
        __int64 a5,
        __int64 a6)
{
  int **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rax
  int *v11; // rdx
  int *v12; // r12
  __int64 (__fastcall ***v13)(); // r14
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r14
  const char *v17; // rsi
  __int64 *v18; // r15
  __int64 *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 i; // r13
  __int64 *v27; // rdx
  __int64 v28; // rdi
  char *v29; // rbx
  __int64 v30; // rdi
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 j; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  char *v41; // rbx
  __int64 v42; // rdi
  int v43; // [rsp+0h] [rbp-1A8h]
  __int64 v44; // [rsp+0h] [rbp-1A8h]
  int *v45; // [rsp+8h] [rbp-1A0h]
  __int64 v46; // [rsp+8h] [rbp-1A0h]
  __int64 v47; // [rsp+8h] [rbp-1A0h]
  __int64 (__fastcall ***v48)(); // [rsp+10h] [rbp-198h]
  __int64 v49; // [rsp+10h] [rbp-198h]
  int *v50; // [rsp+18h] [rbp-190h]
  __int64 v51; // [rsp+18h] [rbp-190h]
  __int64 v52[4]; // [rsp+20h] [rbp-188h] BYREF
  __int64 *v53; // [rsp+40h] [rbp-168h] BYREF
  __int128 v54; // [rsp+48h] [rbp-160h]
  __int64 (__fastcall **v55)(); // [rsp+60h] [rbp-148h] BYREF
  char v56; // [rsp+98h] [rbp-110h] BYREF
  char v57; // [rsp+B0h] [rbp-F8h] BYREF
  char v58; // [rsp+F8h] [rbp-B0h] BYREF
  char v59; // [rsp+110h] [rbp-98h] BYREF
  __int64 v60; // [rsp+120h] [rbp-88h]
  __int64 v61; // [rsp+128h] [rbp-80h]
  __int64 v62; // [rsp+138h] [rbp-70h]
  __int64 v63; // [rsp+140h] [rbp-68h]
  __int64 v64; // [rsp+150h] [rbp-58h]
  __int64 v65; // [rsp+158h] [rbp-50h]
  unsigned __int64 v66; // [rsp+168h] [rbp-40h]

  v7 = a4;
  v8 = *((_QWORD *)a3 + 8);
  v66 = __readfsqword(0x28u);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 48);
  v52[0] = v9;
  v10 = *a4;
  v52[1] = a2;
  v52[2] = (__int64)a3;
  if ( !v10 || *v10 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v10 = *v7;
  }
  v11 = v7[1];
  v12 = v11;
  if ( !v10 || *v10 > 1 )
  {
    sub_22070((__int64)v7, 0, 0, 0, a5, a6);
    v11 = v7[1];
  }
  v45 = v12;
  v48 = &v55;
  v50 = &v11[2 * (_QWORD)v7[2]];
  if ( v12 != v50 )
  {
    while ( 1 )
    {
      v13 = v48;
      v14 = *(_QWORD *)v45;
      sub_3C520(
        (_DWORD)v48,
        (_DWORD)a3,
        *(_QWORD *)(*(_QWORD *)v45 + 16LL),
        (_DWORD)a4,
        a5,
        a6,
        v43,
        (_DWORD)v45,
        (_DWORD)v48,
        (_DWORD)v50,
        v52[0]);
      v54 = 0;
      v53 = nullptr;
      v16 = callui(16, 0, v13, &v53, &callui, v15, v44, v46, v49, v51);
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53, nullptr);
      }
      if ( v16 < 0 )
        break;
      v17 = (const char *)v48;
      sub_3C340(&v53, v48);
      a4 = (int **)v53;
      v18 = &v53[v54];
      if ( v18 != v53 )
      {
        v19 = v53;
        do
        {
          v17 = (const char *)*v19;
          sub_206A0(a3, *v19++, *(_QWORD *)(v14 + 16));
        }
        while ( v18 != v19 );
        a4 = (int **)v53;
      }
      if ( a4 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(a4, v17);
      }
      v55 = xref_chooser_t___vtable;
      if ( v64 )
      {
        v65 = 0;
        qfree(v64, v17);
      }
      v20 = v62;
      if ( v62 )
      {
        v21 = v63;
        if ( v63 )
        {
          v22 = 0;
          do
          {
            v23 = (__int64 *)(v20 + 24 * v22);
            v24 = *v23;
            if ( *v23 )
            {
              v25 = v23[1];
              if ( v25 )
              {
                for ( i = 0; i != v25; ++i )
                {
                  v27 = (__int64 *)(v24 + 24 * i);
                  v28 = *v27;
                  if ( *v27 )
                  {
                    v27[1] = 0;
                    qfree(v28, v17);
                    v24 = *v23;
                  }
                }
              }
              v23[1] = 0;
              qfree(v24, v17);
              v20 = v62;
            }
            ++v22;
          }
          while ( v21 != v22 );
        }
        v63 = 0;
        qfree(v20, v17);
      }
      if ( v60 )
      {
        v61 = 0;
        qfree(v60, v17);
      }
      v29 = &v59;
      v55 = (__int64 (__fastcall **)())&unk_4D520;
      do
      {
        v30 = *((_QWORD *)v29 - 3);
        v29 -= 24;
        if ( v30 )
        {
          *((_QWORD *)v29 + 1) = 0;
          qfree(v30, v17);
        }
      }
      while ( v29 != &v57 );
      v45 = (int *)(v47 + 8);
      if ( v50 == v45 )
        goto LABEL_40;
    }
    v55 = xref_chooser_t___vtable;
    if ( v64 )
    {
      v65 = 0;
      qfree(v64, nullptr);
    }
    v32 = v62;
    if ( v62 )
    {
      v33 = v63;
      if ( v63 )
      {
        v34 = 0;
        do
        {
          v35 = (__int64 *)(v32 + 24 * v34);
          v36 = *v35;
          if ( *v35 )
          {
            v37 = v35[1];
            if ( v37 )
            {
              for ( j = 0; j != v37; ++j )
              {
                v39 = (__int64 *)(v36 + 24 * j);
                v40 = *v39;
                if ( *v39 )
                {
                  v39[1] = 0;
                  qfree(v40, nullptr);
                  v36 = *v35;
                }
              }
            }
            v35[1] = 0;
            qfree(v36, nullptr);
            v32 = v62;
          }
          ++v34;
        }
        while ( v33 != v34 );
      }
      v63 = 0;
      qfree(v32, nullptr);
    }
    if ( v60 )
    {
      v61 = 0;
      qfree(v60, nullptr);
    }
    v41 = &v58;
    v55 = (__int64 (__fastcall **)())&unk_4D520;
    do
    {
      v42 = *(_QWORD *)v41;
      if ( *(_QWORD *)v41 )
      {
        *((_QWORD *)v41 + 1) = 0;
        qfree(v42, nullptr);
      }
      v41 -= 24;
    }
    while ( v41 != &v56 );
  }
LABEL_40:
  sub_1FB30((__int64)a3, 1);
  sub_2FB30(v52);
  return v66 - __readfsqword(0x28u);
}
