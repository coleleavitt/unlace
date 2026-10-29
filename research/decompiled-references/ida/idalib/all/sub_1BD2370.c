__int64 __fastcall sub_1BD2370(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  char *v30; // r12
  char *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // r12
  __int64 v48; // r13
  __int64 *v49; // r12
  __int64 v50; // r14
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rdi
  __int64 v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r13
  int v66; // [rsp+0h] [rbp-108h]
  __int64 v67; // [rsp+0h] [rbp-108h]
  _QWORD *v68; // [rsp+8h] [rbp-100h]
  int v69; // [rsp+8h] [rbp-100h]
  _QWORD *v70; // [rsp+10h] [rbp-F8h]
  __int64 v71; // [rsp+20h] [rbp-E8h] BYREF
  char *v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+30h] [rbp-D8h]
  char v74; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v75; // [rsp+78h] [rbp-90h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+90h] [rbp-78h]
  __int64 v78; // [rsp+98h] [rbp-70h]
  int v79; // [rsp+A0h] [rbp-68h]
  __int64 v80; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-58h]
  __int64 v82; // [rsp+C0h] [rbp-48h]

  v5 = (__int64)a2;
  v8 = sub_B77890(a5);
  v12 = *(unsigned __int8 *)(a1 + 8);
  if ( !(_BYTE)v12 )
    return 0;
  v13 = (v8 - 30) & 0xFFFFFFFB;
  if ( ((v8 - 30) & 0xFFFFFFFB) != 0 )
    return 0;
  if ( v8 == 30 )
  {
    v21 = (a2[31] + 18088) | 6;
    if ( (*(_BYTE *)(a5 + 28) & 0x7Fu) - 35 > 3 )
    {
      v42 = sub_B916A0(a5 + 72, (__int64)a2, v13, v9, v10, v11);
      a2 = (__int64 *)v21;
      v47 = sub_B94670(v42, v21, v43, v44, v45, v46);
      if ( v47 )
      {
        while ( 1 )
        {
          v48 = v47;
          v49 = (__int64 *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
          v50 = (__int64)v49;
          LODWORD(v48) = (v48 >> 2) & 1;
          v67 = (unsigned int)v48;
          if ( (_DWORD)v48 )
          {
            v50 = 0;
            if ( v49 )
              v50 = *v49;
          }
          v51 = sub_B8BF30(v50);
          if ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 53 <= 1 )
          {
            v52 = sub_B72ED0(v50);
            v51 = sub_B8BF30(v52);
          }
          if ( v51 )
          {
            v70 = *(_QWORD **)(v5 + 248);
            v69 = sub_B76070(a5, (__int64)a2, v13, v9);
            if ( v69 == (unsigned int)sub_B76070(v51, (__int64)a2, v53, v54) )
            {
              a2 = (__int64 *)a5;
              if ( sub_1BC8EA0(v70, a5, (_QWORD *)v51, v9) )
              {
                if ( (*(_BYTE *)(v51 + 8) & 6) == 0 || (a2 = (__int64 *)v51, sub_1A427C0(v5, v51, 0, v9, v55, v56)) )
                {
                  v57 = *(_QWORD *)(v50 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v50 + 16) & 4) != 0 )
                    v57 = *(_QWORD *)(v57 + 8);
                  v58 = sub_B8C1B0(v57);
                  v63 = sub_B916A0(a5 + 72, (__int64)a2, v59, v60, v61, v62);
                  v64 = sub_B8C1B0(v63);
                  LOBYTE(v9) = v58 == 0;
                  LOBYTE(a2) = v58 == 0 || v64 == 0;
                  if ( !(_BYTE)a2 )
                  {
                    if ( v58 == v64 )
                      return 0;
                    v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
                    if ( v65 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58) )
                      return 0;
                  }
                }
              }
            }
          }
          if ( v67 )
          {
            if ( v49 )
            {
              v47 = v49[1];
              if ( v47 )
                continue;
            }
          }
          break;
        }
      }
    }
    else
    {
      v13 = *(unsigned int *)(a1 + 4);
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
          & 0xFFFFFFFFFFFFFFF0LL;
      v23 = *(_QWORD *)v22;
      if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 48 )
      {
        v24 = (a2[31] + 18088) | 6;
        v72 = &v74;
        v79 = v13;
        v73 = 0x800000000LL;
        v75 = 0;
        v71 = 0;
        v76 = 0;
        v77 = v5;
        v78 = v21;
        sub_B85890(&v80, v24);
        v82 = 0x101010000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
        sub_1A395A0((__int64)&v71);
        v29 = sub_F60F10(v23, v24, v25, v26, v27, v28);
        a2 = &v71;
        if ( v29 )
          v29 += 8;
        sub_1A48440(v5, (__int64)&v71, (__int64)v29, 0);
        BYTE3(v82) = 0;
        v30 = &v72[8 * (unsigned int)v73];
        if ( v72 != v30 )
        {
          v31 = v72;
          while ( 1 )
          {
            v34 = (_QWORD *)sub_B8BF30(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v34 )
            {
              v68 = *(_QWORD **)(v5 + 248);
              v66 = sub_B76070(a5, (__int64)a2, v32, v33);
              if ( v66 == (unsigned int)sub_B76070((__int64)v34, (__int64)a2, v35, v36) )
              {
                a2 = (__int64 *)a5;
                if ( sub_1BC8EA0(v68, a5, v34, v37) )
                  break;
              }
            }
            v31 += 8;
            if ( v30 == v31 )
              goto LABEL_20;
          }
          sub_169D230((__int64)&v71);
          return 0;
        }
LABEL_20:
        sub_169D230((__int64)&v71);
      }
    }
  }
  if ( (unsigned int)sub_B771F0(a5, (__int64)a2, v13, v9) == 2 )
  {
    v14 = *(_QWORD **)(a5 + 120);
    v15 = *(_QWORD *)(v14[1] + 48LL);
    if ( sub_1BC70C0(*(_QWORD *)(*v14 + 48LL), v15) )
    {
      if ( (*(_BYTE *)(a5 + 29) & 1) == 0 )
        return 0;
      v38 = sub_B8C3D0(a5, v15, v16, v17, v18, v19);
      v39 = *v38;
      v40 = *v38 + 8LL * *((unsigned int *)v38 + 2);
      if ( v39 >= v40 )
      {
        if ( v39 == v40 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 206 )
        {
          v40 += 8LL;
          if ( v39 == v40 )
            return 0;
        }
      }
      else
      {
        v41 = v39;
        while ( 1 )
        {
          v39 = v41;
          if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) == 206 )
            break;
          v41 += 8LL;
          if ( v40 == v41 )
            return 0;
        }
      }
      LOBYTE(v12) = v39 != v40;
    }
  }
  return v12;
}
