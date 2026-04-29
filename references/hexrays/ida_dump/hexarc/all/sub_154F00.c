__int64 __fastcall sub_154F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // rdi
  int flags; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  _QWORD *v25; // rbp
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // r14
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // [rsp+10h] [rbp-148h]
  unsigned __int64 v47; // [rsp+18h] [rbp-140h]
  _QWORD *v48; // [rsp+18h] [rbp-140h]
  int j; // [rsp+20h] [rbp-138h]
  int i; // [rsp+28h] [rbp-130h]
  int v51; // [rsp+28h] [rbp-130h]
  int v52; // [rsp+28h] [rbp-130h]
  unsigned __int8 v53; // [rsp+2Fh] [rbp-129h]
  __int64 v54; // [rsp+38h] [rbp-120h]
  unsigned __int8 *v55; // [rsp+50h] [rbp-108h] BYREF
  __int64 **v56; // [rsp+58h] [rbp-100h] BYREF
  __int64 *v57; // [rsp+60h] [rbp-F8h] BYREF
  int **v58; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v59; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v61; // [rsp+88h] [rbp-D0h]
  __int64 v62; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-B0h]
  __int128 v64; // [rsp+B8h] [rbp-A0h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  __int64 v66; // [rsp+D0h] [rbp-88h]
  __int64 v67; // [rsp+D8h] [rbp-80h]
  __int64 v68; // [rsp+E0h] [rbp-78h]
  __int64 v69; // [rsp+E8h] [rbp-70h]
  __int64 v70; // [rsp+F0h] [rbp-68h]
  __int64 v71; // [rsp+F8h] [rbp-60h]
  __int64 v72; // [rsp+100h] [rbp-58h]
  __int128 v73; // [rsp+108h] [rbp-50h]
  unsigned __int64 v74; // [rsp+118h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = a2 + 32;
  v11 = a2 + 32;
  if ( *(_DWORD *)v7 == 9 )
  {
    v11 = v7 + 32;
    if ( *(_BYTE *)(v7 + 32) != 4 )
      return 0;
  }
  v12 = *(_QWORD *)(v11 + 8);
  if ( *(_DWORD *)v12 != 2 )
    return 0;
  if ( !v12 )
    return 0;
  if ( *(_BYTE *)(v12 + 48) != 4 )
    return 0;
  v13 = *(_QWORD *)(v12 + 56);
  LOBYTE(a5) = v13 == 0 || *(_DWORD *)v13 != 12;
  v5 = a5;
  if ( (_BYTE)a5 )
    return 0;
  if ( *(_BYTE *)(v13 + 32) == 10 )
  {
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (unsigned __int8 *)(v13 + 48);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 48) != 10 )
      return 0;
    v14 = *(_QWORD *)(v13 + 56);
    v15 = (unsigned __int8 *)(v13 + 32);
  }
  v55 = v15;
  if ( *(_BYTE *)v14 != 6 )
    return 0;
  v16 = *(_QWORD *)(v14 + 8);
  v53 = is_loaded(v16);
  if ( !v53 )
    return 0;
  v46 = *(_DWORD *)(v12 + 68);
  if ( v46 != 1 )
  {
    if ( *v55 != 4 )
      return 0;
    v17 = *((_DWORD **)v55 + 1);
    if ( *v17 != 14 )
      return 0;
    if ( !v17 )
      return 0;
    v18 = sub_1161E0((__int64)v17, &v55);
    if ( !v18 || !sub_9BC90(v18, v46, 1u) )
      return 0;
  }
  v19 = *(_QWORD *)(a2 + 24);
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v69 = 0;
  v64 = -1;
  v62 = 0x800000;
  v70 = 2;
  v71 = -1;
  v72 = 0;
  v73 = 0;
  if ( !get_switch_info(&v62, v19) || (v62 & 1) == 0 )
  {
    v54 = getseg(v16);
    if ( v54 )
    {
      v20 = *(__int64 **)(a2 + 56);
      v59 = 0u;
      v47 = sub_11BC60(v20);
      for ( i = 0; *(_QWORD *)(v54 + 8) >= (unsigned __int64)(v16 + v46); ++i )
      {
        flags = get_flags_ex(v16, 4);
        v22 = flags & 0x600;
        if ( v22 == 1536
          || v22 != 512 && ((flags & 0xF00000) == 0x500000 || v22 == 1024 && (flags & 0xF0000000) == 0xB0000000LL) )
        {
          break;
        }
        if ( !(unsigned __int8)get_data_value(&v58, v16, v46) || v47 < (unsigned __int64)v58 )
          break;
        LODWORD(v57) = (_DWORD)v58;
        v56 = &v57;
        v23 = sub_154C10(&v59, (int *)&v57, (int **)&v56);
        v24 = i;
        v25 = (_QWORD *)(v23 + 24);
        v26 = v23 + 32;
        v60 = i;
        v27 = *(_QWORD *)(v23 + 40);
        v28 = v25[1];
        if ( v25[3] < (unsigned __int64)(v27 + 1) )
        {
          v33 = qvector_reserve(v26, v28, v27 + 1, 8);
          v25[1] = v33;
          v28 = v33;
          v24 = i;
          v27 = v25[2];
        }
        *(_QWORD *)(v28 + 8 * v27) = v24;
        v16 += v46;
        ++v25[2];
      }
      if ( v47 < i && (unsigned int)sub_33BBE0(a1, v16) )
      {
        v51 = 0;
        v48 = *(_QWORD **)(a2 + 56);
        while ( (unsigned __int64)v51 < v48[1] )
        {
          v29 = (_QWORD *)(*v48 + 24LL * v51);
          if ( v29[1] )
          {
            v30 = 0;
            v31 = 0;
            while ( 1 )
            {
              v32 = *(_QWORD *)(*v29 + 8 * v31);
              v57 = &v60;
              LODWORD(v60) = v32;
              if ( *(_QWORD *)(sub_154C10(&v59, (int *)&v60, (int **)&v57) + 40) )
                break;
              v31 = ++v30;
              if ( (unsigned __int64)v30 >= v29[1] )
                goto LABEL_47;
            }
          }
          ++v51;
        }
        for ( j = 0; (unsigned __int64)j < v48[1]; ++j )
        {
          v60 = 0;
          v61 = 0;
          v34 = (__int64 *)(*v48 + 24LL * j);
          if ( v34[1] )
          {
            v35 = 0;
            v52 = 0;
            do
            {
              v36 = *(_QWORD *)(*v34 + 8 * v35);
              v58 = (int **)&v57;
              LODWORD(v57) = v36;
              v37 = sub_154C10(&v59, (int *)&v57, (int **)&v58);
              v38 = v37 + 24;
              if ( *(_QWORD *)(v37 + 40) )
              {
                v39 = v61;
                v40 = 0;
                v41 = 0;
                do
                {
                  v42 = v60;
                  v43 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8 * v41);
                  if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v39 + 1) )
                  {
                    v60 = qvector_reserve(&v60, v60, v39 + 1, 8);
                    v39 = v61;
                    v42 = v60;
                  }
                  *(_QWORD *)(v42 + 8 * v39) = v43;
                  ++v40;
                  v39 = v61 + 1;
                  v41 = v40;
                  *(_QWORD *)&v61 = v61 + 1;
                }
                while ( (unsigned __int64)v40 < *(_QWORD *)(v38 + 16) );
              }
              v35 = ++v52;
            }
            while ( v52 < (unsigned __int64)v34[1] );
          }
          v44 = *v34;
          v45 = v34[2];
          *v34 = v60;
          *(_OWORD *)(v34 + 1) = v61;
          v60 = v44;
          *((_QWORD *)&v61 + 1) = v45;
          if ( v44 )
          {
            *(_QWORD *)&v61 = 0;
            qfree(v44);
          }
        }
        sub_11D380((__int64)&v60, v55);
        sub_11EAC0(v8, (unsigned __int8 *)&v60);
        sub_1166E0((__int64)&v60);
        v5 = v53;
      }
LABEL_47:
      sub_154160(v59.m128i_i64);
    }
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  return v5;
}
