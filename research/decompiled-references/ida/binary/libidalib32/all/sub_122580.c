__int64 sub_122580()
{
  __int64 ph; // rbx
  bool v1; // r13
  __int16 v2; // dx
  unsigned int v3; // edx
  __int16 v4; // dx
  int v5; // eax
  int selector; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r13
  __int16 v14; // [rsp+28h] [rbp-E8h]
  unsigned int v15; // [rsp+2Ch] [rbp-E4h] BYREF
  __int64 v16; // [rsp+30h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+38h] [rbp-D8h]
  __int64 v18; // [rsp+50h] [rbp-C0h]
  __int128 v19; // [rsp+58h] [rbp-B8h]
  __int128 v20; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+80h] [rbp-90h]
  __int64 v22; // [rsp+88h] [rbp-88h]
  __int128 v23; // [rsp+90h] [rbp-80h]
  __int128 v24; // [rsp+A0h] [rbp-70h]
  __int128 v25; // [rsp+B0h] [rbp-60h]
  __int128 v26; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v27; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v28; // [rsp+D8h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v16 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v27 = 0xFFFFFFFF00000000LL;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  ph = get_ph();
  v1 = 1;
  if ( (getinf() & 6) == 0 )
  {
    v9 = getinf();
    v1 = 0;
    if ( (unsigned int)v9 <= 0xD )
    {
      v10 = -8293;
      if ( !_bittest64(&v10, v9) )
        v1 = (*(_WORD *)(ph + 8) & 0x2002) != 0;
    }
  }
  if ( !(unsigned __int8)getinf_flag() || (v2 = 2, (*(_DWORD *)(ph + 8) & 0x10000000) == 0) )
    v2 = (*(_DWORD *)(ph + 8) & 4) != 0;
  v14 = v2;
  if ( (unsigned __int8)sub_161360(0, &v20, (char *)&v20 + 4) )
  {
    if ( v1 )
    {
      v13 = getseg();
      if ( v13 )
      {
        v15 = sel2para();
        v14 = *(unsigned __int8 *)(v13 + 23);
      }
      else
      {
        v15 = 0;
      }
    }
    else
    {
      v15 = (unsigned int)v20 >> 4;
    }
  }
  else
  {
    *(_QWORD *)&v20 = -1;
    v15 = v1 - 1;
  }
  WORD2(v21) = 513;
  while ( (unsigned int)sub_18BA90(
                          1034,
                          (unsigned int)sub_121370,
                          (unsigned int)&v16,
                          (unsigned int)&v20,
                          (unsigned int)&v20 + 4,
                          (unsigned int)&v15) )
  {
    if ( DWORD1(v20) == -1 )
    {
      v11 = getseg();
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 4);
      else
        v12 = getinf();
      v3 = v20;
      DWORD1(v20) = v12;
      if ( (unsigned int)v20 >= v12 )
        goto LABEL_42;
LABEL_11:
      if ( v15 <= 0xFFFF )
      {
        if ( (unsigned int)v20 >= 16 * (unsigned int)sel2para() )
        {
LABEL_13:
          v4 = v14;
          if ( (*(_DWORD *)(ph + 8) & 0x2000) != 0 )
            goto LABEL_17;
          v5 = *(_DWORD *)(ph + 8) & 0x2002;
          if ( v14 == 2 )
          {
            if ( v5 )
            {
              v4 = 1;
              goto LABEL_17;
            }
          }
          else if ( v5 || v14 != 1 )
          {
LABEL_17:
            HIBYTE(v21) = v4;
            if ( !v15 && v4 )
            {
              selector = find_selector();
              if ( !selector )
                selector = allocate_selector();
              goto LABEL_24;
            }
LABEL_23:
            selector = setup_selector();
LABEL_24:
            HIDWORD(v22) = selector;
            v7 = 0;
            if ( !(unsigned __int8)add_segm_ex() )
              goto LABEL_25;
            sub_15D870(&v20);
            break;
          }
          HIBYTE(v21) = 0;
          goto LABEL_23;
        }
      }
      else if ( v3 >= 16 * v15 )
      {
        goto LABEL_13;
      }
      sub_F9340(1032);
    }
    else
    {
      v3 = v20;
      if ( (unsigned int)v20 < DWORD1(v20) )
        goto LABEL_11;
LABEL_42:
      sub_F9340(1031);
    }
  }
  v7 = 1;
LABEL_25:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v7;
}

