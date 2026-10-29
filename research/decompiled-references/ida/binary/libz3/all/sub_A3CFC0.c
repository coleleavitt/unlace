__m128i *__fastcall sub_A3CFC0(__m128i *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  int v12; // r8d
  char v13; // dl
  char v14; // r10
  char v15; // r9
  char v16; // cl
  int v17; // eax
  char v18; // si
  unsigned int v19; // esi
  __int64 *v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // al
  int v23; // r8d
  int v24; // r9d
  unsigned __int8 v25; // al
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned __int8 v29; // al
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  __int64 v35; // rax
  int i; // ebx
  __int64 v37; // rbx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // [rsp+0h] [rbp-3D0h]
  __int64 v43; // [rsp+8h] [rbp-3C8h]
  int v44; // [rsp+14h] [rbp-3BCh]
  int v45; // [rsp+18h] [rbp-3B8h]
  __int64 v46; // [rsp+20h] [rbp-3B0h]
  unsigned int v47; // [rsp+28h] [rbp-3A8h]
  _DWORD *v48; // [rsp+28h] [rbp-3A8h]
  unsigned int v49; // [rsp+30h] [rbp-3A0h]
  unsigned int v50; // [rsp+38h] [rbp-398h]
  void *v51; // [rsp+40h] [rbp-390h]
  unsigned int v52; // [rsp+40h] [rbp-390h]
  unsigned int v53; // [rsp+48h] [rbp-388h]
  __int64 v54; // [rsp+48h] [rbp-388h]
  __int64 v55; // [rsp+48h] [rbp-388h]
  int v56; // [rsp+68h] [rbp-368h] BYREF
  __int64 v57; // [rsp+6Ch] [rbp-364h] BYREF
  _DWORD v58[3]; // [rsp+74h] [rbp-35Ch] BYREF
  _QWORD v59[2]; // [rsp+80h] [rbp-350h] BYREF
  int v60[2]; // [rsp+90h] [rbp-340h] BYREF
  __int64 v61; // [rsp+98h] [rbp-338h]
  __int64 v62; // [rsp+A0h] [rbp-330h]
  void *v63; // [rsp+A8h] [rbp-328h]
  __int64 v64; // [rsp+B0h] [rbp-320h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-318h]
  __int64 v66; // [rsp+C0h] [rbp-310h]
  void *v67; // [rsp+C8h] [rbp-308h]
  _QWORD v68[2]; // [rsp+D0h] [rbp-300h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-2F0h]
  __int64 v70; // [rsp+E8h] [rbp-2E8h]
  _QWORD v71[2]; // [rsp+F0h] [rbp-2E0h] BYREF
  _QWORD v72[2]; // [rsp+100h] [rbp-2D0h] BYREF
  void *ptr; // [rsp+110h] [rbp-2C0h] BYREF
  int v74[2]; // [rsp+118h] [rbp-2B8h]
  int v75; // [rsp+120h] [rbp-2B0h] BYREF
  char v76; // [rsp+124h] [rbp-2ACh]
  __int64 v77; // [rsp+128h] [rbp-2A8h]

  v8 = a5;
  if ( a5 )
    goto LABEL_2;
  ptr = &v75;
  *(_QWORD *)v74 = 0x1000000000LL;
  sub_A3BAA0(a2, (__int64 *)a4, (char **)&ptr);
  if ( v74[0] )
  {
    v19 = 0;
    v20 = (__int64 *)ptr;
    do
    {
      if ( *((_DWORD *)v20 + 2) >= v19 )
      {
        v8 = *v20;
        v19 = *((_DWORD *)v20 + 2);
      }
      v20 += 2;
    }
    while ( (char *)ptr + 16 * (unsigned int)v74[0] != (char *)v20 );
    if ( ptr != &v75 && ptr )
      sub_186B220(ptr);
LABEL_2:
    if ( a3 > 0x14 )
    {
      sub_9BFD00(a1, (_QWORD *)a2, a4);
      return a1;
    }
    v56 = -1;
    v57 = -1;
    *(_QWORD *)v60 = 0;
    v61 = 0;
    v62 = 1;
    v63 = nullptr;
    v64 = 0;
    v65 = 0;
    v66 = 1;
    v67 = nullptr;
    v58[0] = -1;
    if ( sub_9EA560(a2, a4, v8, &v56, (__int64)v60, (_DWORD *)&v57 + 1, &v57, (__int64)&v64, v58) )
    {
      v9 = HIDWORD(v57);
      v10 = v58[0];
      if ( HIDWORD(v57) != v58[0] )
      {
        if ( v58[0] < HIDWORD(v57) )
        {
          v12 = v60[0];
          HIDWORD(v57) = v58[0];
          v47 = v58[0];
          v54 = v61;
          v51 = v63;
          v13 = BYTE4(v62);
          v60[0] = v64;
          v14 = v60[1] & 1;
          v58[0] = v9;
          v61 = v65;
          v49 = v9;
          LODWORD(v64) = v12;
          v15 = BYTE4(v62) & 1;
          LODWORD(ptr) = v12;
          v16 = v60[1] & 2;
          v17 = v66;
          v18 = v60[1] & 2 | BYTE4(v64) & 0xFC;
          LODWORD(v66) = v62;
          LOBYTE(v60[1]) = BYTE4(v64) & 1 | BYTE4(v64) & 2 | v60[1] & 0xFC;
          LODWORD(v62) = v17;
          BYTE4(v64) = v14 | v18;
          v63 = v67;
          BYTE4(v62) = BYTE4(v66) & 3 | BYTE4(v62) & 0xFC;
          v65 = v54;
          *(_QWORD *)v74 = 0;
          v75 = v66;
          v77 = 0;
          BYTE4(ptr) = v14 | v16 | BYTE4(ptr) & 0xFC;
          v67 = v51;
          BYTE4(v66) = v15 | v13 & 2 | BYTE4(v66) & 0xFC;
          v76 = v15 | v13 & 2 | v76 & 0xFC;
          sub_25A130((char *)&ptr);
          v10 = v49;
          v9 = v47;
        }
        v53 = v10 - v9;
        if ( (((unsigned __int8)v9 ^ (unsigned __int8)(v10 - v9)) & 1) == 0 && v9 >= v10 - v9 )
        {
          v50 = v10;
          v52 = v9;
          v68[0] = 0;
          v68[1] = 0;
          v69 = 1;
          v70 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v68, v60);
          v43 = *(_QWORD *)(a2 + 24);
          v21 = sub_9C0480(a2, v8, v53);
          v46 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          v71[0] = 2;
          v71[1] = 0;
          v72[0] = 1;
          v72[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v72);
          BYTE4(v72[0]) &= ~1u;
          LODWORD(v72[0]) = 1;
          sub_3EBE30((__int64)&ptr, (__int64)v71, (__int64)&v64);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v68, (__int64)&ptr, (__int64)v68);
          sub_25A130((char *)&ptr);
          sub_25A130((char *)v71);
          if ( !(unsigned __int8)sub_98B380(v8) || (v69 & 0x100000000LL) == 0 && (_DWORD)v69 == 1 )
          {
            sub_3EBE30((__int64)v71, (__int64)v68, (__int64)v68);
            sub_1831620(qword_1C7F2C0, v71);
            v22 = sub_98B380(v8);
            sub_27B900(a2 + 408, (int)v68, v22, a2 + 408, v23, v24);
            sub_15E1B70(*(_QWORD *)(a2 + 408));
            sub_15E1B70(*(_QWORD *)(a2 + 408));
            v25 = sub_98B380(v8);
            sub_27B900(a2 + 408, (int)v71, v25, v26, v27, v28);
            v48 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a2 + 408));
            if ( v53 < v52 )
            {
              sub_9C0480(a2, v8, 2 * v52 - v50);
              v48 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a2 + 408));
            }
            if ( (v64 & 0x100000000LL) != 0 || (_DWORD)v64 != 1 || (v66 & 0x100000000LL) != 0 || (_DWORD)v66 != 1 )
            {
              v29 = sub_98B380(v8);
              sub_27B900(a2 + 408, (int)&v64, v29, v30, v31, v32);
              v48 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a2 + 408));
            }
            ptr = v48;
            if ( v48 )
              ++v48[2];
            v42 = (_QWORD *)(a2 + 1464);
            sub_98C750((_QWORD *)(a2 + 1464), &ptr);
            v33 = *(_DWORD *)(a4 + 8);
            ptr = &v75;
            *(_QWORD *)v74 = 0x1000000000LL;
            if ( !v33 )
              goto LABEL_44;
            v34 = v56;
            v35 = 0;
            for ( i = 0; i != v33; ++i )
            {
              if ( i != v34 && (_DWORD)v57 != i )
              {
                v44 = v34;
                v45 = v33;
                v55 = v35;
                sub_9EE8A0((__int64)&ptr, *(_QWORD *)a4 + v35);
                v35 = v55;
                v33 = v45;
                v34 = v44;
              }
              v35 += 40;
            }
            if ( v74[0] )
            {
              sub_A3CFC0(v59, a2, a3 + 1, &ptr, 0);
              v37 = v59[0];
              v38 = v59[1];
              v39 = sub_15E1B70(*(_QWORD *)(a2 + 408));
              *(_QWORD *)&v58[1] = v39;
              v40 = v39;
              if ( v39 )
              {
                ++*(_DWORD *)(v39 + 8);
                sub_98C750(v42, &v58[1]);
                *(__m128 *)a1 = _mm_loadh_ps((const double *)(a2 + 24));
                ++*(_DWORD *)(v40 + 8);
              }
              else
              {
                sub_98C750(v42, &v58[1]);
                v41 = *(_QWORD *)(a2 + 24);
                a1->m128i_i64[0] = 0;
                a1->m128i_i64[1] = v41;
              }
              sub_98B270(v37, v38);
            }
            else
            {
LABEL_44:
              *(__m128 *)a1 = _mm_loadh_ps((const double *)(a2 + 24));
              if ( v48 )
                ++v48[2];
            }
            sub_A3C490((char **)&ptr);
            sub_25A130((char *)v71);
            sub_98B270(v46, v43);
            sub_25A130((char *)v68);
            goto LABEL_10;
          }
          sub_98B270(v46, v43);
          sub_25A130((char *)v68);
        }
      }
    }
    sub_A3C520(a1->m128i_i64, a2, a3, a4, v8);
LABEL_10:
    sub_25A130((char *)&v64);
    sub_25A130((char *)v60);
    return a1;
  }
  sub_9BFD00(a1, (_QWORD *)a2, a4);
  if ( ptr && ptr != &v75 )
    sub_186B220(ptr);
  return a1;
}

