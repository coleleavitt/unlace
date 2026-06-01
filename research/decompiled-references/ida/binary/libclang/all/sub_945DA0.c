__int64 __fastcall sub_945DA0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  bool v13; // bl
  __int64 v14; // rbp
  __int64 v15; // r13
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rbp
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int16 v22; // ax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int16 v25; // ax
  __int64 v26; // rsi
  __int64 v27; // rbp
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rbp
  void *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rbp
  void *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rbp
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned int v45; // ebx
  bool v46; // al
  __int64 v47; // r12
  __int64 v48; // rbp
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // ebx
  bool v54; // al
  __int64 v55; // rbp
  char v56; // al
  __int64 v57; // rsi
  char v58; // bl
  unsigned int v59; // r15d
  void *v60; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+8h] [rbp-B0h]
  bool v62; // [rsp+Ch] [rbp-ACh]
  void *v63; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+18h] [rbp-A0h]
  void *v65; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v66; // [rsp+28h] [rbp-90h]
  char v67; // [rsp+2Ch] [rbp-8Ch]
  int v68; // [rsp+30h] [rbp-88h]
  _QWORD v69[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v70; // [rsp+58h] [rbp-60h]
  __int64 v71; // [rsp+60h] [rbp-58h]
  int v72; // [rsp+70h] [rbp-48h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v14 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v16 = sub_915550(*(_QWORD *)(a1 + 568));
      v17 = *(_QWORD *)(a1 + 568);
      LOBYTE(v65) = v16;
      sub_8F41A0((__int64)v69, v17);
      if ( !v72 || v72 == 2 )
      {
        if ( v70 )
          goto LABEL_20;
      }
      else if ( v72 == 3 || v69[0] | v71 )
      {
LABEL_20:
        if ( (_BYTE)v65 && !(unsigned __int8)sub_9D4C70(v15, v14, v69) )
        {
          v3 = 0;
          goto LABEL_79;
        }
      }
      v3 = sub_93FBD0(v15, v14, (unsigned __int8 *)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      goto LABEL_22;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v18 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v19 = sub_915900(*(_QWORD *)(a1 + 568));
      v20 = *(_QWORD *)(a1 + 568);
      LOBYTE(v65) = v19;
      sub_8F41A0((__int64)v69, v20);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_29;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_29;
      }
      if ( (_BYTE)v65 && !(unsigned __int8)sub_9D4C70(v15, v18, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_29:
      v3 = sub_93FF70(v15, v18, &v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v21 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v22 = sub_915930(*(_QWORD *)(a1 + 568));
      v23 = *(_QWORD *)(a1 + 568);
      LOWORD(v65) = v22;
      sub_8F41A0((__int64)v69, v23);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_37;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_37;
      }
      if ( (_WORD)v65 && !(unsigned __int8)sub_9D4C70(v15, v21, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_37:
      v3 = sub_9409F0(v15, v21, (unsigned __int16 *)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v24 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v25 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v26 = *(_QWORD *)(a1 + 568);
      LOWORD(v65) = v25;
      sub_8F41A0((__int64)v69, v26);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_45;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_45;
      }
      if ( (_WORD)v65 && !(unsigned __int8)sub_9D4C70(v15, v24, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_45:
      v3 = sub_940DB0(v15, v24, &v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v27 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v28 = sub_915D10(*(_QWORD *)(a1 + 568));
      v29 = *(_QWORD *)(a1 + 568);
      LODWORD(v65) = v28;
      sub_8F41A0((__int64)v69, v29);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_53;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_53;
      }
      if ( (_DWORD)v65 && !(unsigned __int8)sub_9D4C70(v15, v27, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_53:
      v3 = sub_941420(v15, v27, (unsigned int *)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v30 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v31 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v32 = *(_QWORD *)(a1 + 568);
      LODWORD(v65) = v31;
      sub_8F41A0((__int64)v69, v32);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_61;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_61;
      }
      if ( (_DWORD)v65 && !(unsigned __int8)sub_9D4C70(v15, v30, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_61:
      v3 = sub_9417C0(v15, v30, &v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v33 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v34 = (void *)sub_9160F0(*(_QWORD *)(a1 + 568));
      v35 = *(_QWORD *)(a1 + 568);
      v65 = v34;
      sub_8F41A0((__int64)v69, v35);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_69;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_69;
      }
      if ( v65 && !(unsigned __int8)sub_9D4C70(v15, v33, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_69:
      v3 = sub_9420E0(v15, v33, (__int64 *)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_78;
      v3 = 0;
      goto LABEL_79;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v36 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v37 = (void *)sub_9164A0(*(_QWORD *)(a1 + 568));
      v38 = *(_QWORD *)(a1 + 568);
      v65 = v37;
      sub_8F41A0((__int64)v69, v38);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_77;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_77;
      }
      if ( v65 && !(unsigned __int8)sub_9D4C70(v15, v36, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_77:
      v3 = sub_942480(v15, v36, (unsigned __int64 *)&v65, (__int64)v69, 0);
      if ( !(_BYTE)v3 )
      {
LABEL_22:
        v3 = 0;
        goto LABEL_79;
      }
      goto LABEL_78;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v39 = *(_QWORD *)(a1 + 568);
      v6 = a1 + 384;
      v40 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v41 = sub_A1A5A0(v39, 16);
      v42 = *(_DWORD *)(v41 + 8);
      *(_DWORD *)(v41 + 8) = 0;
      v66 = v42;
      v65 = *(void **)v41;
      sub_A1A5E0(v39, 16);
      v43 = *(_QWORD *)(a1 + 568);
      v44 = sub_A1A5A0(v43, 56);
      sub_A1C070(v69, v44);
      sub_A1A5E0(v43, 56);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_88;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_88;
      }
      v45 = v66;
      if ( v66 <= 0x40 )
        v46 = v65 == nullptr;
      else
        v46 = v45 == (unsigned int)sub_2587400(&v65);
      if ( !v46 && !(unsigned __int8)sub_9D4C70(v6, v40, v69) )
      {
        v3 = 0;
        goto LABEL_100;
      }
LABEL_88:
      v3 = sub_942A60(v6, v40, (__int64)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
        goto LABEL_99;
      v3 = 0;
      goto LABEL_100;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v47 = *(_QWORD *)(a1 + 568);
      v6 = a1 + 384;
      v48 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v49 = sub_A1A5A0(v47, 16);
      v50 = *(_DWORD *)(v49 + 8);
      *(_DWORD *)(v49 + 8) = 0;
      v66 = v50;
      v65 = *(void **)v49;
      sub_A1A5E0(v47, 16);
      v51 = *(_QWORD *)(a1 + 568);
      v52 = sub_A1A5A0(v51, 56);
      sub_A1C070(v69, v52);
      sub_A1A5E0(v51, 56);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_98;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_98;
      }
      v53 = v66;
      if ( v66 <= 0x40 )
        v54 = v65 == nullptr;
      else
        v54 = v53 == (unsigned int)sub_2587400(&v65);
      if ( !v54 && !(unsigned __int8)sub_9D4C70(v6, v48, v69) )
      {
        v3 = 0;
        goto LABEL_100;
      }
LABEL_98:
      v3 = sub_943380(v6, v48, (__int64)&v65, (__int64)v69, 0);
      if ( !(_BYTE)v3 )
        goto LABEL_14;
      goto LABEL_99;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v55 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v56 = sub_8F4170(*(_QWORD *)(a1 + 568));
      v57 = *(_QWORD *)(a1 + 568);
      LOBYTE(v65) = v56;
      sub_8F41A0((__int64)v69, v57);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_108;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_108;
      }
      if ( (_BYTE)v65 && !(unsigned __int8)sub_9D4C70(v15, v55, v69) )
      {
        v3 = 0;
        goto LABEL_79;
      }
LABEL_108:
      v3 = sub_9439C0(v15, v55, &v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
LABEL_78:
        sub_8E94C0(v15);
      else
        v3 = 0;
LABEL_79:
      sub_A1C0C0(v69);
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = a1 + 384;
      v7 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v8 = sub_A1A5A0(v5, 24);
      v9 = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v8 + 8) = 0;
      v66 = v9;
      v65 = *(void **)v8;
      v67 = *(_BYTE *)(v8 + 12);
      v68 = *(_DWORD *)(v8 + 16);
      sub_A1A5E0(v5, 24);
      v10 = *(_QWORD *)(a1 + 568);
      v11 = sub_A1A5A0(v10, 56);
      sub_A1C070(v69, v11);
      sub_A1A5E0(v10, 56);
      if ( !v72 || v72 == 2 )
      {
        if ( !v70 )
          goto LABEL_13;
      }
      else if ( v72 != 3 && !(v69[0] | v71) )
      {
        goto LABEL_13;
      }
      v64 = v66;
      if ( v66 <= 0x40 )
      {
        v12 = v65;
LABEL_11:
        v13 = v12 == nullptr;
        goto LABEL_12;
      }
      v58 = HIBYTE(v68) >> 5;
      sub_2585B30(&v63);
      v59 = v64;
      v12 = v63;
      v61 = v64;
      v60 = v63;
      v62 = !(v58 & 1);
      if ( v64 <= 0x40 )
        goto LABEL_11;
      v13 = (unsigned int)sub_2587400(&v60) == v59;
      if ( v12 )
        operator delete[](v12);
LABEL_12:
      if ( !v13 && !(unsigned __int8)sub_9D4C70(v6, v7, v69) )
      {
        v3 = 0;
        goto LABEL_100;
      }
LABEL_13:
      v3 = sub_944110(v6, v7, (__int64)&v65, (__int64)v69, 0);
      if ( (_BYTE)v3 )
LABEL_99:
        sub_8E94C0(v6);
      else
LABEL_14:
        v3 = 0;
LABEL_100:
      sub_A1C0C0(v69);
      if ( v66 > 0x40 && v65 )
        operator delete[](v65);
      return v3;
  }
}

