/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424C78
// Address: 0x0000000000424C78

//----- (0000000000424C78) ----------------------------------------------------
__int64 __fastcall sub_424C78(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w1
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x21
  void **v9; // x25
  unsigned __int64 v10; // x24
  void **v11; // x0
  unsigned __int64 v12; // x1
  __int64 v13; // x26
  __int64 v14; // x22
  unsigned __int64 v15; // x27
  __int64 v16; // x28
  unsigned __int64 v17; // x27
  __int64 v18; // x28
  __int64 v19; // x1
  unsigned __int64 v20; // x26
  __int64 v21; // x25
  __int64 v22; // x22
  void *v23; // x0
  void *v24; // x0
  unsigned __int64 v25; // x0
  bool v26; // zf
  __int64 v27; // x25
  __int64 v28; // x0
  __int64 v29; // x4
  __int64 v30; // x26
  __int64 v31; // x24
  __int64 i; // x22
  void *v33; // x0
  void *v34; // x0
  __int64 v35; // x28
  __int64 v36; // x22
  unsigned __int64 v37; // x26
  unsigned __int64 v38; // x26
  __int64 v39; // x1
  void *v40; // x0
  void *v41; // x0
  void *v42; // x0
  void *nb; // [xsp+68h] [xbp-E8h]
  size_t n; // [xsp+68h] [xbp-E8h]
  size_t na; // [xsp+68h] [xbp-E8h]
  const void *src; // [xsp+70h] [xbp-E0h]
  const void *srca; // [xsp+70h] [xbp-E0h]
  const void *v48; // [xsp+78h] [xbp-D8h]
  void *v49; // [xsp+88h] [xbp-C8h] BYREF
  unsigned __int64 v50; // [xsp+90h] [xbp-C0h]
  __int64 v51; // [xsp+98h] [xbp-B8h]
  void *ptr; // [xsp+A0h] [xbp-B0h]
  unsigned __int64 v53; // [xsp+A8h] [xbp-A8h]
  __int64 v54; // [xsp+B0h] [xbp-A0h]
  __int64 v55; // [xsp+B8h] [xbp-98h]
  __int64 v56; // [xsp+C0h] [xbp-90h]
  __int64 v57; // [xsp+C8h] [xbp-88h]
  __int64 v58; // [xsp+D0h] [xbp-80h]
  __int64 v59; // [xsp+D8h] [xbp-78h]
  int v60; // [xsp+E0h] [xbp-70h]
  __int16 v61; // [xsp+E4h] [xbp-6Ch]
  char v62; // [xsp+E6h] [xbp-6Ah]
  void *v63; // [xsp+E8h] [xbp-68h] BYREF
  unsigned __int64 v64; // [xsp+F0h] [xbp-60h]
  __int64 v65; // [xsp+F8h] [xbp-58h]
  void *v66; // [xsp+100h] [xbp-50h]
  unsigned __int64 v67; // [xsp+108h] [xbp-48h]
  __int64 v68; // [xsp+110h] [xbp-40h]
  __int64 v69; // [xsp+118h] [xbp-38h]
  __int64 v70; // [xsp+120h] [xbp-30h]
  __int64 v71; // [xsp+128h] [xbp-28h]
  __int64 v72; // [xsp+130h] [xbp-20h]
  __int64 v73; // [xsp+138h] [xbp-18h]
  int v74; // [xsp+140h] [xbp-10h]
  __int16 v75; // [xsp+144h] [xbp-Ch]
  char v76; // [xsp+146h] [xbp-Ah]

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 < *(_DWORD *)(a1 + 76) )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 96LL * v4;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 24) - v6;
  if ( !v8 )
    return 0;
  v9 = (void **)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 48);
  if ( v8 != v10 )
  {
    v49 = nullptr;
    v50 = 0;
    v51 = 0;
    ptr = nullptr;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    if ( v8 >= v10 )
    {
      if ( v8 <= v10 )
      {
LABEL_33:
        v7 = v6;
        goto LABEL_34;
      }
      v11 = *(void ***)(a1 + 40);
      v12 = *(_QWORD *)(a1 + 56);
      if ( v11 <= &v49 && &v49 < &v11[12 * v12] )
      {
        v63 = nullptr;
        v64 = 0;
        v65 = 0;
        v66 = nullptr;
        v69 = v55;
        v70 = v56;
        v67 = 0;
        v68 = 0;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v75 = 0;
        v76 = 0;
        if ( v8 <= v12
          || (v11 = (void **)sub_491288(a1 + 40, v11, v8, 0x60u),
              *(_QWORD *)(a1 + 40) = v11,
              v10 = *(_QWORD *)(a1 + 48),
              v8 > v10) )
        {
          v35 = 12 * v10;
          while ( 1 )
          {
            v36 = (__int64)&v11[v35];
            v11[v35] = nullptr;
            *(_QWORD *)(v36 + 8) = 0;
            *(_QWORD *)(v36 + 16) = 0;
            *(_QWORD *)(v36 + 24) = 0;
            *(_QWORD *)(v36 + 32) = 0;
            *(_QWORD *)(v36 + 40) = 0;
            *(_QWORD *)(v36 + 48) = 0;
            *(_QWORD *)(v36 + 56) = 0;
            *(_QWORD *)(v36 + 64) = 0;
            if ( &v11[v35] != &v63 )
            {
              v37 = v64;
              if ( v64 )
              {
                n = v64 - 1;
                if ( v64 != 1 )
                {
                  srca = v63;
                  v42 = sub_491288(v36, nullptr, v64, 1u);
                  *(_QWORD *)v36 = v42;
                  *(_QWORD *)(v36 + 8) = v37;
                  memmove(v42, srca, n);
                  *(_BYTE *)(*(_QWORD *)v36 + n) = 0;
                }
              }
              v38 = v67;
              if ( v67 && (na = v67 - 1, v67 != 1) )
              {
                v48 = v66;
                v40 = *(void **)(v36 + 24);
                if ( v67 > *(_QWORD *)(v36 + 40) )
                {
                  v40 = sub_491288(v36 + 24, *(void **)(v36 + 24), v67, 1u);
                  *(_QWORD *)(v36 + 24) = v40;
                }
                *(_QWORD *)(v36 + 32) = v38;
                memmove(v40, v48, na);
                *(_BYTE *)(*(_QWORD *)(v36 + 24) + na) = 0;
              }
              else
              {
                *(_QWORD *)(v36 + 32) = 0;
              }
            }
            ++v10;
            v35 += 12;
            v39 = v70;
            *(_QWORD *)(v36 + 48) = v69;
            *(_QWORD *)(v36 + 56) = v39;
            *(_QWORD *)(v36 + 64) = v71;
            *(_QWORD *)(v36 + 72) = v72;
            *(_QWORD *)(v36 + 80) = v73;
            *(_DWORD *)(v36 + 88) = v74;
            *(_WORD *)(v36 + 92) = v75;
            *(_BYTE *)(v36 + 94) = v76;
            if ( v8 <= v10 )
              break;
            v11 = (void **)*v9;
          }
        }
        v41 = v66;
        *(_QWORD *)(a1 + 48) = v8;
        if ( v41 )
        {
          v67 = 0;
          j__free(v41);
        }
        if ( v63 )
        {
          v64 = 0;
          j__free(v63);
        }
      }
      else if ( v8 <= v12
             || (v11 = (void **)sub_491288(a1 + 40, v11, v8, 0x60u),
                 *(_QWORD *)(a1 + 40) = v11,
                 v10 = *(_QWORD *)(a1 + 48),
                 v8 > v10) )
      {
        v13 = 12 * v10;
        while ( 1 )
        {
          v14 = (__int64)&v11[v13];
          v11[v13] = nullptr;
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 32) = 0;
          *(_QWORD *)(v14 + 40) = 0;
          *(_QWORD *)(v14 + 48) = 0;
          *(_QWORD *)(v14 + 56) = 0;
          *(_QWORD *)(v14 + 64) = 0;
          if ( &v11[v13] != &v49 )
          {
            v15 = v50;
            if ( v50 )
            {
              v16 = v50 - 1;
              if ( v50 != 1 )
              {
                nb = v49;
                v34 = sub_491288(v14, nullptr, v50, 1u);
                *(_QWORD *)v14 = v34;
                *(_QWORD *)(v14 + 8) = v15;
                memmove(v34, nb, v15 - 1);
                *(_BYTE *)(*(_QWORD *)v14 + v16) = 0;
              }
            }
            v17 = v53;
            if ( v53 && (v18 = v53 - 1, v53 != 1) )
            {
              src = ptr;
              v33 = *(void **)(v14 + 24);
              if ( v53 > *(_QWORD *)(v14 + 40) )
              {
                v33 = sub_491288(v14 + 24, *(void **)(v14 + 24), v53, 1u);
                *(_QWORD *)(v14 + 24) = v33;
              }
              *(_QWORD *)(v14 + 32) = v17;
              memmove(v33, src, v17 - 1);
              *(_BYTE *)(*(_QWORD *)(v14 + 24) + v18) = 0;
            }
            else
            {
              *(_QWORD *)(v14 + 32) = 0;
            }
          }
          v19 = v56;
          *(_QWORD *)(v14 + 48) = v55;
          *(_QWORD *)(v14 + 56) = v19;
          ++v10;
          v13 += 12;
          *(_QWORD *)(v14 + 64) = v57;
          *(_QWORD *)(v14 + 72) = v58;
          *(_QWORD *)(v14 + 80) = v59;
          *(_DWORD *)(v14 + 88) = v60;
          *(_WORD *)(v14 + 92) = v61;
          *(_BYTE *)(v14 + 94) = v62;
          if ( v8 <= v10 )
            break;
          v11 = (void **)*v9;
        }
        *(_QWORD *)(a1 + 48) = v8;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
    else
    {
      v20 = v8;
      v21 = 96 * v8;
      do
      {
        v22 = *(_QWORD *)(a1 + 40) + v21;
        v23 = *(void **)(v22 + 24);
        if ( v23 )
        {
          *(_QWORD *)(v22 + 32) = 0;
          j__free(v23);
        }
        v24 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)(v22 + 8) = 0;
          j__free(v24);
        }
        ++v20;
        v21 += 96;
      }
      while ( v10 != v20 );
      *(_QWORD *)(a1 + 48) = v8;
    }
    if ( ptr )
    {
      v53 = 0;
      j__free(ptr);
    }
    if ( v49 )
    {
      v50 = 0;
      j__free(v49);
    }
    v6 = *(_QWORD *)(a1 + 64);
    goto LABEL_33;
  }
LABEL_34:
  *(_DWORD *)(a1 + 72) = 0;
  if ( !v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 600LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 600LL),
      *(_QWORD *)(a1 + 8));
    v7 = *(_QWORD *)(a1 + 64);
  }
  v25 = *(_QWORD *)(a1 + 32);
  if ( v25 )
    v26 = v7 == 0;
  else
    v26 = 1;
  if ( v26 )
  {
    if ( !v25 )
      goto LABEL_42;
  }
  else if ( !is_mul_ok(v7, v25) )
  {
LABEL_51:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  if ( !is_mul_ok(v8, v25) )
    goto LABEL_51;
LABEL_42:
  v27 = *(_QWORD *)(a1 + 8);
  v28 = sub_48C428(*(_QWORD *)(v27 + 472), 0, 1);
  v29 = *(_QWORD *)(v27 + 480);
  v30 = v28 - v29;
  if ( sub_48C428(*(_QWORD *)(v27 + 472), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + v29, 0) != -1 )
  {
    v31 = 0;
    for ( i = 0; i != v8; ++i )
    {
      if ( !(unsigned __int8)sub_4249E0(a1, *(_QWORD *)(a1 + 40) + v31) )
        break;
      v31 += 96;
    }
    sub_48C428(*(_QWORD *)(v27 + 472), v30 + *(_QWORD *)(v27 + 480), 0);
    *(_DWORD *)(a1 + 76) = i;
    if ( (_DWORD)i )
    {
      v4 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) += (unsigned int)i;
      if ( (unsigned int)i > v4 )
        goto LABEL_2;
    }
    return 0;
  }
  sub_48C428(*(_QWORD *)(v27 + 472), v30 + *(_QWORD *)(v27 + 480), 0);
  *(_DWORD *)(a1 + 76) = 0;
  return 0;
}
// 424C78: could not find valid save-restore pair for x26
