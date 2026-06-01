__int64 __fastcall sub_D7060(__int64 a1)
{
  unsigned int tinfo_details; // r12d
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int tinfo_size; // r14d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  int v19; // [rsp-8h] [rbp-F8h]
  __int64 *v20; // [rsp+0h] [rbp-F0h]
  _DWORD v21[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-D0h]
  __int64 v24; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-C0h]
  int v26; // [rsp+40h] [rbp-B0h]
  __int64 v27; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-A0h]
  __int64 v29; // [rsp+60h] [rbp-90h]
  __int64 v30; // [rsp+68h] [rbp-88h]
  __int64 v31; // [rsp+70h] [rbp-80h]
  __int128 v32; // [rsp+78h] [rbp-78h]
  __int64 v33; // [rsp+88h] [rbp-68h]
  __int128 v34; // [rsp+90h] [rbp-60h]
  char v35; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 16;
  v20 = &v27;
  v28 = 0;
  v32 = 0;
  v34 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details )
  {
    if ( !under_debugger )
      sub_383060(50077);
    BUG();
  }
  if ( (_QWORD)v28 )
  {
    v2 = 0;
    v3 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    do
    {
      v4 = v27 + 80 * v3;
      tinfo_size = get_tinfo_size();
      sub_1C6010(v21, a1, v4, tinfo_size);
      sub_1C31B0(
        (unsigned int)v21,
        (unsigned int)&v22,
        tinfo_size,
        *(_QWORD *)(a1 + 1440),
        0,
        v6,
        v19,
        (_DWORD)v20,
        v21[0],
        v21[2],
        v22,
        v23,
        v24,
        v25,
        *((__int64 *)&v25 + 1),
        v26,
        v27,
        v28,
        DWORD2(v28),
        v29,
        v30);
      ++v2;
      cleanup_argloc();
      v3 = v2;
    }
    while ( v2 < (unsigned __int64)v28 );
    v11 = *(_QWORD *)(a1 + 520);
    if ( v11 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v11 + 48) )
        {
          if ( (*(_DWORD *)(v11 + 24) & 0x600) != 0x200 )
            sub_A7590(v11, 0, v7, v8, v9, v10);
          if ( (unsigned __int8)sub_318470(v11 + 216, &v24) || (unsigned __int8)sub_64780((_QWORD *)(v11 + 240), &v22) )
            break;
        }
        v11 = *(_QWORD *)(v11 + 8);
        if ( !v11 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      tinfo_details = 0;
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    qfree(v22);
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v12 = v27;
  if ( v27 )
  {
    v13 = v28;
    if ( (_QWORD)v28 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 80 * v14);
        clear_tinfo_t();
        v16 = v15[5];
        if ( v16 )
        {
          v15[6] = 0;
          qfree(v16);
        }
        v17 = v15[2];
        if ( v17 )
        {
          v15[3] = 0;
          qfree(v17);
        }
        ++v14;
        cleanup_argloc();
        v12 = v27;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v12);
  }
  return tinfo_details;
}
