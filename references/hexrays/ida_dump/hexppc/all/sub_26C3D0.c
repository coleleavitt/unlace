__int64 __fastcall sub_26C3D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v7; // r13
  _QWORD *v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 *v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 *v27; // rsi
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r14
  __int64 *v34; // rsi
  __int64 v35; // rcx
  __int64 *v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // r12
  __int64 *v39; // rsi
  __int64 v40; // rcx
  __int64 *v41; // rdx
  __int64 *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int tinfo_property; // ebx
  unsigned int tinfo_size; // eax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx

  v2 = *(_QWORD **)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 112);
  v5 = &v2[v4];
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 2:
    case 6:
    case 7:
      v10 = *(_QWORD *)(a2 + 24);
      if ( v5 == v2 )
        goto LABEL_23;
      while ( v10 != *v2 )
      {
        if ( ++v2 == v5 )
          goto LABEL_23;
      }
      if ( v5 != v2 )
        return 0;
LABEL_23:
      v11 = sub_251360(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v11 + 8) != 65 || *(_DWORD *)(v11 + 32) != *(_DWORD *)(a1 + 128) )
        return 0;
      if ( v10 != v11 )
      {
        v12 = *(__int64 **)(a1 + 104);
        v13 = *(_QWORD *)(a1 + 112);
        v14 = &v12[v13];
        if ( v12 == v14 )
          goto LABEL_127;
        v15 = *(__int64 **)(a1 + 104);
        while ( v11 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_127;
        }
        if ( v14 == v15 )
        {
LABEL_127:
          if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v13 + 1) )
          {
            v67 = qvector_reserve(a1 + 104, v12, v13 + 1, 8);
            v68 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 104) = v67;
            v14 = (__int64 *)(v67 + 8 * v68);
          }
          *v14 = v11;
          ++*(_QWORD *)(a1 + 112);
        }
      }
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v54 = *(_QWORD *)(a1 + 88);
        v55 = *(_QWORD *)(a2 + 24);
        v56 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v54 + 1) )
        {
          v59 = qvector_reserve(a1 + 80, v56, v54 + 1, 8);
          *(_QWORD *)(a1 + 80) = v59;
          v56 = v59;
          v54 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v56 + 8 * v54) = v55;
        ++*(_QWORD *)(a1 + 88);
      }
      if ( (unsigned __int8)sub_26C020(a1, *(_QWORD *)(a2 + 32)) )
      {
        if ( *(_BYTE *)(a1 + 136) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 48 && *(_DWORD *)(a2 + 8) != 2 )
          {
            v16 = *(_QWORD *)(a2 + 32);
            if ( *(_DWORD *)(v16 + 8) == 61 && sub_251DB0(*(__int64 **)(v16 + 24), (_QWORD *)(v16 + 48)) == 1 )
            {
              v17 = 56;
              if ( *(_DWORD *)(a2 + 8) == 6 )
                v17 = 55;
              *(_DWORD *)(a2 + 8) = v17;
              v18 = *(_QWORD *)(a2 + 32);
              if ( v18 )
              {
                sub_2519B0(v18);
                clear_tinfo_t(v18 + 48);
                j__qfree(v18);
              }
            }
          }
        }
        return 0;
      }
      return 1;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x25:
      v7 = *(_QWORD *)(a2 + 24);
      if ( v5 == v2 )
        goto LABEL_58;
      v8 = *(_QWORD **)(a1 + 104);
      while ( v7 != *v8 )
      {
        if ( ++v8 == v5 )
          goto LABEL_58;
      }
      if ( v8 != v5 )
      {
        v9 = *(_QWORD *)(a2 + 32);
        goto LABEL_15;
      }
LABEL_58:
      v26 = sub_251360(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v26 + 8) == 65 && *(_DWORD *)(v26 + 32) == *(_DWORD *)(a1 + 128) )
      {
        if ( v7 != v26 )
        {
          v27 = *(__int64 **)(a1 + 104);
          v28 = *(_QWORD *)(a1 + 112);
          v29 = &v27[v28];
          if ( v27 == v29 )
            goto LABEL_124;
          v30 = *(__int64 **)(a1 + 104);
          while ( v26 != *v30 )
          {
            if ( v29 == ++v30 )
              goto LABEL_124;
          }
          if ( v29 == v30 )
          {
LABEL_124:
            if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v28 + 1) )
            {
              v69 = qvector_reserve(a1 + 104, v27, v28 + 1, 8);
              v70 = *(_QWORD *)(a1 + 112);
              *(_QWORD *)(a1 + 104) = v69;
              v29 = (__int64 *)(v69 + 8 * v70);
            }
            *v29 = v26;
            ++*(_QWORD *)(a1 + 112);
          }
        }
        v31 = *(_QWORD *)(a2 + 32);
        v32 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v2 = *(_QWORD **)(a1 + 104);
        v9 = *(_QWORD *)(a2 + 32);
        v5 = &v2[*(_QWORD *)(a1 + 112)];
        if ( v5 != v2 )
        {
LABEL_15:
          while ( *v2 != v9 )
          {
            if ( ++v2 == v5 )
              goto LABEL_71;
          }
          if ( v2 != v5 )
            return 0;
        }
LABEL_71:
        v33 = sub_251360(v9);
        if ( *(_DWORD *)(v33 + 8) != 65 || *(_DWORD *)(v33 + 32) != *(_DWORD *)(a1 + 128) )
          return 0;
        if ( v33 != v9 )
        {
          v34 = *(__int64 **)(a1 + 104);
          v35 = *(_QWORD *)(a1 + 112);
          v36 = &v34[v35];
          if ( v34 == v36 )
            goto LABEL_130;
          v37 = *(__int64 **)(a1 + 104);
          while ( v33 != *v37 )
          {
            if ( v36 == ++v37 )
              goto LABEL_130;
          }
          if ( v36 == v37 )
          {
LABEL_130:
            if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v35 + 1) )
            {
              v71 = qvector_reserve(a1 + 104, v34, v35 + 1, 8);
              v72 = *(_QWORD *)(a1 + 112);
              *(_QWORD *)(a1 + 104) = v71;
              v36 = (__int64 *)(v71 + 8 * v72);
            }
            *v36 = v33;
            ++*(_QWORD *)(a1 + 112);
          }
        }
        v31 = *(_QWORD *)(a2 + 24);
        v32 = *(_QWORD *)(a2 + 32);
      }
      if ( !v31 )
        return 0;
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v47 = *(_QWORD *)(a1 + 88);
        v48 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v47 + 1) )
        {
          v58 = qvector_reserve(a1 + 80, v48, v47 + 1, 8);
          *(_QWORD *)(a1 + 80) = v58;
          v48 = v58;
          v47 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v48 + 8 * v47) = v32;
        ++*(_QWORD *)(a1 + 88);
      }
      return (unsigned __int8)sub_26C020(a1, v31) ^ 1u;
    case 0x27:
      v19 = *(_QWORD *)(a2 + 24);
      if ( !(v4 * 8) )
        goto LABEL_47;
      while ( v19 != *v2 )
      {
        if ( ++v2 == v5 )
          goto LABEL_47;
      }
      if ( v5 != v2 )
        return 0;
LABEL_47:
      v20 = sub_251360(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v20 + 8) != 65 || *(_DWORD *)(v20 + 32) != *(_DWORD *)(a1 + 128) )
        return 0;
      if ( v19 != v20 )
      {
        v21 = *(__int64 **)(a1 + 104);
        v22 = *(_QWORD *)(a1 + 112);
        v23 = &v21[v22];
        if ( v21 == v23 )
          goto LABEL_121;
        v24 = *(__int64 **)(a1 + 104);
        while ( v20 != *v24 )
        {
          if ( v23 == ++v24 )
            goto LABEL_121;
        }
        if ( v23 == v24 )
        {
LABEL_121:
          if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v22 + 1) )
          {
            v63 = qvector_reserve(a1 + 104, v21, v22 + 1, 8);
            v64 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 104) = v63;
            v23 = (__int64 *)(v63 + 8 * v64);
          }
          *v23 = v20;
          ++*(_QWORD *)(a1 + 112);
        }
      }
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v49 = *(_QWORD *)(a1 + 88);
        v50 = *(_QWORD *)(a2 + 24);
        v51 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v49 + 1) )
        {
          v60 = qvector_reserve(a1 + 80, v51, v49 + 1, 8);
          *(_QWORD *)(a1 + 80) = v60;
          v51 = v60;
          v49 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v51 + 8 * v49) = v50;
        ++*(_QWORD *)(a1 + 88);
      }
      v25 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v25 + 8) != 61 )
        return 1;
      v52 = sub_251DB0(*(__int64 **)(v25 + 24), (_QWORD *)(v25 + 48));
      v53 = v52;
      if ( *(_BYTE *)(a1 + 136) )
      {
        v57 = *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a1 + 72) == v52 )
        {
          if ( v57 )
          {
            sub_2519B0(*(_QWORD *)(a2 + 32));
            clear_tinfo_t(v57 + 48);
            j__qfree(v57);
          }
          sub_251BD0((__int64 *)a2, *(_QWORD *)(a2 + 24));
        }
        else
        {
          tinfo_property = get_tinfo_property(*(_QWORD *)(v57 + 48), 3);
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(v57 + 48), 0);
          sub_23CDA0(
            v57,
            *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
            *(_QWORD *)(a1 + 64),
            v53 / *(_QWORD *)(a1 + 72),
            tinfo_size,
            tinfo_property);
        }
      }
      else
      {
        if ( !v52 || *(_QWORD *)(a1 + 72) % v52 )
          return 1;
        if ( v52 < *(_QWORD *)(a1 + 72) )
          *(_QWORD *)(a1 + 72) = v52;
      }
      return 0;
    default:
      if ( v5 == v2 )
        goto LABEL_80;
      break;
  }
  while ( *v2 != a2 )
  {
    if ( ++v2 == v5 )
      goto LABEL_80;
  }
  if ( v5 != v2 )
    return 0;
LABEL_80:
  v38 = sub_251360(a2);
  if ( *(_DWORD *)(v38 + 8) != 65 || *(_DWORD *)(v38 + 32) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( v38 != a2 )
  {
    v39 = *(__int64 **)(a1 + 104);
    v40 = *(_QWORD *)(a1 + 112);
    v41 = &v39[v40];
    if ( v39 == v41 )
      goto LABEL_118;
    v42 = *(__int64 **)(a1 + 104);
    while ( v38 != *v42 )
    {
      if ( v41 == ++v42 )
        goto LABEL_118;
    }
    if ( v41 == v42 )
    {
LABEL_118:
      if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v40 + 1) )
      {
        v65 = qvector_reserve(a1 + 104, v39, v40 + 1, 8);
        v66 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = v65;
        v41 = (__int64 *)(v65 + 8 * v66);
      }
      *v41 = v38;
      ++*(_QWORD *)(a1 + 112);
    }
  }
  v43 = *(_QWORD **)(a1 + 80);
  v44 = &v43[*(_QWORD *)(a1 + 88)];
  if ( v43 != v44 )
  {
    while ( *v43 != a2 )
    {
      if ( v44 == ++v43 )
        goto LABEL_93;
    }
    if ( v44 != v43 )
      return 0;
  }
LABEL_93:
  v45 = *(_QWORD **)(a1 + 104);
  v46 = &v45[*(_QWORD *)(a1 + 112)];
  if ( v45 != v46 )
  {
    while ( *v45 != a2 )
    {
      if ( v46 == ++v45 )
        return (unsigned __int8)sub_26C1C0(a1, a2) ^ 1u;
    }
    if ( v46 != v45 )
      return 0;
  }
  return (unsigned __int8)sub_26C1C0(a1, a2) ^ 1u;
}
