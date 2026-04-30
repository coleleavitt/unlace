__int64 __fastcall sub_31FCE0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 result; // rax
  const char *v9; // rsi
  int v10; // ebx
  int v11; // eax
  double v12; // xmm0_8
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  int *v24; // rax
  char *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v37; // rbx
  const char *v38; // r12
  char v39; // [rsp+0h] [rbp-1548h]
  char v40; // [rsp+0h] [rbp-1548h]
  unsigned int v41; // [rsp+Ch] [rbp-153Ch]
  int v42; // [rsp+Ch] [rbp-153Ch]
  char v43; // [rsp+1Fh] [rbp-1529h] BYREF
  void *dest; // [rsp+20h] [rbp-1528h] BYREF
  __int128 v45; // [rsp+28h] [rbp-1520h]
  void *src; // [rsp+40h] [rbp-1508h] BYREF
  __int128 v47; // [rsp+48h] [rbp-1500h]
  int v48; // [rsp+58h] [rbp-14F0h]
  __int64 v49; // [rsp+60h] [rbp-14E8h] BYREF
  _QWORD v50[16]; // [rsp+68h] [rbp-14E0h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-1460h]
  __int64 v52; // [rsp+10F0h] [rbp-458h]
  __int128 v53; // [rsp+10F8h] [rbp-450h]
  char v54[1032]; // [rsp+1110h] [rbp-438h] BYREF
  unsigned __int64 v55; // [rsp+1518h] [rbp-30h]

  v55 = __readfsqword(0x28u);
  if ( byte_8CD8D4
    || !(unsigned __int8)netnode_inited(a1)
    || (unsigned __int8)is_database_flag(8)
    || dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
  {
    return (unsigned int)dword_8CD8D0;
  }
  v9 = nullptr;
  v45 = 0;
  dest = nullptr;
  v10 = reg_int_op("AutoSsMaxCount", 0, 0, 0);
  if ( !v10 )
    goto LABEL_16;
  v49 = 0;
  v50[0] = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  if ( (unsigned __int8)build_snapshot_tree(&v49) )
  {
    src = nullptr;
    v9 = (const char *)sub_319180;
    v48 = 0;
    v47 = 0;
    visit_snapshot_tree(&v49, sub_319180, &src);
    if ( v48 < v10 )
    {
LABEL_13:
      if ( src )
      {
        *(_QWORD *)&v47 = 0;
        qfree(src, v9);
      }
      sub_319CD0((__int64)&v49);
LABEL_16:
      v13 = qtime64();
      qstrftime64(v54, 1024, "%Y-%m-%d %H:%M:%S", v13);
      v49 = 0;
      v50[0] = 1;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v14 = qsnprintf((char *)v50 + 2, 128, "Automatic database snapshot - %s", v54);
      sub_511D30(&v43, 1, v14);
      v15 = 0.0;
      src = nullptr;
      v47 = 0;
      if ( (unsigned __int8)sub_31FB30((char *)&v49, (__int64 *)&src, (__m128)0LL, a2, a3, a4, v16, v17, a7, a8) )
      {
        v9 = (char *)v50 + 2;
        sub_169700(
          (int)"Automatic snapshot created: %s\n",
          (__int64)v50 + 2,
          v18,
          v19,
          v20,
          v21,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v22,
          v23,
          a7,
          a8,
          v39);
        if ( (unsigned __int64)v45 > 1 && (unsigned int)qunlink(dest) )
        {
          v24 = __errno_location();
          v9 = &s1;
          v25 = strerror(*v24);
          if ( (_QWORD)v45 )
            v9 = (const char *)dest;
          sub_169700(
            (int)"Cannot delete old snapshot %s, Error: %s\n",
            (__int64)v9,
            (__int64)v25,
            v26,
            v27,
            v28,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v29,
            v30,
            a7,
            a8,
            v40);
        }
      }
      else
      {
        v9 = &s1;
        if ( (_QWORD)v47 )
          v9 = (const char *)src;
        sub_169700(
          (int)"Failed to create automatic snapshot: %s\n",
          (__int64)v9,
          v18,
          v19,
          v20,
          v21,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v22,
          v23,
          a7,
          a8,
          v39);
      }
      if ( src )
      {
        *(_QWORD *)&v47 = 0;
        v15 = qfree(src, v9);
      }
      sub_511D40(&v43, v15);
      goto LABEL_9;
    }
    v9 = nullptr;
    if ( (unsigned int)reg_int_op("AutoSsOverwrite", 0, 0, 0) && v48 )
    {
      v37 = v47;
      if ( (unsigned __int64)v47 <= 1 )
      {
        *(_QWORD *)&v45 = 0;
        goto LABEL_33;
      }
      v38 = (const char *)src;
      if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)v47 )
        dest = (void *)qvector_reserve(&dest, dest, v47, 1);
      v9 = v38;
      *(_QWORD *)&v45 = v37;
      memmove(dest, v38, v37 - 1);
      *((char *)dest + v37 - 1) = 0;
    }
    if ( (unsigned __int64)v45 > 1 )
      goto LABEL_13;
LABEL_33:
    sub_169630(
      (int)"AUTOHIDE DATABASE\n"
           "Maximum number of automatic snapshots has been reached.\n"
           "Please delete some snapshots before continuing.",
      (__int64)v9,
      v31,
      v32,
      v33,
      v34,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v35,
      v36,
      a7,
      a8,
      v39);
    v11 = dword_8CD8D0;
    if ( src )
    {
      v9 = nullptr;
      v42 = dword_8CD8D0;
      *(_QWORD *)&v47 = 0;
      qfree(src, nullptr);
      v11 = v42;
    }
    goto LABEL_10;
  }
LABEL_9:
  v11 = dword_8CD8D0;
LABEL_10:
  v41 = v11;
  v12 = sub_319CD0((__int64)&v49);
  result = v41;
  if ( dest )
  {
    *(_QWORD *)&v45 = 0;
    qfree(dest, v9, v12);
    return v41;
  }
  return result;
}
