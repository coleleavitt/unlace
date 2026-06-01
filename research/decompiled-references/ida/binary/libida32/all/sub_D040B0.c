__int64 __fastcall sub_D040B0(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // r13
  char v12; // bl
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // r13
  char v16; // bl
  __int64 v17; // r14
  char v18; // al
  __int64 v19; // r13
  __int16 v20; // bx
  __int64 v21; // r14
  char v22; // al
  __int64 v23; // r13
  __int16 v24; // bx
  __int64 v25; // r14
  char v26; // al
  __int64 v27; // r13
  int v28; // ebx
  __int64 v29; // r14
  char v30; // al
  __int64 v31; // r13
  int v32; // ebx
  __int64 v33; // r14
  char v34; // al
  __int64 v35; // r13
  __int64 v36; // rbx
  __int64 v37; // r14
  char v38; // al
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r14
  char v42; // al
  __int64 v43; // r13
  __int64 v44; // rbx
  int v45; // edx
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // r14
  char v49; // al
  __int64 v50; // r13
  __int64 v51; // rbx
  int v52; // edx
  int v53; // r12d
  __int64 v54; // rax
  __int64 v55; // r14
  char v56; // al
  __int64 v57; // r13
  char v58; // bl
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // r14
  char v62; // al
  __int64 v63; // r13
  __int64 v64; // rbx
  int v65; // edx
  int v66; // r13d
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdi
  _BYTE v70[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v9 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v11 = *(_QWORD *)(a1 + 784);
      if ( v10 && !*(_DWORD *)(v11 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v9, v11 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v11 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)));
      v12 = sub_CFEA20(*(_QWORD *)(a1 + 560));
      *(_BYTE *)sub_CE8890((__int64)v70) = v12;
      goto LABEL_57;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v13 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v15 = *(_QWORD *)(a1 + 784);
      if ( v14 && !*(_DWORD *)(v15 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v13, v15 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v15 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)));
      v16 = sub_CFF120(*(_QWORD *)(a1 + 560));
      *(_BYTE *)sub_CE8AA0((__int64)v70) = v16;
      goto LABEL_57;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v17 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v19 = *(_QWORD *)(a1 + 784);
      if ( v18 && !*(_DWORD *)(v19 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v17, v19 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v19 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v19 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v19 + 40)));
      v20 = sub_CFF630(*(_QWORD *)(a1 + 560));
      *(_WORD *)sub_CE8E90((__int64)v70) = v20;
      goto LABEL_57;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v21 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v23 = *(_QWORD *)(a1 + 784);
      if ( v22 && !*(_DWORD *)(v23 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v21, v23 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v23 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v23 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v23 + 40)));
      v24 = sub_CFFD50(*(_QWORD *)(a1 + 560));
      *(_WORD *)sub_CE90A0((__int64)v70) = v24;
      goto LABEL_57;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v25 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v27 = *(_QWORD *)(a1 + 784);
      if ( v26 && !*(_DWORD *)(v27 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v25, v27 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v27 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v27 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v27 + 40)));
      v28 = sub_CFFE60(*(_QWORD *)(a1 + 560));
      *(_DWORD *)sub_CE9490((__int64)v70) = v28;
      goto LABEL_57;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v29 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v31 = *(_QWORD *)(a1 + 784);
      if ( v30 && !*(_DWORD *)(v31 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v29, v31 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v31 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v31 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v31 + 40)));
      v32 = sub_D00570(*(_QWORD *)(a1 + 560));
      *(_DWORD *)sub_CE96A0((__int64)v70) = v32;
      goto LABEL_57;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v33 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v35 = *(_QWORD *)(a1 + 784);
      if ( v34 && !*(_DWORD *)(v35 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v33, v35 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v35 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v35 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v35 + 40)));
      v36 = sub_D00680(*(_QWORD *)(a1 + 560));
      *(_QWORD *)sub_CE9C80((__int64)v70) = v36;
      goto LABEL_57;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v37 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v39 = *(_QWORD *)(a1 + 784);
      if ( v38 && !*(_DWORD *)(v39 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v37, v39 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v39 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v39 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v39 + 40)));
      v40 = sub_D00DC0(*(_QWORD *)(a1 + 560));
      *(_QWORD *)sub_CE9E90((__int64)v70) = v40;
      goto LABEL_57;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v41 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v43 = *(_QWORD *)(a1 + 784);
      if ( v42 && !*(_DWORD *)(v43 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v41, v43 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v43 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v43 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v43 + 40)));
      v44 = sub_D01350(*(_QWORD *)(a1 + 560));
      v46 = v45;
      v47 = sub_CEA4A0((__int64)v70);
      *(_QWORD *)v47 = v44;
      *(_DWORD *)(v47 + 8) = v46;
      goto LABEL_57;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v48 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v50 = *(_QWORD *)(a1 + 784);
      if ( v49 && !*(_DWORD *)(v50 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v48, v50 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v50 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v50 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v50 + 40)));
      v51 = sub_D01480(*(_QWORD *)(a1 + 560));
      v53 = v52;
      v54 = sub_CEA4F0((__int64)v70);
      *(_QWORD *)v54 = v51;
      *(_DWORD *)(v54 + 8) = v53;
      goto LABEL_57;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v55 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v56 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v57 = *(_QWORD *)(a1 + 784);
      if ( v56 && !*(_DWORD *)(v57 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v55, v57 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v57 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v57 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v57 + 40)));
      v58 = sub_CE52A0(*(_QWORD *)(a1 + 560));
      *(_BYTE *)sub_CEAA70((__int64)v70) = v58;
LABEL_57:
      sub_DFFFB0(v70);
      sub_E00FC0(v70);
      sub_DFF560(v70);
      return v5;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v59 = *(_QWORD *)(a1 + 1232);
        v60 = a1 + 384;
        *(_QWORD *)(v60 + 856) = *a4;
        return (unsigned int)sub_CF76B0(v60, v59, a3);
      }
      return v5;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v61 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
      v63 = *(_QWORD *)(a1 + 784);
      if ( v62 && !*(_DWORD *)(v63 + 24) )
        return 0;
      v5 = sub_DA69E0(a1 + 384, v61, v63 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_DFF4E0(
        v70,
        *(_QWORD *)(v63 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v63 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v63 + 40)));
      v64 = sub_CE4EC0(*(_QWORD *)(a1 + 560));
      v66 = v65;
      v67 = sub_CEA540((__int64)v70);
      *(_QWORD *)v67 = v64;
      *(_DWORD *)(v67 + 8) = v66;
      sub_DFFFB0(v70);
      sub_E00FC0(v70);
      sub_DFF560(v70);
      return v5;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v68 = *(_QWORD *)(a1 + 1232);
        v69 = a1 + 384;
        *(_QWORD *)(v69 + 856) = *a4;
        return (unsigned int)sub_CF77A0(v69, v68, a3);
      }
      return v5;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        v8 = a1 + 384;
        *(_QWORD *)(v8 + 856) = *a4;
        return (unsigned int)sub_CF7870(v8, v7, a3);
      }
      return v5;
  }
}

