__int64 __fastcall sub_32D400(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  bool v6; // zf
  int tinfo_size; // eax
  unsigned int v8; // r14d
  bool v10; // r9
  int **v11; // rdx
  int *v12; // rax
  __int64 v13; // rdi
  char v14; // si
  char v15; // r8
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // r13d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // r14d
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-90h] BYREF
  _UNKNOWN **v29; // [rsp+8h] [rbp-88h] BYREF
  __int64 v30; // [rsp+10h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-78h]
  __int64 v32; // [rsp+20h] [rbp-70h]
  _QWORD v33[2]; // [rsp+28h] [rbp-68h] BYREF
  __int128 v34; // [rsp+38h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-48h]
  unsigned int v36; // [rsp+50h] [rbp-40h]
  bool v37; // [rsp+54h] [rbp-3Ch]
  unsigned __int64 v38; // [rsp+60h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  v30 = a1;
  v29 = &off_4E3668;
  v31 = 0;
  v32 = 0;
  v33[0] = 0;
  v33[1] = 0;
  v35 = 0;
  v36 = 16;
  v34 = 0;
  v5 = getinf(99);
  if ( v5 != 176 )
  {
    if ( v5 != 256 )
    {
LABEL_3:
      v6 = *(_DWORD *)a3 == 2;
      v37 = 1;
      if ( !v6 )
      {
        *(_QWORD *)&v34 = v33;
        goto LABEL_8;
      }
      v10 = 1;
      goto LABEL_18;
    }
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf(88) > 0x397 )
    goto LABEL_3;
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    goto LABEL_5;
  netnode_check(&v28, "$ golang", 0, 0);
  v18 = v28;
  v19 = netnode_altval(v28, 0, 65);
  if ( v19 <= 0x74 )
    goto LABEL_5;
  v20 = *(_DWORD *)(get_ph(v18) + 4);
  if ( !v20 )
    goto LABEL_3;
  v21 = (unsigned int)(v20 - 13);
  if ( (unsigned int)v21 > 0x3B || (v22 = 0x800000000000005LL, !_bittest64(&v22, v21)) )
  {
LABEL_5:
    v6 = *(_DWORD *)a3 == 2;
    v37 = 0;
    if ( !v6 )
    {
      *(_QWORD *)&v34 = v33;
      goto LABEL_7;
    }
    v10 = 0;
    goto LABEL_18;
  }
  v10 = v19 != 117;
  v6 = *(_DWORD *)a3 == 2;
  v37 = v19 != 117;
  if ( v6 )
  {
LABEL_18:
    v11 = *(int ***)(a3 + 8);
    v12 = *v11;
    v13 = (__int64)&(*v11)[6 * (_QWORD)v11[1]];
    if ( *v11 != (int *)v13 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = *v12;
          if ( (unsigned int)(*v12 - 3) <= 1 )
            break;
          v12 += 6;
          v14 |= v16 == 1;
          if ( (int *)v13 == v12 )
            goto LABEL_23;
        }
        v12 += 6;
        v15 = 1;
      }
      while ( (int *)v13 != v12 );
LABEL_23:
      if ( v15 && v14 )
      {
        if ( *(_BYTE *)(v30 + 148) != 2 )
          goto LABEL_16;
        v17 = v36;
        if ( v36 - 208 > 0x2F )
        {
          if ( v36 <= 0x10 )
            v17 = getinf(99);
          if ( v17 != 176 )
            goto LABEL_16;
          if ( (unsigned __int64)getinf(88) <= 0x397 )
          {
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              goto LABEL_16;
            netnode_check(&v28, "$ golang", 0, 0);
            v23 = v28;
            v24 = netnode_altval(v28, 0, 65);
            if ( v24 <= 0x74 )
              goto LABEL_16;
            v25 = *(_DWORD *)(get_ph(v23) + 4);
            if ( v25 )
            {
              v26 = (unsigned int)(v25 - 13);
              if ( (unsigned int)v26 > 0x3B )
                goto LABEL_16;
              v27 = 0x800000000000005LL;
              if ( !_bittest64(&v27, v26) || v24 == 117 )
                goto LABEL_16;
            }
          }
          v10 = v37;
        }
      }
    }
    *(_QWORD *)&v34 = v33;
    if ( v10 )
      goto LABEL_8;
LABEL_7:
    if ( (unsigned int)(*(_DWORD *)a3 - 3) > 1 )
      goto LABEL_8;
LABEL_16:
    LODWORD(a3) = 0;
    goto LABEL_15;
  }
  *(_QWORD *)&v34 = v33;
  if ( v19 == 117 )
    goto LABEL_7;
LABEL_8:
  tinfo_size = get_tinfo_size(0, *a2, 0);
  v8 = tinfo_size;
  if ( tinfo_size <= 0
    || tinfo_size > 0xFFFF && *(_DWORD *)a3 == 2
    || (get_tinfo_property(*a2, 2) & 0xF) == 9 && !sub_11CB40(v8)
    || (unsigned int)verify_argloc(a3, v8, 0) )
  {
    goto LABEL_16;
  }
  *((_QWORD *)&v34 + 1) = a2;
  v35 = a3;
  LOBYTE(a3) = (unsigned int)for_all_arglocs(&v29, a3, v8, 0) == 0;
LABEL_15:
  v29 = &off_4E3668;
  qfree(v33[0]);
  qfree(v31);
  return (unsigned int)a3;
}
