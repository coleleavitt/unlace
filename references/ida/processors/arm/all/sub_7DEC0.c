char __fastcall sub_7DEC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int tinfo_size; // r15d
  int v31; // r15d
  __int64 v32; // rax
  __int64 *v33; // r13
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r14
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  char v43; // al
  int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-E8h]
  __int64 v47; // [rsp+0h] [rbp-E8h]
  __int64 v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+8h] [rbp-E0h]
  __int64 v50; // [rsp+10h] [rbp-D8h]
  __int64 v51; // [rsp+10h] [rbp-D8h]
  _DWORD *v52; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v53; // [rsp+18h] [rbp-D0h]
  _QWORD v54[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v55; // [rsp+30h] [rbp-B8h]
  __int64 v56; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-A0h]
  __int128 v58; // [rsp+50h] [rbp-98h]
  __int64 v59; // [rsp+60h] [rbp-88h]
  __int128 v60; // [rsp+68h] [rbp-80h]
  __int64 v61; // [rsp+78h] [rbp-70h]
  __m128i si128; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  int v64; // [rsp+98h] [rbp-50h]
  char v65; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int64 v66; // [rsp+A8h] [rbp-40h]

  v48 = a1;
  v66 = __readfsqword(0x28u);
  if ( a4 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) != 176 )
      goto LABEL_3;
  }
  else if ( a4 != 176 )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)getinf(88) <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4, v17, v18, v19, v20, v46, a1, v50)
      || (netnode_check(), v22 = netnode_altval(), v22 <= 0x74)
      || (v23 = *(_DWORD *)(get_ph() + 4)) != 0
      && ((v24 = (unsigned int)(v23 - 13), (unsigned int)v24 > 0x3B)
       || (v25 = 0x800000000000005LL, !_bittest64(&v25, v24))
       || v22 == 117) )
    {
LABEL_3:
      if ( !sub_79970(v48, a4, a3, 1) || a4 - 208 <= 0x2F )
      {
        if ( !(unsigned __int8)getinf_flag(3, 4, v7, v8, v9, v10, v46, v48, v50) && (getinf(3) & 0x1006) != 0x1002 )
        {
          tinfo_size = get_tinfo_size();
          if ( a4 != 64 )
          {
            if ( (unsigned __int8)getinf_flag(67, 32, v26, v27, v28, v29, v47, v49, v51) )
            {
              if ( sub_78120(a3, tinfo_size) )
              {
                v56 = 16;
                v57 = 8;
                *(_QWORD *)&v58 = 4;
                if ( (unsigned __int8)sub_79CE0((_DWORD *)a2, (int *)&v56, a3, tinfo_size) )
                  return 1;
              }
            }
          }
          if ( get_tinfo_property() )
          {
            if ( ((tinfo_size - 8) & 0xFFFFFFF7) != 0 )
            {
              if ( !under_debugger )
                interr(10224);
              BUG();
            }
            v31 = tinfo_size >> 2;
            v32 = qalloc_or_throw();
            *(_OWORD *)(v32 + 8) = 0;
            v33 = (__int64 *)v32;
            *(_QWORD *)v32 = 0;
            v54[0] = 0;
            v54[1] = 0;
            v55 = 0xFFFF;
            v34 = *(_QWORD *)(v32 + 8);
            if ( v31 < v34 )
            {
              v41 = v31;
              do
              {
                ++v41;
                cleanup_argloc();
              }
              while ( v41 < v34 );
              v33[1] = v31;
            }
            else if ( v34 < v31 )
            {
              v35 = *(_QWORD *)v32;
              v36 = *(_QWORD *)(v32 + 16);
              if ( (unsigned __int64)v54 < v35 || (unsigned __int64)v54 >= v35 + 24 * v36 )
              {
                if ( v36 >= v31
                  || (v45 = qvector_reserve((__int64)v33, v35, v31, 24), v34 = v33[1], *v33 = v45, v35 = v45, v34 < v31) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v35 + 24 * v34) = 0;
                    copy_argloc();
                    v42 = v35 + 24 * v34++;
                    *(_DWORD *)(v42 + 16) = v55;
                    if ( v34 >= v31 )
                      break;
                    v35 = *v33;
                  }
                }
                v33[1] = v31;
              }
              else
              {
                LODWORD(v56) = 0;
                copy_argloc();
                LODWORD(v58) = v55;
                if ( v33[2] < (unsigned __int64)v31 )
                  *v33 = qvector_reserve((__int64)v33, *v33, v31, 24);
                v37 = v33[1];
                if ( v37 < v31 )
                {
                  do
                  {
                    v53 = v37;
                    v38 = (_DWORD *)(*v33 + 24 * v37);
                    *v38 = 0;
                    v52 = v38;
                    copy_argloc();
                    v37 = v53 + 1;
                    v52[4] = v58;
                  }
                  while ( v31 != v53 + 1 );
                }
                v33[1] = v31;
                cleanup_argloc();
              }
            }
            v39 = 0;
            cleanup_argloc();
            do
            {
              v40 = *v33 + 24 * v39;
              *(_WORD *)(v40 + 16) = 4 * (unsigned __int8)v39;
              cleanup_argloc();
              *(_DWORD *)(v40 + 8) = v39++;
              *(_DWORD *)v40 = 3;
              *(_WORD *)(v40 + 18) = 4;
            }
            while ( v31 != v39 );
            cleanup_argloc();
            if ( v33 )
            {
              *(_DWORD *)a2 = 2;
              *(_QWORD *)(a2 + 8) = v33;
            }
            goto LABEL_7;
          }
          v12 = get_tinfo_size();
          v16 = v12;
          if ( v12 > 16 )
            return 0;
          if ( v12 <= 4 )
          {
            v43 = getinf_flag(3, 32, v13, (unsigned int)v12, v14, v15, v47, v49, v51);
            if ( v16 != 4 && v43 && (get_tinfo_property() & 0x2F) == 0xD )
              v44 = (4 - v16) << 16;
            else
              v44 = 0;
            cleanup_argloc();
            *(_DWORD *)a2 = 3;
            *(_DWORD *)(a2 + 8) = v44;
          }
          else
          {
            sub_7A2A0(a2, 0, (v12 + 3) >> 2, v12, 0);
          }
LABEL_7:
          sub_7A320(v49, (int *)a2, a3, -1);
          return 1;
        }
        LOWORD(v58) = 0;
        v56 = 0;
        v57 = 0x1000000000LL;
        if ( (unsigned int)sub_79430((unsigned int *)&v56, (_DWORD *)a2, a3) == 1 )
          goto LABEL_7;
      }
      return 0;
    }
  }
  v21 = get_tinfo_size();
  if ( !v21 || v21 == -1 )
    return 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v58 = 0;
  v60 = 0;
  sub_23880();
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_89740);
  return 0;
}
