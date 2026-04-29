__int64 __fastcall sub_375220(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v7; // rax
  __int64 func; // r15
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-108h]
  __int64 v16; // [rsp+0h] [rbp-108h]
  __int64 v17; // [rsp+8h] [rbp-100h]
  _QWORD v18[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-60h]
  char v31; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+C8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 120LL) )
    return v32 - __readfsqword(0x28u);
  sub_1460B0(a1);
  if ( (get_aflags() & 0x2000000) != 0 )
  {
    if ( (unsigned __int8)get_tinfo() && (get_tinfo_property() & 0xF) == 0xC )
    {
      v23 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v29 = 0;
      v31 = 16;
      v24 = 0;
      v28 = 0;
      v30 = 0;
      if ( (unsigned __int8)get_tinfo_details() && (_QWORD)v24 )
      {
        v18[1] = a2;
        v18[0] = off_4E6308;
        v18[2] = &v23;
        v19 = 0;
        func = get_func();
        if ( func )
        {
          v20 = 32;
          v22 = 0;
          v21 = 0;
          v9 = v31 & 0xF0;
          if ( (v31 & 0xF0) == 0xC0 )
            v9 = HIDWORD(v25);
          if ( v9 <= 0x10 )
            getinf();
          get_stkarg_area_info();
          v15 = *(unsigned __int16 *)(func + 40);
          v17 = *(_QWORD *)(func + 32);
          v19 = (int)get_frame_retsize() + *((_QWORD *)&v21 + 1) + v17 + v15;
        }
        sub_2BC2C0(*(_QWORD *)(a1 + 112), a2, (__int64)v18);
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v29);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v10 = v23;
        if ( v23 )
        {
          v16 = v24;
          if ( (_QWORD)v24 )
          {
            v11 = 0;
            do
            {
              v12 = (_QWORD *)(v10 + 80 * v11);
              clear_tinfo_t();
              v13 = v12[5];
              if ( v13 )
              {
                v12[6] = 0;
                qfree(v13);
              }
              v14 = v12[2];
              if ( v14 )
              {
                v12[3] = 0;
                qfree(v14);
              }
              ++v11;
              cleanup_argloc();
              v10 = v23;
            }
            while ( v16 != v11 );
          }
          *(_QWORD *)&v24 = 0;
          qfree(v10);
        }
        clear_tinfo_t();
        goto LABEL_3;
      }
      cleanup_argloc();
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
LABEL_3:
  if ( (unsigned __int8)sub_375160(*(_QWORD *)(a1 + 1128), a2) )
  {
    if ( a3 != -1 )
      return sub_147D70(*(_QWORD *)(a1 + 112), a3, 0);
    v7 = (unsigned __int64 *)get_func();
    if ( v7 )
    {
      a3 = *v7;
      if ( *v7 != -1 )
        return sub_147D70(*(_QWORD *)(a1 + 112), a3, 0);
    }
  }
  return v32 - __readfsqword(0x28u);
}
