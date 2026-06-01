__int64 __fastcall sub_34CEB0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  char *v11; // rbp
  const char *segm_by_sel; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rax
  __int64 ph; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  int v27; // ebx
  __int64 v28; // r14
  char v29; // al
  const char *v30; // r13
  __int64 sreg; // r15
  int v32; // r8d
  int v33; // eax
  char *v34; // r13
  int v35; // eax
  _BYTE *v36; // rax
  char v37; // [rsp+0h] [rbp-478h]
  __int64 v38; // [rsp+0h] [rbp-478h]
  const char *v39; // [rsp+10h] [rbp-468h] BYREF
  __int128 v40; // [rsp+18h] [rbp-460h]
  char v41[1023]; // [rsp+30h] [rbp-448h] BYREF
  char v42; // [rsp+42Fh] [rbp-49h] BYREF
  _BYTE v43[8]; // [rsp+430h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+438h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 88);
  v44 = __readfsqword(0x28u);
  if ( sub_1E73C0(0x44u, v9) < 0 )
    return 1;
  v11 = v41;
  ea2str(v41, 1024, *(_QWORD *)(a1 + 88));
  segm_by_sel = v41;
  sub_169700((int)"%s: ", (__int64)v41, v13, v14, v15, v16, a2, a3, a4, a5, v17, v18, a8, a9, v37);
  v19 = *(_QWORD *)(a1 + 88);
  v41[0] = 0;
  v38 = v19;
  ph = get_ph("%s: ", v41);
  v27 = *(_DWORD *)(ph + 68);
  v28 = ph;
  if ( v27 > *(_DWORD *)(ph + 72) )
  {
    v34 = v41;
    goto LABEL_30;
  }
  v29 = 0;
  do
  {
    if ( *(_DWORD *)(v28 + 80) != v27 )
    {
      if ( !v29 )
      {
LABEL_7:
        v30 = (const char *)(v43 - v11);
        goto LABEL_8;
      }
LABEL_39:
      v34 = v11;
      do
      {
        while ( 2 )
        {
          if ( v34 >= v43 )
          {
LABEL_37:
            if ( under_debugger )
              goto LABEL_44;
            interr(518, segm_by_sel, v21, v22, *(double *)a2.m128_u64);
            goto LABEL_39;
          }
          v11 = v34 + 1;
          *v34 = 32;
          if ( v34 + 1 < v43 )
            goto LABEL_7;
          v42 = 0;
          v30 = (_BYTE *)(&dword_0 + 1);
          v11 = &v42;
LABEL_8:
          segm_by_sel = v30;
          sreg = get_sreg(v38);
          v32 = 2 * *(_DWORD *)(v28 + 76);
          if ( !v32 )
            v32 = 4;
          *(double *)a2.m128_u64 = qsnprintf(
                                     v11,
                                     v30,
                                     "%s=%0*a",
                                     *(const char **)(*(_QWORD *)(v28 + 56) + 8LL * v27),
                                     v32,
                                     *(double *)a2.m128_u64);
          v34 = &v11[v33];
          if ( (*(_BYTE *)(v28 + 9) & 0x40) != 0 && *(_DWORD *)(v28 + 84) != v27 )
            goto LABEL_12;
          segm_by_sel = (const char *)get_segm_by_sel(sreg);
          if ( !segm_by_sel )
            goto LABEL_12;
          if ( v34 >= v43 )
            goto LABEL_37;
          v11 = v34 + 1;
          *v34 = 40;
          if ( v34 + 1 >= v43 )
          {
            v42 = 0;
            v11 = &v42;
          }
          a2 = 0;
          v39 = nullptr;
          v40 = 0;
          get_segm_name(&v39, segm_by_sel, 0);
          segm_by_sel = &s1;
          if ( (_QWORD)v40 )
            segm_by_sel = v39;
          v36 = (_BYTE *)qstpncpy(v11, segm_by_sel, v43 - v11);
          if ( v36 >= v43 )
          {
            if ( !under_debugger )
            {
              interr(518, segm_by_sel, v21, v22, 0.0);
              goto LABEL_42;
            }
LABEL_44:
            BUG();
          }
          v34 = v36 + 1;
          *v36 = 41;
          if ( v36 + 1 >= v43 )
          {
            v42 = 0;
            v34 = &v42;
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            *(double *)a2.m128_u64 = qfree(v39, segm_by_sel);
            v35 = v27 + 1;
            if ( v27 + 1 > *(_DWORD *)(v28 + 72) )
              goto LABEL_29;
          }
          else
          {
LABEL_12:
            v35 = v27 + 1;
            if ( v27 + 1 > *(_DWORD *)(v28 + 72) )
              goto LABEL_29;
          }
          if ( v35 != *(_DWORD *)(v28 + 80) )
          {
            v27 = v35;
            continue;
          }
          break;
        }
        v27 += 2;
        if ( v27 > *(_DWORD *)(v28 + 72) )
          goto LABEL_29;
      }
      while ( v27 != *(_DWORD *)(v28 + 80) );
      v11 = v34;
      v29 = 1;
    }
    ++v27;
  }
  while ( v27 <= *(_DWORD *)(v28 + 72) );
  v34 = v11;
LABEL_29:
  if ( v34 >= v43 )
  {
LABEL_42:
    if ( !under_debugger )
      interr(519, segm_by_sel, v21, v22, *(double *)a2.m128_u64);
    goto LABEL_44;
  }
LABEL_30:
  *v34 = 0;
  sub_169700((int)"%s\n", (__int64)v41, v21, v22, v23, v24, a2, a3, a4, a5, v25, v26, a8, a9, v38);
  return 1;
}
