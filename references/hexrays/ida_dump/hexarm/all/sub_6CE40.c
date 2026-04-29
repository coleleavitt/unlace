__int64 __fastcall sub_6CE40(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned __int64 v6; // r12
  _DWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rbp
  int *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  unsigned int *v20; // r14
  unsigned int v21; // ebp
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, int); // rax
  int v24; // eax
  unsigned int v25; // r13d
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, int, int); // rax
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // ebp
  __int64 v31; // r10
  int v32; // r9d
  __int64 v33; // rax
  int *v34; // rax
  unsigned __int64 v35; // rdx
  _DWORD *v36; // rsi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  _QWORD *v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  bool v50; // cf
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r11
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 *v58; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // [rsp+0h] [rbp-98h]
  int v71; // [rsp+0h] [rbp-98h]
  unsigned __int64 v72; // [rsp+0h] [rbp-98h]
  unsigned __int64 v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+10h] [rbp-88h]
  int v75; // [rsp+28h] [rbp-70h] BYREF
  int v76; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v77[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v78; // [rsp+40h] [rbp-58h] BYREF
  __int128 v79; // [rsp+48h] [rbp-50h]
  unsigned __int64 v80; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v80 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 56))(a1);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)v6;
  v8 = (_DWORD *)*a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v8);
    *a2 = 0;
    a2[2] = 0;
  }
  v9 = a2[3];
  if ( v9 )
  {
    a2[4] = 0;
    qfree(v9);
    a2[3] = 0;
    a2[5] = 0;
  }
  if ( (v6 & 0x80000000) == 0LL )
  {
    v35 = a2[1];
    LODWORD(v78) = -1;
    if ( v6 >= v35 )
    {
      if ( v35 >= v6 )
        goto LABEL_8;
      v36 = (_DWORD *)*a2;
      v37 = a2[2];
      if ( (unsigned __int64)&v78 < *a2 || &v78 >= (__int64 **)&v36[v37] )
      {
        if ( v37 >= v6 || (v64 = qvector_reserve(a2, v36, v6, 4), v35 = a2[1], *a2 = v64, v36 = (_DWORD *)v64, v35 < v6) )
        {
          while ( 1 )
          {
            v36[v35++] = -1;
            if ( v6 == v35 )
              break;
            v36 = (_DWORD *)*a2;
          }
        }
      }
      else if ( v37 >= v6
             || (v67 = qvector_reserve(a2, v36, v6, 4), v35 = a2[1], *a2 = v67, v36 = (_DWORD *)v67, v35 < v6) )
      {
        while ( 1 )
        {
          v36[v35++] = -1;
          if ( v6 == v35 )
            break;
          v36 = (_DWORD *)*a2;
        }
      }
    }
    a2[1] = v6;
  }
LABEL_8:
  v77[0] = 0;
  v10 = *(_QWORD *)a1;
  v77[1] = 0;
  v11 = (*(__int64 (__fastcall **)(__int64))(v10 + 80))(a1);
  v78 = nullptr;
  v12 = v11;
  v79 = 0;
  sub_63B90(v77, v11);
  v13 = a2[4];
  if ( v13 )
  {
LABEL_9:
    if ( a2[1] && v12 >= 0 && v12 < (unsigned __int64)a2[4] )
    {
      *(_DWORD *)*a2 = v12;
      *(_DWORD *)(a2[3] + 4LL * v12) = 0;
    }
    goto LABEL_13;
  }
  v38 = a2[1];
  v75 = -1;
  if ( v38 )
  {
    v39 = a2[3];
    v40 = a2[5];
    v41 = a2 + 3;
    if ( (unsigned __int64)&v75 < v39 || (unsigned __int64)&v75 >= v39 + 4 * v40 )
    {
      v62 = 0;
      if ( v40 >= v38 || (v65 = qvector_reserve(v41, v39, v38, 4), v62 = a2[4], a2[3] = v65, v39 = v65, v62 < v38) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v39 + 4 * v62++) = -1;
          if ( v62 == v38 )
            break;
          v39 = a2[3];
        }
      }
    }
    else
    {
      v42 = 0;
      if ( v40 >= v38 || (v69 = qvector_reserve(v41, v39, v38, 4), a2[3] = v69, v39 = v69, v42 = a2[4], v42 < v38) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v39 + 4 * v42++) = -1;
          if ( v42 == v38 )
            break;
          v39 = a2[3];
        }
      }
    }
    a2[4] = v38;
    do
    {
      v43 = *(int *)(*a2 + 4 * v13);
      if ( (_DWORD)v43 != -1 )
        *(_DWORD *)(a2[3] + 4 * v43) = v13;
      ++v13;
    }
    while ( v13 != v38 );
    goto LABEL_9;
  }
LABEL_13:
  v15 = *((_QWORD *)&v79 + 1);
  v14 = v79;
  if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
  {
    v44 = qvector_reserve(&v78, 0, v79 + 1, 8);
    v45 = *((_QWORD *)&v79 + 1);
    v16 = v44;
    *((_QWORD *)&v79 + 1) = v15;
    v46 = v78;
    v47 = v79 - 1;
    if ( (__int64)v79 - 1 >= 0 )
    {
      v48 = v44;
      do
      {
        v49 = *v46;
        v48 += 8;
        ++v46;
        *(_QWORD *)(v48 - 8) = v49;
        v50 = v47-- == 0;
      }
      while ( !v50 );
      v46 = v78;
    }
    qfree(v46);
    v78 = (__int64 *)v16;
    v14 = v79;
    *((_QWORD *)&v79 + 1) = v45;
  }
  else
  {
    v16 = (__int64)v78;
  }
  v17 = (int *)(v16 + 8 * v14);
  *v17 = v12;
  LODWORD(v6) = 1;
  v17[1] = 0;
  v18 = v78;
  v19 = v79 + 1;
  *(_QWORD *)&v79 = v79 + 1;
  do
  {
    while ( 1 )
    {
      v20 = (unsigned int *)&v18[v19 - 1];
      v21 = v20[1];
      v22 = *v20;
      v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v24 = v23 == sub_64A90 ? sub_64A90(a1, v22) : v23(a1, v22);
      if ( v21 == v24 )
        break;
      v25 = v20[1];
      v26 = *v20;
      v27 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v27 == sub_64AD0 )
      {
        v70 = *v20;
        v28 = sub_64AD0(a1, v26, v25);
        v29 = v70;
      }
      else
      {
        v28 = v27(a1, v26, v25);
        v25 = v20[1];
        v29 = *v20;
      }
      v30 = v28;
      v20[1] = v25 + 1;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v29, v28)
        && (unsigned __int8)sub_63B90(v77, v30) )
      {
        v31 = a2[4];
        v32 = v6 + 1;
        if ( !v31 )
        {
          v51 = a2[1];
          v76 = -1;
          if ( !v51 )
            goto LABEL_37;
          v52 = a2[3];
          v53 = a2[5];
          v54 = a2 + 3;
          if ( (unsigned __int64)&v76 < v52 || (unsigned __int64)&v76 >= v52 + 4 * v53 )
          {
            v63 = 0;
            if ( v53 >= v51
              || (v72 = v51,
                  v66 = qvector_reserve(v54, v52, v51, 4),
                  v63 = a2[4],
                  v51 = v72,
                  a2[3] = v66,
                  v52 = v66,
                  v31 = 0,
                  v32 = v6 + 1,
                  v63 < v72) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v52 + 4 * v63++) = -1;
                if ( v51 == v63 )
                  break;
                v52 = a2[3];
              }
            }
          }
          else
          {
            v55 = 0;
            if ( v53 >= v51
              || (v73 = v51,
                  v68 = qvector_reserve(v54, v52, v51, 4),
                  v51 = v73,
                  v52 = v68,
                  v31 = 0,
                  a2[3] = v68,
                  v55 = a2[4],
                  v32 = v6 + 1,
                  v55 < v73) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v52 + 4 * v55++) = -1;
                if ( v51 == v55 )
                  break;
                v52 = a2[3];
              }
            }
          }
          a2[4] = v51;
          do
          {
            v56 = *(int *)(*a2 + 4 * v31);
            if ( (_DWORD)v56 != -1 )
              *(_DWORD *)(a2[3] + 4 * v56) = v31;
            ++v31;
          }
          while ( v51 != v31 );
        }
        if ( (v6 & 0x80000000) == 0LL && (int)v6 < (unsigned __int64)a2[1] && v30 >= 0 && v30 < (unsigned __int64)a2[4] )
        {
          *(_DWORD *)(*a2 + 4LL * (int)v6) = v30;
          *(_DWORD *)(a2[3] + 4LL * v30) = v6;
        }
LABEL_37:
        v33 = v79;
        if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
        {
          v71 = v32;
          v74 = *((_QWORD *)&v79 + 1);
          v6 = qvector_reserve(&v78, 0, v79 + 1, 8);
          v57 = *((_QWORD *)&v79 + 1);
          v58 = v78;
          v59 = v79 - 1;
          *((_QWORD *)&v79 + 1) = v74;
          if ( (__int64)v79 - 1 >= 0 )
          {
            v60 = v6;
            do
            {
              v61 = *v58;
              v60 += 8LL;
              ++v58;
              *(_QWORD *)(v60 - 8) = v61;
              v50 = v59-- == 0;
            }
            while ( !v50 );
            v58 = v78;
          }
          qfree(v58);
          v33 = v79;
          v78 = (__int64 *)v6;
          v32 = v71;
          *((_QWORD *)&v79 + 1) = v57;
        }
        else
        {
          v6 = (unsigned __int64)v78;
        }
        v34 = (int *)(v6 + 8 * v33);
        LODWORD(v6) = v32;
        *v34 = v30;
        v34[1] = 0;
        v18 = v78;
        v19 = v79 + 1;
        *(_QWORD *)&v79 = v79 + 1;
      }
      else
      {
        v18 = v78;
        v19 = v79;
      }
    }
    v18 = v78;
    if ( !(_QWORD)v79 )
      break;
    v19 = v79 - 1;
    *(_QWORD *)&v79 = v19;
  }
  while ( v19 );
  if ( v78 )
    qfree(v78);
  qfree(v77[0]);
  return (unsigned int)v6;
}
