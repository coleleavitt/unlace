__int64 __fastcall sub_2266EA0(__int64 a1, __int64 a2, const char **a3)
{
  int v6; // eax
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rsi
  void (__fastcall *v13)(_BYTE *, __int64, void **); // rax
  void *v14; // rdx
  int v15; // edx
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rsi
  _BYTE *v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  void (__fastcall *v25)(void **, __int64, _BYTE *); // rax
  __int64 v26; // rsi
  void (__fastcall *v27)(__m128i *, __int64, __m128i *); // rax
  std::_V2 *v28; // rdx
  int v29; // ecx
  std::_V2 *v30; // rax
  int v31; // eax
  __int8 v32; // al
  int v33; // edx
  __int64 v34; // r12
  __m128i *v35; // rax
  __m128i *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 *v39; // rdi
  __m128i v40; // xmm2
  __int64 v41; // rdx
  __int64 v42; // rsi
  void (__fastcall *v43)(__m128i *, __int64, void **); // rax
  int v44; // [rsp+8h] [rbp-530h]
  std::_V2 *v45; // [rsp+10h] [rbp-528h]
  std::_V2 *v46; // [rsp+10h] [rbp-528h]
  std::_V2 *v47; // [rsp+10h] [rbp-528h]
  __int64 v48; // [rsp+18h] [rbp-520h]
  __int64 v49; // [rsp+28h] [rbp-510h]
  int v50; // [rsp+28h] [rbp-510h]
  __int64 v51; // [rsp+30h] [rbp-508h] BYREF
  std::_V2 *v52; // [rsp+38h] [rbp-500h]
  char v53; // [rsp+40h] [rbp-4F8h]
  __m128i v54; // [rsp+50h] [rbp-4E8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-4D8h] BYREF
  __m128i v56; // [rsp+B0h] [rbp-488h] BYREF
  __m128i v57; // [rsp+C0h] [rbp-478h] BYREF
  __m128i v58; // [rsp+D0h] [rbp-468h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-458h]
  __int64 v60; // [rsp+E8h] [rbp-450h]
  __int64 v61; // [rsp+F0h] [rbp-448h]
  __int64 v62; // [rsp+F8h] [rbp-440h]
  __int8 v63; // [rsp+100h] [rbp-438h]
  void *v64; // [rsp+110h] [rbp-428h] BYREF
  __int64 v65; // [rsp+118h] [rbp-420h]
  _BYTE v66[16]; // [rsp+120h] [rbp-418h] BYREF
  __int16 v67; // [rsp+130h] [rbp-408h]
  char v68; // [rsp+168h] [rbp-3D0h]
  void *ptr; // [rsp+170h] [rbp-3C8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-3C0h]
  _BYTE v71[264]; // [rsp+188h] [rbp-3B0h] BYREF
  _BYTE v72[24]; // [rsp+290h] [rbp-2A8h] BYREF
  _WORD v73[132]; // [rsp+2A8h] [rbp-290h] BYREF
  void *v74; // [rsp+3B0h] [rbp-188h] BYREF
  __int64 v75; // [rsp+3B8h] [rbp-180h]
  __int16 v76; // [rsp+3D0h] [rbp-168h]
  __int64 v77; // [rsp+4C0h] [rbp-78h]
  std::_V2 *v78; // [rsp+4C8h] [rbp-70h]
  __int64 v79; // [rsp+4D0h] [rbp-68h]
  char v80; // [rsp+4F0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v71;
  sub_22538C0(a3, (__int64)&ptr);
  v6 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 112LL))(a2, &ptr);
  if ( v6 )
  {
    *(_BYTE *)(a1 + 16) |= 1u;
    v8 = ptr;
    *(_DWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v7;
    goto LABEL_3;
  }
  v10 = si128.m128i_i64[0];
  v11 = ptr;
  if ( *(_DWORD *)(a2 + 120) == 1 )
  {
    v12 = *(_QWORD *)(a2 + 72);
    v13 = *(void (__fastcall **)(_BYTE *, __int64, void **))(*(_QWORD *)v12 + 48LL);
    v75 = si128.m128i_i64[0];
    v76 = 261;
    v74 = ptr;
    v13(v72, v12, &v74);
    sub_225D860((__int64)&v64, (int *)v72, (_QWORD **)a3);
    sub_FDCFC0((__int64 *)v72);
    if ( (v66[0] & 1) == 0 )
    {
      v14 = v64;
      *(_BYTE *)(a1 + 16) &= ~1u;
      v64 = nullptr;
      *(_QWORD *)a1 = v14;
      sub_FDCFC0((__int64 *)&v64);
      v8 = ptr;
      goto LABEL_3;
    }
    sub_FDCFC0((__int64 *)&v64);
    v11 = ptr;
    v10 = si128.m128i_i64[0];
  }
  sub_22668A0((__int64)&v74, a2, v11, v10);
  if ( (v80 & 1) != 0 )
  {
    v15 = (int)v74;
    v16 = v75;
    v8 = ptr;
    if ( *(_DWORD *)(a2 + 120)
      || (v45 = (std::_V2 *)ptr,
          v44 = (int)v74,
          v17 = std::_V2::generic_category((std::_V2 *)ptr),
          v15 = v44,
          v8 = v45,
          v17 != v16)
      || v44 != 2 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_DWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v16;
      goto LABEL_3;
    }
    v24 = *(_QWORD *)(a2 + 72);
    v25 = *(void (__fastcall **)(void **, __int64, _BYTE *))(*(_QWORD *)v24 + 48LL);
    *(_QWORD *)v72 = v45;
    v73[4] = 261;
    *(_QWORD *)&v72[8] = si128.m128i_i64[0];
    v25(&v64, v24, v72);
    sub_225D860(a1, (int *)&v64, (_QWORD **)a3);
    sub_FDCFC0((__int64 *)&v64);
  }
  else
  {
    v18 = *(_DWORD *)(v77 + 8);
    if ( v18 == 1 )
    {
      v46 = v78;
      v48 = v79;
    }
    else
    {
      if ( v18 != 2 )
      {
        v23 = std::_V2::generic_category((std::_V2 *)&v74);
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_DWORD *)a1 = 22;
        *(_QWORD *)(a1 + 8) = v23;
LABEL_29:
        sub_225BE70((__int64)&v74);
        goto LABEL_30;
      }
      v46 = *(std::_V2 **)(v77 + 48);
      v48 = *(_QWORD *)(v77 + 56);
    }
    if ( v46 )
    {
      v64 = v66;
      sub_2259A00(&v64, v46, (__int64)v46 + v48);
      v19 = v64;
      v20 = (char *)v64 + v65;
    }
    else
    {
      v20 = v66;
      v65 = 0;
      v19 = v66;
      v64 = v66;
      v66[0] = 0;
    }
    *(_QWORD *)v72 = v73;
    *(__m128i *)&v72[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(v72, v19, v20);
    if ( v64 != v66 )
      operator delete(v64);
    v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 112LL))(a2, v72);
    if ( v21 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_DWORD *)a1 = v21;
      *(_QWORD *)(a1 + 8) = v22;
    }
    else
    {
      v26 = *(_QWORD *)(a2 + 72);
      v67 = 261;
      v49 = v77;
      v64 = v46;
      v65 = v48;
      v27 = *(void (__fastcall **)(__m128i *, __int64, __m128i *))(*(_QWORD *)v26 + 48LL);
      v56 = *(__m128i *)v72;
      v58.m128i_i16[0] = 261;
      v27(&v54, v26, &v56);
      sub_225D860((__int64)&v51, v54.m128i_i32, (_QWORD **)&v64);
      sub_FDCFC0(v54.m128i_i64);
      if ( (v53 & 1) != 0 )
      {
        v28 = v52;
        v29 = v51;
        if ( !*(_DWORD *)(a2 + 120)
          && (!v77 || *(_DWORD *)(v77 + 8) == 1)
          && (v50 = v51,
              v47 = v52,
              v30 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)&v54),
              v28 = v47,
              v29 = v50,
              v30 == v47)
          && v50 == 2 )
        {
          v42 = *(_QWORD *)(a2 + 72);
          v43 = *(void (__fastcall **)(__m128i *, __int64, void **))(*(_QWORD *)v42 + 48LL);
          v67 = 261;
          v64 = ptr;
          v65 = si128.m128i_i64[0];
          v43(&v56, v42, &v64);
          sub_225D860(a1, v56.m128i_i32, (_QWORD **)a3);
          sub_FDCFC0(v56.m128i_i64);
        }
        else
        {
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_DWORD *)a1 = v29;
          *(_QWORD *)(a1 + 8) = v28;
        }
      }
      else
      {
        (*(void (__fastcall **)(void **))(*(_QWORD *)v51 + 16LL))(&v64);
        if ( (v68 & 1) != 0 )
        {
          v31 = (int)v64;
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_DWORD *)a1 = v31;
          *(_QWORD *)(a1 + 8) = v65;
        }
        else
        {
          sub_225AB40(&v56, (__int64)&v64);
          v32 = *(_BYTE *)(a2 + 114);
          v33 = *(_DWORD *)(v49 + 80);
          if ( v33 )
            v32 = v33 == 1;
          sub_225C1B0(&v54, (_QWORD **)a3, v32, &v56);
          if ( (__m128i *)v56.m128i_i64[0] != &v57 )
            operator delete((void *)v56.m128i_i64[0]);
          v34 = v51;
          v51 = 0;
          sub_225AB40(&v56, (__int64)&v54);
          v35 = (__m128i *)operator new(0x68u);
          v35->m128i_i64[0] = (__int64)&off_2BEBA40;
          v36 = (__m128i *)v56.m128i_i64[0];
          v35[1].m128i_i64[0] = (__int64)v35[2].m128i_i64;
          v35->m128i_i64[1] = v34;
          if ( v36 == &v57 )
          {
            v35[2] = _mm_load_si128(&v57);
          }
          else
          {
            v37 = v57.m128i_i64[0];
            v35[1].m128i_i64[0] = (__int64)v36;
            v35[2].m128i_i64[0] = v37;
          }
          v38 = v56.m128i_i64[1];
          v39 = (__int64 *)v54.m128i_i64[0];
          *(_QWORD *)a1 = v35;
          v40 = _mm_load_si128(&v58);
          *(_BYTE *)(a1 + 16) &= ~1u;
          v35[1].m128i_i64[1] = v38;
          v41 = v59;
          v35[3] = v40;
          v35[4].m128i_i64[0] = v41;
          v35[4].m128i_i64[1] = v60;
          v35[5].m128i_i64[0] = v61;
          v35[5].m128i_i64[1] = v62;
          v35[6].m128i_i8[0] = v63;
          if ( v39 != &v55 )
            operator delete(v39);
          if ( (v68 & 1) == 0 && v64 != v66 )
            operator delete(v64);
        }
      }
      sub_FDCFC0(&v51);
    }
    if ( *(_WORD **)v72 != v73 )
      free(*(void **)v72);
  }
  if ( (v80 & 1) == 0 )
    goto LABEL_29;
LABEL_30:
  v8 = ptr;
LABEL_3:
  if ( v8 != v71 )
    free(v8);
  return a1;
}
