__int64 __fastcall sub_375220(__int64 a1, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 *v7; // rax
  __int64 func; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  int frame_retsize; // eax
  __int64 v12; // rdi
  __int64 v13; // r13
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-108h]
  __int64 v22; // [rsp+0h] [rbp-108h]
  __int64 v23; // [rsp+0h] [rbp-108h]
  __int64 v24; // [rsp+8h] [rbp-100h]
  __int64 v25; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD v26[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  __int128 v38; // [rsp+A8h] [rbp-60h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 == *(const void **)(*(_QWORD *)(a1 + 1128) + 120LL) )
    return v40 - __readfsqword(0x28u);
  sub_1460B0(a1);
  if ( (get_aflags(a2) & 0x2000000) != 0 )
  {
    v25 = 0;
    if ( (unsigned __int8)get_tinfo(&v25, a2) && (get_tinfo_property(v25, 2) & 0xF) == 0xC )
    {
      v31 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v37 = 0;
      v39 = 16;
      v32 = 0;
      v36 = 0;
      v38 = 0;
      if ( (unsigned __int8)get_tinfo_details(v25, 12, &v31) && (_QWORD)v32 )
      {
        v26[1] = a2;
        v26[0] = off_4E6308;
        v26[2] = &v31;
        v27 = 0;
        func = get_func(a2);
        if ( func )
        {
          v28 = 32;
          v30 = 0;
          v29 = 0;
          v9 = (unsigned __int8)v39 & 0xF0;
          if ( (v39 & 0xF0) == 0xC0 )
            v9 = HIDWORD(v33);
          if ( (unsigned int)v9 <= 0x10 )
            v9 = (unsigned int)getinf(99);
          get_stkarg_area_info(&v28, v9);
          v21 = *(unsigned __int16 *)(func + 40);
          v24 = *(_QWORD *)(func + 32);
          frame_retsize = get_frame_retsize(func, v9, v10);
          v27 = frame_retsize + *((_QWORD *)&v29 + 1) + v24 + v21;
        }
        sub_2BC2C0(*(_QWORD *)(a1 + 112), a2, (__int64)v26);
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        cleanup_argloc(&v35);
        clear_tinfo_t(&v34);
        v12 = v31;
        if ( !v31 )
          goto LABEL_31;
        v22 = v32;
        if ( (_QWORD)v32 )
        {
          v13 = 0;
          do
          {
            v14 = (_QWORD *)(v12 + 80 * v13);
            clear_tinfo_t(v14 + 8);
            v15 = v14[5];
            if ( v15 )
            {
              v14[6] = 0;
              qfree(v15);
            }
            v16 = v14[2];
            if ( v16 )
            {
              v14[3] = 0;
              qfree(v16);
            }
            ++v13;
            cleanup_argloc(v14);
            v12 = v31;
          }
          while ( v22 != v13 );
        }
      }
      else
      {
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        cleanup_argloc(&v35);
        clear_tinfo_t(&v34);
        v12 = v31;
        if ( !v31 )
          goto LABEL_31;
        v23 = v32;
        if ( (_QWORD)v32 )
        {
          v17 = 0;
          do
          {
            v18 = (_QWORD *)(v12 + 80 * v17);
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
            v12 = v31;
          }
          while ( v23 != v17 );
        }
      }
      *(_QWORD *)&v32 = 0;
      qfree(v12);
    }
LABEL_31:
    clear_tinfo_t(&v25);
  }
  if ( (unsigned __int8)sub_375160(*(_QWORD *)(a1 + 1128), (unsigned __int64)a2) )
  {
    if ( a3 != -1 )
      return sub_147D70(*(_QWORD *)(a1 + 112), a3, 0);
    v7 = (unsigned __int64 *)get_func(a2);
    if ( v7 )
    {
      a3 = *v7;
      if ( *v7 != -1 )
        return sub_147D70(*(_QWORD *)(a1 + 112), a3, 0);
    }
  }
  return v40 - __readfsqword(0x28u);
}
