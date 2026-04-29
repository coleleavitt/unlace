unsigned __int64 __fastcall sub_21C9B0(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // r12
  char v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-108h] BYREF
  __int128 v25; // [rsp+8h] [rbp-100h]
  __int64 v26; // [rsp+18h] [rbp-F0h]
  __int64 v27; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v29; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+48h] [rbp-C0h]
  char v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+A8h] [rbp-60h]
  char v41; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+C8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 16;
  v25 = 0;
  v29 = 0;
  v31 = 0;
  if ( !(unsigned __int8)get_tinfo_details(a3, 12, &v24) )
  {
    if ( !under_debugger )
      sub_3835A0(51218);
    BUG();
  }
  if ( (get_tinfo_property(v27, 2) & 0x3F) != 1 )
  {
    v23 = v27;
    v27 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = v23;
  }
  v3 = v32 & 0xF0;
  if ( (v32 & 0xF0) == 0xC0 )
    v3 = HIDWORD(v26);
  if ( v3 <= 0x10 )
    v3 = getinf(99);
  v4 = *(_DWORD *)(a1 + 148);
  if ( v4 <= 0x10 )
    v4 = getinf(99);
  if ( v4 == v3 )
  {
    copy_argloc(a2, &v28);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 148);
    v33 = 0;
    v6 = a1 + 136;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v34 = 0;
    v38 = 0;
    v40 = 0;
    if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
    {
      HIDWORD(v35) = v5;
      LOBYTE(v5) = -64;
    }
    v41 = v5;
    copy_tinfo_t(&v36, v6);
    v7 = calc_retloc(&v33);
    if ( v7 )
    {
      v8 = v38;
      *(_QWORD *)&v38 = *((_QWORD *)a2 + 1);
      v9 = *a2;
      *((_QWORD *)a2 + 1) = v8;
      LODWORD(v8) = v37;
      LODWORD(v37) = v9;
      *a2 = v8;
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    cleanup_argloc(&v37);
    clear_tinfo_t(&v36);
    v10 = v33;
    if ( v33 )
    {
      v11 = v34;
      if ( (_QWORD)v34 )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + 80 * v12);
          clear_tinfo_t(v13 + 8);
          v14 = v13[5];
          if ( v14 )
          {
            v13[6] = 0;
            qfree(v14);
          }
          v15 = v13[2];
          if ( v15 )
          {
            v13[3] = 0;
            qfree(v15);
          }
          ++v12;
          cleanup_argloc(v13);
          v10 = v33;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v34 = 0;
      qfree(v10);
    }
    if ( !v7 )
      clear_tinfo_t(v6);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  cleanup_argloc(&v28);
  clear_tinfo_t(&v27);
  v16 = v24;
  if ( v24 )
  {
    v17 = v25;
    if ( (_QWORD)v25 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t(v19 + 8);
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc(v19);
        v16 = v24;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v16);
  }
  return v42 - __readfsqword(0x28u);
}
