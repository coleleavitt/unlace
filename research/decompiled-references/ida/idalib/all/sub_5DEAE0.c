__int64 __fastcall sub_5DEAE0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r15d
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r15d
  int v18; // r9d
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r10
  _DWORD *v23; // rdi
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // r9
  _DWORD *v28; // rdi
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rsi
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  _QWORD *v41; // r13
  _DWORD *v42; // rsi
  __int64 v43; // rdi
  _DWORD *v44; // rdx
  _DWORD *v45; // rax
  _QWORD *v46; // rbp
  _DWORD *v47; // rsi
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  _DWORD *v50; // rax
  int v51; // eax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  unsigned __int64 v60; // rdi
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // [rsp+8h] [rbp-A0h]
  __int64 v67; // [rsp+8h] [rbp-A0h]
  __int64 v68; // [rsp+8h] [rbp-A0h]
  __int64 v69; // [rsp+8h] [rbp-A0h]
  int v70; // [rsp+8h] [rbp-A0h]
  __int64 v71; // [rsp+8h] [rbp-A0h]
  int v72; // [rsp+10h] [rbp-98h]
  int v73; // [rsp+10h] [rbp-98h]
  __int64 v74; // [rsp+10h] [rbp-98h]
  __int64 v75; // [rsp+10h] [rbp-98h]
  int v76; // [rsp+10h] [rbp-98h]
  __int64 v77; // [rsp+18h] [rbp-90h]
  __int64 v78[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v79; // [rsp+30h] [rbp-78h]
  __int64 v80; // [rsp+40h] [rbp-68h]
  __int128 v81; // [rsp+48h] [rbp-60h]
  int v82; // [rsp+58h] [rbp-50h]
  __int16 v83; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v84; // [rsp+68h] [rbp-40h]

  v8 = a4 & 1;
  v9 = *(_QWORD *)(a1 + 56);
  v84 = __readfsqword(0x28u);
  v10 = 0;
  if ( !v9 )
    goto LABEL_63;
  v11 = *(_QWORD *)(a1 + 48);
  do
  {
    if ( a2 == *(_QWORD *)(v11 + (v10 << 6)) )
    {
      v12 = v10;
      goto LABEL_6;
    }
    ++v10;
  }
  while ( v9 != v10 );
  v12 = -1;
LABEL_6:
  v13 = 0;
  while ( a3 != *(_QWORD *)(v11 + (v13 << 6)) )
  {
    if ( v9 == ++v13 )
    {
      if ( !v8 && (a4 & 2) != 0 )
      {
        if ( v12 != -1 )
        {
          v15 = v12;
          v14 = -1;
          goto LABEL_43;
        }
        v14 = -1;
        v15 = -1;
LABEL_73:
        v75 = a3;
        v69 = v15;
        v59 = sub_5DEA50(a1, a2);
        a3 = v75;
        v15 = v69;
        v12 = v59;
        v17 = v59;
LABEL_14:
        if ( v14 == -1 )
          goto LABEL_40;
        v11 = *(_QWORD *)(a1 + 48);
LABEL_16:
        v18 = v14;
        goto LABEL_17;
      }
      v17 = v12;
      v15 = -1;
      if ( v12 != -1 )
      {
LABEL_40:
        v66 = v15;
        v35 = sub_5DEA50(a1, a3);
        v11 = *(_QWORD *)(a1 + 48);
        v15 = v66;
        v14 = v35;
        v18 = v35;
LABEL_17:
        v19 = v12 << 6;
        v20 = v14 << 6;
        *(_BYTE *)(v11 + v19 + 61) |= a4;
        *(_BYTE *)(v20 + *(_QWORD *)(a1 + 48) + 61) |= a4;
        v21 = *(_QWORD *)(a1 + 48);
        v22 = v21 + v19;
        v23 = *(_DWORD **)(v21 + v19 + 32);
        v24 = *(_QWORD *)(v21 + v19 + 40);
        v25 = &v23[v24];
        if ( v23 == v25 )
          goto LABEL_64;
        v26 = *(_DWORD **)(v21 + v19 + 32);
        while ( v18 != *v26 )
        {
          if ( v25 == ++v26 )
            goto LABEL_64;
        }
        if ( v25 == v26 )
        {
LABEL_64:
          v52 = v24 + 1;
          if ( *(_QWORD *)(v22 + 48) < v52 )
          {
            v77 = v15;
            v73 = v18;
            v55 = qvector_reserve(v22 + 32, *(_QWORD *)(v21 + v19 + 32), v52, 4);
            v22 = v21 + v19;
            v15 = v77;
            v18 = v73;
            v56 = *(_QWORD *)(v21 + v19 + 40);
            *(_QWORD *)(v21 + v19 + 32) = v55;
            v25 = (_DWORD *)(v55 + 4 * v56);
          }
          *v25 = v18;
          ++*(_QWORD *)(v22 + 40);
          v21 = *(_QWORD *)(a1 + 48);
        }
        v27 = v21 + v20;
        v28 = *(_DWORD **)(v21 + v20 + 8);
        v29 = *(_QWORD *)(v21 + v20 + 16);
        v30 = &v28[v29];
        if ( v28 == v30 )
          goto LABEL_67;
        v31 = *(_DWORD **)(v21 + v20 + 8);
        while ( *v31 != v17 )
        {
          if ( v30 == ++v31 )
            goto LABEL_67;
        }
        if ( v30 == v31 )
        {
LABEL_67:
          v53 = v29 + 1;
          if ( *(_QWORD *)(v27 + 24) < v53 )
          {
            v74 = v15;
            v57 = qvector_reserve(v27 + 8, *(_QWORD *)(v21 + v20 + 8), v53, 4);
            v27 = v21 + v20;
            v15 = v74;
            v58 = *(_QWORD *)(v21 + v20 + 16);
            *(_QWORD *)(v21 + v20 + 8) = v57;
            v30 = (_DWORD *)(v57 + 4 * v58);
          }
          *v30 = v17;
          ++*(_QWORD *)(v27 + 16);
          v21 = *(_QWORD *)(a1 + 48);
        }
        if ( !v8 )
        {
          if ( (a4 & 2) != 0 )
          {
            v54 = v20;
            v20 = v19;
            v19 = v54;
          }
          else
          {
            v19 = -64;
            v20 = v15 << 6;
          }
        }
        v32 = *(_DWORD *)(v21 + v20 + 56);
        v33 = v19 + v21;
        if ( v32 != -1 && --v32 < *(_DWORD *)(v33 + 56) )
          v32 = *(_DWORD *)(v33 + 56);
        *(_DWORD *)(v33 + 56) = v32;
        return 1;
      }
LABEL_63:
      v68 = a3;
      v51 = sub_5DEA50(a1, a2);
      a3 = v68;
      v15 = -1;
      v12 = v51;
      v17 = v51;
      goto LABEL_40;
    }
  }
  v14 = v13;
  if ( v8 )
  {
    v15 = v13;
LABEL_43:
    v16 = v15 << 6;
    if ( *(_DWORD *)(v11 + (v15 << 6) + 56) )
      goto LABEL_13;
  }
  else
  {
    if ( (a4 & 2) == 0 )
    {
      if ( v12 == -1 )
      {
        v61 = sub_5DEA50(a1, a2);
        v11 = *(_QWORD *)(a1 + 48);
        v15 = -1;
        v12 = v61;
        v17 = v61;
      }
      else
      {
        v17 = v12;
        v15 = -1;
      }
      goto LABEL_16;
    }
    if ( v12 == -1 )
    {
      v15 = -1;
      goto LABEL_73;
    }
    v15 = v12;
    v16 = v12 << 6;
    if ( *(_DWORD *)(v11 + (v12 << 6) + 56) )
    {
LABEL_13:
      v17 = v12;
      if ( v12 == -1 )
        goto LABEL_73;
      goto LABEL_14;
    }
  }
  LOBYTE(v4) = v14 != -1 && v12 != -1;
  if ( (_BYTE)v4 )
  {
    v18 = v14;
    v17 = v12;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 77) )
  {
    v67 = v16;
    v72 = v15;
    v78[0] = -1;
    v78[1] = 0;
    v80 = 0;
    v82 = 0;
    v83 = 0;
    v79 = 0;
    v81 = 0;
    sub_5DE770((char **)(a1 + 48), v78);
    LODWORD(v36) = v72;
    v37 = *(_QWORD *)(a1 + 56) - 1LL;
    v38 = v67;
    v39 = v37 << 6;
    if ( v8 )
    {
      v38 = (*(_QWORD *)(a1 + 56) - 1LL) << 6;
      v39 = v67;
      v36 = *(_QWORD *)(a1 + 56) - 1LL;
      LODWORD(v37) = v72;
    }
    *(_BYTE *)(v38 + *(_QWORD *)(a1 + 48) + 61) |= a4;
    *(_BYTE *)(v39 + *(_QWORD *)(a1 + 48) + 61) |= a4;
    v40 = *(_QWORD *)(a1 + 48);
    v41 = (_QWORD *)(v40 + v38);
    v42 = *(_DWORD **)(v40 + v38 + 32);
    v43 = *(_QWORD *)(v40 + v38 + 40);
    v44 = &v42[v43];
    if ( v42 == v44 )
      goto LABEL_74;
    v45 = *(_DWORD **)(v40 + v38 + 32);
    while ( (_DWORD)v37 != *v45 )
    {
      if ( v44 == ++v45 )
        goto LABEL_74;
    }
    if ( v44 == v45 )
    {
LABEL_74:
      v60 = v43 + 1;
      if ( v41[6] < v60 )
      {
        v76 = v36;
        v71 = v39;
        v64 = qvector_reserve(v41 + 4, v42, v60, 4);
        v65 = v41[5];
        LODWORD(v36) = v76;
        v41[4] = v64;
        v39 = v71;
        v44 = (_DWORD *)(v64 + 4 * v65);
      }
      *v44 = v37;
      ++v41[5];
      v40 = *(_QWORD *)(a1 + 48);
    }
    v46 = (_QWORD *)(v40 + v39);
    v47 = *(_DWORD **)(v40 + v39 + 8);
    v48 = *(_QWORD *)(v40 + v39 + 16);
    v49 = &v47[v48];
    if ( v47 == v49 )
      goto LABEL_58;
    v50 = v47;
    while ( (_DWORD)v36 != *v50 )
    {
      if ( v49 == ++v50 )
        goto LABEL_58;
    }
    if ( v49 == v50 )
    {
LABEL_58:
      if ( v46[3] < (unsigned __int64)(v48 + 1) )
      {
        v70 = v36;
        v62 = qvector_reserve(v46 + 1, v47, v48 + 1, 4);
        v63 = v46[2];
        LODWORD(v36) = v70;
        v46[1] = v62;
        v49 = (_DWORD *)(v62 + 4 * v63);
      }
      *v49 = v36;
      ++v46[2];
    }
  }
  return v4;
}
