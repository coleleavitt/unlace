__int64 __fastcall sub_334360(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 item_end; // rax
  int flags; // eax
  __int64 v10; // rdi
  const char *v11; // rsi
  int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // r13d
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // rsi
  size_t v22; // rax
  char *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // rcx
  char *v29; // r12
  int v30; // eax
  char *v31; // r13
  int v32; // r15d
  int v33; // r12d
  int v34; // eax
  char *v35; // rax
  char *v36; // rax
  __int64 v37; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 segm_base; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  const char *v44; // rsi
  double v45; // xmm4_8
  double v46; // xmm5_8
  char v47; // [rsp+0h] [rbp-1098h]
  int v48; // [rsp+Ch] [rbp-108Ch]
  char v49; // [rsp+13h] [rbp-1085h]
  unsigned int v50; // [rsp+14h] [rbp-1084h]
  int v51; // [rsp+24h] [rbp-1074h] BYREF
  int v52; // [rsp+28h] [rbp-1070h] BYREF
  int v53; // [rsp+2Ch] [rbp-106Ch] BYREF
  __int64 v54; // [rsp+30h] [rbp-1068h] BYREF
  __int64 v55; // [rsp+38h] [rbp-1060h] BYREF
  __int64 v56; // [rsp+40h] [rbp-1058h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-1050h] BYREF
  char s[4095]; // [rsp+50h] [rbp-1048h] BYREF
  char v59; // [rsp+104Fh] [rbp-49h] BYREF
  _BYTE v60[8]; // [rsp+1050h] [rbp-48h] BYREF
  unsigned __int64 v61; // [rsp+1058h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v49 = sub_1F09E0(0, &v54, &v55);
  if ( !v49 )
  {
    v54 = xmmword_8CC810;
    if ( (BYTE9(xmmword_8CC820) & 6) != 0 )
      item_end = get_item_end(xmmword_8CC810);
    else
      item_end = calc_max_item_end(xmmword_8CC810, 15);
    v55 = item_end;
  }
  v56 = -1;
  v57 = 0;
  flags = get_flags_ex(v54, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0xB0000000LL )
    goto LABEL_8;
  v10 = v54;
  v11 = (const char *)(v55 - v54);
  v12 = sub_32F3B0(
          v54,
          v55 - v54,
          (__int64)"AUTOHIDE DATABASE\nDirectly convert to alignment directive?",
          -1342176256,
          &v56,
          &v57);
  if ( v12 == -1 )
    return 1;
  if ( v12 )
  {
LABEL_8:
    v15 = v55;
    if ( (unsigned __int8)sub_32E680(v54, v55, &v51, &v52) )
    {
      v17 = v52;
      v48 = v51;
      if ( v49 || (v18 = DWORD1(xmmword_8BCDC0), SDWORD1(xmmword_8BCDC0) < v51) || SDWORD1(xmmword_8BCDC0) > v52 )
      {
        v19 = ea2node(v54);
        v15 = 17;
        v20 = netnode_supval(v19, 17, &v53, 4, 65);
        v18 = -1;
        if ( v20 > 0 )
          v18 = v53 - 1;
        if ( v18 < v48 || v18 > v17 )
        {
          v15 = (unsigned int)v48;
          v18 = calc_def_align(v54, (unsigned int)v48, (unsigned int)v17);
        }
      }
      v50 = v18;
      v21 = (_BYTE *)itext(1111, v15, v16);
      qstrncpy(s, v21, 4096);
      v22 = strlen(s);
      v28 = v50;
      v29 = &s[v22];
      if ( v17 - v48 > 11 )
      {
        v17 = v48 + 11;
        v52 = v48 + 11;
      }
      if ( v17 >= v48 )
      {
        v30 = v17;
        v31 = v29;
        v32 = v48;
        v33 = v30;
        while ( 1 )
        {
          v21 = (_BYTE *)(v60 - v31);
          *(double *)a1.m128_u64 = qsnprintf(
                                     v31,
                                     v60 - v31,
                                     "  <~%c~. %4d bytes:R>",
                                     (unsigned int)(v32 + 64),
                                     1 << v32);
          v35 = &v31[v34];
          if ( v32 == v33 )
          {
            if ( v35 >= v60 )
              goto LABEL_45;
            v23 = v35 + 1;
            *v35 = 62;
            v35 = v23;
            if ( v23 >= v60 )
              goto LABEL_25;
          }
          else if ( v35 >= v60 )
          {
            goto LABEL_45;
          }
          v31 = v35 + 1;
          *v35 = 10;
          if ( v35 + 1 >= v60 )
          {
LABEL_25:
            ++v32;
            v59 = 0;
            v31 = &v59;
            if ( v32 > v33 )
            {
LABEL_26:
              v28 = v50;
              v29 = v31;
              break;
            }
          }
          else if ( ++v32 > v33 )
          {
            goto LABEL_26;
          }
        }
      }
      if ( v29 >= v60 )
      {
LABEL_45:
        if ( !under_debugger )
          interr(518, v21, v23, v28, *(double *)a1.m128_u64);
        BUG();
      }
      v36 = v29 + 1;
      *v29 = 10;
      if ( v29 + 1 >= v60 )
      {
        v59 = 0;
        v36 = &v59;
      }
      *v36 = 0;
      v37 = (unsigned int)(v28 - v48);
      LOWORD(v53) = v37;
      if ( !(unsigned int)sub_1697D0(
                            (int)s,
                            (__int64)&v53,
                            (__int64)v23,
                            v37,
                            v24,
                            v25,
                            a1,
                            a2,
                            a3,
                            a4,
                            v26,
                            v27,
                            a7,
                            a8,
                            v47) )
        return 1;
      v39 = v48 + (unsigned __int16)v53;
      v40 = getseg(v54);
      segm_base = get_segm_base(v40);
      v42 = v54;
      v43 = segm_base + (-(1LL << v39) & ((1LL << v39) + v54 - 1 - segm_base));
      v55 = v43;
      if ( v56 != -1 )
      {
        del_items(v56, 2, v57, 0);
        v43 = v55;
        v42 = v54;
      }
      v44 = (const char *)(v43 - v42);
      if ( (unsigned __int8)create_align(v42, v44, v39) )
      {
        sub_1FDB10(*(double *)a1.m128_u64, a2, a3, a4, v45, v46, a7, a8, v42, v44);
        if ( !v49 )
          DWORD1(xmmword_8BCDC0) = v39;
        return 1;
      }
    }
  }
  else
  {
    sub_1FDB10(*(double *)a1.m128_u64, a2, a3, a4, v13, v14, a7, a8, v10, v11);
  }
  return 0;
}
