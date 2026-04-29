__int64 __fastcall sub_7DE0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r11
  int *v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // rsi
  __int64 (__fastcall **v12)(_QWORD *, __int64 *, int *, unsigned __int64); // rax
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // esi
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // eax
  size_t v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // eax
  int v32; // r13d
  int v33; // r9d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // esi
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r11
  __int64 v44; // r8
  unsigned int v45; // r9d
  int v46; // eax
  __int64 *v47; // rax
  unsigned __int64 v48; // rax
  __int64 *v49; // r13
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rcx
  bool v55; // cf
  unsigned __int64 v56; // rcx
  __int64 v57; // [rsp+8h] [rbp-C8h]
  int n; // [rsp+10h] [rbp-C0h]
  size_t nb; // [rsp+10h] [rbp-C0h]
  size_t na; // [rsp+10h] [rbp-C0h]
  size_t nc; // [rsp+10h] [rbp-C0h]
  int v63; // [rsp+24h] [rbp-ACh] BYREF
  __int64 v64; // [rsp+28h] [rbp-A8h]
  __int64 *v65; // [rsp+30h] [rbp-A0h] BYREF
  __int128 v66; // [rsp+38h] [rbp-98h]
  _QWORD v67[4]; // [rsp+50h] [rbp-80h] BYREF
  int v68; // [rsp+70h] [rbp-60h]
  void *src; // [rsp+78h] [rbp-58h]
  __int128 v70; // [rsp+80h] [rbp-50h]
  unsigned __int64 v71; // [rsp+98h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 4);
    v5 = a2[1];
    v6 = (int *)a3;
  }
  else
  {
    v29 = a2[3];
    if ( (v29 & 3) != 0 )
    {
      v29 = v29 + 4 - (v29 & 3);
      a2[3] = v29;
    }
    if ( v29 > 0xFFFFFFFFFFFFFFFBLL
      || (v30 = v29 + 4, a2[1] < v29 + 4)
      || (v31 = *(_DWORD *)(*a2 + v29), a2[3] = v30, (v63 = v31) == 0) )
    {
      LODWORD(v15) = 0;
      return (unsigned int)v15;
    }
    v6 = &v63;
    v64 = sub_3DA0(a2);
    LODWORD(v4) = v64;
  }
  n = v4;
  v7 = a2[3];
  v8 = (unsigned int)(v4 + v7);
  if ( v5 < v8 )
  {
    v8 = (unsigned int)v5;
    n = v5 - v7;
  }
  v9 = a1[2];
  if ( v9 > 0x3FF )
    sub_58B0((__int64)"Corrupted file");
  v10 = *v6;
  v11 = a1[1];
  if ( a1[3] < v9 + 1 )
  {
    v28 = qvector_reserve(a1 + 1, v11, v9 + 1, 4);
    v9 = a1[2];
    a1[1] = v28;
    v11 = v28;
  }
  *(_DWORD *)(v11 + 4 * v9) = v10;
  v12 = (__int64 (__fastcall **)(_QWORD *, __int64 *, int *, unsigned __int64))*a1;
  ++a1[2];
  v13 = a2[3];
  v14 = (*v12)(a1, a2, v6, v8);
  v15 = v14;
  if ( !v14 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, int *))(*a1 + 16LL))(a1, v6) )
      goto LABEL_27;
    v16 = (int)v13;
    a2[3] = (int)v13;
    v17 = *v6;
    if ( *v6 == 2 )
    {
      v32 = v13 & 3;
      if ( v32 )
      {
        v16 = v16 + 4 - v32;
        a2[3] = v16;
      }
      if ( v16 <= 0xFFFFFFFFFFFFFFFBLL )
      {
        if ( a2[1] >= v16 + 4 )
        {
          v33 = *(_DWORD *)(*a2 + v16);
          a2[3] = v16 + 4;
          v16 += 4LL;
          LODWORD(v15) = v33;
        }
        if ( v16 < v8 )
        {
          LODWORD(v67[0]) = v15;
          while ( 1 )
          {
            if ( (v16 & 3) != 0 )
              a2[3] = v16 + 4 - (v16 & 3);
            *(_QWORD *)((char *)v67 + 4) = sub_3DA0(a2);
            LODWORD(v15) = sub_7DE0(a1, a2, v67);
            v16 = a2[3];
            if ( (_DWORD)v15 )
              goto LABEL_28;
            if ( v16 >= v8 )
              goto LABEL_50;
          }
        }
      }
      goto LABEL_27;
    }
    if ( (unsigned int)(v17 - 3) > 0x1D )
      goto LABEL_27;
    v57 = (1LL << v17) & 0x1DC803000LL;
    if ( v57 )
    {
      if ( (int)v13 >= v8 )
        goto LABEL_27;
      while ( 1 )
      {
        v46 = sub_7DE0(a1, a2, 0);
        LODWORD(v15) = v46;
        if ( a2[3] >= v8 )
          break;
        if ( v46 )
          goto LABEL_28;
      }
LABEL_50:
      if ( (_DWORD)v15 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( v17 != 24 )
    {
      if ( v17 != 3 )
        goto LABEL_27;
      memset(v67, 0, sizeof(v67));
      if ( (unsigned __int64)(int)v13 <= 0xFFFFFFFFFFFFFFFBLL )
      {
        v18 = (int)v13 + 4LL;
        v19 = a2[1];
        if ( v19 < v18 )
        {
          if ( (unsigned __int64)(int)v13 <= 0xFFFFFFFFFFFFFFF7LL && v19 >= (int)v13 + 8LL )
          {
            v47 = (__int64 *)(*a2 + (int)v13);
            a2[3] = (int)v13 + 8LL;
            v57 = *v47;
          }
        }
        else
        {
          v20 = *a2;
          v21 = *(_DWORD *)(*a2 + (int)v13);
          a2[3] = v18;
          if ( v18 > 0xFFFFFFFFFFFFFFF7LL || v19 < (int)v13 + 12LL )
          {
            if ( v21 )
            {
              if ( v21 == 1 )
                goto LABEL_95;
              goto LABEL_27;
            }
          }
          else
          {
            a2[3] = (int)v13 + 12LL;
            v22 = *(_QWORD *)(v20 + (int)v13 + 4);
            if ( v21 )
            {
              if ( v21 == 1 )
              {
                if ( v22 )
                {
                  v67[0] = qvector_reserve(v67, 0, v22, 1);
                  v23 = v67[0] + v67[1];
                  memset((void *)(v67[0] + v67[1]), 0, v22 - v67[1]);
                  v67[1] = v22;
                  if ( __CFADD__(v67[3], v22) || v22 < v67[3] + v22 )
                    sub_5BD0(v23, 0, v67[3]);
                  *((_QWORD *)&v66 + 1) = v22;
                  v65 = a2;
                  *(_QWORD *)&v66 = v67[3] + v67[0];
                  nb = v67[3] + v67[0];
                  v24 = zip_inflate(&v65, sub_4910, sub_3E70);
                  v25 = nb;
                  if ( v24 )
                  {
                    if ( v67[0] )
                    {
                      v67[1] = 0;
                      qfree(v67[0]);
                    }
                    goto LABEL_27;
                  }
                  v57 = v22;
LABEL_96:
                  v51 = a1[2];
                  if ( v51 <= 1 )
                  {
                    v49 = v67;
                  }
                  else
                  {
                    v49 = v67;
                    if ( *(_DWORD *)(a1[1] + 4 * v51 - 8) == 32 )
                    {
                      v52 = (*(__int64 (__fastcall **)(_QWORD *, size_t, __int64))(*a1 + 24LL))(a1, v25, v57);
LABEL_99:
                      LODWORD(v15) = v52;
LABEL_90:
                      if ( v67[0] )
                      {
                        v67[1] = 0;
                        qfree(v67[0]);
                      }
                      goto LABEL_50;
                    }
                  }
                  goto LABEL_87;
                }
LABEL_95:
                v25 = 0;
                goto LABEL_96;
              }
LABEL_27:
              LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, int *))(*a1 + 8LL))(a1, a2, v6);
              goto LABEL_28;
            }
            v57 = *(_QWORD *)(v20 + v16 + 4);
          }
        }
      }
      v48 = a1[2];
      if ( v48 > 1 && *(_DWORD *)(a1[1] + 4 * v48 - 8) == 32 )
      {
        v53 = a2[3];
        v54 = (unsigned int)(n - 12);
        v55 = __CFADD__(v53, v54);
        v56 = v53 + v54;
        if ( v55 || a2[1] < v56 )
          sub_5BD0(a2, v53, (unsigned int)(n - 12));
        v52 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 24LL))(a1, *a2 + v53);
        goto LABEL_99;
      }
      v49 = a2;
      if ( a2 )
      {
LABEL_87:
        v50 = v49[3];
        na = v50 + v57;
        if ( v50 < v50 + v57 )
        {
          do
          {
            if ( (_DWORD)v15 )
              break;
            LODWORD(v15) = sub_7DE0(a1, v49, 0);
          }
          while ( v49[3] < na );
        }
        goto LABEL_90;
      }
      goto LABEL_27;
    }
    v34 = a1[2];
    if ( v34 > 1 && *(_DWORD *)(a1[1] + 4 * v34 - 8) == 23 )
      goto LABEL_27;
    memset(&v67[1], 0, 24);
    v67[0] = off_12958;
    src = nullptr;
    v70 = 0;
    sub_7DE0(v67, a2, 0);
    v65 = nullptr;
    v66 = 0;
    if ( (_QWORD)v70 )
    {
      nc = v70;
      v65 = (__int64 *)qalloc_or_throw(v70);
      *((_QWORD *)&v66 + 1) = nc;
      memcpy(v65, src, nc);
      *(_QWORD *)&v66 = nc;
    }
    sub_7DE0(v67, a2, 0);
    sub_7DE0(v67, a2, 0);
    if ( v68 == 41 )
      sub_7DE0(v67, a2, 0);
    v35 = a2[3];
    if ( v35 > 0xFFFFFFFFFFFFFFFBLL )
    {
      v44 = 0;
      v41 = 0;
      v39 = 0;
      goto LABEL_71;
    }
    v36 = a2[1];
    v37 = v35 + 4;
    if ( v36 < v35 + 4 )
    {
      v39 = 0;
    }
    else
    {
      v38 = *a2;
      v39 = *(_DWORD *)(*a2 + v35);
      a2[3] = v37;
      if ( v37 > 0xFFFFFFFFFFFFFFFBLL )
      {
        v44 = 0;
        v41 = 0;
        goto LABEL_71;
      }
      v40 = v35 + 8;
      if ( v36 >= v35 + 8 )
      {
        v41 = *(unsigned int *)(v38 + v35 + 4);
        a2[3] = v40;
        goto LABEL_63;
      }
      v35 += 4LL;
    }
    v40 = v35;
    v41 = 0;
LABEL_63:
    if ( v40 > 0xFFFFFFFFFFFFFFF7LL )
    {
      v44 = 0;
    }
    else
    {
      v42 = v40 + 8;
      if ( v36 < v40 + 8 )
      {
        v44 = 0;
        goto LABEL_101;
      }
      v43 = *a2;
      a2[3] = v42;
      v44 = *(_QWORD *)(v43 + v40);
      if ( v42 <= 0xFFFFFFFFFFFFFFF7LL )
      {
        v40 += 16LL;
        if ( v36 >= v40 )
        {
          a2[3] = v40;
          v57 = *(_QWORD *)(v43 + v42);
          goto LABEL_68;
        }
LABEL_101:
        v40 = a2[3];
LABEL_69:
        if ( v36 >= v40 + 4 )
        {
          v45 = *(_DWORD *)(*a2 + v40);
          a2[3] = v40 + 4;
          v15 = v45;
        }
        goto LABEL_71;
      }
      v40 += 8LL;
    }
LABEL_68:
    if ( v40 <= 0xFFFFFFFFFFFFFFFBLL )
      goto LABEL_69;
LABEL_71:
    LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD *, __int64 **, _QWORD, __int64, __int64, __int64, __int64))(*a1 + 32LL))(
                     a1,
                     &v65,
                     v39,
                     v41,
                     v44,
                     v57,
                     v15);
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
    }
    v67[0] = off_12958;
    if ( src )
    {
      *(_QWORD *)&v70 = 0;
      qfree(src);
    }
    v67[0] = &off_12D18;
    if ( v67[1] )
    {
      v67[2] = 0;
      qfree(v67[1]);
    }
    goto LABEL_50;
  }
LABEL_28:
  v26 = a1[2];
  if ( v26 )
    a1[2] = v26 - 1;
  a2[3] = v8;
  return (unsigned int)v15;
}
