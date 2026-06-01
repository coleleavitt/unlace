__int64 __fastcall sub_4322A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ebx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  _BYTE *v31; // rcx
  int v32; // eax
  __int64 v33; // rbp
  int v34; // ebx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  int v44; // edx
  int v45; // eax
  _BYTE *v46; // rcx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  int v51; // ebx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  int v54; // edx
  int v55; // eax
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  _BYTE *v60; // rcx
  int v61; // ebx
  _BYTE *v62; // rcx
  _BYTE *v63; // rcx
  int v64; // edx
  int v65; // eax
  _BYTE *v66; // rcx
  _BYTE *v67; // rcx
  _BYTE *v68; // rcx
  _BYTE *v69; // rcx
  _BYTE *v70; // rcx
  _BYTE *v71; // rcx
  _BYTE *v72; // rcx
  _BYTE *v73; // rcx
  _BYTE *v74; // rcx
  _BYTE *v75; // rcx
  int v76; // [rsp+8h] [rbp-50h]
  int v77; // [rsp+Ch] [rbp-4Ch]
  __int64 v78; // [rsp+10h] [rbp-48h]
  _BYTE v79[8]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a4 + 3264);
  v76 = *(_DWORD *)(v5 + 28) - 1;
  result = 1;
  if ( !*(_QWORD *)(a4 + 24) )
    return result;
  v7 = *(unsigned int *)(a2 + 28);
  v77 = *(_DWORD *)(a2 + 28);
  if ( (int)v7 <= 2 )
    return result;
  v8 = sub_47B0B0(a1, a2, v7);
  v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v78 = v9 + 24;
  if ( !(unsigned int)sub_439010(v9 + 24, v8) )
  {
    v10 = *(_DWORD *)v8 - 1;
    v11 = *(_DWORD *)v8 == 1;
    *(_DWORD *)v8 = v10;
    if ( v10 < 0 || v11 )
    {
      sub_47B120(v8);
      return 1;
    }
    return 1;
  }
  v12 = *(_QWORD *)(v8 + 24);
  sub_488460(a1, v8, v79);
  v13 = *(_QWORD *)(v8 + 24);
  v14 = *(_DWORD *)v8 - 1;
  v11 = *(_DWORD *)v8 == 1;
  *(_DWORD *)v8 = v14;
  if ( v14 < 0 || v11 )
    sub_47B120(v8);
  if ( v13 == v12 )
  {
    result = 1;
    if ( (v77 & 1) == 0 )
      return result;
    v51 = sub_471010(a4, "1", 1, 0);
    if ( v51 > 255 )
    {
      v71 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v71 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v71 = *(_BYTE **)(a4 + 120);
      }
      *v71 = 2;
      v72 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v72;
      *v72 = HIBYTE(v51);
      v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v73;
      *v73 = BYTE2(v51);
      v74 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v74;
      *v74 = BYTE1(v51);
      v75 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v75;
      *v75 = v51;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v54 = dword_65444C;
    }
    else
    {
      v52 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v52 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v52 = *(_BYTE **)(a4 + 120);
      }
      *v52 = 1;
      v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v53;
      *v53 = v51;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v54 = dword_65442C;
    }
    if ( v54 )
    {
      if ( v54 == 0x80000000 )
        v54 = 1 - v51;
      if ( v54 < 0 )
      {
        v55 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v55 )
          *(_DWORD *)(a4 + 44) = v55;
      }
      else
      {
        v55 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v54 + v55;
    }
    v19 = v78;
    v18 = 1;
  }
  else
  {
    result = 1;
    if ( (v77 & 1) != 0 )
      return result;
    if ( *(_DWORD *)(v9 + 24) == 2 )
    {
      v61 = sub_471010(a4, *(_QWORD *)(v9 + 56), *(unsigned int *)(v9 + 64), 0);
      if ( v61 > 255 )
      {
        v66 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v66 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v66 = *(_BYTE **)(a4 + 120);
        }
        *v66 = 2;
        v67 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v67;
        *v67 = HIBYTE(v61);
        v68 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v68;
        *v68 = BYTE2(v61);
        v69 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v69;
        *v69 = BYTE1(v61);
        v70 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v70;
        *v70 = v61;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v64 = dword_65444C;
      }
      else
      {
        v62 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v62 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v62 = *(_BYTE **)(a4 + 120);
        }
        *v62 = 1;
        v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v63;
        *v63 = v61;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v64 = dword_65442C;
      }
      if ( v64 )
      {
        if ( v64 == 0x80000000 )
          v64 = 1 - v61;
        if ( v64 < 0 )
        {
          v65 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v65 )
            *(_DWORD *)(a4 + 44) = v65;
        }
        else
        {
          v65 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v64 + v65;
      }
    }
    else
    {
      v15 = *(_QWORD *)(v5 + 16);
      v16 = 24LL * v76;
      v17 = *(_DWORD *)(*(_QWORD *)(v16 + v15 + 8) + 4LL);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v16 + v15 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = v17;
      sub_4399D0(a1, v9 + 48, *(unsigned int *)(v9 + 44), a4);
    }
    v18 = 2;
    v19 = v78 + 24LL * *(int *)(v78 + 20) + 24;
  }
  if ( v18 < v77 )
  {
    v20 = 24LL * v76;
    while ( 1 )
    {
      v33 = v19 + 24LL * *(int *)(v19 + 20) + 24;
      if ( *(_DWORD *)v19 == 2 )
      {
        v34 = sub_471010(a4, *(_QWORD *)(v19 + 32), *(unsigned int *)(v19 + 40), 0);
        if ( v34 > 255 )
        {
          v46 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v46 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v46 = *(_BYTE **)(a4 + 120);
          }
          *v46 = 2;
          v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v47;
          *v47 = HIBYTE(v34);
          v48 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v48;
          *v48 = BYTE2(v34);
          v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v49;
          *v49 = BYTE1(v34);
          v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v50;
          *v50 = v34;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v37 = dword_65444C;
        }
        else
        {
          v35 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v35 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v35 = *(_BYTE **)(a4 + 120);
          }
          *v35 = 1;
          v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v36;
          *v36 = v34;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v37 = dword_65442C;
        }
        if ( v37 )
        {
          if ( v37 == 0x80000000 )
            v37 = 1 - v34;
          if ( v37 < 0 )
          {
            v38 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v38 )
              *(_DWORD *)(a4 + 44) = v38;
          }
          else
          {
            v38 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v37 + v38;
        }
      }
      else
      {
        v21 = *(_QWORD *)(v5 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v20 + v21 + 8) + 4LL * v18);
        v22 = *(_QWORD *)(v20 + v21 + 16);
        v23 = *(unsigned int *)(v19 + 20);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v22 + 8LL * v18);
        sub_4399D0(a1, v19 + 24, v23, a4);
      }
      v24 = sub_41FD20(v33, a4);
      if ( v24 < 0 )
        return 1;
      v25 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v25 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v25 = *(_BYTE **)(a4 + 120);
      }
      *v25 = 122;
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = HIBYTE(v24);
      v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v27;
      *v27 = BYTE2(v24);
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = BYTE1(v24);
      v29 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v29 + 1;
      *(_BYTE *)(v29 + 1) = v24;
      *(_DWORD *)(a4 + 3276) = 0;
      v30 = dword_65534C;
      v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v11 = dword_65534C == 0;
      *(_QWORD *)(a4 + 120) = v31;
      if ( !v11 )
      {
        if ( v30 == 0x80000000 )
          v30 = 1 - v24;
        if ( v30 < 0 )
        {
          v32 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v32 )
            *(_DWORD *)(a4 + 44) = v32;
        }
        else
        {
          v32 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v30 + v32;
      }
      v18 += 2;
      v19 = v33 + 24LL * *(int *)(v33 + 20) + 24;
      if ( v18 >= v77 )
        goto LABEL_40;
    }
  }
  v31 = *(_BYTE **)(a4 + 120);
LABEL_40:
  if ( v31 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v31 = *(_BYTE **)(a4 + 120);
  }
  *v31 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v39 = dword_65446C;
  ++*(_QWORD *)(a4 + 120);
  if ( v39 )
  {
    if ( v39 == 0x80000000 )
    {
      v39 = 1;
    }
    else if ( v39 < 0 )
    {
      v40 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v40 )
        *(_DWORD *)(a4 + 44) = v40;
      goto LABEL_46;
    }
    v40 = *(_DWORD *)(a4 + 48);
LABEL_46:
    *(_DWORD *)(a4 + 48) = v39 + v40;
  }
  v41 = sub_471010(a4, "", 0, 0);
  if ( v41 > 255 )
  {
    v56 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v56 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v56 = *(_BYTE **)(a4 + 120);
    }
    *v56 = 2;
    v57 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v57;
    *v57 = HIBYTE(v41);
    v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v58;
    *v58 = BYTE2(v41);
    v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v59;
    *v59 = BYTE1(v41);
    v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v60;
    *v60 = v41;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v44 = dword_65444C;
  }
  else
  {
    v42 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v42 = *(_BYTE **)(a4 + 120);
    }
    *v42 = 1;
    v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v43;
    *v43 = v41;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v44 = dword_65442C;
  }
  if ( v44 )
  {
    if ( v44 == 0x80000000 )
      v44 = 1 - v41;
    if ( v44 < 0 )
    {
      v45 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v45 )
        *(_DWORD *)(a4 + 44) = v45;
    }
    else
    {
      v45 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v44 + v45;
  }
  return 0;
}

