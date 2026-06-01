__int64 __fastcall sub_618FD0(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char *src,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        __int64 a13,
        int a14,
        int a15,
        void *a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        int a24,
        __int64 a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  unsigned __int64 v36; // rbx
  __int16 v39; // r14
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v43; // r14d
  unsigned __int64 *v44; // rax
  char v45; // al
  int v46; // esi
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  unsigned int v55; // eax
  __int64 tinfo_property; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rax
  unsigned int v60; // r14d
  int v61; // [rsp+0h] [rbp-68h]
  int v62; // [rsp+0h] [rbp-68h]
  int v63; // [rsp+8h] [rbp-60h]
  int v64; // [rsp+8h] [rbp-60h]
  unsigned int v65; // [rsp+Ch] [rbp-5Ch]
  char v66; // [rsp+Ch] [rbp-5Ch]
  char v67; // [rsp+Ch] [rbp-5Ch]
  char v68; // [rsp+10h] [rbp-58h]
  char v69; // [rsp+10h] [rbp-58h]
  void *ptr; // [rsp+18h] [rbp-50h] BYREF
  __int64 v71; // [rsp+20h] [rbp-48h] BYREF
  int v72[2]; // [rsp+28h] [rbp-40h]
  __int64 v73; // [rsp+30h] [rbp-38h]

  *(_QWORD *)v72 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v36 = a2;
  if ( !*(_BYTE *)a3 )
    goto LABEL_3;
  ptr = nullptr;
  v43 = (unsigned int)sub_3C5DC0((__int64)a1, a2);
  if ( (v43 & 0x800) != 0 && (unsigned __int8)sub_694940(a1, &ptr, a2) )
  {
    if ( (get_tinfo_property(ptr, 2) & 0xF) == 0xB
      && (v71 = 0,
          tinfo_property = get_tinfo_property(ptr, 11),
          v57 = *a3,
          v71 = tinfo_property,
          v66 = compare_tinfo(tinfo_property, v57, 1),
          clear_tinfo_t(&v71),
          v66)
      || ((v46 = 2, (get_tinfo_property(*a3, 2) & 0xF) != 0xB)
       || (v58 = *a3,
           v71 = 0,
           v59 = get_tinfo_property(v58, 11),
           v46 = (int)ptr,
           v71 = v59,
           v67 = compare_tinfo(v59, ptr, 1),
           clear_tinfo_t(&v71),
           !v67))
      && (score_tinfo((int)&ptr, v46, v47, v48, v49, v50, v61, v63, v68, ptr, v71, v72[0], v73),
          v55 = score_tinfo((int)a3, v46, v51, v52, v53, v54, v62, v64, v69, ptr, v71, v72[0], v73),
          v65 >= v55)
      && (v55 != v65 || (v60 = v43 & 0xC2000000, v60 != 0x40000000) && v60 != 0x80000000 && v60 != -1073741824) )
    {
      clear_tinfo_t(&ptr);
LABEL_3:
      v39 = sub_3BE900(a1, v36, 4);
      goto LABEL_4;
    }
  }
  clear_tinfo_t(&ptr);
  v39 = sub_3BE900(a1, v36, 4);
  if ( (v39 & 0x600) == 0x200 )
  {
LABEL_4:
    if ( src )
      goto LABEL_5;
    return 1;
  }
  v71 = 0;
  copy_tinfo_t(&v71);
  set_tinfo_property((unsigned __int64 *)&v71, 6u, 192);
  if ( (get_tinfo_property(v71, 2) & 0xF) != 0xC )
  {
    v44 = sub_505D70((__int64)(a1 + 203), v36);
    if ( v44 )
    {
      v45 = *((_BYTE *)v44 + 42);
      if ( v45 )
      {
        if ( (v45 & 2) == 0 && (_BYTE)v71 )
          v71 |= 0x40uLL;
      }
    }
  }
  if ( !(unsigned __int8)sub_6185D0(a1, (void *)v36, (__int64)&v71, 2u) )
  {
    clear_tinfo_t(&v71);
    return 0;
  }
  clear_tinfo_t(&v71);
  if ( !src )
    return 1;
LABEL_5:
  if ( (v39 & 0xC000) == 0x4000 || !strcmp(src, "this") || !strcmp(src, "retstr") )
    return 0;
  if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xC && (*(_BYTE *)(qword_2CCB598 + 940) & 8) != 0 )
    v36 &= ~1uLL;
  return sub_4D7EC0(
           a1,
           v36,
           src,
           0x120u,
           v40,
           v41,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35);
}
