unsigned __int64 __fastcall sub_498530(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int128 v4; // xmm0
  unsigned int v5; // r13d
  int alias_target; // eax
  size_t v7; // r13
  unsigned __int64 v8; // r13
  char *v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r9d
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // [rsp+4h] [rbp-20Ch]
  __int64 v17; // [rsp+8h] [rbp-208h]
  char *s1; // [rsp+10h] [rbp-200h] BYREF
  __int128 v19; // [rsp+18h] [rbp-1F8h]
  __int64 v20; // [rsp+30h] [rbp-1E0h] BYREF
  __int128 v21; // [rsp+38h] [rbp-1D8h]
  char *s2; // [rsp+48h] [rbp-1C8h]
  size_t n[2]; // [rsp+50h] [rbp-1C0h]
  __int64 v24; // [rsp+60h] [rbp-1B0h]
  __int128 v25; // [rsp+68h] [rbp-1A8h]
  __int64 v26; // [rsp+78h] [rbp-198h]
  __int128 v27; // [rsp+80h] [rbp-190h]
  __int64 v28; // [rsp+90h] [rbp-180h]
  __int128 v29; // [rsp+98h] [rbp-178h]
  int v30; // [rsp+A8h] [rbp-168h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-160h]
  __int128 v32; // [rsp+B8h] [rbp-158h]
  __int64 v33; // [rsp+C8h] [rbp-148h]
  __int128 v34; // [rsp+D0h] [rbp-140h]
  unsigned int v35; // [rsp+E0h] [rbp-130h]
  int v36; // [rsp+E4h] [rbp-12Ch]
  char v37; // [rsp+E8h] [rbp-128h]
  __int64 v38; // [rsp+F0h] [rbp-120h]
  __int128 v39; // [rsp+F8h] [rbp-118h]
  __int64 v40; // [rsp+108h] [rbp-108h]
  __int128 v41; // [rsp+110h] [rbp-100h]
  __int64 v42; // [rsp+120h] [rbp-F0h]
  __int128 v43; // [rsp+128h] [rbp-E8h]
  __int64 v44; // [rsp+138h] [rbp-D8h]
  __int16 v45; // [rsp+140h] [rbp-D0h]
  char v46; // [rsp+142h] [rbp-CEh]
  __int64 v47; // [rsp+148h] [rbp-C8h]
  __int128 v48; // [rsp+150h] [rbp-C0h]
  _OWORD *v49; // [rsp+160h] [rbp-B0h]
  __int64 v50; // [rsp+168h] [rbp-A8h]
  __int64 v51; // [rsp+170h] [rbp-A0h]
  __int64 v52; // [rsp+178h] [rbp-98h]
  __int64 v53; // [rsp+180h] [rbp-90h]
  __int64 v54; // [rsp+188h] [rbp-88h]
  _OWORD v55[2]; // [rsp+190h] [rbp-80h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp-60h]
  __int128 v57; // [rsp+1B8h] [rbp-58h]
  __int64 v58; // [rsp+1C8h] [rbp-48h]
  __int16 v59; // [rsp+1D0h] [rbp-40h]
  unsigned __int64 v60; // [rsp+1D8h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1672);
  v17 = *(_QWORD *)(v2 + 8);
  v16 = sub_64E0C0(v2, v17);
  if ( v16 > 1 )
  {
    v3 = 1;
    v4 = 0;
    do
    {
      v37 = 0;
      v20 = 0;
      s2 = nullptr;
      v24 = 0;
      v26 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 0;
      v33 = 0;
      v36 = 0;
      v38 = 0;
      v40 = 0;
      v42 = 0;
      v44 = -1;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v49 = v55;
      v50 = 1;
      v51 = 0;
      v52 = 0;
      v21 = v4;
      *(_OWORD *)n = v4;
      v25 = v4;
      v27 = v4;
      v29 = v4;
      v32 = v4;
      v34 = v4;
      v39 = v4;
      v41 = v4;
      v43 = v4;
      v48 = v4;
      v53 = 1065353216;
      v5 = *(_DWORD *)(a1 + 88);
      v56 = 0;
      v54 = 0;
      v58 = 0;
      v59 = 0;
      v35 = v3;
      v55[0] = v4;
      v55[1] = v4;
      v57 = v4;
      alias_target = get_alias_target(v17, v3);
      if ( alias_target != v35 )
        v36 = alias_target;
      if ( !(unsigned __int8)sub_4981B0((__int64)&v20, v5, v17) || (v37 & 0x3F) != 0x3D )
        goto LABEL_3;
      v7 = n[0];
      v19 = 0;
      s1 = nullptr;
      if ( n[0] )
      {
        s1 = (char *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v19 + 1) = v7;
        memcpy(s1, s2, v7);
        *(_QWORD *)&v19 = v7;
      }
      sub_651060(v17, v17, &s1, 1, 0.0);
      v8 = v19;
      if ( n[0] )
      {
        v9 = s2;
        if ( !(_QWORD)v19 )
        {
          if ( strcmp(byte_23ADD24, s2) )
            goto LABEL_19;
          goto LABEL_13;
        }
      }
      else
      {
        v9 = (char *)byte_23ADD24;
        if ( !(_QWORD)v19 )
          goto LABEL_13;
      }
      if ( strcmp(s1, v9) )
      {
LABEL_19:
        v11 = 0;
        if ( (unsigned __int64)v29 > 1 )
          v11 = v28;
        v12 = 0;
        if ( (unsigned __int64)v27 > 1 )
          v12 = v26;
        v13 = 0;
        if ( (unsigned __int64)v25 > 1 )
          v13 = v24;
        v14 = 0;
        if ( v8 > 1 )
          v14 = (int)s1;
        v15 = 0;
        if ( (unsigned __int64)v21 > 1 )
          v15 = v20;
        sub_65C930(v17, v3, 1028, v15, v14, v13, v12, v11, (__int64)&v30);
      }
LABEL_13:
      if ( s1 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(s1);
      }
LABEL_3:
      ++v3;
      sub_496580((__int64)&v20);
      v4 = 0;
    }
    while ( v16 != v3 );
  }
  return v60 - __readfsqword(0x28u);
}
