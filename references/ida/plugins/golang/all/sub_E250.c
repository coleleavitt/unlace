__int64 __fastcall sub_E250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // r12
  int v8; // r15d
  __int64 v9; // r13
  char byte; // al
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // r12
  char v13; // r13
  int v14; // r15d
  __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // dl
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v22; // rax
  unsigned __int8 v23; // si
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rdx
  _QWORD *func; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  unsigned __int8 v30; // si
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // r13
  int v34; // ebx
  __int64 v35; // r12
  char v36; // al
  char v37; // cl
  unsigned __int8 v38; // si
  char v39; // r8
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  int v42; // r13d
  __int64 v43; // r12
  char v44; // r14
  char v45; // al
  unsigned __int8 v46; // dl
  int v47; // [rsp+0h] [rbp-188h]
  __int64 v48; // [rsp+0h] [rbp-188h]
  int v49; // [rsp+8h] [rbp-180h]
  __int64 v51; // [rsp+18h] [rbp-170h]
  __int64 v52; // [rsp+20h] [rbp-168h]
  __int64 v53; // [rsp+28h] [rbp-160h]
  __int64 dword; // [rsp+38h] [rbp-150h]
  __int64 v55; // [rsp+40h] [rbp-148h]
  __int64 v56; // [rsp+40h] [rbp-148h]
  __int64 v57; // [rsp+50h] [rbp-138h]
  __int64 v58; // [rsp+58h] [rbp-130h]
  __int64 v59; // [rsp+70h] [rbp-118h] BYREF
  __int128 v60; // [rsp+78h] [rbp-110h]
  __int64 v61; // [rsp+90h] [rbp-F8h]
  _BYTE v62[24]; // [rsp+98h] [rbp-F0h]
  __int64 v63; // [rsp+B0h] [rbp-D8h]
  __int16 v64; // [rsp+B8h] [rbp-D0h]
  __int128 v65; // [rsp+C0h] [rbp-C8h]
  __int64 v66; // [rsp+D0h] [rbp-B8h]
  __int64 v67; // [rsp+D8h] [rbp-B0h]
  int v68; // [rsp+E0h] [rbp-A8h]
  __int64 v69; // [rsp+E8h] [rbp-A0h]
  int v70; // [rsp+F0h] [rbp-98h]
  __int64 v71; // [rsp+F8h] [rbp-90h]
  int v72; // [rsp+100h] [rbp-88h]
  __int64 v73; // [rsp+108h] [rbp-80h]
  int v74; // [rsp+110h] [rbp-78h]
  __int64 v75; // [rsp+118h] [rbp-70h]
  __int128 v76; // [rsp+120h] [rbp-68h] BYREF
  void (__fastcall *v77)(__int128 *, __int128 *, __int64); // [rsp+130h] [rbp-58h]
  __int64 v78; // [rsp+138h] [rbp-50h]
  unsigned __int64 v79; // [rsp+148h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  dword = (unsigned int)get_dword();
  v53 = (unsigned int)get_dword();
  v55 = (unsigned int)get_dword();
  v52 = getseg();
  if ( !v52 )
    return sub_5050((__int64)"%a: golang: failed to find segment for pcval tab offset\n", a2);
  if ( dword )
  {
    v22 = *(_QWORD *)(a1 + 24);
    v23 = *(_BYTE *)(a1 + 566);
    v76 = 0;
    v24 = *(_QWORD *)(a1 + 512) + dword;
    v77 = nullptr;
    v78 = 0;
    v25 = sub_D990(*(_QWORD *)(v22 + 16) & v24, v23, (__int64)&v76, 0.0);
    if ( v77 )
      v77(&v76, &v76, 3);
    if ( v25 == -1 )
      return v79 - __readfsqword(0x28u);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v57 = v4 & (a3 + v25);
    if ( v53 )
      goto LABEL_5;
    if ( !v55 )
    {
      v51 = -1;
      v26 = -1;
      goto LABEL_39;
    }
    v51 = -1;
  }
  else
  {
    if ( v53 )
    {
      v57 = -1;
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
LABEL_5:
      v5 = 0;
      v47 = -1;
      v53 = v4 & (*(_QWORD *)(a1 + 512) + v53);
      v6 = v53;
      v59 = 0;
      v51 = a3;
      v60 = 0;
      while ( 1 )
      {
        v61 = 0;
        *(_OWORD *)v62 = 0;
        if ( !(unsigned __int8)is_loaded() )
          goto LABEL_29;
        v7 = v6;
        v8 = 0;
        v9 = 0;
        while ( 1 )
        {
          byte = get_byte();
          v9 |= (unsigned __int64)(byte & 0x7F) << v8;
          v11 = v8 + 7;
          v8 += 7;
          if ( byte >= 0 || v11 > 0x3Fu )
            break;
          ++v7;
        }
        if ( v11 > 0x40u )
          goto LABEL_29;
        v12 = (unsigned __int8)(v7 - v6 + 1) + v6;
        if ( v12 >= *(_QWORD *)(v52 + 8) )
        {
          sub_5050((__int64)"%a: golang: pcfile entry overruns pclntab segment!\n", 0.0);
LABEL_29:
          if ( v61 )
          {
            *(_QWORD *)v62 = 0;
            qfree();
          }
          if ( v59 )
          {
            *(_QWORD *)&v60 = 0;
            qfree();
          }
          return v79 - __readfsqword(0x28u);
        }
        if ( !(_DWORD)v9 && v6 != v53 )
          break;
        v47 += ((int)v9 >> 1) ^ -(v9 & 1);
        create_data();
        get_dword();
        get_strlit_contents();
        sub_CCD0(&v59);
        set_cmt();
        if ( !(unsigned __int8)is_loaded() )
          goto LABEL_29;
        v13 = v12;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = get_byte();
          v15 |= (unsigned __int64)(v16 & 0x7F) << v14;
          v17 = v14 + 7;
          v14 += 7;
          if ( v16 >= 0 || v17 > 0x3Fu )
            break;
          ++v13;
        }
        if ( v17 > 0x40u )
          goto LABEL_29;
        v18 = v15 * *(unsigned __int8 *)(a1 + 566);
        v19 = (unsigned __int8)(v13 - v12 + 1);
        v5 += v18;
        create_data();
        sub_CCD0(&v59);
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + v5);
        if ( *(_BYTE *)(a1 + 560) )
          add_sourcefile();
        set_cmt();
        v6 = v12 + v19;
        if ( v61 )
        {
          *(_QWORD *)v62 = 0;
          qfree();
        }
        v51 = v20;
      }
      if ( v61 )
      {
        *(_QWORD *)v62 = 0;
        qfree();
      }
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree();
      }
      v26 = -1;
      if ( v55 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        goto LABEL_60;
      }
      goto LABEL_57;
    }
    if ( !v55 )
      return v79 - __readfsqword(0x28u);
    v51 = -1;
    v57 = -1;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  }
LABEL_60:
  v29 = *(_QWORD *)(a1 + 512) + v55;
  v77 = nullptr;
  v30 = *(_BYTE *)(a1 + 566);
  v78 = 0;
  v56 = v4 & v29;
  v76 = 0;
  v31 = sub_D990(v4 & v29, v30, (__int64)&v76, 0.0);
  if ( v77 )
    v77(&v76, &v76, 3);
  if ( v31 == -1 )
    return v79 - __readfsqword(0x28u);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + v31);
  if ( *(_BYTE *)(a1 + 560) )
  {
    v32 = v56;
    v58 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + v31);
    v49 = -1;
    v48 = 0;
    while ( (unsigned __int8)is_loaded() )
    {
      v33 = v32;
      v34 = 0;
      v35 = 0;
      do
      {
        v36 = get_byte();
        v37 = v34;
        v38 = v34 + 7;
        v39 = v33++;
        v34 += 7;
        v35 |= (unsigned __int64)(v36 & 0x7F) << v37;
      }
      while ( v36 < 0 && v38 <= 0x3Fu );
      if ( v38 > 0x40u )
        break;
      v40 = v32 + (unsigned __int8)(v39 + 1 - v32);
      if ( v40 >= *(_QWORD *)(v52 + 8) )
        return sub_5050((__int64)"%a: golang: pcline entry overruns pclntab segment!\n", v56);
      if ( !(_DWORD)v35 && v32 != v56 )
      {
        v53 |= v56;
        v26 = v58;
        goto LABEL_57;
      }
      v49 += ((int)v35 >> 1) ^ -(v35 & 1);
      if ( !(unsigned __int8)is_loaded() )
        return v79 - __readfsqword(0x28u);
      v41 = v40;
      v42 = 0;
      v43 = 0;
      do
      {
        v44 = v41++;
        v45 = get_byte();
        v43 |= (unsigned __int64)(v45 & 0x7F) << v42;
        v46 = v42 + 7;
        v42 += 7;
      }
      while ( v45 < 0 && v46 <= 0x3Fu );
      if ( v46 > 0x40u )
        return v79 - __readfsqword(0x28u);
      v48 += v43 * *(unsigned __int8 *)(a1 + 566);
      set_source_linnum();
      v32 = (unsigned __int8)(v44 + 1 - v40) + v40;
    }
    return v79 - __readfsqword(0x28u);
  }
  v53 |= v56;
LABEL_57:
  if ( !(v53 | dword) )
    return v79 - __readfsqword(0x28u);
LABEL_39:
  if ( !*(_BYTE *)(a1 + 561) )
  {
LABEL_51:
    v57 = -1;
    goto LABEL_44;
  }
  if ( v57 == -1 || a3 == v57 || v26 != v57 || v51 != v57 )
  {
    sub_5050((__int64)"%a: golang: funcinfo has inconsistent pcval tables\n", 0.0);
    goto LABEL_51;
  }
LABEL_44:
  func = (_QWORD *)get_func();
  v28 = func;
  if ( !func )
  {
    v63 = 0;
    v66 = 0xFFFFFFFFLL;
    *(__m128i *)&v62[8] = _mm_load_si128((const __m128i *)&xmmword_23E10);
    v64 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v61 = a3;
    *(_QWORD *)v62 = v57;
    v65 = 0;
    find_func_bounds();
    *(_QWORD *)v62 = v57;
    add_func_ex();
    return v79 - __readfsqword(0x28u);
  }
  if ( *func != a3 )
    set_func_start();
  if ( v57 == -1 || v28[1] == v57 )
    return v79 - __readfsqword(0x28u);
  return set_func_end();
}
