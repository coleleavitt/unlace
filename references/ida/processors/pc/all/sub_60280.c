__int64 __fastcall sub_60280(struct _Unwind_Exception *a1)
{
  unsigned int v1; // ebp
  int v2; // r12d
  char v4; // r13
  int v5; // eax
  char private_2; // dl
  unsigned int private_2_high; // eax
  char v9; // al
  unsigned int v10; // r14d
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rbp
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  _DWORD *v15; // r14
  int v16; // r13d
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rdi
  char v20; // al
  _Unwind_Exception_Cleanup_Fn v21; // r13
  _DWORD *exception_class; // rbp
  __int64 v23; // rsi
  __int64 v24; // rcx
  _Unwind_Word v25; // rbp
  _Unwind_Exception_Class v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  int v30; // edx
  int v31; // edx
  int v32; // r8d
  _Unwind_Word v33; // rdx
  _DWORD *v34; // r15
  int v35; // eax
  int v36; // edx
  bool v37; // sf
  int v38; // eax
  __int64 v39; // rax
  int v40; // esi
  char v41; // al
  char v42; // al
  char v43; // al
  __int32 v44; // edx
  __int64 v45; // rdi
  char v46; // cl
  __int64 v47; // r15
  _Unwind_Exception_Class v48; // r14
  int tinfo_size; // eax
  int v50; // edx
  bool v51; // sf
  int v52; // eax
  __int64 v53; // rax
  int v54; // edx
  char v55; // al
  __int64 v56; // r13
  _Unwind_Exception_Class v57; // r12
  __int64 v58; // r14
  bool v59; // cf
  char tinfo_property; // al
  __int64 v61; // rcx
  char v62; // al
  int v63; // r15d
  _Unwind_Exception_Cleanup_Fn v64; // rdx
  _Unwind_Exception_Class v65; // rax
  __int64 v66; // r14
  __int64 v67; // rax
  char *v68; // rax
  _Unwind_Exception_Class v69; // r14
  __int64 v70; // r13
  __int32 v71; // esi
  __int64 v72; // rax
  int v73; // [rsp+0h] [rbp-C8h]
  _Unwind_Word v74; // [rsp+0h] [rbp-C8h]
  char v75; // [rsp+0h] [rbp-C8h]
  int v76; // [rsp+0h] [rbp-C8h]
  int v77; // [rsp+0h] [rbp-C8h]
  _Unwind_Exception_Class v78; // [rsp+0h] [rbp-C8h]
  char *v79; // [rsp+0h] [rbp-C8h]
  int v80; // [rsp+8h] [rbp-C0h]
  unsigned int v81; // [rsp+8h] [rbp-C0h]
  int v82; // [rsp+8h] [rbp-C0h]
  int v83; // [rsp+8h] [rbp-C0h]
  void (*v84)(_Unwind_Reason_Code, struct _Unwind_Exception *); // [rsp+8h] [rbp-C0h]
  unsigned __int8 v85; // [rsp+17h] [rbp-B1h]
  unsigned __int64 v86; // [rsp+18h] [rbp-B0h]
  int v87; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v88; // [rsp+20h] [rbp-A8h]
  int v89; // [rsp+28h] [rbp-A0h]
  int v90; // [rsp+28h] [rbp-A0h]
  bool v91; // [rsp+2Ch] [rbp-9Ch]
  void *v92; // [rsp+30h] [rbp-98h] BYREF
  __int64 v93; // [rsp+38h] [rbp-90h]
  __int128 v94; // [rsp+40h] [rbp-88h]
  _BYTE v95[24]; // [rsp+50h] [rbp-78h] BYREF
  int v96; // [rsp+68h] [rbp-60h]
  char v97; // [rsp+6Ch] [rbp-5Ch]
  __m128i si128; // [rsp+70h] [rbp-58h]
  __int64 v99; // [rsp+80h] [rbp-48h]
  unsigned __int64 v100; // [rsp+88h] [rbp-40h]

  v2 = 2;
  v100 = __readfsqword(0x28u);
  v4 = getinf_flag();
  v5 = getinf() & 6;
  if ( v5 )
    v2 = 4 * (v5 != 2) + 4;
  private_2 = a1[2].private_2;
  private_2_high = private_2 & 0xF0;
  if ( (private_2 & 0xF0) == 0xC0 )
    private_2_high = HIDWORD(a1->private_2);
  if ( private_2_high <= 0x10 )
    private_2_high = getinf();
  LOBYTE(v1) = private_2_high == 256 || private_2_high == 176;
  if ( (_BYTE)v1 )
    return sub_5DB50(a1, v2);
  v9 = a1[2].private_2;
  v10 = v9 & 0xF0;
  if ( (v9 & 0xF0) == 0xC0 )
  {
    v10 = HIDWORD(a1->private_2);
    if ( v10 > 0x10 )
      goto LABEL_11;
LABEL_18:
    v10 = getinf();
    goto LABEL_11;
  }
  if ( v10 <= 0x10 )
    goto LABEL_18;
LABEL_11:
  if ( (get_tinfo_property() & 0x3F) != 1
    && !(unsigned __int8)sub_5F0A0((int *)&a1[1].exception_cleanup, (__int64)&a1[1], v10) )
  {
    return v1;
  }
  if ( !v4 )
  {
    v85 = sub_58590((__int64 *)a1, 1);
    if ( !v85 )
      return v1;
    if ( (getinf() & 0xF) == 7 && (v10 == 64 || v10 == 112) )
    {
      v92 = 0;
      v94 = 0;
      v93 = 0;
      memset(v95, 0, sizeof(v95));
      sub_59300((unsigned int *)&v92);
      exception_cleanup = a1->exception_cleanup;
      if ( exception_cleanup )
      {
        v73 = 0;
        v12 = 0;
        exception_cleanup = 0;
        v13 = 0;
        v80 = 0;
        do
        {
          v14 = *(_QWORD *)(a1->exception_class + 80 * v13 + 8);
          v15 = (_DWORD *)(a1->exception_class + 80 * v13);
          if ( (get_tinfo_property() & 0xF) == 9 )
          {
            if ( (unsigned __int64)v80 < *(_QWORD *)&v95[8] )
            {
              v87 = *(_DWORD *)(*(_QWORD *)v95 + 4LL * v80);
              cleanup_argloc();
              ++v80;
              exception_cleanup = (_Unwind_Exception_Cleanup_Fn)((char *)exception_cleanup + v14);
              *v15 = 3;
              v15[2] = v87;
              goto LABEL_28;
            }
          }
          else if ( v73 < (unsigned __int64)v94 )
          {
            if ( v14 <= 4 )
            {
              if ( (tinfo_property = get_tinfo_property(), v61 = v73, (tinfo_property & 0x3E) != 0)
                && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
                || (v62 = get_tinfo_property(), v61 = v73, (v62 & 0xF) == 0xA) )
              {
                v63 = *(_DWORD *)(v93 + 4 * v61);
                cleanup_argloc();
                ++v73;
                exception_cleanup = (_Unwind_Exception_Cleanup_Fn)((char *)exception_cleanup + 4);
                *v15 = 3;
                v15[2] = v63;
                goto LABEL_28;
              }
            }
            v73 = *(_DWORD *)&v95[8];
          }
          cleanup_argloc();
          *v15 = 1;
          *((_QWORD *)v15 + 1) = exception_cleanup;
          exception_cleanup = (_Unwind_Exception_Cleanup_Fn)((char *)exception_cleanup + v14);
LABEL_28:
          v13 = ++v12;
        }
        while ( (char *)v12 < (char *)a1->exception_cleanup );
      }
      v45 = *(_QWORD *)v95;
      a1[1].private_2 = (_Unwind_Word)exception_cleanup;
      if ( v45 )
      {
        *(_QWORD *)&v95[8] = 0;
        qfree();
      }
      if ( v93 )
      {
        *(_QWORD *)&v94 = 0;
        qfree();
      }
      return v85;
    }
    v20 = getinf();
    v21 = a1->exception_cleanup;
    v99 = 81;
    si128 = _mm_load_si128((const __m128i *)&xmmword_95150);
    if ( v10 == 96 )
    {
      v56 = (__int64)v21 - 1;
      if ( v56 >= 0 )
      {
        v25 = 0;
        do
        {
          v57 = a1->exception_class + 80 * v56;
          v58 = *(_QWORD *)(v57 + 8);
          cleanup_argloc();
          *(_QWORD *)(v57 + 8) = v25;
          *(_DWORD *)v57 = 1;
          v25 += (unsigned int)v58;
          v59 = v56-- == 0;
        }
        while ( !v59 );
        goto LABEL_48;
      }
      goto LABEL_136;
    }
    if ( v10 > 0x60 )
    {
      if ( v10 != 112 )
      {
        if ( v10 != 128 || !v21 )
          return v1;
        exception_class = (_DWORD *)a1->exception_class;
        cleanup_argloc();
        *exception_class = 3;
        exception_class[2] = 1;
        if ( v21 != (_Unwind_Exception_Cleanup_Fn)((char *)&dword_0 + 1) )
        {
          v23 = 80;
          v24 = 1;
          v25 = 0;
          do
          {
            ++v24;
            v26 = v23 + a1->exception_class;
            v23 += 80;
            v27 = *(_QWORD *)(v26 + 8);
            *(_DWORD *)v26 = 1;
            *(_QWORD *)(v26 + 8) = v25;
            v25 += (unsigned int)v27;
          }
          while ( (_Unwind_Exception_Cleanup_Fn)v24 != v21 );
          goto LABEL_48;
        }
LABEL_136:
        v25 = 0;
LABEL_48:
        a1[1].private_2 = v25;
        return v85;
      }
      v75 = v20;
      v94 = 0;
      v92 = 0;
      v93 = 0;
      memset(v95, 0, sizeof(v95));
      v83 = sub_59300((unsigned int *)&v92);
      v46 = v75 & 0xF;
      v88 = v75 & 0xF;
      if ( v83 > 0 && v21 )
      {
        v76 = 0;
        v91 = v46 == 2;
        v47 = 0;
        v86 = (0x10CuLL >> v46) & 1;
        while ( 1 )
        {
          v48 = a1->exception_class + 80 * v47;
          if ( *(_QWORD *)(v48 + 8) <= 4u )
          {
            if ( v86 && (get_tinfo_property() & 0xF) == 9 )
            {
LABEL_85:
              if ( v88 == 3 )
                goto LABEL_122;
              goto LABEL_86;
            }
            if ( get_tinfo_size() != 3 || !v91 )
            {
              if ( (v55 = getinf() & 0xF, v55 != 1) && (v55 || (unsigned int)getinf() != 11)
                || (get_tinfo_property() & 0xF) != 9
                && (get_tinfo_property() & 0x2F) != 0xD
                && (*(_BYTE *)(v48 + 72) & 2) == 0
                && ((get_tinfo_property() & 0xF) != 0xA || (*(_BYTE *)(v48 + 72) & 4) == 0) )
              {
                v90 = v76 + 1;
                v77 = *(_DWORD *)(v93 + 4LL * v76);
                cleanup_argloc();
                *(_DWORD *)v48 = 3;
                *(_DWORD *)(v48 + 8) = v77;
                v76 = v90;
              }
            }
          }
          else
          {
            if ( !get_tinfo_property() )
              goto LABEL_85;
            tinfo_size = get_tinfo_size();
            v50 = tinfo_size;
            v51 = tinfo_size < 0;
            if ( !tinfo_size )
              goto LABEL_85;
            v52 = tinfo_size + 15;
            if ( !v51 )
              v52 = v50;
            v53 = v52 >> 4;
            v54 = si128.m128i_i32[2 * v53 + 1];
            if ( v54 > 2 )
            {
              if ( *(_QWORD *)v95 )
              {
                *(_QWORD *)&v95[8] = 0;
                qfree();
              }
              if ( !v93 )
                return v1;
LABEL_39:
              *(_QWORD *)&v94 = 0;
              qfree();
              return v1;
            }
            v71 = si128.m128i_i32[2 * v53];
            *(_DWORD *)v48 = 3;
            *(_DWORD *)(v48 + 8) = v54 + v71;
            si128.m128i_i32[2 * v53 + 1] = v54 + 1;
          }
LABEL_86:
          if ( ++v47 >= (unsigned __int64)v21 || v76 >= v83 )
          {
            v72 = 260;
            if ( _bittest64(&v72, v88) )
              goto LABEL_131;
            goto LABEL_122;
          }
        }
      }
      v67 = 260;
      if ( _bittest64(&v67, v88) )
      {
LABEL_131:
        v25 = 0;
        v68 = (char *)v21 - 1;
        if ( (__int64)v21 - 1 >= 0 )
        {
          do
          {
            v69 = a1->exception_class + 80LL * (_QWORD)v68;
            if ( *(_DWORD *)v69 != 3 )
            {
              v79 = v68;
              v70 = *(_QWORD *)(v69 + 8);
              cleanup_argloc();
              *(_DWORD *)v69 = 1;
              v68 = v79;
              *(_QWORD *)(v69 + 8) = v25;
              v25 += (unsigned int)v70;
            }
            v59 = v68-- == 0;
          }
          while ( !v59 );
          goto LABEL_126;
        }
      }
      else if ( v21 )
      {
LABEL_122:
        v64 = 0;
        v25 = 0;
        do
        {
          v65 = a1->exception_class + 80LL * (_QWORD)v64;
          if ( *(_DWORD *)v65 != 3 )
          {
            v84 = v64;
            v66 = *(_QWORD *)(v65 + 8);
            v78 = a1->exception_class + 80LL * (_QWORD)v64;
            cleanup_argloc();
            v64 = v84;
            *(_DWORD *)v78 = 1;
            *(_QWORD *)(v78 + 8) = v25;
            v25 += (unsigned int)v66;
          }
          v64 = (_Unwind_Exception_Cleanup_Fn)((char *)v64 + 1);
        }
        while ( v21 != v64 );
        goto LABEL_126;
      }
      v25 = 0;
LABEL_126:
      if ( *(_QWORD *)v95 )
      {
        *(_QWORD *)&v95[8] = 0;
        qfree();
      }
      if ( v93 )
      {
        *(_QWORD *)&v94 = 0;
        qfree();
      }
      goto LABEL_48;
    }
    if ( v10 == 32 )
      goto LABEL_136;
    if ( v10 <= 0x1F || (v10 & 0xFFFFFFEF) != 0x40 && v10 != 48 )
      return v1;
    v74 = 0;
    v28 = 0;
    if ( !v21 )
      goto LABEL_136;
    while ( 1 )
    {
      v34 = (_DWORD *)(a1->exception_class + 80 * v28);
      if ( get_tinfo_property() )
      {
        v35 = get_tinfo_size();
        v36 = v35;
        v37 = v35 < 0;
        if ( v35 )
        {
          v38 = v35 + 15;
          if ( !v37 )
            v38 = v36;
          v39 = v38 >> 4;
          v40 = si128.m128i_i32[2 * v39 + 1];
          if ( v40 <= 2 )
          {
            v44 = si128.m128i_i32[2 * v39];
            *v34 = 3;
            v34[2] = v40 + v44;
            si128.m128i_i32[2 * v39 + 1] = v40 + 1;
            goto LABEL_61;
          }
          v82 = v36;
          v41 = sub_58790();
          if ( v82 != 8 && !v41 )
            return v1;
          v74 = (v74 + v82 - 1) & -v82;
        }
      }
      v29 = *((_QWORD *)v34 + 1);
      LODWORD(v92) = 0;
      v81 = v29;
      get_tinfo_size();
      v30 = 0;
      if ( (v2 & 0x40000000) != 0 )
      {
        v43 = getinf_flag();
        v32 = (_DWORD)v92 - 1;
        v31 = (int)v92;
        if ( v43 )
          goto LABEL_60;
        v30 = 2 * v2;
      }
      v89 = v30;
      if ( v2 <= v30 )
      {
        v42 = getinf_flag();
        v31 = v89;
        v32 = v89 - 1;
        if ( !v42 )
        {
LABEL_71:
          v32 = v2 - 1;
          v31 = v2;
        }
      }
      else
      {
        if ( !(unsigned __int8)getinf_flag() )
          goto LABEL_71;
        v31 = v89;
        v32 = v89 - 1;
      }
LABEL_60:
      *v34 = 1;
      v33 = (v74 + v32) & -v31;
      *((_QWORD *)v34 + 1) = v33;
      v74 = v33 + v81;
LABEL_61:
      if ( v21 == (_Unwind_Exception_Cleanup_Fn)++v28 )
      {
        v25 = v74;
        goto LABEL_48;
      }
    }
  }
  LOBYTE(v1) = sub_58790() & (v10 != 80);
  if ( (_BYTE)v1 )
  {
    v16 = 0;
    v93 = 0;
    v92 = &unk_96230;
    v17 = 0;
    v18 = a1->exception_cleanup == 0;
    v94 = 0;
    v96 = 0;
    v97 = 0;
    memset(v95, 0, sizeof(v95));
    if ( v18 )
    {
      a1[1].private_2 = 0;
    }
    else
    {
      do
      {
        *(_DWORD *)&v95[8] = 0;
        v1 = sub_5FF40((__int64)&v92, a1->exception_class + 80 * v17, a1->exception_class + 80 * v17 + 64);
        if ( !(_BYTE)v1 )
        {
          v19 = v93;
          goto LABEL_38;
        }
        v17 = ++v16;
      }
      while ( (char *)v16 < (char *)a1->exception_cleanup );
      v19 = v93;
      a1[1].private_2 = v96;
LABEL_38:
      if ( v19 )
        goto LABEL_39;
    }
    return v1;
  }
  return sub_58C60((__int64)a1, 0, (__int64)&unk_96250, 4, 0);
}
