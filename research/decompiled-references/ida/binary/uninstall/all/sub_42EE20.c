__int64 __fastcall sub_42EE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // r12
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  int *v12; // rax
  int *v13; // r14
  int v14; // eax
  bool v15; // zf
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rbx
  int v26; // r14d
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  int v29; // edx
  __int64 v30; // rax
  _BYTE *v31; // rsi
  int v32; // ebx
  int v33; // ebx
  _BYTE *v34; // rsi
  _BYTE *v35; // rsi
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  int v39; // ecx
  __int64 v40; // rsi
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ebx
  _BYTE *v45; // rsi
  _BYTE *v46; // rsi
  int v47; // eax
  int v48; // ebx
  _BYTE *v49; // rsi
  _BYTE *v50; // rsi
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  _BYTE *v53; // rsi
  int v54; // eax
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rax
  _BYTE *v60; // rsi
  _BYTE *v61; // rsi
  _BYTE *v62; // rsi
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // [rsp+8h] [rbp-80h]
  __int64 v71; // [rsp+10h] [rbp-78h]
  int v72; // [rsp+18h] [rbp-70h]
  int v73; // [rsp+1Ch] [rbp-6Ch]
  int v74; // [rsp+20h] [rbp-68h]
  int v75; // [rsp+24h] [rbp-64h]
  __int64 v76; // [rsp+28h] [rbp-60h]
  int v78; // [rsp+3Ch] [rbp-4Ch] BYREF
  _BYTE v79[4]; // [rsp+40h] [rbp-48h] BYREF
  int v80; // [rsp+44h] [rbp-44h]

  v5 = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v72 = *(_DWORD *)(a4 + 48);
  result = 1;
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 3 )
  {
    v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    v10 = v9 + 24;
    v11 = v9 + 24 + 24LL * *(int *)(v9 + 44);
    v76 = v11 + 24;
    if ( *(_DWORD *)(v9 + 24) != 2 || *(_DWORD *)(v11 + 24) != 2 )
      return 1;
    v12 = (int *)sub_48DF10(*(void **)(v9 + 56), *(unsigned int *)(v9 + 64));
    ++*v12;
    v13 = v12;
    v73 = sub_47BB80(0, v12, &v78);
    v14 = *v13 - 1;
    v15 = *v13 == 1;
    *v13 = v14;
    if ( v14 < 0 || v15 )
    {
      v66 = *((_QWORD *)v13 + 3);
      if ( v66 && *(_QWORD *)(v66 + 8) )
      {
        sub_47B120(v13);
      }
      else
      {
        v67 = *((__int64 **)v13 + 1);
        if ( v67 && v67 != off_656088 )
          Tcl_Free((__int64)v67);
        v13[4] = -1;
        sub_496830(v13);
      }
    }
    if ( !v73 )
    {
      if ( !v78 )
        goto LABEL_32;
      v5 = 0;
    }
    v16 = sub_43C240(0, a4);
    if ( v5 )
    {
      sub_43C580(a4, 0, v79);
      v17 = *(_QWORD *)(a4 + 120);
      v18 = *(_QWORD *)(a4 + 112);
      v75 = 0;
    }
    else
    {
      v17 = *(_QWORD *)(a4 + 120);
      v18 = *(_QWORD *)(a4 + 112);
      *(_DWORD *)(a4 + 3276) = 0;
      v75 = v17 - v18;
    }
    v19 = *(_QWORD *)(v6 + 16);
    v70 = v8;
    v71 = v16;
    v20 = 24LL * v8;
    v21 = *(_QWORD *)(v20 + v19 + 8);
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + v19 + 16) + 16LL);
    *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v21 + 8);
    LODWORD(v21) = *(_DWORD *)(a4 + 36);
    *(_QWORD *)(a4 + 3288) = v22;
    v23 = *(_DWORD *)(a4 + 40);
    v24 = v21 + 1;
    *(_DWORD *)(a4 + 36) = v24;
    if ( v23 < v24 )
      v23 = v24;
    *(_DWORD *)(a4 + 40) = v23;
    v25 = 28LL * v16;
    v26 = v17 - v18;
    *(_DWORD *)(v25 + *(_QWORD *)(a4 + 168) + 8) = v17 - v18;
    v74 = v17 - v18;
    sub_43BFD0(a1, v76 + 24, *(unsigned int *)(v76 + 20), a4);
    v27 = *(_BYTE **)(a4 + 120);
    v28 = *(_QWORD *)(a4 + 168);
    --*(_DWORD *)(a4 + 36);
    *(_DWORD *)(v25 + v28 + 12) = (_DWORD)v27 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v25 + v28 + 8);
    v15 = v27 == *(_BYTE **)(a4 + 128);
    *(_DWORD *)(a4 + 48) = v72 + 1;
    if ( v15 )
    {
      sub_439150(a4);
      v27 = *(_BYTE **)(a4 + 120);
    }
    *v27 = 3;
    *(_DWORD *)(a4 + 3276) = 0;
    v29 = dword_65446C;
    v30 = *(_QWORD *)(a4 + 120) + 1LL;
    v15 = dword_65446C == 0;
    v31 = (_BYTE *)v30;
    *(_QWORD *)(a4 + 120) = v30;
    if ( !v15 )
    {
      if ( v29 == 0x80000000 )
      {
        v32 = *(_DWORD *)(a4 + 48);
        v29 = 1;
      }
      else if ( v29 < 0 )
      {
        v32 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v32 )
          *(_DWORD *)(a4 + 44) = v32;
      }
      else
      {
        v32 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v29 + v32;
    }
    if ( v5 )
    {
      v75 = v30 - *(_DWORD *)(a4 + 112);
      if ( (unsigned int)sub_43C6D0(a4, v79, (unsigned int)(v75 - v80), 127) )
      {
        v75 += 3;
        v74 = v26 + 3;
      }
      v58 = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(a4 + 48) = v72;
      v59 = *(_QWORD *)(*(_QWORD *)(24 * v70 + v58 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24 * v70 + v58 + 8) + 4LL);
      *(_QWORD *)(a4 + 3288) = v59;
      sub_43AA10(a1, v10, 1);
      v60 = *(_BYTE **)(a4 + 120);
      *(_DWORD *)(a4 + 48) = v72 + 1;
      v33 = (_DWORD)v60 - *(_DWORD *)(a4 + 112) - v74;
      if ( v33 <= 127 )
      {
        if ( (unsigned __int64)(v60 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v60 = *(_BYTE **)(a4 + 120);
        }
        *v60 = 36;
        v68 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v68 + 1;
        *(_BYTE *)(v68 + 1) = -(char)v33;
        v69 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v39 = dword_65488C;
        v40 = v69 + 1;
        *(_QWORD *)(a4 + 120) = v40;
      }
      else
      {
        if ( (unsigned __int64)(v60 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v60 = *(_BYTE **)(a4 + 120);
        }
        *v60 = 37;
        v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v61;
        *v61 = (unsigned int)-v33 >> 24;
        v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v62;
        *v62 = (unsigned int)-v33 >> 16;
        v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v63;
        *v63 = (unsigned __int16)-(__int16)v33 >> 8;
        v64 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v64 + 1;
        *(_BYTE *)(v64 + 1) = -(char)v33;
        v65 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v39 = dword_6548AC;
        v40 = v65 + 1;
        *(_QWORD *)(a4 + 120) = v40;
      }
    }
    else
    {
      v33 = v30 - *(_DWORD *)(a4 + 112) - v26;
      if ( v33 <= 127 )
      {
        if ( (unsigned __int64)(v30 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v31 = *(_BYTE **)(a4 + 120);
        }
        *v31 = 34;
        v56 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v56 + 1;
        *(_BYTE *)(v56 + 1) = -(char)v33;
        v57 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v39 = dword_65484C;
        v40 = v57 + 1;
        *(_QWORD *)(a4 + 120) = v40;
      }
      else
      {
        if ( (unsigned __int64)(v30 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v31 = *(_BYTE **)(a4 + 120);
        }
        *v31 = 35;
        v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v34;
        *v34 = (unsigned int)-v33 >> 24;
        v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v35;
        *v35 = (unsigned int)-v33 >> 16;
        v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v36;
        *v36 = (unsigned __int16)-(__int16)v33 >> 8;
        v37 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v37 + 1;
        *(_BYTE *)(v37 + 1) = -(char)v33;
        v38 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v39 = dword_65486C;
        v40 = v38 + 1;
        *(_QWORD *)(a4 + 120) = v40;
      }
    }
    if ( v39 )
    {
      if ( v39 == 0x80000000 )
        v39 = v33 + 1;
      if ( v39 < 0 )
      {
        v41 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v41 )
          *(_DWORD *)(a4 + 44) = v41;
      }
      else
      {
        v41 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v39 + v41;
    }
    v42 = *(_QWORD *)(a4 + 168);
    v43 = 28 * v71;
    *(_DWORD *)(v43 + v42 + 20) = v75;
    *(_DWORD *)(v43 + v42 + 8) = v74;
    *(_DWORD *)(v43 + v42 + 16) = v40 - *(_DWORD *)(a4 + 112);
LABEL_32:
    *(_DWORD *)(a4 + 48) = v72;
    v44 = sub_471010(a4, "", 0, 0);
    if ( v44 <= 255 )
    {
      v45 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v45 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v45 = *(_BYTE **)(a4 + 120);
      }
      *v45 = 1;
      v46 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v46;
      *v46 = v44;
      *(_DWORD *)(a4 + 3276) = 0;
      v47 = dword_65442C;
      ++*(_QWORD *)(a4 + 120);
      if ( !v47 )
        return 0;
      if ( v47 == 0x80000000 )
        v47 = 1 - v44;
      if ( v47 < 0 )
      {
        v48 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v48 )
        {
          *(_DWORD *)(a4 + 44) = v48;
          *(_DWORD *)(a4 + 48) = v47 + v48;
          return 0;
        }
      }
      else
      {
        v48 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v47 + v48;
      return 0;
    }
    v49 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v49 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v49 = *(_BYTE **)(a4 + 120);
    }
    *v49 = 2;
    v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v50;
    *v50 = HIBYTE(v44);
    v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v51;
    *v51 = BYTE2(v44);
    v52 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v52 + 1;
    *(_BYTE *)(v52 + 1) = BYTE1(v44);
    v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v53;
    *v53 = v44;
    *(_DWORD *)(a4 + 3276) = 0;
    v54 = dword_65444C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v54 )
      return 0;
    if ( v54 == 0x80000000 )
      v54 = 1 - v44;
    if ( v54 < 0 )
    {
      v55 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v55 )
      {
        *(_DWORD *)(a4 + 44) = v55;
        *(_DWORD *)(a4 + 48) = v55 + v54;
        return 0;
      }
    }
    else
    {
      v55 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v55 + v54;
    return 0;
  }
  return result;
}

