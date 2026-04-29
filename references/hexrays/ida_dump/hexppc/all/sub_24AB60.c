_QWORD *__fastcall sub_24AB60(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  _QWORD *v11; // r14
  int v13; // edx
  _QWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v49[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_DWORD *)a2;
  v6 = *(unsigned int *)(a2 + 36);
  v49[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 328);
  v48 = 0;
  v8 = *(_QWORD *)(v7 + 112);
  if ( (unsigned int)(v5 - 65) > 1 )
  {
    sub_327E20(v49, v8, v6);
    copy_tinfo_t(&v48, v49);
    clear_tinfo_t(v49);
    switch ( v5 )
    {
      case 4:
      case 63:
      case 64:
      case 67:
        v44 = sub_245E70(a1, *(__int64 **)(a2 + 24), a2 + 32, &v48, &v48, 0);
        if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v44 + 48), 2) & 0xF) - 10) <= 2u )
        {
          sub_327F40(v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
          v44 = sub_2411F0(v44, v49);
          clear_tinfo_t(v49);
        }
        v10 = *(unsigned int *)(a2 + 68);
        if ( *(_DWORD *)(a2 + 36) == (_DWORD)v10 )
        {
          if ( v5 == 67 || v5 == 4 )
          {
            v11 = (_QWORD *)v44;
            if ( !a4 )
              goto LABEL_7;
            goto LABEL_10;
          }
          if ( v5 != 63 )
          {
LABEL_19:
            sub_328100(v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10, 2);
            copy_tinfo_t(&v48, v49);
            clear_tinfo_t(v49);
            goto LABEL_6;
          }
        }
        else if ( v5 != 63 )
        {
          if ( v5 != 64 )
            goto LABEL_5;
          goto LABEL_19;
        }
        sub_328100(v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10, 1);
        copy_tinfo_t(&v48, v49);
        clear_tinfo_t(v49);
        goto LABEL_6;
      case 31:
        v15 = qalloc_or_throw(40);
        *(_QWORD *)v15 = 0;
        *(_QWORD *)(v15 + 24) = 0;
        *(_DWORD *)(v15 + 32) = 0;
        *(_OWORD *)(v15 + 8) = 0;
        sub_242580((_QWORD *)v15, 2u);
        v16 = *(_QWORD *)v15;
        v17 = sub_245E70(a1, *(__int64 **)(a2 + 24), a2 + 32, &v48, &v48, 0);
        v18 = *(_QWORD *)v17;
        *(_QWORD *)v17 = *(_QWORD *)v16;
        v19 = *(_DWORD *)(v16 + 8);
        *(_QWORD *)v16 = v18;
        LODWORD(v18) = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v17 + 8) = v19;
        v20 = *(_DWORD *)(v16 + 12);
        *(_DWORD *)(v16 + 8) = v18;
        LODWORD(v18) = *(_DWORD *)(v17 + 12);
        *(_DWORD *)(v17 + 12) = v20;
        v21 = *(_QWORD *)(v16 + 24);
        *(_DWORD *)(v16 + 12) = v18;
        v22 = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = v21;
        v23 = *(_QWORD *)(v16 + 32);
        *(_QWORD *)(v16 + 24) = v22;
        v24 = *(_QWORD *)(v17 + 32);
        *(_QWORD *)(v17 + 32) = v23;
        v25 = *(_QWORD *)(v16 + 40);
        *(_QWORD *)(v16 + 32) = v24;
        v26 = *(_QWORD *)(v17 + 40);
        *(_QWORD *)(v17 + 40) = v25;
        v27 = *(_QWORD *)(v16 + 48);
        *(_QWORD *)(v16 + 40) = v26;
        v28 = *(_QWORD *)(v17 + 48);
        *(_QWORD *)(v17 + 48) = v27;
        LODWORD(v27) = *(_DWORD *)(v16 + 56);
        *(_QWORD *)(v16 + 48) = v28;
        LODWORD(v28) = *(_DWORD *)(v17 + 56);
        *(_DWORD *)(v17 + 56) = v27;
        *(_DWORD *)(v16 + 56) = v28;
        if ( v17 )
        {
          v45 = v17;
          sub_2519B0(v17);
          clear_tinfo_t(v45 + 48);
          j__qfree(v45);
        }
        v29 = *(_QWORD *)v15;
        v30 = sub_245E70(a1, *(__int64 **)(a2 + 24), a2 + 48, &v48, &v48, 0);
        v31 = *(_QWORD *)v30;
        *(_QWORD *)v30 = *(_QWORD *)(v29 + 72);
        v32 = *(_DWORD *)(v29 + 80);
        *(_QWORD *)(v29 + 72) = v31;
        LODWORD(v31) = *(_DWORD *)(v30 + 8);
        *(_DWORD *)(v30 + 8) = v32;
        v33 = *(_DWORD *)(v29 + 84);
        *(_DWORD *)(v29 + 80) = v31;
        LODWORD(v31) = *(_DWORD *)(v30 + 12);
        *(_DWORD *)(v30 + 12) = v33;
        v34 = *(_QWORD *)(v29 + 96);
        *(_DWORD *)(v29 + 84) = v31;
        v35 = *(_QWORD *)(v30 + 24);
        *(_QWORD *)(v30 + 24) = v34;
        v36 = *(_QWORD *)(v29 + 104);
        *(_QWORD *)(v29 + 96) = v35;
        v37 = *(_QWORD *)(v30 + 32);
        *(_QWORD *)(v30 + 32) = v36;
        v38 = *(_QWORD *)(v29 + 112);
        *(_QWORD *)(v29 + 104) = v37;
        v39 = *(_QWORD *)(v30 + 40);
        *(_QWORD *)(v30 + 40) = v38;
        v40 = *(_QWORD *)(v29 + 120);
        *(_QWORD *)(v29 + 112) = v39;
        v41 = *(_QWORD *)(v30 + 48);
        *(_QWORD *)(v30 + 48) = v40;
        LODWORD(v40) = *(_DWORD *)(v29 + 128);
        *(_QWORD *)(v29 + 120) = v41;
        LODWORD(v41) = *(_DWORD *)(v30 + 56);
        *(_DWORD *)(v30 + 56) = v40;
        *(_DWORD *)(v29 + 128) = v41;
        if ( v30 )
        {
          v46 = v30;
          sub_2519B0(v30);
          clear_tinfo_t(v46 + 48);
          j__qfree(v46);
        }
        v49[0] = 8;
        v42 = sub_EDC00((__int64)v49, v15, (__int64)"__UNORDERED__");
        clear_tinfo_t(v49);
        v14 = sub_2471A0(a1, a2, v42, a3, a4);
        goto LABEL_22;
      case 32:
      case 43:
        v13 = 23;
        goto LABEL_21;
      case 33:
      case 44:
        v13 = 22;
        goto LABEL_21;
      case 34:
      case 45:
        v13 = 24;
        goto LABEL_21;
      case 35:
      case 46:
        v13 = 30;
        goto LABEL_21;
      case 36:
      case 47:
        v13 = 28;
        goto LABEL_21;
      case 37:
      case 48:
        v13 = 26;
        goto LABEL_21;
      case 68:
        v14 = sub_247D60(a1, a2, 46, a4);
        goto LABEL_22;
      case 69:
        v13 = 42;
        goto LABEL_21;
      case 70:
        v13 = 43;
        goto LABEL_21;
      case 71:
        v13 = 44;
        goto LABEL_21;
      case 72:
        v13 = 45;
LABEL_21:
        v14 = sub_247E60(a1, a2, v13, a4);
LABEL_22:
        v11 = v14;
        goto LABEL_7;
      default:
        if ( !under_debugger )
          sub_37EEE0(50407);
        BUG();
    }
  }
  v9 = (v5 != 65) + 1;
  sub_328100(v49, v8, v6, v9);
  v44 = sub_245E70(a1, *(__int64 **)(a2 + 24), a2 + 32, v49, v49, 0);
  if ( v9 != (unsigned int)get_tinfo_property(*(_QWORD *)(v44 + 48), 3) )
    v44 = sub_2411F0(v44, v49);
  clear_tinfo_t(v49);
  v10 = *(unsigned int *)(a2 + 68);
LABEL_5:
  sub_327E20(v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10);
  copy_tinfo_t(&v48, v49);
  clear_tinfo_t(v49);
LABEL_6:
  v11 = (_QWORD *)j__qalloc_or_throw(64);
  *v11 = -1;
  *((_DWORD *)v11 + 2) = 48;
  *(_QWORD *)((char *)v11 + 12) = -1;
  v11[4] = 0;
  v11[3] = v44;
  v11[5] = 0;
  v11[6] = 0;
  *((_DWORD *)v11 + 14) = 0;
  copy_tinfo_t(v11 + 6, &v48);
  if ( a4 )
  {
    if ( (unsigned int)(v5 - 63) <= 1 )
    {
      sub_327F40(v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 68));
      copy_tinfo_t(&v48, v49);
      clear_tinfo_t(v49);
    }
LABEL_10:
    v11 = sub_246DD0(a1, *(__int64 **)(a2 + 24), a2 + 64, &v48, (__int64)v11);
    sub_242EC0((__int64)v11, *(_QWORD *)(a1 + 328), a3);
  }
LABEL_7:
  clear_tinfo_t(&v48);
  return v11;
}
