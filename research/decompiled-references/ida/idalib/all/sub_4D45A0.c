__int64 __fastcall sub_4D45A0(_QWORD *a1, __int64 a2, __int64 a3, const char *a4, _QWORD *a5)
{
  __int64 v6; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  void *v13; // rcx
  __int64 v14; // r13
  const char **v15; // r13
  const char **v16; // r15
  const char *v17; // rdi
  void *v18; // rdi
  char *v19; // rdi
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rbp
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 name_ea; // rax
  unsigned __int64 v30; // rbx
  int *v31; // r8
  int *v32; // rdx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // [rsp+0h] [rbp-138h]
  _BYTE *v39; // [rsp+0h] [rbp-138h]
  __int64 v40; // [rsp+18h] [rbp-120h] BYREF
  void *v41; // [rsp+20h] [rbp-118h] BYREF
  __int128 v42; // [rsp+28h] [rbp-110h]
  void *ptr; // [rsp+38h] [rbp-100h]
  __int128 v44; // [rsp+40h] [rbp-F8h]
  int v45; // [rsp+50h] [rbp-E8h]
  char v46; // [rsp+54h] [rbp-E4h]
  __int128 v47; // [rsp+60h] [rbp-D8h] BYREF
  void *v48; // [rsp+70h] [rbp-C8h]
  __int128 v49; // [rsp+78h] [rbp-C0h]
  void *v50; // [rsp+88h] [rbp-B0h]
  __int128 v51; // [rsp+90h] [rbp-A8h]
  _OWORD v52[3]; // [rsp+A0h] [rbp-98h] BYREF
  char *v53; // [rsp+D0h] [rbp-68h]
  int v54; // [rsp+D8h] [rbp-60h]
  __int64 v55; // [rsp+E0h] [rbp-58h]
  char v56; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+F8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( !a4 )
  {
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  v6 = a2;
  if ( a2 != -1 )
  {
    v10 = sub_5CAA10(a1);
    if ( v10 )
    {
      v48 = nullptr;
      v53 = (char *)&dword_0 + 1;
      v50 = nullptr;
      v54 = -1;
      v55 = 0;
      v56 = 0;
      v38 = (_QWORD *)v10;
      v47 = 0;
      v49 = 0;
      v51 = 0;
      v52[0] = 0;
      if ( (unsigned __int8)sub_5B7FD0(a1, &v47, v10, a4) )
      {
        if ( a5 )
          *a5 = ((unsigned __int64)v47 >> 3) - v38[4];
        LODWORD(v11) = 3;
LABEL_8:
        clear_tinfo_t(v52);
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree(v50);
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree(v48);
        }
        return (unsigned int)v11;
      }
      v26 = sub_63F6C0(a1, v38, a4);
      if ( v26 != -1 )
      {
        if ( a5 )
          *a5 = v26;
        LODWORD(v11) = 2;
        goto LABEL_8;
      }
      if ( *v38 == a2 )
      {
        if ( a3 == -1 )
          v6 = -1;
      }
      else if ( a3 == -1 )
      {
        a3 = a2 + 1;
      }
      v28 = sub_674F40(a1, v38, v6, a3, 0, a4);
      if ( v28 )
      {
        if ( a5 )
          *a5 = 0xCCCCCCCCCCCCCCCDLL * ((v28 - v38[11]) >> 3);
        LODWORD(v11) = 9;
        goto LABEL_8;
      }
      clear_tinfo_t(v52);
      if ( v50 )
      {
        *(_QWORD *)&v51 = 0;
        qfree(v50);
      }
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree(v48);
      }
    }
  }
  v53 = (char *)&dword_0 + 1;
  v48 = nullptr;
  v50 = nullptr;
  v54 = -1;
  v55 = 0;
  v56 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v52[0] = 0;
  if ( sub_6BDD30(a1, &v47, a4, 0) == -1 )
  {
    v41 = nullptr;
    ptr = nullptr;
    v45 = 0;
    v46 = 0x80;
    v42 = 0;
    v44 = 0;
    if ( !(unsigned __int8)sub_6BB9B0(a1, &v41, a4) || !(_QWORD)v42 )
      goto LABEL_51;
    v13 = v41;
    v14 = -56;
    v39 = v41;
    if ( (_QWORD)v42 != -1 )
      v14 = 56 * v42;
    v15 = (const char **)((char *)v41 + v14);
    if ( v41 == v15 )
      goto LABEL_51;
    v16 = (const char **)v41;
    while ( 1 )
    {
      v17 = haystack;
      if ( v16[1] )
        v17 = *v16;
      if ( !strcmp(v17, a4) )
        break;
      v16 += 7;
      if ( v15 == v16 )
        goto LABEL_51;
    }
    if ( (char *)v16 - v39 >= 0 )
    {
      if ( a5 )
        *a5 = v16[6];
      v18 = ptr;
      LODWORD(v11) = 4;
      if ( (_QWORD)v44 )
      {
        v31 = (int *)((char *)ptr + 4 * v44);
        if ( ptr != v31 )
        {
          v32 = (int *)ptr;
          v33 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v16 - v39) >> 3);
          v34 = 0;
          while ( 1 )
          {
            v35 = *v32;
            v36 = v34;
            v34 += v35;
            if ( v33 < v34 )
              break;
            if ( v31 == ++v32 )
              goto LABEL_71;
          }
          if ( v33 != v36 )
          {
LABEL_71:
            LODWORD(v11) = 4;
            goto LABEL_35;
          }
          LODWORD(v11) = v35 < 2 ? 4 : 8;
        }
      }
    }
    else
    {
LABEL_51:
      if ( (unsigned int)sub_50CB90(a1, &v40, a4, v13) == 2 )
      {
        if ( a5 )
        {
          v27 = v40;
          if ( v40 != -1 )
            v27 = 16 * sel2para(v40);
          *a5 = v27;
        }
        v18 = ptr;
        LODWORD(v11) = 6;
      }
      else
      {
        name_ea = get_name_ea(-1, a4);
        v30 = name_ea;
        if ( name_ea == -1 )
        {
          v18 = ptr;
          LODWORD(v11) = 0;
        }
        else
        {
          v37 = sub_505D70(a1 + 203, name_ea);
          v18 = ptr;
          v11 = v37;
          if ( v37 )
          {
            if ( a5 )
              *a5 = v30;
            if ( (unsigned __int8)sub_631AD0(*a1, 9) && *(_BYTE *)(v11 + 184) == 10 )
            {
              if ( a5 )
                *a5 = (unsigned int)sub_3BEEF0(a1, v30);
              v18 = ptr;
              LODWORD(v11) = 5;
            }
            else
            {
              v18 = ptr;
              LODWORD(v11) = 1;
            }
          }
        }
      }
    }
LABEL_35:
    if ( v18 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v18);
    }
    v19 = (char *)v41;
    if ( v41 )
    {
      v20 = v42;
      if ( (_QWORD)v42 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          v23 = &v19[v21];
          v24 = *(void **)&v19[v21 + 24];
          if ( v24 )
          {
            *((_QWORD *)v23 + 4) = 0;
            qfree(v24);
          }
          v25 = *(void **)v23;
          if ( *(_QWORD *)v23 )
          {
            *((_QWORD *)v23 + 1) = 0;
            qfree(v25);
          }
          ++v22;
          v19 = (char *)v41;
          v21 += 56;
        }
        while ( v20 != v22 );
      }
      *(_QWORD *)&v42 = 0;
      qfree(v19);
    }
  }
  else
  {
    if ( a5 )
      *a5 = (unsigned __int64)v47 >> 3;
    LODWORD(v11) = 7;
  }
  clear_tinfo_t(v52);
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  return (unsigned int)v11;
}
