__int64 __fastcall sub_3FC940(_QWORD *a1, unsigned int a2, int a3, __int64 a4, unsigned int a5, _QWORD *a6, char a7)
{
  unsigned int v10; // r12d
  _QWORD *v11; // rbx
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
  unsigned int v27; // r15d
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  const char *v31; // rdi
  int v32; // eax
  char *v33; // rax
  __int64 v34; // rdx
  char *v36; // [rsp+0h] [rbp-238h]
  char *v37; // [rsp+0h] [rbp-238h]
  char v38; // [rsp+8h] [rbp-230h]
  unsigned int v39; // [rsp+8h] [rbp-230h]
  char *ptr; // [rsp+10h] [rbp-228h]
  char *ptra; // [rsp+10h] [rbp-228h]
  unsigned int v42; // [rsp+1Ch] [rbp-21Ch]
  char *s1; // [rsp+20h] [rbp-218h] BYREF
  __int128 v44; // [rsp+28h] [rbp-210h]
  _QWORD v45[3]; // [rsp+40h] [rbp-1F8h] BYREF
  char v46; // [rsp+58h] [rbp-1E0h] BYREF
  char v47; // [rsp+118h] [rbp-120h] BYREF
  _QWORD v48[3]; // [rsp+120h] [rbp-118h] BYREF
  char v49; // [rsp+138h] [rbp-100h] BYREF
  _QWORD v50[8]; // [rsp+1F8h] [rbp-40h] BYREF

  v50[0] = __readfsqword(0x28u);
  if ( !a4 || !*(_BYTE *)(a4 + 23) || (*(_WORD *)(a4 + 24) & 0x18) == 8 )
    return 0;
  v10 = a2;
  v45[2] = 0;
  v11 = a6;
  v45[0] = -1;
  v45[1] = 0xFFFFFFFFLL;
  v12 = &v46;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 24;
    *((_WORD *)v12 - 11) = 0;
    *((_WORD *)v12 - 10) = 0;
    *((_DWORD *)v12 - 1) = 0;
    *((_WORD *)v12 - 9) = 0;
    *((_QWORD *)v12 - 2) = 0;
    *((_DWORD *)v12 - 2) = 0;
  }
  while ( &v47 != v12 );
  if ( !a6 )
    v11 = v45;
  LOBYTE(v13) = sub_3FBAA0((__int64)a1, a2, a3, (__int64)v11);
  v14 = v13;
  if ( !(_BYTE)v13 )
    return 0;
  v16 = is_align_insn(a2);
  if ( v16 > 0 )
  {
    v42 = a2 + v16;
    v18 = sub_3B9AA0((__int64)a1, a2 + v16, 4);
    if ( (v18 & 0x1000) != 0 || !sub_3FBAA0((__int64)a1, v42, v18, (__int64)v45) || (int)is_align_insn(v42) > 0 )
      return 0;
  }
  if ( !a7 )
    goto LABEL_13;
  v27 = *(_DWORD *)a4;
  if ( get_fchunk(a2) )
    goto LABEL_13;
  do
  {
    v28 = sub_3BD5D0((__int64)a1, a2);
    if ( v28 == -1 || v28 < v27 )
      goto LABEL_13;
    v39 = v28;
    v29 = sub_3B9AA0((__int64)a1, v28, 4);
    a2 = v39;
  }
  while ( (v29 & 0x600) == 0x400 && (v29 & 0xF0000000) == 0xB0000000LL );
  if ( !sub_4EE820(a1 + 203, v39) )
  {
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v39, 4) >> 8) & 6) != 0 )
      goto LABEL_13;
    v48[2] = 0;
    v48[0] = -1;
    v48[1] = 0xFFFFFFFFLL;
    v33 = &v49;
    do
    {
      *(_WORD *)v33 = 0;
      v33 += 24;
      *((_WORD *)v33 - 11) = 0;
      *((_WORD *)v33 - 10) = 0;
      *((_DWORD *)v33 - 1) = 0;
      *((_WORD *)v33 - 9) = 0;
      *((_QWORD *)v33 - 2) = 0;
      *((_DWORD *)v33 - 2) = 0;
    }
    while ( v33 != (char *)v50 );
    if ( !(unsigned int)decode_insn(v48, v39, v50, 0, 0, 0) || !(unsigned __int8)is_ret_insn(v48, 3, v34) )
      goto LABEL_13;
  }
  if ( (unsigned __int8)sub_3FB6A0(a1, v10) )
  {
LABEL_13:
    if ( a5 == -1 )
    {
      if ( (unsigned __int8)xrefblk_t_first_to(&s1, v10, 2) )
      {
        while ( (unsigned __int8)(BYTE1(v44) - 2) > 1u )
        {
          if ( BYTE1(v44) == 1 && (unsigned __int8)sub_3FC6F0((__int64)a1, v10, a3, (unsigned int)s1) )
            goto LABEL_15;
          if ( !(unsigned __int8)xrefblk_t_next_to(&s1) )
            goto LABEL_28;
        }
        return 0;
      }
    }
    else
    {
      v38 = sub_3FC6F0((__int64)a1, v10, a3, a5);
      if ( v38 )
        goto LABEL_15;
      if ( (unsigned __int8)sub_4F8910(a1, a5) == 3 )
      {
        v17 = 99;
LABEL_31:
        v44 = 0;
        s1 = nullptr;
        v20 = sub_4B8DF0(a1, &s1, v10, 512, 0);
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
          v30 = sub_375980(0x24u, v11, 0, v21, v22);
          v17 = v30;
          if ( (debug & 1) != 0 )
          {
            if ( v30 == 100 )
LABEL_17:
              sub_383DA0();
LABEL_63:
            sub_383DA0();
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
        sub_3A1A90(a1, v10, v10 + 1, 0x19u);
        goto LABEL_21;
      }
    }
LABEL_28:
    v19 = sub_375980(0x24u, v11, 0);
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
  if ( !(unsigned __int8)sub_67EC60(*a1, v10, 63) )
  {
    if ( (debug & 1) != 0 )
      goto LABEL_17;
    if ( (~(_WORD)a3 & 0x600) == 0 )
    {
LABEL_22:
      sub_3A1A90(a1, v10, v10 + 1, 0x1Eu);
      return v14;
    }
    v17 = 100;
    goto LABEL_20;
  }
  return 0;
}

