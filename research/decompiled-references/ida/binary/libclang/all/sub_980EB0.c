__int64 __fastcall sub_980EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int *v11; // rcx
  int v12; // r9d
  __int64 v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  _BYTE *v22; // rdi
  char v23; // r10
  unsigned __int64 v24; // r15
  _BYTE *v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  _QWORD *v28; // r13
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 (*v33)(); // rdx
  __int64 v34; // rdi
  __int64 (*v35)(); // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  int v47; // ecx
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  char v51; // r14
  __int64 v52; // rdx
  int v53; // r11d
  __int64 v54; // [rsp+10h] [rbp-148h]
  __int64 v55; // [rsp+10h] [rbp-148h]
  char v56; // [rsp+10h] [rbp-148h]
  __int64 v57; // [rsp+10h] [rbp-148h]
  __int64 v58; // [rsp+10h] [rbp-148h]
  __int64 v59; // [rsp+10h] [rbp-148h]
  void *v62; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v63; // [rsp+38h] [rbp-120h]
  __int64 v64[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v65[4]; // [rsp+60h] [rbp-F8h] BYREF
  void *v66; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v67; // [rsp+88h] [rbp-D0h]
  _QWORD v68[2]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v69[24]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-A0h]
  __int64 v71; // [rsp+C0h] [rbp-98h]
  int v72; // [rsp+D0h] [rbp-88h]
  signed __int64 v73; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v74; // [rsp+E8h] [rbp-70h]
  __int64 v75; // [rsp+F8h] [rbp-60h]
  __int64 v76; // [rsp+100h] [rbp-58h]
  char v77; // [rsp+108h] [rbp-50h]
  int v78; // [rsp+110h] [rbp-48h]

  v7 = *(unsigned int *)(a3 + 208);
  v8 = *(_QWORD *)(a3 + 192);
  v9 = **(_DWORD **)(*(_QWORD *)(a3 + 32) + 448LL);
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (37 * v9);
    v11 = (int *)(v8 + 16LL * v10);
    v12 = *v11;
    if ( v9 == *v11 )
    {
LABEL_3:
      if ( v11 != (int *)(v8 + 16 * v7) )
      {
        sub_A1BF70(&v73, *((_QWORD *)v11 + 1));
        if ( v78 )
          goto LABEL_5;
        v49 = *(_QWORD *)(v75 + 32);
        if ( *(_DWORD *)(v49 + 16) != (_DWORD)v76 && (_DWORD)v76 )
          v49 = *(_QWORD *)(v75 + (unsigned int)v76 + 32);
        if ( !*(_BYTE *)(v49 + 51) || (v13 = v75 + v73 + 72, (unsigned int)v76 != v73) )
LABEL_5:
          v13 = v75 + v73 + 40;
        sub_A1C0C0(&v73);
        goto LABEL_7;
      }
    }
    else
    {
      v47 = 1;
      while ( v12 != -1 )
      {
        v53 = v47 + 1;
        v10 = (v7 - 1) & (v47 + v10);
        v11 = (int *)(v8 + 16LL * v10);
        v12 = *v11;
        if ( v9 == *v11 )
          goto LABEL_3;
        v47 = v53;
      }
    }
  }
  v13 = *(_QWORD *)(a3 + 168) + v9 - (unsigned __int64)*(unsigned int *)(a3 + 160);
LABEL_7:
  sub_A1BFE0(v69, v13);
  v14 = sub_9E4580(a1, a2, v69, 0);
  if ( !(_BYTE)v14 )
    goto LABEL_62;
  v15 = 0;
  v63 = 1;
  v62 = nullptr;
  v66 = v68;
  v67 = 0;
  LOBYTE(v68[0]) = 0;
  while ( 1 )
  {
    if ( v72 == 1 )
    {
      v73 = v15;
      v78 = 1;
      v76 = v71;
      v74 = 0;
      v75 = v70;
    }
    else if ( v72 == 2 )
    {
      v73 = v15;
      v78 = 2;
      v75 = v70;
      v76 = 0;
      v77 = 1;
      v74 = 0;
    }
    else if ( (_DWORD)v71 == -1 )
    {
      if ( v72 == 3 )
        BUG();
      sub_A1C030(&v73, v70, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v70 + 32) + 12LL));
    }
    else
    {
      if ( v72 )
      {
        if ( v72 == 3 )
          BUG();
        v16 = v70;
        v17 = (unsigned int)v71;
        v18 = *(_QWORD *)(v70 + 32);
        v19 = *(unsigned int *)(v18 + 8) * (unsigned __int64)v15;
      }
      else
      {
        v16 = v70;
        if ( !v70 )
          BUG();
        v18 = *(_QWORD *)(v70 + 32);
        v17 = (unsigned int)v71;
        if ( *(_DWORD *)(v18 + 16) != (_DWORD)v71 && (_DWORD)v71 )
          v18 = *(_QWORD *)(v70 + (unsigned int)v71 + 32);
        v19 = *(unsigned int *)(v18 + 8) * (unsigned __int64)v15;
      }
      v48 = v19 + 32;
      if ( *(_QWORD *)(v18 + 32) )
        v48 = v19 + 16;
      sub_A1C030(&v73, v16, (unsigned int)v71, v48 + v17);
    }
    v14 = sub_9E4580(a1, a2, &v73, 0);
    if ( !(_BYTE)v14 )
    {
      sub_A1C0C0(&v73);
      goto LABEL_56;
    }
    if ( !v78 )
      break;
    v23 = *(_BYTE *)(v75 + v73 + 40);
    if ( !v23 )
      goto LABEL_35;
LABEL_29:
    v24 = v67;
    v25 = v66;
    v26 = v67 + 1;
    if ( v66 == v68 )
      v27 = 15;
    else
      v27 = v68[0];
    if ( v27 < v26 )
    {
      v56 = v23;
      std::string::_M_mutate();
      v23 = v56;
      v26 = v67 + 1;
      v25 = v66;
    }
    v25[v67] = v23;
    ++v15;
    v67 = v26;
    *((_BYTE *)v66 + v24 + 1) = 0;
    sub_A1C0C0(&v73);
  }
  v20 = *(_QWORD *)(v75 + 32);
  v21 = v20;
  if ( (_DWORD)v76 != 0 && *(_DWORD *)(v20 + 16) != (_DWORD)v76 )
    v21 = *(_QWORD *)(v75 + (unsigned int)v76 + 32);
  if ( !*(_BYTE *)(v21 + 51) || (v22 = (_BYTE *)(v75 + v73 + 72), v73 != (unsigned int)v76) )
    v22 = (_BYTE *)(v75 + v73 + 40);
  if ( *v22 )
  {
    if ( (_DWORD)v76 != 0 && *(_DWORD *)(v20 + 16) != (_DWORD)v76 )
      v20 = *(_QWORD *)(v75 + (unsigned int)v76 + 32);
    if ( *(_BYTE *)(v20 + 51) && v73 == (unsigned int)v76 )
      v23 = *(_BYTE *)(v75 + v73 + 72);
    else
      v23 = *(_BYTE *)(v75 + v73 + 40);
    goto LABEL_29;
  }
LABEL_35:
  sub_A1C0C0(&v73);
  if ( v67 )
  {
    *(_QWORD *)&v74 = v67;
    v73 = (signed __int64)v66;
    if ( !(unsigned __int8)sub_25E5A70(&v73, 0) )
      goto LABEL_40;
LABEL_56:
    v14 = 0;
    goto LABEL_57;
  }
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
  v63 = 32;
  v62 = nullptr;
LABEL_40:
  v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v29 = *(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 8) & 4) != 0 )
    v29 = 0;
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v30 + 16) - 25 > 1 )
    v30 = sub_B0D320(v30);
  v54 = sub_6BF060(v28, *(_QWORD *)(v30 + 24));
  v31 = sub_2575CF0();
  sub_2582F80(&v73, 0.0);
  sub_257EDC0(v64, &v73, v31);
  sub_25769A0(&v73);
  v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v33 = sub_81F570;
  v34 = *(_QWORD *)(v32 + 17288);
  v35 = *(__int64 (**)())(*(_QWORD *)v34 + 392LL);
  if ( v35 == sub_81F570 || (v51 = v35(), v36 = sub_2575D20(v34, &v73, v52), v51) )
  {
    v36 = sub_2575D20(v34, &v73, v33);
    if ( !a5 )
    {
      v37 = v54;
      if ( v54 == v36 )
        goto LABEL_94;
      goto LABEL_84;
    }
    v37 = v54;
    if ( v54 == v36 )
      goto LABEL_96;
    goto LABEL_47;
  }
  v37 = v54;
  if ( !a5 )
  {
    if ( v54 == v36 )
    {
LABEL_96:
      v59 = v36;
      sub_257CE40(v65, v36, 0);
      v38 = v59;
LABEL_48:
      v39 = 1;
      if ( v38 == v65[0] )
        goto LABEL_86;
      goto LABEL_49;
    }
LABEL_47:
    v55 = v36;
    sub_2579AA0(v65, v37, 0);
    v38 = v55;
    goto LABEL_48;
  }
  if ( v54 != v36 )
  {
LABEL_84:
    v57 = v36;
    sub_2579AA0(v65, v37, 0);
    v50 = v57;
    goto LABEL_85;
  }
LABEL_94:
  v58 = v36;
  sub_257CE40(v65, v36, 0);
  v50 = v58;
LABEL_85:
  v39 = 0;
  if ( v50 == v65[0] )
  {
LABEL_86:
    sub_257D880(v65, v39, 0, &v62);
    goto LABEL_50;
  }
LABEL_49:
  sub_2575EC0(v65, v39, 0, &v62);
LABEL_50:
  sub_835150((__int64)&v73, v65, v40);
  sub_980D40(v64, &v73, v41);
  sub_5FF3B0(&v73);
  sub_5FF3B0(v65);
  v42 = *(_QWORD *)(a1 + 184);
  v43 = sub_A1A4E0(v42, 24);
  v45 = sub_2575D20(v42, 24, v44);
  if ( v64[0] == v45 )
    sub_257CF50(v43, v64);
  else
    sub_25768A0(v43, v64);
  sub_5FF3B0(v64);
LABEL_57:
  if ( v66 != v68 )
    operator delete(v66, v68[0] + 1LL);
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
LABEL_62:
  sub_A1C0C0(v69);
  return v14;
}

