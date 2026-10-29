__int64 __fastcall op_based_stroff(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  _QWORD *v8; // r14
  int v9; // eax
  unsigned __int8 v11; // al
  _DWORD *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 member; // rax
  _QWORD *v16; // rax
  char *v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rbp
  char *v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  char *v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // r15
  void *v27; // rdi
  void *v28; // rdi
  char *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbx
  char *v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  unsigned int tinfo_tid; // [rsp+0h] [rbp-148h]
  unsigned __int8 v36; // [rsp+0h] [rbp-148h]
  unsigned __int8 v37; // [rsp+0h] [rbp-148h]
  unsigned int v38; // [rsp+4h] [rbp-144h]
  __int64 v39; // [rsp+18h] [rbp-130h] BYREF
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int128 v41; // [rsp+28h] [rbp-120h]
  void *v42; // [rsp+40h] [rbp-108h] BYREF
  __int128 v43; // [rsp+48h] [rbp-100h]
  __int128 v44; // [rsp+58h] [rbp-F0h]
  __int64 v45; // [rsp+68h] [rbp-E0h]
  int v46; // [rsp+70h] [rbp-D8h]
  __int64 v47; // [rsp+80h] [rbp-C8h]
  __int64 v48; // [rsp+88h] [rbp-C0h]
  void *v49; // [rsp+90h] [rbp-B8h]
  __int128 v50; // [rsp+98h] [rbp-B0h]
  void *v51; // [rsp+A8h] [rbp-A0h]
  __int128 v52; // [rsp+B0h] [rbp-98h]
  _OWORD v53[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-68h]
  int v55; // [rsp+E8h] [rbp-60h]
  __int64 v56; // [rsp+F0h] [rbp-58h]
  char v57; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+108h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a3 < 0 )
    return 0;
  v8 = *(_QWORD **)(qword_2CA1698 + 1480);
  v9 = sub_3B9AA0((__int64)v8, a4, 4);
  if ( (v9 & 0x600) != 0x400 || (v9 & 0xF0000000) != 0x60000000 )
    return 0;
  tinfo_tid = sub_3C3F20(v8, a4);
  v39 = 0;
  if ( (unsigned int)sub_69CC60(v8, tinfo_tid, 0, &v39) && (get_tinfo_property(v39, 2) & 0x3F) == 0xD )
  {
    ptr = nullptr;
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    v38 = a3;
    v41 = 0;
    while ( 1 )
    {
      if ( v13 < v14 + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, v12, v14 + 1, 4);
        v12 = ptr;
        v14 = v41;
      }
      v12[v14] = tinfo_tid;
      *(_QWORD *)&v41 = v41 + 1;
      v42 = nullptr;
      v45 = 0;
      v46 = 1;
      v43 = 0;
      v44 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v39, 13, &v42) )
        goto LABEL_33;
      v48 = 0;
      v54 = 1;
      v49 = nullptr;
      v51 = nullptr;
      v55 = -1;
      v56 = 0;
      v57 = 0;
      v47 = 8LL * v38;
      v50 = 0;
      v52 = 0;
      v53[0] = 0;
      member = udt_type_data_t__find_member((int)&v42);
      if ( member < 0 )
        break;
      v16 = (char *)v42 + 128 * member;
      v38 -= *v16 >> 3;
      if ( (get_tinfo_property(v16[8], 2) & 0x3F) != 0xD )
      {
        clear_tinfo_t(v53);
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51);
        }
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49);
        }
LABEL_33:
        v23 = (char *)v42;
        if ( v42 )
        {
          v24 = v43;
          v25 = 0;
          if ( (_QWORD)v43 )
          {
            do
            {
              v26 = &v23[128 * v25];
              clear_tinfo_t(v26 + 64);
              v27 = *((void **)v26 + 5);
              if ( v27 )
              {
                *((_QWORD *)v26 + 6) = 0;
                qfree(v27);
              }
              v28 = *((void **)v26 + 2);
              if ( v28 )
              {
                *((_QWORD *)v26 + 3) = 0;
                qfree(v28);
              }
              ++v25;
              v23 = (char *)v42;
            }
            while ( v24 != v25 );
          }
          *(_QWORD *)&v43 = 0;
          qfree(v23);
        }
        v11 = sub_3CFEB0(v8, a1, a2, (int *)ptr, v41, 0);
        goto LABEL_42;
      }
      copy_tinfo_t(&v39);
      tinfo_tid = get_tinfo_tid(&v39, 0);
      clear_tinfo_t(v53);
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v51);
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      v17 = (char *)v42;
      if ( v42 )
      {
        v18 = v43;
        if ( (_QWORD)v43 )
        {
          v19 = 0;
          do
          {
            v20 = &v17[128 * v19];
            clear_tinfo_t(v20 + 64);
            v21 = *((void **)v20 + 5);
            if ( v21 )
            {
              *((_QWORD *)v20 + 6) = 0;
              qfree(v21);
            }
            v22 = *((void **)v20 + 2);
            if ( v22 )
            {
              *((_QWORD *)v20 + 3) = 0;
              qfree(v22);
            }
            ++v19;
            v17 = (char *)v42;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v43 = 0;
        qfree(v17);
      }
      v13 = *((_QWORD *)&v41 + 1);
      v14 = v41;
      v12 = ptr;
    }
    clear_tinfo_t(v53);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    v29 = (char *)v42;
    if ( v42 )
    {
      v30 = v43;
      v31 = 0;
      if ( (_QWORD)v43 )
      {
        do
        {
          v32 = &v29[128 * v31];
          clear_tinfo_t(v32 + 64);
          v33 = *((void **)v32 + 5);
          if ( v33 )
          {
            *((_QWORD *)v32 + 6) = 0;
            qfree(v33);
          }
          v34 = *((void **)v32 + 2);
          if ( v34 )
          {
            *((_QWORD *)v32 + 3) = 0;
            qfree(v34);
          }
          ++v31;
          v29 = (char *)v42;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v43 = 0;
      qfree(v29);
    }
    v11 = 0;
LABEL_42:
    if ( ptr )
    {
      v37 = v11;
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
      v11 = v37;
    }
  }
  else
  {
    v11 = 0;
  }
  v36 = v11;
  clear_tinfo_t(&v39);
  return v36;
}

