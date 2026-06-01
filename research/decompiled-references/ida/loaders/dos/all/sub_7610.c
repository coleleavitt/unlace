unsigned __int64 __fastcall sub_7610(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *first_seg; // r13
  int v29; // ebp
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int128 v37; // [rsp+10h] [rbp-128h] BYREF
  __int128 v38; // [rsp+20h] [rbp-118h]
  __int64 v39; // [rsp+30h] [rbp-108h]
  __int64 v40; // [rsp+38h] [rbp-100h]
  __int64 v41; // [rsp+40h] [rbp-F8h]
  __int128 v42; // [rsp+48h] [rbp-F0h]
  __int128 v43; // [rsp+58h] [rbp-E0h]
  __int128 v44; // [rsp+68h] [rbp-D0h]
  __int128 v45; // [rsp+78h] [rbp-C0h]
  __int128 v46; // [rsp+88h] [rbp-B0h]
  __int128 v47; // [rsp+98h] [rbp-A0h]
  __int128 v48; // [rsp+A8h] [rbp-90h]
  __int128 v49; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-70h]
  _BYTE v51[40]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+F8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v8 = 20;
  v9 = getinf(19, a2, a3, a4, a5, a6);
  v14 = getinf(20, a2, v10, v11, v12, v13);
  if ( v9 < v14 )
  {
    v15 = v14;
    do
    {
      while ( 1 )
      {
        v16 = v9 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v16;
        if ( (unsigned __int8)sub_4F10(v16, (__int64)a2) )
        {
          v17 = (_QWORD *)getseg(v16);
          if ( !v17 || v16 != *v17 )
          {
            a8 = NAN;
            a2 = nullptr;
            v39 = 0;
            v50 = 0xFFFFFFFF00000000LL;
            v41 = v16 >> 4;
            *(_QWORD *)&v37 = v16;
            *((_QWORD *)&v37 + 1) = -1;
            v40 = 513;
            v38 = 0;
            v42 = -1;
            v43 = -1;
            v44 = -1;
            v45 = -1;
            v46 = -1;
            v47 = -1;
            v48 = -1;
            v49 = -1;
            add_segm_ex(&v37, 0, 0, 33);
          }
          v18 = 5 * (unsigned int)(unsigned __int16)get_word(v16 + 12) + 32;
          v19 = (__int64 *)getseg(v16);
          if ( v19 )
          {
            v20 = *v19;
            v21 = v19[1] - *v19;
            if ( v21 >= v18 )
            {
              if ( v21 != v18 )
              {
                a2 = (_BYTE *)(v20 + v18);
                set_segm_end(v20, v20 + v18, 0);
                v22 = (v20 + v18 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                if ( (unsigned __int8)is_mapped(v22) )
                {
                  if ( !getseg(v22) )
                  {
                    v38 = 0;
                    a2 = nullptr;
                    a7 = NAN;
                    v50 = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)&v37 = v22;
                    v41 = v22 >> 4;
                    v39 = 0;
                    *((_QWORD *)&v37 + 1) = -1;
                    v40 = 513;
                    v42 = -1;
                    v43 = -1;
                    v44 = -1;
                    v45 = -1;
                    v46 = -1;
                    v47 = -1;
                    v48 = -1;
                    v49 = -1;
                    add_segm_ex(&v37, 0, 0, 33);
                  }
                }
              }
              get_word(v16 + 14);
            }
          }
          v8 = v16;
          v23 = getseg(v16);
          if ( v23 )
            break;
        }
        v9 = v16 + 16;
        if ( v9 >= v15 )
          goto LABEL_15;
      }
      v9 = *(_QWORD *)(v23 + 8) + 15LL;
      sub_3490();
    }
    while ( v9 < v15 );
  }
LABEL_15:
  first_seg = (__int64 *)get_first_seg();
  if ( first_seg )
  {
    v29 = 0;
    do
    {
      v30 = *first_seg;
      if ( (unsigned __int8)get_byte(*first_seg) == 0xCD && (unsigned __int8)get_byte(v30 + 1) == 63 )
      {
        set_segm_class(first_seg, "STUBSEG", 0);
        qsnprintf(v51, 32, "stub%03d", v29);
        set_segm_name(first_seg, v51, 0);
        v37 = 0;
        v38 = 0;
        a7 = NAN;
        v42 = -1;
        v43 = -1;
        v44 = -1;
        v45 = -1;
        v46 = -1;
        v47 = -1;
        v48 = -1;
        v49 = -1;
        v39 = 0;
        v41 = 0;
        v50 = 0xFFFFFFFF00000000LL;
        v40 = 515;
        *(_QWORD *)&v37 = (getinf(20, v51, v31, v32, v33, v34) + 15) & 0xFFFFFFFFFFFFFFF0LL;
        v41 = setup_selector((unsigned __int64)v37 >> 4);
        sub_56E0(a1, 0, v30, (__int64 *)&v37, (unsigned int)dword_B490, NAN, a8);
        qsnprintf(v51, 32, "ovr%03d", v29);
        a2 = v51;
        if ( !(unsigned __int8)add_segm_ex(&v37, v51, "OVERLAY", 33) )
          sub_33A0(0);
        sub_7430(v30, (__int64)v51);
        sub_3490();
      }
      v8 = v30;
      ++v29;
      first_seg = (__int64 *)get_next_seg(v30);
    }
    while ( first_seg );
  }
  return sub_5130(a7, a8, v8, (unsigned __int64)a2, v24, v25, v26, v27);
}

