__int64 __fastcall sub_F3EF0(_QWORD *a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v6; // r14d
  __int64 v9; // rax
  unsigned int tinfo; // ebx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // rbp
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v24; // [rsp+30h] [rbp-98h] BYREF
  __int128 v25; // [rsp+38h] [rbp-90h]
  __int64 idati; // [rsp+50h] [rbp-78h] BYREF
  __int128 v27; // [rsp+58h] [rbp-70h]
  __int128 v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  int v30; // [rsp+80h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v6 = a6 & 1;
  v31 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  if ( a5 != -1 )
  {
    v9 = qvector_reserve();
    v24 = v9;
    *(_QWORD *)&v25 = 7;
    *(_DWORD *)v9 = 1987339634;
    *(_WORD *)(v9 + 4) = 27745;
    *(_BYTE *)(v24 + 6) = 0;
    sub_F3E30(&v24);
    if ( !v6 )
    {
      v19 = s1;
      if ( (_QWORD)v25 )
        v19 = (const char *)v24;
      if ( v19 )
      {
        *(_QWORD *)&v27 = v19;
        WORD4(v27) = 256;
        idati = get_idati();
        tinfo = create_tinfo();
        if ( (_BYTE)tinfo )
        {
          if ( (a6 & 2) != 0 )
            *a2 = 0;
          else
            tinfo = 0;
          clear_tinfo_t();
          goto LABEL_21;
        }
      }
      clear_tinfo_t();
    }
  }
  v27 = 0;
  idati = 0;
  v29 = 0;
  v30 = 1;
  v28 = 0;
  tinfo = sub_F3700(a1, &idati, a3, a4);
  if ( (_BYTE)tinfo )
  {
    v11 = v27;
    if ( (_QWORD)v27 == 1 )
    {
      if ( (get_tinfo_property() & 0xF) != 0xB )
      {
        v20 = idati;
        v21 = *a2;
        *a2 = *(_QWORD *)(idati + 64);
        *(_QWORD *)(v20 + 64) = v21;
LABEL_10:
        if ( a3 && *(_DWORD *)a3 == 2 && *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) == 1 )
        {
          copy_argloc();
          copy_argloc();
          cleanup_argloc();
        }
        goto LABEL_12;
      }
      v11 = v27;
    }
    v13 = HIDWORD(v29);
    v12 = HIDWORD(v29);
    BYTE1(v13) = BYTE5(v29) & 0xF7;
    if ( v11 >= 2 )
    {
      BYTE1(v12) = BYTE5(v29) | 8;
      v13 = v12;
    }
    HIDWORD(v29) = v13;
    if ( !(unsigned __int8)create_tinfo() )
    {
      if ( !under_debugger )
        sub_37EA20(52858);
      BUG();
    }
    if ( a5 != -1 && (unsigned int)save_tinfo() )
      sub_CE660(a2, 0);
    goto LABEL_10;
  }
LABEL_12:
  v14 = idati;
  if ( idati )
  {
    v15 = v27;
    if ( (_QWORD)v27 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 144 * v16);
        clear_tinfo_t();
        if ( v17[5] )
        {
          v17[6] = 0;
          qfree();
        }
        if ( v17[2] )
        {
          v17[3] = 0;
          qfree();
        }
        ++v16;
        v14 = idati;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
LABEL_21:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return tinfo;
}
