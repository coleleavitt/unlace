__int64 __fastcall sub_1C28780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, __m128i a7)
{
  unsigned int v10; // ebp
  __int64 result; // rax
  __m128i *v12; // rax
  size_t v13; // rbp
  size_t v14; // rax
  unsigned __int64 v15; // rcx
  __m128i *v16; // r8
  signed __int64 v17; // rdx
  __int64 (*v18)(); // rax
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // r15
  __int64 *v22; // rbx
  unsigned int v23; // edx
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  unsigned __int8 *v26; // rbx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r14
  unsigned __int8 *v37; // rbx
  _BYTE *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // r15
  void *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // r15
  void *v60; // rdi
  unsigned __int8 v62; // [rsp+0h] [rbp-148h]
  unsigned __int8 v63; // [rsp+0h] [rbp-148h]
  __int64 v64; // [rsp+0h] [rbp-148h]
  signed __int64 v65; // [rsp+10h] [rbp-138h]
  size_t v66; // [rsp+10h] [rbp-138h]
  __m128i *v67; // [rsp+18h] [rbp-130h]
  __int64 v68; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v69; // [rsp+28h] [rbp-120h]
  void *v70; // [rsp+40h] [rbp-108h]
  signed __int64 v71; // [rsp+48h] [rbp-100h]
  __m128i v72; // [rsp+50h] [rbp-F8h] BYREF
  void *v73[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+70h] [rbp-D8h] BYREF
  __m128i *v75; // [rsp+80h] [rbp-C8h] BYREF
  signed __int64 v76; // [rsp+88h] [rbp-C0h]
  __m128i v77; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int8 *v78; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-A0h]
  unsigned __int8 v80; // [rsp+F8h] [rbp-50h]
  unsigned int v81; // [rsp+100h] [rbp-48h]
  unsigned __int8 v82; // [rsp+104h] [rbp-44h]

  sub_A649E0(
    (__int64)&v68,
    *(_QWORD **)(a4 + 248),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v10 = a6 / (unsigned int)sub_A97D20(*(_QWORD *)(a4 + 248), *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
  result = 0;
  if ( v10 > v69 )
  {
    sub_D8B070(
      v73,
      (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
      16,
      (__int64)"%u",
      (v10 / v69) << 6);
    v12 = (__m128i *)sub_99BDC0(v73, 0, 0, "zvl", 3u);
    v75 = &v77;
    if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
    {
      a7 = _mm_loadu_si128(v12 + 1);
      v77 = a7;
    }
    else
    {
      v75 = (__m128i *)v12->m128i_i64[0];
      v77.m128i_i64[0] = v12[1].m128i_i64[0];
    }
    v76 = v12->m128i_i64[1];
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    v12->m128i_i64[1] = 0;
    v12[1].m128i_i8[0] = 0;
    v13 = v76;
    if ( v76 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    v14 = v76 + 1;
    if ( v75 == &v77 )
      v15 = 15;
    else
      v15 = v77.m128i_i64[0];
    if ( v14 > v15 )
    {
      v66 = v76 + 1;
      sub_998B30((__int64)&v75, v76, 0, "b", 1u);
      v14 = v66;
    }
    else
    {
      v75->m128i_i8[v76] = 98;
    }
    v76 = v14;
    v75->m128i_i8[v13 + 1] = 0;
    v16 = v75;
    v70 = &v72;
    if ( v75 == &v77 )
    {
      v16 = &v72;
      v72 = _mm_load_si128(&v77);
    }
    else
    {
      v70 = v75;
      v72.m128i_i64[0] = v77.m128i_i64[0];
    }
    v17 = v76;
    v71 = v76;
    if ( v73[0] != &v74 )
    {
      operator delete(v73[0]);
      v16 = (__m128i *)v70;
      v17 = v71;
    }
    v18 = *(__int64 (**)())(*(_QWORD *)a1 + 584LL);
    if ( v18 != sub_A55EE0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __m128i *))v18)(a1, v16) )
      {
LABEL_19:
        result = 0;
        goto LABEL_20;
      }
      v16 = (__m128i *)v70;
      v17 = v71;
    }
    v67 = v16;
    v65 = v17;
    v19 = sub_2244B30(v16, v17);
    v20 = sub_2244E60(a2, v67, v65, v19);
    if ( v20 == -1 )
      sub_EC0F90((__int64 **)&v75, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
    else
      sub_EC0F90((__int64 **)&v75, (__int64 *)(*(_QWORD *)a2 + 8LL * v20), 1);
    v21 = (__int64 *)v75;
    sub_EC0F90((__int64 **)&v75, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
    if ( v75 != (__m128i *)v21 && *(_BYTE *)(*v21 + 8) )
      goto LABEL_19;
    v22 = (__int64 *)(a4 + 8);
    if ( (*(_BYTE *)(a3 + 3) & 1) != 0 )
    {
      v23 = *(_DWORD *)(a3 + 24);
    }
    else if ( *(char *)(a3 + 2) >= 0
           || (v23 = sub_EEB7E0(
                       *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32),
                       a3,
                       *(double *)a7.m128i_i64)) == 0 )
    {
      v23 = sub_EEB7E0(*(_QWORD *)(a3 + 32), a3, *(double *)a7.m128i_i64);
      if ( !v23 )
      {
        if ( *(_DWORD *)(a3 + 16) )
        {
          v24 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
          if ( v24 )
            v23 = sub_EEB7E0(v24, a3, *(double *)a7.m128i_i64);
        }
      }
    }
    sub_168B9F0((__int64)&v75, v22, v23, 0x135Eu, 0);
    if ( v80 )
    {
      v26 = v78;
      if ( !v78 )
      {
        v47 = v79;
        v48 = *(_DWORD *)(v79 + 14976);
        if ( v48 )
        {
          v51 = (unsigned int)(v48 - 1);
          *(_DWORD *)(v79 + 14976) = v51;
          v26 = *(unsigned __int8 **)(v47 + 8 * v51 + 14848);
          v52 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v53 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v54 = v53 + (v52 << 6);
          while ( v53 != v54 )
          {
            while ( 1 )
            {
              v54 -= 64;
              v55 = *(void **)(v54 + 24);
              if ( v55 == (void *)(v54 + 40) )
                break;
              operator delete(v55);
              if ( v53 == v54 )
                goto LABEL_63;
            }
          }
LABEL_63:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          *((_QWORD *)v26 + 13) = 0;
          v26[112] = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v78 = v26;
      }
      v26[*v26 + 1] = 8;
      v27 = v78;
      v28 = *v78;
      *v78 = v28 + 1;
      *(_QWORD *)&v27[8 * v28 + 16] = a5;
    }
    else
    {
      v25 = v82;
      if ( !v82 )
      {
LABEL_31:
        v63 = v25;
        sub_15F7200(&v75);
        result = v63;
LABEL_20:
        if ( v70 != &v72 )
        {
          v62 = result;
          operator delete(v70);
          return v62;
        }
        return result;
      }
      v31 = sub_168B9E0(&v75);
      v34 = (void *)v77.m128i_i64[0];
      if ( v77.m128i_i64[0] )
        v34 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77.m128i_i64[0] + 32LL))(v77.m128i_i64[0]);
      v73[0] = v34;
      v35 = sub_1587BC0(v31, (__int64 *)v73, v29, v30, v32, v33);
      v36 = *v35 + 32LL * v81;
      v37 = *(unsigned __int8 **)(v36 + 8);
      if ( !v37 )
      {
        v49 = *(_QWORD *)(v36 + 16);
        v50 = *(_DWORD *)(v49 + 14976);
        if ( v50 )
        {
          v56 = (unsigned int)(v50 - 1);
          *(_DWORD *)(v49 + 14976) = v56;
          v37 = *(unsigned __int8 **)(v49 + 8 * v56 + 14848);
          v57 = *((unsigned int *)v37 + 134);
          *v37 = 0;
          v58 = *((_QWORD *)v37 + 66);
          *((_DWORD *)v37 + 106) = 0;
          v59 = v58 + (v57 << 6);
          while ( v58 != v59 )
          {
            while ( 1 )
            {
              v59 -= 64;
              v60 = *(void **)(v59 + 24);
              if ( v60 == (void *)(v59 + 40) )
                break;
              v64 = v58;
              operator delete(v60);
              v58 = v64;
              if ( v64 == v59 )
                goto LABEL_68;
            }
          }
LABEL_68:
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v36 + 8) = v37;
      }
      v37[*v37 + 1] = 8;
      v38 = *(_BYTE **)(v36 + 8);
      v39 = (unsigned __int8)*v38;
      *v38 = v39 + 1;
      *(_QWORD *)&v38[8 * v39 + 16] = a5;
    }
    if ( v80 )
    {
      sub_AEC220(&v78, v70, v71);
      v25 = v80;
    }
    else
    {
      v25 = v82;
      if ( v82 )
      {
        v42 = sub_168B9E0(&v75);
        v45 = (void *)v77.m128i_i64[0];
        if ( v77.m128i_i64[0] )
          v45 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77.m128i_i64[0] + 32LL))(v77.m128i_i64[0]);
        v73[0] = v45;
        v46 = sub_1587BC0(v42, (__int64 *)v73, v40, v41, v43, v44);
        sub_AEC220((unsigned __int8 **)(*v46 + 32LL * v81 + 8), v70, v71);
        v25 = v80;
      }
    }
    goto LABEL_31;
  }
  return result;
}
