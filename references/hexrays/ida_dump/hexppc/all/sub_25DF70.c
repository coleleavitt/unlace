__int64 __fastcall sub_25DF70(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int *a5, unsigned int a6)
{
  __int64 v6; // r15
  char v10; // r14
  unsigned int str_type; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r11d
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  __int64 item_end; // rax
  __int64 v19; // rsi
  __int128 v20; // kr00_16
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 max_strlit_length; // rax
  __int64 v27; // r13
  __int64 v28; // r15
  int flags; // eax
  __int64 v30; // r10
  int v31; // r11d
  __int64 v32; // rax
  __int64 strlit_contents; // rax
  __int64 v34; // [rsp+0h] [rbp-98h]
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+0h] [rbp-98h]
  unsigned int v37; // [rsp+0h] [rbp-98h]
  int v38; // [rsp+0h] [rbp-98h]
  unsigned __int64 v39; // [rsp+8h] [rbp-90h]
  unsigned int v40; // [rsp+8h] [rbp-90h]
  unsigned int v41; // [rsp+8h] [rbp-90h]
  int v42; // [rsp+8h] [rbp-90h]
  unsigned int v43; // [rsp+10h] [rbp-88h]
  int v44; // [rsp+10h] [rbp-88h]
  int v45; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  unsigned int v48; // [rsp+18h] [rbp-80h]
  int v49; // [rsp+1Ch] [rbp-7Ch]
  __int64 v50; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  __int64 v52; // [rsp+38h] [rbp-60h] BYREF
  __int64 v53; // [rsp+40h] [rbp-58h] BYREF
  __int128 v54; // [rsp+48h] [rbp-50h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v55 = __readfsqword(0x28u);
  if ( a4 || (v10 = sub_25DBF0(a1, a3, &v50, &v51)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    ++v51;
    v6 = v50;
  }
  str_type = get_str_type(v6);
  v12 = str_type;
  if ( str_type == -1 )
    return 0;
  v13 = str_type & 3;
  if ( v13 == 1 )
  {
    v24 = 1;
    v14 = 2;
  }
  else
  {
    v14 = 1;
    if ( v13 != 2 )
      goto LABEL_6;
    v24 = 3;
    v14 = 4;
  }
  if ( (v24 & a4) != 0 )
    return 0;
LABEL_6:
  v15 = v6 + a4;
  if ( v10 )
  {
    v16 = v51 * v14;
    v51 = v16;
    if ( !a5 || (v17 = *a5) == 0 )
    {
      v49 = v14;
      v43 = v12;
      v39 = v16;
      v34 = v15;
      item_end = get_item_end(v15);
      v15 = v34;
      v12 = v43;
      v14 = v49;
      v17 = v39;
      if ( v39 >= item_end - v34 )
        goto LABEL_10;
      return 0;
    }
LABEL_39:
    if ( v17 >= 0 )
    {
LABEL_35:
      v53 = 0;
      v54 = 0;
      goto LABEL_36;
    }
    return 0;
  }
  if ( a5 )
  {
    v17 = *a5;
    if ( *a5 )
      goto LABEL_39;
  }
  v44 = v14;
  v40 = v12;
  v35 = v15;
  v25 = get_item_end(v15);
  v15 = v35;
  v12 = v40;
  v14 = v44;
  v17 = v25 - v35;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) )
  {
    max_strlit_length = get_max_strlit_length(v35, v40, 7);
    v15 = v35;
    v12 = v40;
    v14 = v44;
    v27 = max_strlit_length;
    if ( v17 < max_strlit_length )
    {
      while ( 1 )
      {
        v28 = v15 + v17;
        v45 = v14;
        v41 = v12;
        v36 = v15;
        flags = get_flags_ex(v28, 4);
        if ( (flags & 0xC000) == 0x4000 )
          return 0;
        v30 = v36;
        v31 = v45;
        if ( (flags & 0x600) != 0x400 )
          return 0;
        if ( (flags & 0xF0000000) != 0x50000000 )
          return 0;
        v37 = v41;
        v46 = v30;
        v42 = v31;
        if ( v37 != (unsigned int)get_str_type(v28) )
          return 0;
        v32 = get_item_end(v28);
        v15 = v46;
        v12 = v37;
        v14 = v42;
        v17 = v32 - v46;
        if ( v32 - v46 >= (unsigned __int64)v27 )
        {
          if ( v42 < (unsigned __int64)v17 )
            goto LABEL_39;
          v17 = v27;
          if ( v27 < 0 )
            return 0;
          goto LABEL_35;
        }
      }
    }
    if ( v44 < (unsigned __int64)v17 )
      goto LABEL_39;
    v17 = max_strlit_length;
  }
LABEL_10:
  if ( v17 < 0 )
    return 0;
  v53 = 0;
  v54 = 0;
  if ( !v17 )
  {
    v19 = 0;
    v20 = 0u;
LABEL_13:
    if ( a5 )
      *a5 = v17;
    v21 = a2[2];
    v22 = *a2;
    *a2 = v19;
    a2[1] = v20;
    *((_QWORD *)&v54 + 1) = v21;
    result = 3;
    a2[2] = *((_QWORD *)&v20 + 1);
    if ( !v10 )
      result = (unsigned int)v14;
    v53 = v22;
    goto LABEL_18;
  }
LABEL_36:
  v38 = v14;
  v52 = *(int *)(*(_QWORD *)(a1 + 96) + 648LL);
  strlit_contents = get_strlit_contents(&v53, v15, v17, v12, &v52, a6);
  v22 = v53;
  if ( strlit_contents > 0 && v52 )
  {
    v20 = v54;
    v19 = v53;
    v14 = v38;
    goto LABEL_13;
  }
  result = 0;
LABEL_18:
  if ( v22 )
  {
    v48 = result;
    *(_QWORD *)&v54 = 0;
    qfree(v22);
    return v48;
  }
  return result;
}
