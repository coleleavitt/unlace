__int64 __fastcall sub_D7060(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  unsigned int tinfo_details; // r12d
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int tinfo_size; // r14d
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v22; // [rsp-8h] [rbp-F8h]
  __int64 *v23; // [rsp+0h] [rbp-F0h]
  _DWORD v24[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-D0h]
  __int64 v27; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+30h] [rbp-C0h]
  int v29; // [rsp+40h] [rbp-B0h]
  __int64 v30; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-A0h]
  __int64 v32; // [rsp+60h] [rbp-90h]
  __int64 v33; // [rsp+68h] [rbp-88h] BYREF
  __int64 v34; // [rsp+70h] [rbp-80h] BYREF
  __int128 v35; // [rsp+78h] [rbp-78h]
  __int64 v36; // [rsp+88h] [rbp-68h]
  __int128 v37; // [rsp+90h] [rbp-60h]
  char v38; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v39; // [rsp+B0h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = *a2;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 16;
  v23 = &v30;
  v31 = 0;
  v35 = 0;
  v37 = 0;
  tinfo_details = get_tinfo_details(v3, 12, &v30);
  if ( !(_BYTE)tinfo_details )
  {
    if ( !under_debugger )
      sub_383060(50077);
    BUG();
  }
  if ( (_QWORD)v31 )
  {
    v5 = 0;
    v6 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    do
    {
      v7 = v30 + 80 * v6;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v7 + 64), 0);
      sub_1C6010(v24, a1, v7, tinfo_size);
      sub_1C31B0(
        (unsigned int)v24,
        (unsigned int)&v25,
        tinfo_size,
        *(_QWORD *)(a1 + 1440),
        0,
        v9,
        v22,
        (_DWORD)v23,
        v24[0],
        v24[2],
        v25,
        v26,
        v27,
        v28,
        *((__int64 *)&v28 + 1),
        v29,
        v30,
        v31,
        DWORD2(v31),
        v32,
        v33);
      ++v5;
      cleanup_argloc(v24);
      v6 = v5;
    }
    while ( v5 < (unsigned __int64)v31 );
    v14 = *(_QWORD *)(a1 + 520);
    if ( v14 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v14 + 48) )
        {
          if ( (*(_DWORD *)(v14 + 24) & 0x600) != 0x200 )
            sub_A7590(v14, 0, v10, v11, v12, v13);
          if ( (unsigned __int8)sub_318470(v14 + 216, &v27) || (unsigned __int8)sub_64780((_QWORD *)(v14 + 240), &v25) )
            break;
        }
        v14 = *(_QWORD *)(v14 + 8);
        if ( !v14 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      tinfo_details = 0;
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    qfree(v25);
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  cleanup_argloc(&v34);
  clear_tinfo_t(&v33);
  v15 = v30;
  if ( v30 )
  {
    v16 = v31;
    if ( (_QWORD)v31 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t(v18 + 8);
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc(v18);
        v15 = v30;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v15);
  }
  return tinfo_details;
}
