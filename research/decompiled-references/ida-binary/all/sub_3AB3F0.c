__int64 __fastcall sub_3AB3F0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __m128 v11; // xmm0
  unsigned int tinfo_property; // ebx
  char v13; // al
  const char *v14; // r12
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // rdx
  const char *p_s1; // rsi
  int v23; // eax
  char *v24; // rsi
  char *v25; // r12
  unsigned int v26; // eax
  char v27; // al
  unsigned int v28; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  size_t v41; // rbx
  unsigned int v42; // r12d
  char v43; // [rsp+0h] [rbp-78h]
  char v44; // [rsp+0h] [rbp-78h]
  __int16 v45; // [rsp+6h] [rbp-72h] BYREF
  __int64 v46; // [rsp+8h] [rbp-70h] BYREF
  __int64 v47; // [rsp+10h] [rbp-68h] BYREF
  __int64 v48; // [rsp+18h] [rbp-60h] BYREF
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-50h]
  char *s1; // [rsp+40h] [rbp-38h] BYREF
  __int128 v52; // [rsp+48h] [rbp-30h]
  unsigned __int64 v53; // [rsp+58h] [rbp-20h]

  v53 = __readfsqword(0x28u);
  v46 = 0;
  copy_tinfo_t(&v46, a10, a11);
  v11 = 0;
  s2 = nullptr;
  *(_OWORD *)n = 0;
  if ( (v46 & 0x100) != 0 )
  {
    get_tinfo_pdata(&s2, v46, 0);
    v41 = n[0];
    v11 = 0;
    s1 = nullptr;
    v52 = 0;
    if ( n[0] )
    {
      s1 = (char *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v52 + 1) = v41;
      memcpy(s1, s2, v41);
      *(_QWORD *)&v52 = v41;
    }
  }
  else
  {
    s1 = nullptr;
    v52 = 0;
  }
  tinfo_property = get_tinfo_property(v46, 7);
  v13 = get_tinfo_property(v46, 2);
  v14 = "Rename Type\n\n<~T~ype name:q::32::>\n";
  if ( (v13 & 0xF) == 0xD && (v13 & 0x3F) != 0x3D )
    v14 = "Rename Type\n\n  <~T~ype name:q::32::>\n\n    <~I~nclude in the list:C>>\n";
  v45 = 0;
  v15 = get_tinfo_property(v46, 2);
  v21 = v15 & 0xF;
  if ( (_BYTE)v21 != 13 || (v15 & 0x3F) == 0x3D )
  {
    p_s1 = (const char *)&s1;
    v23 = sub_1697D0((int)v14, (__int64)&s1, v21, v16, v17, v18, v11, a2, a3, a4, v19, v20, a7, a8, v43);
  }
  else
  {
    get_tinfo_pdata(&v47, v46, 3);
    is_type_choosable(v47, tinfo_property);
    p_s1 = (const char *)&s1;
    v23 = sub_1697D0((int)v14, (__int64)&s1, (__int64)&v45, v36, v37, v38, v11, a2, a3, a4, v39, v40, a7, a8, v43);
  }
  if ( !v23 )
    goto LABEL_15;
  if ( (unsigned __int64)v52 > 1 )
  {
    v24 = (char *)&::s1;
    if ( n[0] )
      v24 = s2;
    v25 = s1;
    if ( !strcmp(s1, v24) || (v26 = set_tinfo_property4(&v46, 4, v25, 1, 0, 0)) == 0 )
    {
      p_s1 = (_BYTE *)(&dword_0 + 2);
      v27 = get_tinfo_property(v46, 2);
      if ( (v27 & 0xF) == 0xD && (v27 & 0x3F) != 0x3D )
      {
        v42 = v45 & 1;
        get_tinfo_pdata(&v48, v46, 3);
        p_s1 = (const char *)tinfo_property;
        set_type_choosable(v48, tinfo_property, v42);
      }
LABEL_15:
      v28 = 1;
      goto LABEL_16;
    }
    v30 = tinfo_errstr(v26);
    p_s1 = "Failed to rename type";
    sub_169630(
      (int)"%s: %s",
      (__int64)"Failed to rename type",
      v30,
      v31,
      v32,
      v33,
      v11,
      a2,
      a3,
      a4,
      v34,
      v35,
      a7,
      a8,
      v44);
  }
  v28 = 0;
LABEL_16:
  if ( s1 )
  {
    *(_QWORD *)&v52 = 0;
    *(double *)v11.m128_u64 = qfree(s1, p_s1);
  }
  if ( s2 )
  {
    n[0] = 0;
    qfree(s2, p_s1, *(double *)v11.m128_u64);
  }
  clear_tinfo_t(&v46);
  return v28;
}
