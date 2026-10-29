__int64 __fastcall sub_9197F0(__int64 a1, int a2, __int64 *a3, int a4, _QWORD *a5)
{
  unsigned int v5; // r13d
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // ebx
  unsigned int v14; // eax
  char v15; // cl
  int v16; // eax
  bool v17; // zf
  _BYTE *v18; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // r13
  __int64 v23; // r14
  int v24; // ebx
  unsigned int v25; // eax
  char v26; // cl
  int v27; // eax
  _WORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // r14
  int v34; // ebx
  unsigned int v35; // eax
  char v36; // cl
  int v37; // eax
  _DWORD *v38; // rax
  __int64 v39; // r13
  __int64 v40; // r14
  unsigned int v41; // eax
  __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // rbx
  unsigned int v45; // eax
  char v46; // cl
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  unsigned int v51; // eax
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  __int64 v54; // rsi
  _QWORD *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58[13]; // [rsp+0h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v11 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v12 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v11, v12 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v12 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v12 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v12 + 40)));
      v13 = sub_915550(*(_QWORD *)(a1 + 568));
      v14 = sub_781830(*a3);
      v15 = v14;
      if ( v14 <= 7 )
      {
        v16 = v13 & ((1 << v14) - 1) | -(1 << v14);
        v17 = ((unsigned __int8)(1 << (v15 - 1)) & (unsigned __int8)v13) == 0;
        LOBYTE(v13) = v13 & ((1 << v15) - 1);
        if ( !v17 )
          LOBYTE(v13) = v16;
      }
      v18 = (_BYTE *)sub_8F63E0(v58);
      goto LABEL_19;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v19 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v20 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v19, v20 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v20 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v20 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v20 + 40)));
      v13 = sub_915900(*(_QWORD *)(a1 + 568));
      v21 = sub_781830(*a3);
      if ( v21 <= 7 )
        v13 &= (1 << v21) - 1;
      v18 = (_BYTE *)sub_8F6BD0(v58);
      goto LABEL_19;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v22 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v23 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v22, v23 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v23 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v23 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v23 + 40)));
      v24 = sub_915930(*(_QWORD *)(a1 + 568));
      v25 = sub_781830(*a3);
      v26 = v25;
      if ( v25 <= 0xF )
      {
        v27 = v24 & ((1 << v25) - 1) | -(1 << v25);
        v17 = ((unsigned __int16)(1 << (v26 - 1)) & (unsigned __int16)v24) == 0;
        LOWORD(v24) = v24 & ((1 << v26) - 1);
        if ( !v17 )
          LOWORD(v24) = v27;
      }
      v28 = (_WORD *)sub_8F6C20(v58);
      goto LABEL_33;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v29 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v30 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v29, v30 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v30 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v30 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v30 + 40)));
      v24 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v31 = sub_781830(*a3);
      if ( v31 <= 0xF )
        v24 &= (1 << v31) - 1;
      v28 = (_WORD *)sub_8F7430(v58);
LABEL_33:
      *v28 = v24;
      sub_A1DB00(v58);
      sub_A1C0C0(v58);
      return v5;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v32 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v33 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v32, v33 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v33 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v33 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v33 + 40)));
      v34 = sub_915D10(*(_QWORD *)(a1 + 568));
      v35 = sub_781830(*a3);
      v36 = v35;
      if ( v35 <= 0x1F )
      {
        v37 = v34 & ((1 << v35) - 1) | -(1 << v35);
        v17 = (v34 & (1 << (v36 - 1))) == 0;
        v34 &= (1 << v36) - 1;
        if ( !v17 )
          v34 = v37;
      }
      v38 = (_DWORD *)sub_8F7480(v58);
      goto LABEL_47;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v39 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v40 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v39, v40 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v40 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v40 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v40 + 40)));
      v34 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v41 = sub_781830(*a3);
      if ( v41 <= 0x1F )
        v34 &= ~(-1 << v41);
      v38 = (_DWORD *)sub_8F7C70(v58);
LABEL_47:
      *v38 = v34;
      sub_A1DB00(v58);
      sub_A1C0C0(v58);
      return v5;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v43 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v42, v43 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v43 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v43 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v43 + 40)));
      v44 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v45 = sub_781830(*a3);
      v46 = v45;
      if ( v45 <= 0x3F )
      {
        v47 = v44 & ((1LL << v45) - 1) | -(1LL << v45);
        v17 = (v44 & (1LL << (v46 - 1))) == 0;
        v44 &= (1LL << v46) - 1;
        if ( !v17 )
          v44 = v47;
      }
      v48 = (_QWORD *)sub_8F7CC0(v58);
      goto LABEL_61;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v49 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v50 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v49, v50 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v50 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v50 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v50 + 40)));
      v44 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v51 = sub_781830(*a3);
      if ( v51 <= 0x3F )
        v44 &= ~(-1LL << v51);
      v48 = (_QWORD *)sub_8F84D0(v58);
LABEL_61:
      *v48 = v44;
      sub_A1DB00(v58);
      sub_A1C0C0(v58);
      return v5;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v52 = *(_QWORD *)(a1 + 792);
      v53 = (_QWORD *)(a1 + 384);
      v53[52] = *a5;
      return sub_90B7F0(v53, v52, a3, a4);
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v54 = *(_QWORD *)(a1 + 792);
      v55 = (_QWORD *)(a1 + 384);
      v55[52] = *a5;
      return sub_90BA00(v55, v54, a3, a4);
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v56 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v57 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v56, v57 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v58,
        *(_QWORD *)(v57 + 64),
        (unsigned int)(a4 + *(_DWORD *)(v57 + 40)),
        (unsigned int)(a4 + *(_DWORD *)(v57 + 40)));
      LOBYTE(v13) = sub_8F4170(*(_QWORD *)(a1 + 568));
      sub_781830(*a3);
      v18 = (_BYTE *)sub_8F9850(v58);
LABEL_19:
      *v18 = v13;
      sub_A1DB00(v58);
      sub_A1C0C0(v58);
      return v5;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v9 = *(_QWORD *)(a1 + 792);
      v10 = (_QWORD *)(a1 + 384);
      v10[52] = *a5;
      return sub_90BC10(v10, v9, a3, a4);
  }
}

