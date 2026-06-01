unsigned __int64 __fastcall sub_483930(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int128 v4; // xmm0
  unsigned int v5; // r13d
  int alias_target; // eax
  const char *v7; // rsi
  size_t v8; // r13
  unsigned __int64 v9; // r13
  char *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  unsigned int v17; // [rsp+4h] [rbp-20Ch]
  __int64 v18; // [rsp+8h] [rbp-208h]
  char *s1; // [rsp+10h] [rbp-200h] BYREF
  __int128 v20; // [rsp+18h] [rbp-1F8h]
  __int64 v21; // [rsp+30h] [rbp-1E0h] BYREF
  __int128 v22; // [rsp+38h] [rbp-1D8h]
  char *s2; // [rsp+48h] [rbp-1C8h]
  size_t n[2]; // [rsp+50h] [rbp-1C0h]
  __int64 v25; // [rsp+60h] [rbp-1B0h]
  __int128 v26; // [rsp+68h] [rbp-1A8h]
  __int64 v27; // [rsp+78h] [rbp-198h]
  __int128 v28; // [rsp+80h] [rbp-190h]
  __int64 v29; // [rsp+90h] [rbp-180h]
  __int128 v30; // [rsp+98h] [rbp-178h]
  int v31; // [rsp+A8h] [rbp-168h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-160h]
  __int128 v33; // [rsp+B8h] [rbp-158h]
  __int64 v34; // [rsp+C8h] [rbp-148h]
  __int128 v35; // [rsp+D0h] [rbp-140h]
  unsigned int v36; // [rsp+E0h] [rbp-130h]
  int v37; // [rsp+E4h] [rbp-12Ch]
  char v38; // [rsp+E8h] [rbp-128h]
  __int64 v39; // [rsp+F0h] [rbp-120h]
  __int128 v40; // [rsp+F8h] [rbp-118h]
  __int64 v41; // [rsp+108h] [rbp-108h]
  __int128 v42; // [rsp+110h] [rbp-100h]
  __int64 v43; // [rsp+120h] [rbp-F0h]
  __int128 v44; // [rsp+128h] [rbp-E8h]
  int v45; // [rsp+138h] [rbp-D8h]
  __int16 v46; // [rsp+13Ch] [rbp-D4h]
  char v47; // [rsp+13Eh] [rbp-D2h]
  __int64 v48; // [rsp+140h] [rbp-D0h]
  __int128 v49; // [rsp+148h] [rbp-C8h]
  _OWORD *v50; // [rsp+158h] [rbp-B8h]
  __int64 v51; // [rsp+160h] [rbp-B0h]
  __int64 v52; // [rsp+168h] [rbp-A8h]
  __int64 v53; // [rsp+170h] [rbp-A0h]
  __int64 v54; // [rsp+178h] [rbp-98h]
  __int64 v55; // [rsp+180h] [rbp-90h]
  _OWORD v56[2]; // [rsp+188h] [rbp-88h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp-68h]
  __int128 v58; // [rsp+1B0h] [rbp-60h]
  __int64 v59; // [rsp+1C0h] [rbp-50h]
  __int16 v60; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v61; // [rsp+1D8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1480);
  v18 = *(_QWORD *)(v2 + 8);
  v17 = sub_630AA0(v2, v18);
  if ( v17 > 1 )
  {
    v3 = 1;
    v4 = 0;
    do
    {
      v38 = 0;
      v21 = 0;
      s2 = nullptr;
      v25 = 0;
      v27 = 0;
      v29 = 0;
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v37 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 0;
      v45 = -1;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v50 = v56;
      v51 = 1;
      v52 = 0;
      v53 = 0;
      v22 = v4;
      *(_OWORD *)n = v4;
      v26 = v4;
      v28 = v4;
      v30 = v4;
      v33 = v4;
      v35 = v4;
      v40 = v4;
      v42 = v4;
      v44 = v4;
      v49 = v4;
      v54 = 1065353216;
      v5 = *(_DWORD *)(a1 + 88);
      v57 = 0;
      v55 = 0;
      v59 = 0;
      v60 = 0;
      v36 = v3;
      v56[0] = v4;
      v56[1] = v4;
      v58 = v4;
      alias_target = get_alias_target(v18, v3);
      if ( alias_target != v36 )
        v37 = alias_target;
      v7 = (const char *)v5;
      if ( !(unsigned __int8)sub_4835B0((__int64)&v21, v5, v18) || (v38 & 0x3F) != 0x3D )
        goto LABEL_3;
      v8 = n[0];
      v20 = 0;
      s1 = nullptr;
      if ( n[0] )
      {
        s1 = (char *)qalloc_or_throw(n[0], v7, 0.0);
        *((_QWORD *)&v20 + 1) = v8;
        memcpy(s1, s2, v8);
        *(_QWORD *)&v20 = v8;
      }
      sub_633A60(v18, v18, &s1, 1, 0.0);
      v9 = v20;
      if ( n[0] )
      {
        v10 = s2;
        if ( !(_QWORD)v20 )
        {
          if ( strcmp(byte_2389C44, s2) )
            goto LABEL_19;
          goto LABEL_13;
        }
      }
      else
      {
        v10 = (char *)byte_2389C44;
        if ( !(_QWORD)v20 )
          goto LABEL_13;
      }
      if ( strcmp(s1, v10) )
      {
LABEL_19:
        v12 = 0;
        if ( (unsigned __int64)v30 > 1 )
          v12 = v29;
        v13 = 0;
        if ( (unsigned __int64)v28 > 1 )
          v13 = v27;
        v14 = 0;
        if ( (unsigned __int64)v26 > 1 )
          v14 = v25;
        v15 = 0;
        if ( v9 > 1 )
          v15 = (int)s1;
        v16 = 0;
        if ( (unsigned __int64)v22 > 1 )
          v16 = v21;
        sub_63F060(v18, v3, 1028, v16, v15, v14, v13, v12, (__int64)&v31);
      }
LABEL_13:
      if ( s1 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(s1);
      }
LABEL_3:
      ++v3;
      sub_481890((__int64)&v21);
      v4 = 0;
    }
    while ( v17 != v3 );
  }
  return v61 - __readfsqword(0x28u);
}

