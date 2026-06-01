/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AC78
// Address: 0x000000000042AC78

//----- (000000000042AC78) ----------------------------------------------------
__int64 __fastcall sub_42AC78(__int64 a1, __int64 a2, int a3, __int64 (***a4)())
{
  unsigned __int64 v4; // x8
  int v5; // w4
  unsigned __int64 v6; // x0
  unsigned int v7; // w2
  int v8; // w20
  unsigned int v9; // w0
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x19
  unsigned int v13; // w19
  char *v14; // x0
  unsigned __int64 v15; // x23
  __int64 v16; // x22
  __int64 v17; // x21
  char *v18; // x20
  void *v19; // x0
  void *v20; // x0
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x28
  __int64 v24; // x27
  char *v25; // x21
  void *v26; // x0
  void *v27; // x0
  __int64 v29; // x27
  __int64 v30; // x0
  __int64 v31; // x4
  __int64 v32; // x28
  __int64 v33; // x22
  __int64 v34; // x21
  unsigned int v35; // w1
  char *v36; // x0
  int v37; // w2
  bool v38; // zf
  bool v39; // zf
  char *v40; // x1
  __int64 v41; // x28
  __int64 v42; // x21
  unsigned __int64 v43; // x27
  unsigned __int64 v44; // x27
  void *v45; // x1
  unsigned int v46; // w3
  __int64 v47; // x19
  __int64 (*v48)(); // x4
  __int64 *v49; // x2
  void *v50; // x0
  void *v51; // x0
  __int64 v52; // x27
  void **v53; // x21
  void *v54; // x1
  void *v55; // x0
  char *v56; // x0
  void *v57; // x0
  void *v58; // x0
  size_t n; // [xsp+70h] [xbp-170h]
  size_t na; // [xsp+70h] [xbp-170h]
  size_t nb; // [xsp+70h] [xbp-170h]
  size_t nc; // [xsp+70h] [xbp-170h]
  void *v66; // [xsp+90h] [xbp-150h]
  size_t v67; // [xsp+90h] [xbp-150h]
  size_t v68; // [xsp+90h] [xbp-150h]
  const void *src; // [xsp+98h] [xbp-148h]
  const void *srca; // [xsp+98h] [xbp-148h]
  const void *v71; // [xsp+A8h] [xbp-138h]
  void *v72; // [xsp+B0h] [xbp-130h] BYREF
  __int64 v73; // [xsp+B8h] [xbp-128h]
  __int64 v74; // [xsp+C0h] [xbp-120h]
  __int64 (__fastcall **v75)(); // [xsp+C8h] [xbp-118h] BYREF
  __int64 v76; // [xsp+D0h] [xbp-110h]
  __int64 v77; // [xsp+D8h] [xbp-108h]
  unsigned __int64 v78; // [xsp+E0h] [xbp-100h]
  unsigned __int64 v79; // [xsp+E8h] [xbp-F8h]
  void *ptr; // [xsp+F0h] [xbp-F0h] BYREF
  unsigned __int64 v81; // [xsp+F8h] [xbp-E8h]
  unsigned __int64 v82; // [xsp+100h] [xbp-E0h]
  unsigned __int64 v83; // [xsp+108h] [xbp-D8h]
  __int64 v84; // [xsp+110h] [xbp-D0h]
  void *v85; // [xsp+118h] [xbp-C8h] BYREF
  unsigned __int64 v86; // [xsp+120h] [xbp-C0h]
  __int64 v87; // [xsp+128h] [xbp-B8h]
  void *v88; // [xsp+130h] [xbp-B0h]
  unsigned __int64 v89; // [xsp+138h] [xbp-A8h]
  __int64 v90; // [xsp+140h] [xbp-A0h]
  void *v91; // [xsp+148h] [xbp-98h]
  void *v92; // [xsp+150h] [xbp-90h]
  void *v93; // [xsp+158h] [xbp-88h]
  __int64 v94; // [xsp+160h] [xbp-80h]
  __int64 v95; // [xsp+168h] [xbp-78h]
  int v96; // [xsp+170h] [xbp-70h]
  __int16 v97; // [xsp+174h] [xbp-6Ch]
  char v98; // [xsp+176h] [xbp-6Ah]
  void *v99; // [xsp+178h] [xbp-68h] BYREF
  size_t v100; // [xsp+180h] [xbp-60h]
  __int64 v101; // [xsp+188h] [xbp-58h]
  void *v102; // [xsp+190h] [xbp-50h]
  size_t v103; // [xsp+198h] [xbp-48h]
  __int64 v104; // [xsp+1A0h] [xbp-40h]
  void *v105; // [xsp+1A8h] [xbp-38h]
  void *v106; // [xsp+1B0h] [xbp-30h]
  void *v107; // [xsp+1B8h] [xbp-28h]
  void *v108; // [xsp+1C0h] [xbp-20h]
  void *v109; // [xsp+1C8h] [xbp-18h]
  int v110; // [xsp+1D0h] [xbp-10h]
  __int16 v111; // [xsp+1D4h] [xbp-Ch]
  char v112; // [xsp+1D6h] [xbp-Ah]

  v75 = off_519C30;
  v76 = a1;
  v4 = *(_QWORD *)(a2 + 56);
  v5 = *(_DWORD *)(a2 + 4);
  v77 = *(_QWORD *)(a2 + 24);
  v78 = 0;
  v79 = v4;
  ptr = nullptr;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  if ( v5 == 8 )
    v6 = 0;
  else
    v6 = sub_41A170((_QWORD *)(a1 + 80), (_QWORD *)a2);
  if ( v4 )
    v6 /= v4;
  v7 = 0;
  v78 = v6;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 > v9 )
      goto LABEL_48;
    v10 = v83;
    v11 = v83;
    v12 = v78 - v83;
    if ( v78 == v83 )
      goto LABEL_8;
    v22 = v81;
    if ( v12 != v81 )
    {
      v85 = nullptr;
      v86 = 0;
      v87 = 0;
      v88 = nullptr;
      v89 = 0;
      v90 = 0;
      v91 = nullptr;
      v92 = nullptr;
      v93 = nullptr;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      if ( v12 >= v81 )
      {
        if ( v12 <= v81 )
        {
LABEL_33:
          v11 = v10;
          goto LABEL_34;
        }
        v40 = (char *)ptr;
        if ( ptr <= &v85 && &v85 < (void **)((char *)ptr + 96 * v82) )
        {
          v99 = nullptr;
          v100 = 0;
          v101 = 0;
          v102 = nullptr;
          v105 = v91;
          v106 = v92;
          v103 = 0;
          v104 = 0;
          v107 = v93;
          v108 = nullptr;
          v109 = nullptr;
          v110 = 0;
          v111 = 0;
          v112 = 0;
          if ( v12 <= v82 || (v58 = sub_491288((__int64)&ptr, ptr, v78 - v83, 0x60u), v22 = v81, ptr = v58, v12 > v81) )
          {
            v52 = 96 * v22;
            do
            {
              v53 = (void **)((char *)ptr + v52);
              *v53 = nullptr;
              v53[1] = nullptr;
              v53[2] = nullptr;
              v53[3] = nullptr;
              v53[4] = nullptr;
              v53[5] = nullptr;
              v53[6] = nullptr;
              v53[7] = nullptr;
              v53[8] = nullptr;
              if ( v53 != &v99 )
              {
                nb = v100;
                if ( v100 )
                {
                  v67 = v100 - 1;
                  if ( v100 != 1 )
                  {
                    srca = v99;
                    v57 = sub_491288((__int64)v53, nullptr, v100, 1u);
                    *v53 = v57;
                    v53[1] = (void *)nb;
                    memmove(v57, srca, v67);
                    *((_BYTE *)*v53 + v67) = 0;
                  }
                }
                nc = v103;
                if ( v103 && (v68 = v103 - 1, v103 != 1) )
                {
                  v71 = v102;
                  v55 = v53[3];
                  if ( v103 > (unsigned __int64)v53[5] )
                  {
                    v55 = sub_491288((__int64)(v53 + 3), v53[3], v103, 1u);
                    v53[3] = v55;
                  }
                  v53[4] = (void *)nc;
                  memmove(v55, v71, v68);
                  *((_BYTE *)v53[3] + v68) = 0;
                }
                else
                {
                  v53[4] = nullptr;
                }
              }
              v54 = v106;
              v53[6] = v105;
              v53[7] = v54;
              ++v22;
              v52 += 96;
              v53[8] = v107;
              v53[9] = v108;
              v53[10] = v109;
              *((_DWORD *)v53 + 22) = v110;
              *((_WORD *)v53 + 46) = v111;
              *((_BYTE *)v53 + 94) = v112;
            }
            while ( v12 > v22 );
          }
          v81 = v12;
          if ( v102 )
          {
            v103 = 0;
            j__free(v102);
          }
          if ( v99 )
          {
            v100 = 0;
            j__free(v99);
          }
          goto LABEL_28;
        }
        if ( v12 <= v82
          || (v56 = (char *)sub_491288((__int64)&ptr, ptr, v78 - v83, 0x60u), v22 = v81, v40 = v56, ptr = v56, v12 > v81) )
        {
          v41 = 96 * v22;
          while ( 1 )
          {
            v42 = (__int64)&v40[v41];
            *(_QWORD *)&v40[v41] = 0;
            *(_QWORD *)(v42 + 8) = 0;
            *(_QWORD *)(v42 + 16) = 0;
            *(_QWORD *)(v42 + 24) = 0;
            *(_QWORD *)(v42 + 32) = 0;
            *(_QWORD *)(v42 + 40) = 0;
            *(_QWORD *)(v42 + 48) = 0;
            *(_QWORD *)(v42 + 56) = 0;
            *(_QWORD *)(v42 + 64) = 0;
            if ( &v40[v41] != (char *)&v85 )
            {
              v43 = v86;
              if ( v86 )
              {
                n = v86 - 1;
                if ( v86 != 1 )
                {
                  v66 = v85;
                  v51 = sub_491288(v42, nullptr, v86, 1u);
                  *(_QWORD *)v42 = v51;
                  *(_QWORD *)(v42 + 8) = v43;
                  memmove(v51, v66, n);
                  *(_BYTE *)(*(_QWORD *)v42 + n) = 0;
                }
              }
              v44 = v89;
              if ( v89 && (na = v89 - 1, v89 != 1) )
              {
                src = v88;
                v50 = *(void **)(v42 + 24);
                if ( v89 > *(_QWORD *)(v42 + 40) )
                {
                  v50 = sub_491288(v42 + 24, *(void **)(v42 + 24), v89, 1u);
                  *(_QWORD *)(v42 + 24) = v50;
                }
                *(_QWORD *)(v42 + 32) = v44;
                memmove(v50, src, na);
                *(_BYTE *)(*(_QWORD *)(v42 + 24) + na) = 0;
              }
              else
              {
                *(_QWORD *)(v42 + 32) = 0;
              }
            }
            ++v22;
            v41 += 96;
            v45 = v92;
            *(_QWORD *)(v42 + 48) = v91;
            *(_QWORD *)(v42 + 56) = v45;
            *(_QWORD *)(v42 + 64) = v93;
            *(_QWORD *)(v42 + 72) = v94;
            *(_QWORD *)(v42 + 80) = v95;
            *(_DWORD *)(v42 + 88) = v96;
            *(_WORD *)(v42 + 92) = v97;
            *(_BYTE *)(v42 + 94) = v98;
            if ( v12 <= v22 )
              break;
            v40 = (char *)ptr;
          }
        }
      }
      else
      {
        v23 = v78 - v83;
        v24 = 96 * v12;
        do
        {
          v25 = (char *)ptr + v24;
          v26 = *(void **)((char *)ptr + v24 + 24);
          if ( v26 )
          {
            *((_QWORD *)v25 + 4) = 0;
            j__free(v26);
          }
          v27 = *(void **)v25;
          if ( *(_QWORD *)v25 )
          {
            *((_QWORD *)v25 + 1) = 0;
            j__free(v27);
          }
          ++v23;
          v24 += 96;
        }
        while ( v22 != v23 );
      }
      v81 = v12;
LABEL_28:
      if ( v88 )
      {
        v89 = 0;
        j__free(v88);
      }
      if ( v85 )
      {
        v86 = 0;
        j__free(v85);
      }
      v10 = v83;
      goto LABEL_33;
    }
LABEL_34:
    LODWORD(v84) = 0;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v76 + 600) + 16LL))(*(_QWORD *)(v76 + 600), v76);
      v11 = v83;
    }
    if ( !v79 || v11 == 0 )
    {
      if ( !v79 )
        goto LABEL_42;
    }
    else if ( !is_mul_ok(v11, v79) )
    {
      goto LABEL_62;
    }
    if ( !is_mul_ok(v12, v79) )
    {
LABEL_62:
      v13 = 0;
      HIDWORD(v84) = 0;
      goto LABEL_9;
    }
LABEL_42:
    v29 = v76;
    v30 = sub_48C428(*(_QWORD *)(v76 + 472), 0, 1);
    v31 = *(_QWORD *)(v29 + 480);
    v32 = v30 - v31;
    if ( sub_48C428(*(_QWORD *)(v29 + 472), v77 + v83 * v79 + v31, 0) == -1 )
      break;
    v33 = 0;
    v34 = 0;
    do
    {
      if ( !(unsigned __int8)sub_4249E0((__int64)&v75, (__int64)ptr + v33) )
        break;
      ++v34;
      v33 += 96;
    }
    while ( v12 != v34 );
    sub_48C428(*(_QWORD *)(v29 + 472), v32 + *(_QWORD *)(v29 + 480), 0);
    HIDWORD(v84) = v34;
    if ( !(_DWORD)v34 || (v9 = v84, v83 += (unsigned int)v34, (unsigned int)v34 <= (unsigned int)v84) )
    {
LABEL_8:
      v13 = 0;
      goto LABEL_9;
    }
LABEL_48:
    v35 = v9 + 1;
    LODWORD(v84) = v9 + 1;
    if ( v8 )
    {
      v36 = (char *)ptr + 96 * v9;
      v37 = *((unsigned __int16 *)v36 + 27);
      if ( *((_WORD *)v36 + 27) )
        v38 = v37 == 65280;
      else
        v38 = 1;
      if ( v38
        || (v37 != 65311 ? (v39 = v37 == 65521) : (v39 = 1),
            v39 || (v36[52] & 0xFu) - 1 > 1 || (v46 = *((_DWORD *)v36 + 12)) == 0) )
      {
        ++v8;
        v9 = v35;
        v7 = HIDWORD(v84);
      }
      else
      {
        v47 = *((_QWORD *)v36 + 7);
        v72 = nullptr;
        v73 = 0;
        if ( qword_522120 != -1 )
          v47 -= qword_522120;
        v74 = 0;
        sub_42ABB0(a1, (__int64)&v72, a3, v46);
        v48 = **a4;
        if ( v73 )
          v49 = (__int64 *)v72;
        else
          v49 = &qword_4B2D48;
        if ( v48 == sub_408240 )
        {
          ++v8;
          if ( v72 )
          {
            v73 = 0;
            j__free(v72);
          }
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64 *, __int64 (*)()))v48)(
                  a4,
                  v47,
                  v49,
                  sub_408240);
          ++v8;
          if ( v72 )
          {
            v73 = 0;
            j__free(v72);
            if ( v13 )
              goto LABEL_9;
          }
          else if ( v13 )
          {
            goto LABEL_9;
          }
        }
        v9 = v84;
        v7 = HIDWORD(v84);
      }
    }
    else
    {
      v8 = 1;
      ++v9;
      v7 = HIDWORD(v84);
    }
  }
  v13 = 0;
  sub_48C428(*(_QWORD *)(v29 + 472), v32 + *(_QWORD *)(v29 + 480), 0);
  HIDWORD(v84) = 0;
LABEL_9:
  v14 = (char *)ptr;
  v75 = off_519C30;
  if ( ptr )
  {
    v15 = v81;
    if ( v81 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = &v14[v16];
        v19 = *(void **)&v14[v16 + 24];
        if ( v19 )
        {
          *((_QWORD *)v18 + 4) = 0;
          j__free(v19);
        }
        v20 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          j__free(v20);
        }
        ++v17;
        v16 += 96;
        v14 = (char *)ptr;
      }
      while ( v15 != v17 );
    }
    v81 = 0;
    j__free(v14);
  }
  return v13;
}
// 42ACF4: variable 'v4' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519C30: using guessed type __int64 (__fastcall *off_519C30[2])();
// 522120: using guessed type __int64 qword_522120;
