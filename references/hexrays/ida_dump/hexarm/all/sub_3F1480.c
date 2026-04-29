__int64 __fastcall sub_3F1480(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _BYTE *a6)
{
  bool v9; // zf
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char v21; // r14
  unsigned int v22; // r15d
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int *i; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  int j; // r14d
  int v32; // r14d
  unsigned int *v33; // rdi
  unsigned int v34; // eax
  int v35; // esi
  bool v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  int v41; // esi
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  char v50; // [rsp+8h] [rbp-110h]
  __int64 v51; // [rsp+10h] [rbp-108h] BYREF
  unsigned int *v52; // [rsp+18h] [rbp-100h] BYREF
  __int64 v53[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+38h] [rbp-E0h]
  __int64 v56[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-B0h]
  __int64 v59; // [rsp+80h] [rbp-98h] BYREF
  __int64 v60; // [rsp+88h] [rbp-90h]
  __int64 v61; // [rsp+90h] [rbp-88h] BYREF
  __m128i v62; // [rsp+98h] [rbp-80h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-60h]
  __int64 *v65; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+D8h] [rbp-40h]

  v9 = a1[20] == 8;
  v67 = __readfsqword(0x28u);
  if ( !v9 )
  {
    v22 = getinf_flag(67, 32);
    if ( !(_BYTE)v22 )
    {
      if ( !sub_64330(a5, a1[89]) )
      {
        if ( !(unsigned __int8)sub_64280(a5) || a5[3] )
          *a6 = 1;
        v24 = a5[2];
        a5[1] = 0;
        if ( v24 )
        {
          a5[3] = 0;
          qfree(v24);
          a5[2] = 0;
          a5[4] = 0;
        }
      }
      return v22;
    }
  }
  v53[0] = 0;
  v53[1] = 0;
  v54 = 0;
  v55 = 0;
  if ( a3 || !(unsigned __int8)sub_3399E0((unsigned __int64)&v51, &v52, a2) )
    goto LABEL_3;
  for ( i = v52; ; v52 = i )
  {
    v22 = sub_3F11F0((__int64)a1, v53, v51, i);
    if ( (_BYTE)v22 )
      break;
    i = *((unsigned int **)v52 + 2);
  }
  sub_3397B0((__int64)v56, a2, v51, (__int64)v52);
  sub_64040(v56, v53, v27, v28, v29, v30);
  sub_318020(&v57, (__int64)&v54);
  if ( (unsigned __int8)sub_64460(v56, a1[122], 16) )
  {
    for ( j = 0; !sub_64330(v56, j + a1[122]); ++j )
      ;
    v32 = sub_645A0(v56, j + a1[122]) + j;
LABEL_31:
    if ( v32 )
    {
      v39 = 16;
      if ( v32 <= 16 )
        v39 = v32;
      v40 = v39;
      if ( *v52 == 9 && v39 > (int)v52[9] )
        v40 = v52[9];
      v41 = a1[122];
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v63 = 0;
      v64 = 0;
      v62 = 0;
      sub_63880(&v63, v41, v40);
      v65 = nullptr;
      v66 = 0;
      sub_63C80(&v59, &v63);
      sub_317070(&v61, &v65);
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65);
      }
      qfree(v63);
      v42 = sub_122670((__int64)&v59, (__int64)a5);
      v43 = v61;
      if ( v42 )
      {
        v44 = *a5;
        v45 = _mm_loadu_si128(&v62);
        *a5 = v59;
        v59 = v44;
        v46 = a5[1];
        a5[1] = v60;
        v47 = a5[4];
        v60 = v46;
        v48 = a5[2];
        *(__m128i *)(a5 + 3) = v45;
        a5[2] = v43;
        v43 = v48;
        v61 = v48;
        v62.m128i_i64[1] = v47;
        *a6 = 1;
      }
      if ( v43 )
      {
        v62.m128i_i64[0] = 0;
        qfree(v43);
      }
      qfree(v59);
      if ( v57 )
      {
        v58 = 0;
        qfree(v57);
      }
      qfree(v56[0]);
      goto LABEL_7;
    }
    goto LABEL_32;
  }
  v33 = v52;
  v34 = *v52;
  if ( *v52 != 4 )
  {
    if ( v34 == 67 )
    {
      if ( v52[9] != v52[17] )
        goto LABEL_40;
    }
    else if ( v34 != 9 )
    {
      goto LABEL_40;
    }
  }
  if ( *((_BYTE *)v52 + 32) == 1 )
  {
    v35 = a1[122];
    if ( v35 == v52[10] && (int)v52[9] > 3 && *((_BYTE *)v52 + 64) == 1 )
    {
      v36 = sub_64330(v53, v35);
      v37 = (__int64)v52;
      v33 = v52;
      if ( !v36 )
      {
        v38 = *((_QWORD *)v52 + 2);
        if ( v38
          && (*(_DWORD *)v38 == 4 || *(_DWORD *)v38 == 67 && *(_DWORD *)(v38 + 36) == *(_DWORD *)(v38 + 68))
          && *(_BYTE *)(v38 + 64) == 1
          && a1[122] == *(_DWORD *)(v38 + 72)
          && *(_BYTE *)(v38 + 32) == 4 )
        {
          v49 = *(_QWORD *)(v38 + 40);
          if ( (unsigned int)(*(_DWORD *)v49 - 56) <= 1 )
          {
            if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v49 + 72) + 72LL), 2) & 0xF) != 9
              && !get_tinfo_property(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 40LL) + 72LL) + 72LL),
                    281) )
            {
              goto LABEL_32;
            }
            v37 = (__int64)v52;
          }
        }
        v32 = *(_DWORD *)(v37 + 36);
        goto LABEL_31;
      }
    }
  }
LABEL_40:
  if ( sub_122040(v33) )
  {
    v32 = v52[17];
    goto LABEL_31;
  }
LABEL_32:
  if ( v57 )
  {
    v58 = 0;
    qfree(v57);
  }
  qfree(v56[0]);
LABEL_3:
  v11 = a1[122];
  v63 = 0;
  v64 = 0;
  sub_63880(&v63, v11, 16);
  v65 = nullptr;
  v66 = 0;
  v50 = sub_64040(a5, &v63, v12, v13, v14, v15);
  v16 = sub_318020(a5 + 2, (__int64)&v65);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  qfree(v63);
  *a6 |= v16 | v50;
  v21 = sub_64040(a5, v53, v17, v18, v19, v20);
  *a6 |= sub_318020(a5 + 2, (__int64)&v54) | v21;
  if ( !sub_64330(a5, a1[89]) )
  {
    if ( !(unsigned __int8)sub_64280(a5) || a5[3] )
      *a6 = 1;
    v25 = a5[2];
    a5[1] = 0;
    if ( v25 )
    {
      a5[3] = 0;
      qfree(v25);
      a5[2] = 0;
      a5[4] = 0;
    }
  }
  v22 = 0;
LABEL_7:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v53[0]);
  return v22;
}
