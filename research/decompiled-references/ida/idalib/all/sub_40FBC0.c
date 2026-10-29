__int64 __fastcall sub_40FBC0(
        _QWORD *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int128 *a6,
        char a7)
{
  unsigned __int64 v10; // r12
  __int128 *v11; // rbx
  char *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  int v16; // eax
  int v17; // r15d
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // r8
  char *i; // rcx
  int v24; // eax
  char *v25; // rcx
  _BYTE *v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  const char *v31; // rdi
  int v32; // eax
  char *v33; // rax
  __int64 v34; // rdx
  char *v36; // [rsp+0h] [rbp-358h]
  char *v37; // [rsp+0h] [rbp-358h]
  char v38; // [rsp+8h] [rbp-350h]
  unsigned __int64 v39; // [rsp+8h] [rbp-350h]
  char *ptr; // [rsp+10h] [rbp-348h]
  char *ptra; // [rsp+10h] [rbp-348h]
  unsigned __int64 v42; // [rsp+18h] [rbp-340h]
  char *s1; // [rsp+20h] [rbp-338h] BYREF
  __int128 v44; // [rsp+28h] [rbp-330h]
  __int128 v45; // [rsp+40h] [rbp-318h] BYREF
  __int64 v46; // [rsp+50h] [rbp-308h]
  __int64 v47; // [rsp+58h] [rbp-300h]
  __int64 v48; // [rsp+60h] [rbp-2F8h]
  char v49; // [rsp+68h] [rbp-2F0h] BYREF
  char v50; // [rsp+1A8h] [rbp-1B0h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp-1A8h] BYREF
  __int64 v52; // [rsp+1C0h] [rbp-198h]
  __int64 v53; // [rsp+1C8h] [rbp-190h]
  __int64 v54; // [rsp+1D0h] [rbp-188h]
  char v55; // [rsp+1D8h] [rbp-180h] BYREF
  _QWORD v56[8]; // [rsp+318h] [rbp-40h] BYREF

  v56[0] = __readfsqword(0x28u);
  if ( !a4 || !*(_BYTE *)(a4 + 43) || (*(_WORD *)(a4 + 44) & 0x18) == 8 )
    return 0;
  v10 = a2;
  v45 = -1;
  v11 = a6;
  v12 = &v49;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( &v50 != v12 );
  if ( !a6 )
    v11 = &v45;
  LOBYTE(v13) = sub_40EC30(a1, a2, a3, (__int64)v11);
  v14 = v13;
  if ( !(_BYTE)v13 )
    return 0;
  v16 = is_align_insn(a2);
  if ( v16 > 0 )
  {
    v42 = a2 + v16;
    v18 = sub_3BE900(a1, v42, 4);
    if ( (v18 & 0x1000) != 0 || !sub_40EC30(a1, v42, v18, (__int64)&v45) || (int)is_align_insn(v42) > 0 )
      return 0;
  }
  if ( !a7 )
    goto LABEL_13;
  v27 = *(_QWORD *)a4;
  if ( get_fchunk(a2) )
    goto LABEL_13;
  do
  {
    v28 = sub_3C2650(a1, a2);
    if ( v28 == -1 || v28 < v27 )
      goto LABEL_13;
    v39 = v28;
    v29 = sub_3BE900(a1, v28, 4);
    a2 = v39;
  }
  while ( (v29 & 0x600) == 0x400 && (v29 & 0xF0000000) == 0xB0000000LL );
  if ( !sub_505D70(a1 + 213, v39) )
  {
    if ( (~((unsigned __int16)sub_3BE900(a1, v39, 4) >> 8) & 6) != 0 )
      goto LABEL_13;
    v52 = -1;
    v33 = &v55;
    v53 = 0;
    v54 = 0;
    v51 = -1;
    do
    {
      *(_WORD *)v33 = 0;
      v33 += 40;
      *((_WORD *)v33 - 19) = 0;
      *((_WORD *)v33 - 18) = 0;
      *((_DWORD *)v33 - 2) = 0;
      *((_WORD *)v33 - 17) = 0;
      *((_OWORD *)v33 - 2) = 0;
      *((_QWORD *)v33 - 2) = 0;
    }
    while ( v33 != (char *)v56 );
    if ( !(unsigned int)decode_insn(&v51, v39, v56, 0, 0, 0, 0.0) || !(unsigned __int8)is_ret_insn(&v51, 3, v34) )
      goto LABEL_13;
  }
  if ( (unsigned __int8)sub_40E810(a1, v10) )
  {
LABEL_13:
    if ( a5 == -1 )
    {
      if ( (unsigned __int8)xrefblk_t_first_to(&s1, v10, 2) )
      {
        while ( (unsigned __int8)(BYTE9(v44) - 2) > 1u )
        {
          if ( BYTE9(v44) == 1 && (unsigned __int8)sub_40F960(a1, v10, a3, (unsigned __int64)s1) )
            goto LABEL_15;
          if ( !(unsigned __int8)xrefblk_t_next_to(&s1) )
            goto LABEL_28;
        }
        return 0;
      }
    }
    else
    {
      v38 = sub_40F960(a1, v10, a3, a5);
      if ( v38 )
        goto LABEL_15;
      if ( (unsigned __int8)sub_510230(a1, a5) == 3 )
      {
        v17 = 99;
LABEL_31:
        v44 = 0;
        s1 = nullptr;
        v20 = sub_4CFC20(a1, &s1, v10, 512, 0);
        v22 = s1;
        if ( v20 <= 0 )
        {
          if ( !s1 )
            goto LABEL_60;
          goto LABEL_59;
        }
        if ( s1 )
        {
          for ( i = s1; *i == 95; ++i )
            ;
          ptr = s1;
          v36 = i;
          v24 = strncmp(i, "unwind", 6u);
          v25 = v36;
          v22 = ptr;
          if ( !v24 )
          {
            v26 = v36 + 6;
LABEL_37:
            if ( *v26 != 36 || (unsigned __int8)(v26[1] - 48) > 9u )
              goto LABEL_39;
LABEL_59:
            *(_QWORD *)&v44 = 0;
            qfree(v22);
            goto LABEL_60;
          }
          v31 = v36;
          v37 = ptr;
          ptra = v25;
          v32 = strncmp(v31, "catch", 5u);
          v22 = v37;
          if ( !v32 )
          {
            v26 = ptra + 5;
            goto LABEL_37;
          }
        }
LABEL_39:
        if ( (unsigned int)get_mangled_name_type(v22) != 1 )
        {
          if ( s1 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(s1);
          }
          goto LABEL_15;
        }
        if ( s1 )
        {
          *(_QWORD *)&v44 = 0;
          qfree(s1);
        }
LABEL_60:
        if ( v38 )
        {
          if ( (debug & 1) != 0 )
            goto LABEL_63;
          if ( (~(_WORD)a3 & 0x600) == 0 )
            return v14;
        }
        else
        {
          v30 = sub_3792E0(0x24u, v11, 0, v21, v22);
          v17 = v30;
          if ( (debug & 1) != 0 )
          {
            if ( v30 == 100 )
LABEL_17:
              sub_3879F0();
LABEL_63:
            sub_3879F0();
          }
          if ( (~(_WORD)a3 & 0x600) == 0 )
          {
LABEL_21:
            if ( v17 != 100 )
              return v14;
            goto LABEL_22;
          }
        }
LABEL_20:
        remember_problem(13, v10, 0);
        sub_3A61A0(a1, v10, v10 + 1, 0x19u);
        goto LABEL_21;
      }
    }
LABEL_28:
    v19 = sub_3792E0(0x24u, v11, 0, 0.0);
    v17 = v19;
    if ( v19 <= 50 )
      return 0;
    if ( v19 != 100 )
    {
      v38 = v14;
      goto LABEL_31;
    }
  }
LABEL_15:
  if ( !(unsigned __int8)sub_69F350(*a1, v10, 63) )
  {
    if ( (debug & 1) != 0 )
      goto LABEL_17;
    if ( (~(_WORD)a3 & 0x600) == 0 )
    {
LABEL_22:
      sub_3A61A0(a1, v10, v10 + 1, 0x1Eu);
      return v14;
    }
    v17 = 100;
    goto LABEL_20;
  }
  return 0;
}
