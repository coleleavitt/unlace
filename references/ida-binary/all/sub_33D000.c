__int64 __fastcall sub_33D000(
        __int64 a1,
        int a2,
        _WORD *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v13; // al
  char v14; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128 v17; // xmm0
  char *v18; // rsi
  __int64 ea_name; // rax
  char *v20; // r14
  const char *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r15
  unsigned __int16 v24; // ax
  int v25; // r8d
  int v26; // r9d
  char **p_s2; // rsi
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rcx
  _BYTE *v31; // rdi
  __int64 v32; // r8
  char *v33; // rdx
  _BYTE *v34; // rax
  unsigned __int64 v35; // r9
  _BYTE *v36; // rsi
  int v37; // eax
  __int64 v38; // rbx
  unsigned __int16 v40; // ax
  char *v41; // rdi
  __int64 v42; // r8
  size_t v43; // r9
  __int64 v44; // rax
  char *v45; // rdi
  char v46; // [rsp+Ch] [rbp-ACh]
  int src; // [rsp+10h] [rbp-A8h]
  const void *srca; // [rsp+10h] [rbp-A8h]
  size_t v49; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+18h] [rbp-A0h]
  size_t v51; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+18h] [rbp-A0h]
  __int64 v53; // [rsp+20h] [rbp-98h]
  __int64 v54; // [rsp+20h] [rbp-98h]
  __int64 v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+20h] [rbp-98h]
  __int64 v57[2]; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int16 v58; // [rsp+3Eh] [rbp-7Ah] BYREF
  void *dest; // [rsp+40h] [rbp-78h] BYREF
  __int128 v60; // [rsp+48h] [rbp-70h]
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v62; // [rsp+68h] [rbp-50h]
  unsigned __int64 v63; // [rsp+78h] [rbp-40h]

  v57[0] = a1;
  v63 = __readfsqword(0x28u);
  v13 = is_mapped(a1);
  if ( !v13 )
    return -1;
  v14 = v13;
  if ( a2 == 1 && a3 == nullptr )
    return -1;
  v46 = a2 == 1;
  v58 = 2;
  dest = nullptr;
  v60 = 0;
  s2 = nullptr;
  v17 = 0;
  v62 = 0;
  if ( (get_aflags(v57[0]) & 0x4000) == 0 )
    goto LABEL_44;
  if ( qword_8CD7E8 )
    sub_1F3900(qword_8CD7E8, (const char *)&s2, v15, v16, 0.0);
  v18 = (char *)v57[0];
  ea_name = get_ea_name(&dest, v57[0], 0, 0);
  v20 = s2;
  if ( ea_name <= 0 )
    goto LABEL_10;
  if ( (_QWORD)v62 )
  {
    v18 = s2;
    v21 = &s1;
    if ( !(_QWORD)v60 )
      goto LABEL_9;
    goto LABEL_76;
  }
  v18 = (char *)&s1;
  if ( (_QWORD)v60 )
  {
LABEL_76:
    v21 = (const char *)dest;
LABEL_9:
    if ( strcmp(v21, v18) )
    {
LABEL_10:
      if ( v20 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v20, v18);
      }
      s2 = nullptr;
      v17 = 0;
      v22 = 64;
      v62 = 0;
      goto LABEL_13;
    }
  }
  if ( v20 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v20, v18);
  }
  s2 = nullptr;
  v17 = 0;
  v62 = 0;
LABEL_44:
  v14 = 0;
  v22 = 0;
LABEL_13:
  if ( get_ea_name(&dest, v57[0], v22, 0) <= 0 )
  {
    if ( (get_flags_ex(v57[0], 4) & 0x4000) == 0 )
      get_entry_name(&dest, v57[0]);
    v24 = v58;
  }
  else
  {
    v23 = v60;
    if ( (unsigned __int64)v60 > 1 )
    {
      v45 = s2;
      srca = dest;
      if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)v60 )
      {
        s2 = (char *)qvector_reserve(&s2, s2, v60, 1);
        v45 = s2;
      }
      *(_QWORD *)&v62 = v23;
      memmove(v45, srca, v23 - 1);
      s2[v23 - 1] = 0;
    }
    else
    {
      *(_QWORD *)&v62 = 0;
    }
    v24 = sub_33C9A0(v57[0], v14);
    v58 = v24;
  }
  src = v24;
  do
  {
    if ( a2 == 1 )
    {
      p_s2 = (char **)v57;
      v58 = (32 * *a3) | (v58 >> 1);
      if ( !(unsigned int)sub_507F10(1271, (unsigned int)v57, (unsigned int)&dest, (unsigned int)&v58, v25, v26) )
        goto LABEL_38;
      v40 = (2 * (_BYTE)v58) & 0x3F;
      *a3 = v58 >> 5;
      v58 = v40;
    }
    else
    {
      p_s2 = (char **)v57;
      if ( !(unsigned int)sub_507F10(1148, (unsigned int)v57, (unsigned int)&dest, (unsigned int)&v58, v25, v26) )
        goto LABEL_38;
    }
    v30 = v60;
    if ( (unsigned __int64)v60 > 1 )
    {
      v31 = dest;
      v32 = v60 - 1;
      v33 = (char *)dest + v60 - 1;
      v34 = v33;
      if ( dest < v33 )
      {
        while ( *(v34 - 1) == 32 )
        {
          if ( dest == --v34 )
            goto LABEL_51;
        }
        v32 = v34 - (_BYTE *)dest;
        if ( v34 != dest )
          goto LABEL_26;
LABEL_51:
        if ( !dest )
        {
LABEL_32:
          v36 = v31;
          while ( *v36 == 32 )
          {
            if ( ++v36 == v33 )
            {
              if ( v31 >= v36 )
                goto LABEL_36;
              *v31 = *v36;
              v41 = (char *)dest;
              goto LABEL_49;
            }
          }
          if ( v31 >= v36 )
            goto LABEL_36;
          v53 = v33 - v36;
          v49 = v33 - v36 + 1;
          memmove(v31, v36, v49);
          v42 = v53;
          v36 = dest;
          v43 = v49;
          v41 = (char *)dest;
          if ( v53 )
          {
            v44 = v60;
            if ( (unsigned __int64)v60 < v49 )
            {
              if ( *((_QWORD *)&v60 + 1) < v49 )
              {
                dest = (void *)qvector_reserve(&dest, dest, v49, 1);
                v41 = (char *)dest;
                v42 = v53;
                v44 = v60;
                v43 = v49;
              }
              v55 = v42;
              v51 = v43;
              memset(&v41[v44], 0, v43 - v44);
              v36 = dest;
              v42 = v55;
              *(_QWORD *)&v60 = v51;
            }
            else if ( v49 != (_QWORD)v60 )
            {
              *(_QWORD *)&v60 = v49;
            }
            v36[v42] = 0;
            goto LABEL_36;
          }
LABEL_49:
          if ( v41 )
          {
            *(_QWORD *)&v60 = 0;
            *(double *)v17.m128_u64 = qfree(v41, v36);
            dest = nullptr;
            *((_QWORD *)&v60 + 1) = 0;
          }
          goto LABEL_36;
        }
        *(_QWORD *)&v60 = 0;
        *(double *)v17.m128_u64 = qfree(dest, (const char *)v57);
        dest = nullptr;
        *((_QWORD *)&v60 + 1) = 0;
      }
      else
      {
LABEL_26:
        v35 = v32 + 1;
        if ( (unsigned __int64)v60 < v32 + 1 )
        {
          if ( *((_QWORD *)&v60 + 1) < v35 )
          {
            v56 = v32;
            v52 = v32 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v32 + 1, 1);
            v30 = v60;
            v31 = dest;
            v32 = v56;
            v35 = v52;
          }
          v50 = v35;
          v54 = v32;
          memset(&v31[v30], 0, v35 - v30);
          v34 = (char *)dest + v54;
          *(_QWORD *)&v60 = v50;
        }
        else if ( (_QWORD)v60 != v32 + 1 )
        {
          *(_QWORD *)&v60 = v32 + 1;
        }
        *v34 = 0;
      }
      if ( (unsigned __int64)v60 <= 1 )
        goto LABEL_36;
      v31 = dest;
      v33 = (char *)dest + v60 - 1;
      if ( dest >= v33 )
        goto LABEL_36;
      goto LABEL_32;
    }
LABEL_36:
    p_s2 = &s2;
    v37 = sub_33CC20(v57[0], (const char *)&s2, (__int64)&dest, src, &v58, v46, v17, a5, a6, a7, v28, v29, a10, a11);
  }
  while ( !v37 );
  if ( v37 != 1 )
  {
LABEL_38:
    v38 = -1;
    goto LABEL_39;
  }
  v38 = v57[0];
LABEL_39:
  if ( s2 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(s2, (const char *)p_s2);
  }
  if ( dest )
  {
    *(_QWORD *)&v60 = 0;
    qfree(dest, (const char *)p_s2);
  }
  return v38;
}
