unsigned __int64 __fastcall sub_358F80(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int func_qty; // eax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 *v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 segm_name; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdx
  char *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // r14d
  __int64 v27; // r13
  int v28; // r12d
  unsigned __int64 *func; // rax
  int v30; // eax
  int v31; // r15d
  __int64 *v32; // rdi
  __int64 v33; // rdx
  _DWORD *v34; // rcx
  _DWORD *v35; // rax
  unsigned __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r13
  unsigned __int64 *v46; // rax
  char v47; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int i; // r13d
  __int64 v54; // [rsp+8h] [rbp-390h]
  char *v55; // [rsp+10h] [rbp-388h]
  int v56; // [rsp+10h] [rbp-388h]
  char *v57; // [rsp+18h] [rbp-380h]
  __int64 v58; // [rsp+20h] [rbp-378h] BYREF
  __int128 v59; // [rsp+28h] [rbp-370h]
  __int64 v60; // [rsp+38h] [rbp-360h]
  int v61; // [rsp+40h] [rbp-358h]
  char *s1; // [rsp+50h] [rbp-348h] BYREF
  _BYTE v63[24]; // [rsp+58h] [rbp-340h]
  __int64 v64; // [rsp+70h] [rbp-328h]
  __int128 v65; // [rsp+80h] [rbp-318h] BYREF
  __int64 v66; // [rsp+90h] [rbp-308h]
  __int64 v67; // [rsp+98h] [rbp-300h]
  __int64 v68; // [rsp+A0h] [rbp-2F8h]
  char v69; // [rsp+A8h] [rbp-2F0h] BYREF
  char v70[8]; // [rsp+1E8h] [rbp-1B0h] BYREF
  __int128 v71; // [rsp+1F0h] [rbp-1A8h] BYREF
  __int64 v72; // [rsp+200h] [rbp-198h]
  __int64 v73; // [rsp+208h] [rbp-190h]
  __int64 v74; // [rsp+210h] [rbp-188h]
  char v75; // [rsp+218h] [rbp-180h] BYREF
  unsigned __int64 v76; // [rsp+358h] [rbp-40h] BYREF

  v2 = 0;
  v76 = __readfsqword(0x28u);
  func_qty = get_func_qty();
  v5 = (unsigned int)(func_qty - 1);
  if ( func_qty > 0 )
  {
    while ( 1 )
    {
      v6 = getn_func(v2);
      v7 = (__int64 *)v6;
      if ( !v6 || (*(_QWORD *)(v6 + 16) & 4) != 0 && (*(_BYTE *)(a2 + 607) & 1) == 0 )
        goto LABEL_27;
      v8 = *(_QWORD *)(v6 + 16) & 0x1A0000LL;
      if ( (_DWORD)v8 )
        goto LABEL_27;
      if ( (unsigned __int8)sub_36D490(v6) )
        goto LABEL_27;
      v9 = *v7;
      v54 = *v7;
      if ( (unsigned __int8)is_spec_ea(*v7) )
        goto LABEL_27;
      v10 = getseg(v9);
      if ( !v10 )
        goto LABEL_27;
      s1 = nullptr;
      *(_OWORD *)v63 = 0;
      segm_name = get_segm_name(&s1, v10, 0);
      v14 = s1;
      if ( segm_name <= 0 )
        goto LABEL_15;
      v15 = (char *)::s1;
      v57 = s1;
      if ( *(_QWORD *)v63 )
        v15 = s1;
      v55 = v15;
      v16 = strcmp(v15, "__stub_helper");
      v14 = v57;
      if ( v16
        && (v17 = strcmp(v55, "__symbolstub1"), v14 = v57, v17)
        && (v18 = strcmp(v55, ".MIPS.stubs"), v14 = v57, v18) )
      {
LABEL_15:
        if ( v14 )
        {
          *(_QWORD *)v63 = 0;
          qfree(v14);
        }
        v66 = -1;
        v19 = &v69;
        v67 = 0;
        v68 = 0;
        v65 = -1;
        do
        {
          *(_WORD *)v19 = 0;
          v19 += 40;
          *((_WORD *)v19 - 19) = 0;
          *((_WORD *)v19 - 18) = 0;
          *((_DWORD *)v19 - 2) = 0;
          *((_WORD *)v19 - 17) = 0;
          *((_OWORD *)v19 - 2) = 0;
          *((_QWORD *)v19 - 2) = 0;
        }
        while ( v70 != v19 );
        if ( (unsigned int)decode_insn(&v65, v54, v70, 0, v12, v13, 0.0)
          && (v54 + WORD1(v67) != v7[1] || *((_DWORD *)v7 + 32))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 112) + 144LL))(
                *(_QWORD *)(a2 + 112),
                v54)
          && sub_C98B0(0x2Cu, v54) != 1 )
        {
          v24 = *(_DWORD *)(a2 + 1336);
          if ( (v24 & 0x8000) == 0 )
            goto LABEL_24;
          v58 = 0;
          v60 = 0;
          v61 = -1;
          v59 = 0;
          get_func_ranges(&v58, v7, v20, v21, v22, v23);
          v43 = v58 + 16 * v59;
          if ( v58 == v43 )
            goto LABEL_72;
          v44 = v58;
          do
          {
            v45 = *(_QWORD *)(v44 + 8) + v8;
            v44 += 16;
            v8 = v45 - *(_QWORD *)(v44 - 16);
          }
          while ( v43 != v44 );
          if ( v8 <= 0x3FFF )
          {
LABEL_72:
            if ( v58 )
            {
              *(_QWORD *)&v59 = 0;
              qfree(v58);
            }
LABEL_71:
            v24 = *(_DWORD *)(a2 + 1336);
LABEL_24:
            if ( (v24 & 0x100000) == 0 || find_syseh(v54) != -1 )
              sub_358E80((unsigned int *)a1, v7);
            goto LABEL_27;
          }
          v72 = -1;
          v46 = (unsigned __int64 *)&v75;
          v73 = 0;
          v74 = 0;
          v71 = -1;
          do
          {
            *(_WORD *)v46 = 0;
            v46 += 5;
            *((_WORD *)v46 - 19) = 0;
            *((_WORD *)v46 - 18) = 0;
            *((_DWORD *)v46 - 2) = 0;
            *((_WORD *)v46 - 17) = 0;
            *((_OWORD *)v46 - 2) = 0;
            *(v46 - 2) = 0;
          }
          while ( v46 != &v76 );
          *(_OWORD *)&v63[8] = 0;
          v64 = -1;
          s1 = nullptr;
          *(_QWORD *)v63 = 0xFFFFFFFFLL;
          v64 = *v7;
          v47 = func_tail_iterator_set(&s1, v7, -1);
          v56 = 0;
          for ( i = 0; i != 32 && v47; ++i )
          {
            if ( (unsigned int)decode_insn(&v71, v64, v48, v49, v50, v51, 0.0) )
              v56 += (unsigned __int64)sub_C98B0(0x20u, &v71, 0) >> 63;
            v47 = func_item_iterator_next(&s1, sub_1B1930, 0);
          }
          if ( s1 )
            lock_func_range(s1, 0);
          if ( v58 )
          {
            *(_QWORD *)&v59 = 0;
            qfree(v58);
          }
          if ( v56 <= 2 )
            goto LABEL_71;
        }
      }
      else if ( v14 )
      {
        *(_QWORD *)v63 = 0;
        qfree(v14);
      }
LABEL_27:
      if ( v5 == v2 )
        break;
      ++v2;
    }
  }
  v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v25 == sub_5EAC0 )
    v26 = *(_DWORD *)(a1 + 56);
  else
    v26 = v25(a1);
  v27 = 0;
  v28 = 0;
  if ( v26 > 0 )
  {
    do
    {
      if ( (unsigned __int8)xrefblk_t_first_to(&s1, *(_QWORD *)(*(_QWORD *)(a1 + 176) + 5 * v27 + 32), 1) )
      {
        do
        {
          func = (unsigned __int64 *)get_func(s1);
          if ( func )
          {
            v30 = sub_358D70(a1, *func);
            v31 = v30;
            if ( v30 != -1 && v30 != v28 )
            {
              v32 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * v30);
              v33 = v32[1];
              v34 = (_DWORD *)(*v32 + 4 * v33);
              if ( (_DWORD *)*v32 == v34 )
                goto LABEL_44;
              v35 = (_DWORD *)*v32;
              while ( *v35 != v28 )
              {
                if ( v34 == ++v35 )
                  goto LABEL_44;
              }
              if ( v35 == v34 )
              {
LABEL_44:
                v37 = v33 + 1;
                if ( v32[2] < v37 )
                {
                  v41 = qvector_reserve(v32, *v32, v37, 4);
                  v42 = v32[1];
                  *v32 = v41;
                  v34 = (_DWORD *)(v41 + 4 * v42);
                }
                *v34 = v28;
                ++v32[1];
                v38 = (__int64 *)(v27 + *(_QWORD *)(a1 + 72));
                v39 = v38[1];
                v40 = *v38;
                if ( v38[2] < (unsigned __int64)(v39 + 1) )
                {
                  v40 = qvector_reserve(v38, v40, v39 + 1, 4);
                  *v38 = v40;
                  v39 = v38[1];
                }
                *(_DWORD *)(v40 + 4 * v39) = v31;
                ++v38[1];
              }
            }
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_to(&s1) );
      }
      ++v28;
      v27 += 24;
    }
    while ( v26 != v28 );
  }
  return v76 - __readfsqword(0x28u);
}
