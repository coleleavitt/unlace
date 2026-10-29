unsigned __int64 __fastcall sub_3A1C80(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rax
  __int64 v6; // r14
  unsigned int v7; // eax
  int v8; // r15d
  __int64 v9; // rax
  unsigned int *v10; // r12
  int *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rsi
  int *v14; // rax
  unsigned int i; // eax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  char v19; // al
  char *v20; // r12
  __int64 v21; // rax
  char *v22; // r13
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rdi
  _DWORD *v26; // rsi
  int v27; // r8d
  __int64 v28; // rax
  char *v29; // r14
  __int64 v30; // [rsp-4h] [rbp-1E8h]
  int v31; // [rsp+0h] [rbp-1E4h]
  int v32[2]; // [rsp+4h] [rbp-1E0h]
  __int64 v33; // [rsp+Ch] [rbp-1D8h]
  int v34; // [rsp+Ch] [rbp-1D8h]
  void *v35; // [rsp+14h] [rbp-1D0h]
  __int64 v36; // [rsp+1Ch] [rbp-1C8h] BYREF
  int v37; // [rsp+24h] [rbp-1C0h] BYREF
  char v38; // [rsp+28h] [rbp-1BCh]
  void *ptr; // [rsp+2Ch] [rbp-1B8h] BYREF
  int v40[4]; // [rsp+34h] [rbp-1B0h]
  int v41; // [rsp+44h] [rbp-1A0h]
  int v42[2]; // [rsp+4Ch] [rbp-198h] BYREF
  int v43[2]; // [rsp+54h] [rbp-190h]
  int v44[2]; // [rsp+5Ch] [rbp-188h]
  int v45; // [rsp+64h] [rbp-180h]
  __m128i si128; // [rsp+68h] [rbp-17Ch]
  int v47[2]; // [rsp+7Ch] [rbp-168h]
  int v48; // [rsp+84h] [rbp-160h]
  int v49[2]; // [rsp+8Ch] [rbp-158h]
  int v50; // [rsp+94h] [rbp-150h]
  int v51[2]; // [rsp+9Ch] [rbp-148h]
  int v52; // [rsp+A4h] [rbp-140h]
  int v53[2]; // [rsp+ACh] [rbp-138h]
  int v54; // [rsp+B4h] [rbp-130h]
  int v55[2]; // [rsp+BCh] [rbp-128h]
  int v56; // [rsp+C4h] [rbp-120h]
  int v57[2]; // [rsp+CCh] [rbp-118h] BYREF
  int v58[2]; // [rsp+D4h] [rbp-110h]
  int v59[2]; // [rsp+DCh] [rbp-108h]
  int v60; // [rsp+E4h] [rbp-100h] BYREF
  int v61; // [rsp+ECh] [rbp-F8h]
  int v62; // [rsp+F4h] [rbp-F0h]
  int v63; // [rsp+FCh] [rbp-E8h]
  int v64; // [rsp+104h] [rbp-E0h]
  __int64 v65; // [rsp+10Ch] [rbp-D8h]
  int v66; // [rsp+114h] [rbp-D0h]
  int v67; // [rsp+11Ch] [rbp-C8h]
  int v68; // [rsp+124h] [rbp-C0h]
  int v69; // [rsp+12Ch] [rbp-B8h]
  int v70; // [rsp+134h] [rbp-B0h]
  __int64 v71; // [rsp+13Ch] [rbp-A8h]
  _QWORD v72[8]; // [rsp+1A4h] [rbp-40h] BYREF

  v2 = a1 + 203;
  v4 = *a1;
  v72[0] = __readfsqword(0x28u);
  *(_OWORD *)v40 = 0;
  ptr = nullptr;
  *(_QWORD *)v32 = *(_QWORD *)(v4 + 1344);
  v6 = sub_4EE820(a1 + 203, a2);
  v7 = ea2node(a2);
  if ( netnode_supval(v7, 1, v42, 4, 65) <= 0 || (v8 = v42[0] - 1, !v42[0]) )
    v8 = sub_5B1940(*a1, a2);
  if ( !(unsigned __int8)sub_3FB750(a1, a2) && a2 != (unsigned int)sub_59A020(a1, a2) && v8 != -1 )
  {
LABEL_6:
    sub_39F720((__int64)a1, a2, a2 + 1, 0x1Eu);
    if ( !v6 )
    {
LABEL_10:
      v9 = sub_5AFCE0(a1);
      v10 = (unsigned int *)v9;
      if ( !v9 || (int)sub_5AEEA0(a1, v9, a2) < 0 )
      {
        *(_QWORD *)v57 = -1;
        *(_QWORD *)v59 = 0;
        *(_QWORD *)v58 = 0xFFFFFFFFLL;
        v11 = &v60;
        do
        {
          *(_WORD *)v11 = 0;
          v11 += 6;
          *((_WORD *)v11 - 11) = 0;
          *((_WORD *)v11 - 10) = 0;
          *(v11 - 1) = 0;
          *((_WORD *)v11 - 9) = 0;
          *((_QWORD *)v11 - 2) = 0;
          *(v11 - 2) = 0;
        }
        while ( v72 != (_QWORD *)v11 );
        if ( (~((unsigned __int16)sub_3B9AA0(a1, a2, 4) >> 8) & 6) == 0
          || (int)sub_55E700(
                    (int)a1,
                    a2,
                    v30,
                    v32[0],
                    v33,
                    (int)v35,
                    v36,
                    v37,
                    (int)ptr,
                    v40[0],
                    v40[2],
                    v41,
                    v42[0],
                    v43[0],
                    v44[0],
                    v45,
                    si128.m128i_i32[1],
                    si128.m128i_i32[3],
                    v47[0],
                    v48,
                    v49[0],
                    v50,
                    v51[0],
                    v52,
                    v53[0],
                    v54,
                    v55[0],
                    v56,
                    v57[0],
                    v58[0],
                    v59[0],
                    v60,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71) > 0 )
        {
          v12 = -1;
          if ( v10 )
            v12 = *v10;
          sub_3A0230(a1, a2, v12);
          set_abits(a2, 0x20000000);
        }
      }
      goto LABEL_19;
    }
LABEL_7:
    if ( *(char *)(v6 + 9) >= 0 && *(_DWORD *)v6 == a2 )
      sub_5B9040((int)a1, v30, v32[0], v33, v35, v36, v37, (__int64)ptr);
    goto LABEL_10;
  }
  if ( (get_aflags(a2) & 0x20000000) != 0 )
  {
    if ( a2 != -1 )
      goto LABEL_6;
    if ( !v6 )
      goto LABEL_23;
  }
  else if ( !v6 )
  {
LABEL_23:
    HIBYTE(v35) = 0;
    LODWORD(v35) = -1;
    goto LABEL_24;
  }
  v19 = sub_67EC60(*a1, a2, 31);
  if ( a2 != -1 && v19 )
  {
    sub_39F720((__int64)a1, a2, a2 + 1, 0x1Eu);
    goto LABEL_7;
  }
  if ( *(char *)(v6 + 9) >= 0 )
    goto LABEL_23;
  if ( *(_DWORD *)v6 == a2 )
  {
    v24 = *(_DWORD *)(v6 + 16);
    *(_QWORD *)v42 = 0;
    LODWORD(v35) = v24;
    func_parent_iterator_set(v42, v6);
    v25 = *(_QWORD *)v42;
    v43[0] = 0;
    if ( *(_QWORD *)v42 )
    {
      if ( *(char *)(*(_QWORD *)v42 + 9LL) >= 0 )
        goto LABEL_73;
      if ( *(int *)(*(_QWORD *)v42 + 20LL) > 0 )
      {
        while ( 1 )
        {
          v26 = ptr;
          v27 = *(_DWORD *)(*(_QWORD *)(v25 + 24) + 4LL * v43[0]);
          v28 = *(_QWORD *)v40;
          v37 = v27;
          if ( *(_QWORD *)&v40[2] < (unsigned __int64)(*(_QWORD *)v40 + 1LL) )
          {
            v31 = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)v40 + 1LL, 4);
            v26 = ptr;
            v27 = v31;
            v28 = *(_QWORD *)v40;
          }
          v26[v28] = v27;
          v25 = *(_QWORD *)v42;
          ++*(_QWORD *)v40;
          if ( v43[0] + 1 >= *(_DWORD *)(*(_QWORD *)v42 + 20LL) )
            break;
          ++v43[0];
        }
      }
      if ( v25 )
LABEL_73:
        lock_func_range(v25, 0);
    }
    v29 = (char *)ptr;
    if ( 4LL * *(_QWORD *)v40 )
    {
      do
      {
        sub_5AFCE0(a1);
        sub_5B37D0((int)a1);
        v29 += 4;
      }
      while ( v29 != (char *)ptr + 4 * *(_QWORD *)v40 );
    }
    HIBYTE(v35) = 0;
  }
  else
  {
    if ( (unsigned __int8)is_problem_present(13, a2) )
    {
LABEL_19:
      if ( ptr )
      {
        *(_QWORD *)v40 = 0;
        qfree(ptr);
      }
      return v72[0] - __readfsqword(0x28u);
    }
    remember_problem(13, a2, 0);
    sub_5B2CC0((int)a1, v30, v32[0], v33, (int)v35, v36, v37, (__int64)ptr);
    HIBYTE(v35) = 1;
    LODWORD(v35) = -1;
  }
LABEL_24:
  v42[0] = a2;
  v42[1] = 0;
  *(_QWORD *)v43 = 512;
  *(_QWORD *)v44 = 0xFFFFFFFFLL;
  LOWORD(v45) = 0;
  *(_QWORD *)v47 = 0;
  v48 = 0;
  *(_QWORD *)v49 = 0;
  v50 = 0;
  *(_QWORD *)v51 = 0;
  v52 = 0;
  *(_QWORD *)v53 = 0;
  v54 = 0;
  *(_QWORD *)v55 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  v34 = sub_5ADB00((int)a1, (int)v42, 0);
  if ( v34 == 1 )
  {
    if ( (unsigned __int8)sub_5BA1C0(
                            (int)a1,
                            (int)v42,
                            v30,
                            v32[0],
                            1,
                            v35,
                            v36,
                            v37,
                            (int)ptr,
                            v40[0],
                            v40[2],
                            v41,
                            v42[0],
                            v43[0],
                            v44[0],
                            v45,
                            si128.m128i_i32[1],
                            si128.m128i_i32[3],
                            v47[0],
                            v48,
                            v49[0],
                            v50,
                            v51[0],
                            v52,
                            v53[0],
                            v54,
                            v55[0],
                            v56,
                            v57[0],
                            v58[0],
                            v59[0],
                            v60,
                            v61,
                            v62,
                            v63,
                            v64,
                            v65) )
    {
      v22 = (char *)ptr;
      if ( 4LL * *(_QWORD *)v40 )
      {
        do
        {
          v23 = sub_5AFCE0(a1);
          if ( v23 )
          {
            while ( *(_DWORD *)(v23 + 104) )
            {
              if ( !*(_QWORD *)(v23 + 112) )
              {
                sub_5ACDD0(a1, v23, 1);
                if ( !*(_QWORD *)(v23 + 112) )
                {
                  if ( !under_debugger )
                    interr(548);
                  BUG();
                }
              }
              sub_5B37D0((int)a1);
            }
            sub_5B18C0(a1, v23, 0, 0xFFFFFFFFLL, 0);
          }
          v22 += 4;
        }
        while ( v22 != (char *)ptr + 4 * *(_QWORD *)v40 );
      }
      sub_3A1B40(*(_QWORD **)(*a1 + 1344LL), a2, 0xFFFFFFFF, 1);
    }
  }
  else
  {
    if ( !v34 )
    {
      v13 = (unsigned int)v42[1];
      if ( v42[1] != -1 )
      {
        *(_QWORD *)v57 = -1;
        *(_QWORD *)v59 = 0;
        *(_QWORD *)v58 = 0xFFFFFFFFLL;
        v14 = &v60;
        do
        {
          *(_WORD *)v14 = 0;
          v14 += 6;
          *((_WORD *)v14 - 11) = 0;
          *((_WORD *)v14 - 10) = 0;
          *(v14 - 1) = 0;
          *((_WORD *)v14 - 9) = 0;
          *((_QWORD *)v14 - 2) = 0;
          *(v14 - 2) = 0;
        }
        while ( v14 != (int *)v72 );
        for ( i = decode_prev_insn(v57, v13, v72); ; i = decode_prev_insn(v57, v17, v16) )
        {
          v17 = i;
          if ( i == -1 )
            break;
          if ( !(unsigned int)is_align_insn(i) )
          {
            v38 = 0;
            v37 = -1;
            if ( !(unsigned __int8)sub_3DC190(a1, &v37, v17) )
              break;
            LODWORD(v36) = v17;
            HIDWORD(v36) = a2 + 1;
            sub_39F820(
              (_QWORD *)(*(_QWORD *)v32 + 1600LL),
              (unsigned int *)&v36,
              (unsigned int *)&v36 + 1,
              *(_DWORD *)(*(_QWORD *)v32 + 1664LL));
            if ( (_DWORD)v35 == -1 )
              goto LABEL_52;
            goto LABEL_49;
          }
        }
      }
    }
    if ( (_DWORD)v35 != -1 )
    {
      HIBYTE(v35) = 0;
LABEL_49:
      sub_4DBE60(a1, a2, 8);
      v20 = (char *)ptr;
      if ( 4LL * *(_QWORD *)v40 )
      {
        do
        {
          sub_5AFCE0(a1);
          sub_5B40F0(
            (int)a1,
            v30,
            v32[0],
            v34,
            (int)v35,
            v36,
            v37,
            (int)ptr,
            v40[0],
            v40[2],
            v41,
            v42[0],
            v43[0],
            v44[0],
            v45,
            si128.m128i_i32[1],
            si128.m128i_i32[3],
            *(__int64 *)v47);
          v20 += 4;
        }
        while ( v20 != (char *)ptr + 4 * *(_QWORD *)v40 );
      }
      v21 = sub_4EE820(v2, a2);
      sub_5B0700(a1, v21, (unsigned int)v35);
LABEL_52:
      if ( v34 != 2 && HIBYTE(v35) )
        set_abits(a2, 0x20000000);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v40 = 0;
    qfree(ptr);
  }
  return v72[0] - __readfsqword(0x28u);
}

