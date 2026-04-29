__int64 __fastcall sub_24E7E0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  _QWORD *v20; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v52; // [rsp+10h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v57[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_DWORD *)a2;
  v6 = *(unsigned int *)(a2 + 36);
  v57[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 328);
  v56 = 0;
  v8 = *(_QWORD *)(v7 + 112);
  if ( (unsigned int)(v5 - 65) > 1 )
  {
    sub_32C150(v57, v8, v6);
    copy_tinfo_t();
    clear_tinfo_t();
    switch ( v5 )
    {
      case 4:
      case 63:
      case 64:
      case 67:
        v52 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v56, &v56, 0);
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          sub_32C270(v57, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
          v52 = sub_244E70(v52, (__int64)v57, v49, v50);
          clear_tinfo_t();
        }
        v12 = *(unsigned int *)(a2 + 68);
        if ( *(_DWORD *)(a2 + 36) == (_DWORD)v12 )
        {
          if ( v5 == 67 || v5 == 4 )
          {
            v15 = v52;
            if ( !a4 )
              goto LABEL_7;
            goto LABEL_10;
          }
          if ( v5 != 63 )
          {
LABEL_19:
            sub_32C430(v57, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v12, 2);
            copy_tinfo_t();
            clear_tinfo_t();
            goto LABEL_6;
          }
        }
        else if ( v5 != 63 )
        {
          if ( v5 != 64 )
            goto LABEL_5;
          goto LABEL_19;
        }
        sub_32C430(v57, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v12, 1);
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_6;
      case 31:
        v21 = qalloc_or_throw(40, (__int64)v57, v17, v18);
        *(_QWORD *)v21 = 0;
        *(_QWORD *)(v21 + 24) = 0;
        *(_DWORD *)(v21 + 32) = 0;
        *(_OWORD *)(v21 + 8) = 0;
        sub_246200((__int64 *)v21, 2u);
        v22 = *(_QWORD *)v21;
        v23 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v56, &v56, 0);
        v24 = *(_QWORD *)v23;
        *(_QWORD *)v23 = *(_QWORD *)v22;
        v25 = *(_DWORD *)(v22 + 8);
        *(_QWORD *)v22 = v24;
        LODWORD(v24) = *(_DWORD *)(v23 + 8);
        *(_DWORD *)(v23 + 8) = v25;
        v26 = *(_DWORD *)(v22 + 12);
        *(_DWORD *)(v22 + 8) = v24;
        LODWORD(v24) = *(_DWORD *)(v23 + 12);
        *(_DWORD *)(v23 + 12) = v26;
        v27 = *(_QWORD *)(v22 + 24);
        *(_DWORD *)(v22 + 12) = v24;
        v28 = *(_QWORD *)(v23 + 24);
        *(_QWORD *)(v23 + 24) = v27;
        v29 = *(_QWORD *)(v22 + 32);
        *(_QWORD *)(v22 + 24) = v28;
        v30 = *(_QWORD *)(v23 + 32);
        *(_QWORD *)(v23 + 32) = v29;
        v31 = *(_QWORD *)(v22 + 40);
        *(_QWORD *)(v22 + 32) = v30;
        v32 = *(_QWORD *)(v23 + 40);
        *(_QWORD *)(v23 + 40) = v31;
        v33 = *(_QWORD *)(v22 + 48);
        *(_QWORD *)(v22 + 40) = v32;
        v34 = *(_QWORD *)(v23 + 48);
        *(_QWORD *)(v23 + 48) = v33;
        LODWORD(v33) = *(_DWORD *)(v22 + 56);
        *(_QWORD *)(v22 + 48) = v34;
        LODWORD(v34) = *(_DWORD *)(v23 + 56);
        *(_DWORD *)(v23 + 56) = v33;
        *(_DWORD *)(v22 + 56) = v34;
        if ( v23 )
        {
          v53 = v23;
          sub_255630(v23);
          clear_tinfo_t();
          j__qfree(v53);
        }
        v35 = *(_QWORD *)v21;
        v36 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v56, &v56, 0);
        v37 = *(_QWORD *)v36;
        *(_QWORD *)v36 = *(_QWORD *)(v35 + 72);
        v38 = *(_DWORD *)(v35 + 80);
        *(_QWORD *)(v35 + 72) = v37;
        LODWORD(v37) = *(_DWORD *)(v36 + 8);
        *(_DWORD *)(v36 + 8) = v38;
        v39 = *(_DWORD *)(v35 + 84);
        *(_DWORD *)(v35 + 80) = v37;
        LODWORD(v37) = *(_DWORD *)(v36 + 12);
        *(_DWORD *)(v36 + 12) = v39;
        v40 = *(_QWORD *)(v35 + 96);
        *(_DWORD *)(v35 + 84) = v37;
        v41 = *(_QWORD *)(v36 + 24);
        *(_QWORD *)(v36 + 24) = v40;
        v42 = *(_QWORD *)(v35 + 104);
        *(_QWORD *)(v35 + 96) = v41;
        v43 = *(_QWORD *)(v36 + 32);
        *(_QWORD *)(v36 + 32) = v42;
        v44 = *(_QWORD *)(v35 + 112);
        *(_QWORD *)(v35 + 104) = v43;
        v45 = *(_QWORD *)(v36 + 40);
        *(_QWORD *)(v36 + 40) = v44;
        v46 = *(_QWORD *)(v35 + 120);
        *(_QWORD *)(v35 + 112) = v45;
        v47 = *(_QWORD *)(v36 + 48);
        *(_QWORD *)(v36 + 48) = v46;
        LODWORD(v46) = *(_DWORD *)(v35 + 128);
        *(_QWORD *)(v35 + 120) = v47;
        LODWORD(v47) = *(_DWORD *)(v36 + 56);
        *(_DWORD *)(v36 + 56) = v46;
        *(_DWORD *)(v35 + 128) = v47;
        if ( v36 )
        {
          v54 = v36;
          sub_255630(v36);
          clear_tinfo_t();
          j__qfree(v54);
        }
        v57[0] = 8;
        v48 = sub_F1640((__int64)v57, v21, (__int64)"__UNORDERED__");
        clear_tinfo_t();
        v20 = sub_24AE20(a1, a2, v48, a3, a4);
        goto LABEL_22;
      case 32:
      case 43:
        v19 = 23;
        goto LABEL_21;
      case 33:
      case 44:
        v19 = 22;
        goto LABEL_21;
      case 34:
      case 45:
        v19 = 24;
        goto LABEL_21;
      case 35:
      case 46:
        v19 = 30;
        goto LABEL_21;
      case 36:
      case 47:
        v19 = 28;
        goto LABEL_21;
      case 37:
      case 48:
        v19 = 26;
        goto LABEL_21;
      case 68:
        v20 = sub_24B9E0(a1, a2, 46, a4);
        goto LABEL_22;
      case 69:
        v19 = 42;
        goto LABEL_21;
      case 70:
        v19 = 43;
        goto LABEL_21;
      case 71:
        v19 = 44;
        goto LABEL_21;
      case 72:
        v19 = 45;
LABEL_21:
        v20 = sub_24BAE0(a1, a2, v19, a4);
LABEL_22:
        v15 = (__int64)v20;
        goto LABEL_7;
      default:
        if ( !under_debugger )
          sub_383060(50407);
        BUG();
    }
  }
  v9 = (v5 != 65) + 1;
  sub_32C430(v57, v8, v6, v9);
  v52 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, v57, v57, 0);
  if ( v9 != (unsigned int)get_tinfo_property() )
    v52 = sub_244E70(v52, (__int64)v57, v10, v11);
  clear_tinfo_t();
  v12 = *(unsigned int *)(a2 + 68);
LABEL_5:
  sub_32C150(v57, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v12);
  copy_tinfo_t();
  clear_tinfo_t();
LABEL_6:
  v15 = j__qalloc_or_throw(64, (__int64)v57, v13, v14);
  *(_QWORD *)v15 = -1;
  *(_DWORD *)(v15 + 8) = 48;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 24) = v52;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  copy_tinfo_t();
  if ( a4 )
  {
    if ( (unsigned int)(v5 - 63) <= 1 )
    {
      sub_32C270(v57, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 68));
      copy_tinfo_t();
      clear_tinfo_t();
    }
LABEL_10:
    v15 = (__int64)sub_24AA50(a1, *(__int64 **)(a2 + 24), a2 + 64, &v56, v15);
    sub_246B40(v15, *(_QWORD *)(a1 + 328), a3);
  }
LABEL_7:
  clear_tinfo_t();
  return v15;
}
