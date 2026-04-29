__int64 __fastcall sub_3D4DE0(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  unsigned int v6; // eax
  __int64 v8; // rbx
  __int64 v9; // rdx
  const char *v10; // rdi
  __int64 **v11; // rbx
  __int64 v12; // r15
  const char **v14; // rax
  __int64 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char *v22; // r15
  bool v23; // al
  __int64 v24; // rdi
  char v25; // al
  int v26; // eax
  __m128i v27; // xmm0
  _DWORD *v28; // rbx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-160h]
  size_t n; // [rsp+8h] [rbp-158h]
  size_t na; // [rsp+8h] [rbp-158h]
  _QWORD *nb; // [rsp+8h] [rbp-158h]
  char v37; // [rsp+1Fh] [rbp-141h] BYREF
  int v38; // [rsp+20h] [rbp-140h] BYREF
  int v39; // [rsp+24h] [rbp-13Ch] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-138h] BYREF
  char *v41; // [rsp+30h] [rbp-130h] BYREF
  __int128 v42; // [rsp+38h] [rbp-128h]
  unsigned __int64 v43; // [rsp+50h] [rbp-110h] BYREF
  __int128 v44; // [rsp+58h] [rbp-108h]
  __m128i v45; // [rsp+70h] [rbp-F0h] BYREF
  _DWORD v46[7]; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+ACh] [rbp-B4h]
  __int128 v48; // [rsp+B8h] [rbp-A8h]
  __int128 v49; // [rsp+C8h] [rbp-98h]
  _QWORD v50[3]; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v51; // [rsp+F8h] [rbp-68h]
  __m128i v52; // [rsp+108h] [rbp-58h] BYREF
  _DWORD *v53; // [rsp+118h] [rbp-48h]
  __int64 v54; // [rsp+120h] [rbp-40h]
  unsigned __int64 v55; // [rsp+128h] [rbp-38h]

  v6 = *(_DWORD *)a2;
  v55 = __readfsqword(0x28u);
  if ( v6 > 0x2F )
  {
    v14 = *(const char ***)(a2 + 8);
    v11 = (__int64 **)(v14 + 1);
    *(_QWORD *)(a2 + 8) = v14 + 1;
    v10 = *v14;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = v6 + 8;
    *(_DWORD *)a2 = v9;
    v10 = *(const char **)(v8 + v6);
    if ( (unsigned int)v9 <= 0x2F )
    {
      v11 = (__int64 **)(v9 + v8);
      *(_DWORD *)a2 = v6 + 16;
      goto LABEL_4;
    }
    v11 = *(__int64 ***)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v11 + 1;
LABEL_4:
  v12 = 0;
  if ( strncmp(v10, "Microcode-", 0xAu) )
    return v12;
  v15 = *v11;
  v16 = (*v11)[1];
  if ( !v16 )
    goto LABEL_15;
  n = 0;
  v17 = *v15;
  while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "view_index") )
  {
    ++n;
    v17 += 40;
    if ( v16 == n )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v17 + 24) == 1 )
    v33 = *(_QWORD *)(v17 + 32);
  else
LABEL_15:
    LODWORD(v33) = -1;
  v41 = 0;
  v42 = 0;
  v44 = 0;
  v18 = v15[1];
  v43 = 0;
  if ( !v18 )
    return 0;
  na = 0;
  v19 = *v15;
  while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "location") )
  {
    ++na;
    v19 += 40;
    if ( v18 == na )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(v19 + 24) != 2 )
    return 0;
  v20 = *(_QWORD *)(v19 + 32);
  if ( (char **)v20 == &v41 )
  {
LABEL_26:
    v12 = 0;
    goto LABEL_24;
  }
  v21 = *(_QWORD *)(v20 + 8);
  v12 = 0;
  if ( v21 <= 1 )
    goto LABEL_24;
  v22 = *(char **)v20;
  v41 = (char *)qvector_reserve();
  *(_QWORD *)&v42 = v21;
  memmove(v41, v22, v21 - 1);
  v41[v21 - 1] = 0;
  if ( (unsigned __int64)v42 <= 1 || (v42 & 1) == 0 )
  {
    v24 = v43;
    v12 = 0;
    goto LABEL_32;
  }
  v23 = sub_3C72E0((__int64 *)&v43, (__int64 *)&v41);
  v24 = v43;
  v12 = 0;
  if ( v23 )
  {
    *(_QWORD *)v46 = off_4E8410;
    v40 = v43;
    *(_QWORD *)&v46[3] = 3;
    *(_QWORD *)&v46[5] = 0;
    v47 = 0x4900000000LL;
    v48 = -1;
    v49 = -1;
    v25 = sub_3C5930((__int64)v46, &v40, v43 + v44);
    v24 = v43;
    if ( !v25 )
    {
      v12 = 0;
      goto LABEL_32;
    }
    if ( v40 == v43 + (_QWORD)v44 )
    {
      v26 = v47 + 1;
      if ( (int)v47 + 1 < (unsigned int)dword_4ED70C )
        v26 = dword_4ED70C;
      dword_4ED70C = v26;
      nb = sub_3CC1C0(a1, 0, v33, v47);
      v50[0] = 0;
      v50[1] = -1;
      v50[2] = 0;
      v53 = 0;
      v54 = 3;
      v51 = 0;
      v52 = 0;
      if ( (unsigned __int8)sub_3D4D80((__int64)nb, (__int64)v50, v46, 0.0, a4, a5, a6) )
      {
        v27 = _mm_loadu_si128(&v52);
        v52 = 0;
        v45 = v27;
        if ( (unsigned __int8)sub_3CB8E0((__int64)nb, &v45) )
        {
          if ( v45.m128i_i64[1] )
            sub_3CB2E0((volatile signed __int32 *)v45.m128i_i64[1]);
          v28 = v53;
          v29 = (_DWORD *)nb[10];
          nb[10] = v53;
          v53 = v29;
          v30 = sub_3C8070(v15, "is_synchronized", 5);
          if ( v30 )
          {
            if ( *(_DWORD *)v30 != 5 )
            {
              if ( !under_debugger )
                sub_37EA20(1281);
              BUG();
            }
            if ( *(_BYTE *)(v30 + 8) )
              nb[11] = v28;
          }
          v31 = sub_3C8070(v15, "x_cursor_in_view", 1);
          if ( v31 )
          {
            if ( *(_DWORD *)v31 != 1 )
              sub_3C53C0();
            *((_DWORD *)nb + 10) = *(_QWORD *)(v31 + 8);
            memset(&v45, 0, 24);
            sub_3D04F0((__int64)nb, v45.m128i_i64, &v38, &v37, &v39, 0, v28);
            v32 = nb[8];
            if ( v32 && (unsigned int)(*(_DWORD *)(v32 + 60) - 1) >= 2 )
              v32 = 0;
            if ( !(unsigned __int8)sub_3CA840((__int64)nb, nb[10], v32, *((_DWORD *)nb + 10), &v45) )
              *((_DWORD *)nb + 10) = HIDWORD(v54);
            sub_1ACC50(&v45);
          }
          v12 = *nb;
          goto LABEL_41;
        }
        if ( v45.m128i_i64[1] )
          sub_3CB2E0((volatile signed __int32 *)v45.m128i_i64[1]);
      }
      sub_3CBBA0(a1);
      v12 = 0;
LABEL_41:
      sub_3CB360(v50);
      v24 = v43;
    }
  }
LABEL_32:
  if ( v24 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
LABEL_24:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  return v12;
}
