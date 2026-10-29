__int64 __fastcall sub_1CE5E60(
        __int64 *a1,
        __int64 *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned __int8 a9,
        __int64 *a10,
        char a11)
{
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 *v41; // rsi
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int8 v56; // [rsp+8h] [rbp-1F0h]
  unsigned int v58; // [rsp+10h] [rbp-1E8h]
  unsigned int v59; // [rsp+1Ch] [rbp-1DCh]
  __int64 v60; // [rsp+20h] [rbp-1D8h]
  _WORD v61[5]; // [rsp+3Eh] [rbp-1BAh] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v63; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v65; // [rsp+60h] [rbp-198h] BYREF
  char v66; // [rsp+68h] [rbp-190h]
  unsigned __int64 v67; // [rsp+80h] [rbp-178h] BYREF
  char v68; // [rsp+88h] [rbp-170h]
  __int64 v69; // [rsp+8Ch] [rbp-16Ch]
  char v70; // [rsp+94h] [rbp-164h]
  void *v71; // [rsp+98h] [rbp-160h]
  __int64 v72; // [rsp+A0h] [rbp-158h]
  _BYTE v73[104]; // [rsp+A8h] [rbp-150h] BYREF
  __m128i v74; // [rsp+110h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+120h] [rbp-D8h]
  _OWORD v76[5]; // [rsp+128h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+178h] [rbp-80h]
  __int64 *v78; // [rsp+180h] [rbp-78h]
  __int64 v79; // [rsp+188h] [rbp-70h]
  int v80; // [rsp+190h] [rbp-68h]
  __int64 v81; // [rsp+198h] [rbp-60h] BYREF
  __int128 v82; // [rsp+1A0h] [rbp-58h]
  __int64 v83; // [rsp+1B0h] [rbp-48h]

  v59 = a4;
  v56 = (_DWORD)a4 != 0;
  if ( a2 && (_DWORD)a4 && !a2[8] )
  {
    sub_168B9F0((__int64)&v74, a1 + 1, a4, (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 ? 5682 : 6783, 0);
    v69 = 0;
    v71 = v73;
    v70 = 0;
    v72 = 0;
    v73[0] = 0;
    v73[16] = 0;
    LODWORD(v67) = v59;
    HIDWORD(v67) = v59;
    v68 = 1;
    sub_1589170((__int64)&v74, &v67);
    if ( v71 != v73 )
      operator delete(v71);
    sub_15F7200(&v74);
  }
  v13 = a3->m128i_u32[0];
  v14 = a3->m128i_i64[1];
  if ( (_DWORD)v13 && a3->m128i_i32[1] )
  {
    v15 = 0;
    if ( !v14 )
      return v15;
    *(_QWORD *)&v61[1] = 0;
    v16 = a9;
  }
  else
  {
    *(_QWORD *)&v61[1] = 0;
    v16 = a9;
    if ( !v14 )
    {
      if ( a6 )
      {
        v29 = sub_1E5F010(a6, 0);
        *(_QWORD *)&v61[1] = sub_169D2C0((__int64)a1, v29, v30, v31, v32, v33);
      }
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v61[1] = sub_16A2930((__int64)a1, (__int64)a3, v16, a4, v13, a6);
LABEL_9:
  v15 = sub_1CE58C0(a1, a2, a3, v56, (int *)a5, a6, a7, a8, a9, a10, (bool *)v61, 0);
  if ( v15 )
  {
    v34 = *(_QWORD *)&v61[1];
    if ( *(_QWORD *)&v61[1] )
    {
      v34 = *(_QWORD *)&v61[1] - 64LL;
      if ( (*(_BYTE *)(*(_QWORD *)&v61[1] + 8LL) & 0x7Fu) - 59 >= 3 )
        v34 = 0;
    }
    if ( !a11 && (a3->m128i_i32[0] && a3->m128i_i32[1] || a3->m128i_i64[1]) )
    {
      if ( v34 )
      {
        if ( !*(_DWORD *)a5 )
        {
          v35 = *(_QWORD *)(a5 + 8);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v34 + 40);
            if ( (v36 & 7) == 0 && v35 == (v36 & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v58 = v15;
              sub_168B9F0((__int64)&v74, a1 + 1, *(_DWORD *)(a5 + 24), 0x1609u, 0);
              v37 = sub_17AE460((__int64)&v74, (__int64 *)(a5 + 8));
              LODWORD(v67) = 0;
              v38 = sub_1587D10(v37, (int *)&v67);
              LOBYTE(v65) = v56;
              sub_1588420(v38, (unsigned __int8 *)&v65);
              sub_15F7200(&v74);
              return v58;
            }
          }
        }
      }
    }
  }
  else if ( LOBYTE(v61[0]) )
  {
    v20 = a3->m128i_i64[1];
    if ( *(_DWORD *)a5 )
    {
      if ( *(_DWORD *)a5 == 1 )
      {
        v47 = a1[31];
        sub_F228F0(&v67, *(_DWORD *)(a5 + 8));
        sub_F22FF0((unsigned __int64 *)&v74, v20, v67, v56);
        v48 = sub_A80B60(v47, &v74);
        v15 = 1;
        *a10 = v48;
      }
      else
      {
        sub_168B9F0((__int64)&v74, a1 + 1, *(_DWORD *)(a5 + 24), 0x1405u, 0);
        sub_17B41B0((__int64)&v67, a1, (unsigned int *)a5, a7, v21, v22, v23);
        v62 = v67;
        v24 = sub_15894B0((__int64)&v74, (__int64 *)&v62);
        v64 = *(_QWORD *)(a5 + 24);
        v25 = sub_1587DB0(v24, &v64);
        HIBYTE(v61[0]) = v56;
        v26 = sub_1588420(v25, (unsigned __int8 *)v61 + 1);
        v27 = v26;
        if ( *(_BYTE *)(v26 + 120) )
        {
          v66 = 1;
          LODWORD(v65) = v59;
          HIDWORD(v65) = v59;
          sub_AEC610((__int64 *)(v26 + 32), &v65);
        }
        else if ( *(_BYTE *)(v26 + 132) )
        {
          v51 = sub_168B9E0((_QWORD *)v26);
          v54 = *(_QWORD *)(v27 + 16);
          if ( v54 )
            v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 32LL))(*(_QWORD *)(v27 + 16));
          v63 = v54;
          v55 = *sub_1587BC0(v51, &v63, v49, v50, v52, v53) + 32LL * *(unsigned int *)(v27 + 128);
          v66 = 1;
          LODWORD(v65) = v59;
          HIDWORD(v65) = v59;
          sub_AEC610((__int64 *)(v55 + 8), &v65);
        }
        sub_15F7200(&v74);
        return 0;
      }
    }
    else
    {
      v45 = a1[31];
      sub_F228E0(&v67, *(_QWORD *)(a5 + 8));
      sub_F22FF0((unsigned __int64 *)&v74, v20, v67, v56);
      v46 = sub_A80B60(v45, &v74);
      v15 = 4;
      *a10 = v46;
    }
  }
  else
  {
    sub_17B41B0((__int64)&v65, a1, (unsigned int *)a5, a7, v17, v18, v19);
    v39 = *(_DWORD *)(a5 + 24);
    v74.m128i_i64[0] = 0;
    v74.m128i_i64[1] = (__int64)v76;
    v75 = 0x800000000LL;
    v76[4] = 0;
    v79 = v65;
    v80 = v39;
    v60 = v65;
    v77 = 0;
    v78 = a1;
    sub_B85890(&v81, v65);
    v83 = 0x101010000LL;
    v82 = 0;
    sub_1A395A0((__int64)&v74);
    v40 = v59 | 0x100000000LL;
    if ( !v59 )
      v40 = 0;
    if ( !(unsigned __int8)sub_1CE41F0((__int64)a1, (__int64)&v74, a2, a3, a6, v16, 0.0, a8, v40, nullptr, 0)
      && v74.m128i_i32[0] != 5 )
    {
      v41 = a1 + 1;
      v42 = *(_DWORD *)(a5 + 24);
      if ( *(_QWORD *)&v61[1] )
      {
        sub_168B9F0((__int64)&v67, v41, v42, 0x10B2u, 0);
        v63 = v60;
        v43 = sub_15894B0((__int64)&v67, &v63);
        v44 = sub_17BABD0(v43, (__int64 *)&v61[1]);
      }
      else
      {
        sub_168B9F0((__int64)&v67, v41, v42, 0x14E4u, 0);
        v63 = v60;
        v44 = sub_15894B0((__int64)&v67, &v63);
      }
      v64 = a3->m128i_i64[0];
      sub_1587DB0(v44, &v64);
      sub_15F7200(&v67);
    }
    sub_169D230((__int64)&v74);
    return 0;
  }
  return v15;
}
