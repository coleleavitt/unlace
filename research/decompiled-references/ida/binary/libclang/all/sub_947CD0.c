__int64 __fastcall sub_947CD0(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  unsigned int v7; // r14d
  unsigned int v9; // r12d
  char v10; // bp
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // bp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int8 v22; // bp
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int16 v25; // bp
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned __int16 v28; // bp
  __int64 v29; // rsi
  __int64 v30; // rdi
  int v31; // ebp
  __int64 v32; // rbp
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r14
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // ebp
  void *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+20h] [rbp-58h] BYREF
  __int64 v56; // [rsp+28h] [rbp-50h] BYREF
  void *v57; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v9 = 1;
  v10 = a5;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = *(_QWORD *)(a1 + 792);
        v16 = a1 + 384;
        *(_QWORD *)(v16 + 416) = *a6;
        v9 = sub_9DC8A0(v16, v15);
        if ( (_BYTE)v9 )
        {
          v17 = sub_915550(*(_QWORD *)(a1 + 568));
          sub_A24BE0(a3);
          v18 = *(_QWORD *)(a1 + 576);
          v19 = v17;
          goto LABEL_27;
        }
      }
      return v9;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        v21 = a1 + 384;
        *(_QWORD *)(v21 + 416) = *a6;
        v9 = sub_9DC8A0(v21, v20);
        if ( (_BYTE)v9 )
        {
          v22 = sub_915900(*(_QWORD *)(a1 + 568));
          sub_A24BE0(a3);
          v18 = *(_QWORD *)(a1 + 576);
          v19 = v22;
          goto LABEL_27;
        }
      }
      return v9;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 792);
        v24 = a1 + 384;
        *(_QWORD *)(v24 + 416) = *a6;
        v9 = sub_9DC8A0(v24, v23);
        if ( (_BYTE)v9 )
        {
          v25 = sub_915930(*(_QWORD *)(a1 + 568));
          sub_A24BE0(a3);
          v18 = *(_QWORD *)(a1 + 576);
          v19 = v25;
          goto LABEL_27;
        }
      }
      return v9;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = *(_QWORD *)(a1 + 792);
        v27 = a1 + 384;
        *(_QWORD *)(v27 + 416) = *a6;
        v9 = sub_9DC8A0(v27, v26);
        if ( (_BYTE)v9 )
        {
          v28 = sub_915CE0(*(_QWORD *)(a1 + 568));
          sub_A24BE0(a3);
          v18 = *(_QWORD *)(a1 + 576);
          v19 = v28;
          goto LABEL_27;
        }
      }
      return v9;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v29 = *(_QWORD *)(a1 + 792);
        v30 = a1 + 384;
        *(_QWORD *)(v30 + 416) = *a6;
        v9 = sub_9DC8A0(v30, v29);
        if ( (_BYTE)v9 )
        {
          v31 = sub_915D10(*(_QWORD *)(a1 + 568));
          sub_A24BE0(a3);
          v18 = *(_QWORD *)(a1 + 576);
          v19 = v31;
LABEL_27:
          v32 = sub_9A30E0(a1 + 432, a4, a3, v19, *(unsigned int *)(v18 + 32), 1);
          v33 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          sub_A1BFA0(v33, v32, 16);
        }
      }
      return v9;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a6;
        v52 = *(_QWORD *)(a1 + 792);
        v9 = sub_9DC8A0(a1 + 384, v52);
        if ( !(_BYTE)v9 )
          return 0;
        LODWORD(v55) = sub_9160C0(*(_QWORD *)(a1 + 568));
        v34 = sub_A24BE0(a3);
        if ( (unsigned __int8)sub_946AB0(a1 + 384, v52, (unsigned int *)&v55, v34, v10) )
        {
          v35 = (unsigned int)v55;
          v36 = a1 + 432;
          v37 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          goto LABEL_36;
        }
        goto LABEL_40;
      }
      return v9;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a6;
        v9 = sub_9DC8A0(a1 + 384, v38);
        if ( !(_BYTE)v9 )
          return 0;
        v55 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v39 = sub_A24BE0(a3);
        if ( !(unsigned __int8)sub_946C90(a1 + 384, v38, (unsigned __int64 *)&v55, v39, v10) )
          goto LABEL_40;
        goto LABEL_35;
      }
      return v9;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v9;
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a6;
      v9 = sub_9DC8A0(a1 + 384, v42);
      if ( !(_BYTE)v9 )
        return 0;
      v55 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v43 = sub_A24BE0(a3);
      if ( !(unsigned __int8)sub_946E70(a1 + 384, v42, (unsigned __int64 *)&v55, v43, v10) )
      {
LABEL_40:
        if ( v10 )
        {
          v50 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          *(_QWORD *)v50 = 0;
          *(_DWORD *)(v50 + 48) = 1;
          *(_QWORD *)(v50 + 32) = 0;
          *(_QWORD *)(v50 + 24) = 0;
          *(_OWORD *)(v50 + 8) = 0;
          return v9;
        }
        return 0;
      }
LABEL_35:
      v35 = v55;
      v36 = a1 + 432;
      v37 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
LABEL_36:
      v40 = sub_9A30E0(v36, a4, a3, v35, v37, 1);
      v41 = *(_QWORD *)(a1 + 568);
      v56 = v40;
      v57 = &word_10;
      sub_8F63B0(v41, &v56, &v57);
      return v9;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v44 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a6;
        v54 = v44;
        v9 = sub_9DC8A0(a1 + 384, v44);
        if ( (_BYTE)v9 )
        {
          sub_919FD0((__int64)&v57, *(_QWORD *)(a1 + 568));
          v45 = sub_A24BE0(a3);
          if ( !(unsigned __int8)sub_947050(a1 + 384, v54, (__int64)&v57, v45, v10) )
            goto LABEL_7;
          v46 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 32LL);
          v47 = sub_9301F0((__int64)&v57);
          goto LABEL_45;
        }
      }
      return v9;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v9;
      v13 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a6;
      v53 = v13;
      v9 = sub_9DC8A0(a1 + 384, v13);
      if ( !(_BYTE)v9 )
        return v9;
      sub_91A020((__int64)&v57, *(_QWORD *)(a1 + 568));
      v14 = sub_A24BE0(a3);
      if ( (unsigned __int8)sub_9472B0(a1 + 384, v53, (__int64 *)&v57, v14, v10) )
      {
        v46 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 32LL);
        v47 = sub_930AB0((__int64)&v57);
LABEL_45:
        v48 = sub_9A30E0(a1 + 432, a4, a3, v47, v46, 1);
        v49 = *(_QWORD *)(a1 + 568);
        v55 = v48;
        v56 = 16;
        sub_8F63B0(v49, &v55, &v56);
      }
      else
      {
LABEL_7:
        if ( !v10 )
          goto LABEL_8;
        v51 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
        *(_QWORD *)v51 = 0;
        *(_DWORD *)(v51 + 48) = 1;
        *(_QWORD *)(v51 + 32) = 0;
        *(_QWORD *)(v51 + 24) = 0;
        *(_OWORD *)(v51 + 8) = 0;
      }
      v7 = v9;
LABEL_8:
      if ( v58 > 0x40 && v57 )
        operator delete[](v57);
      return v7;
  }
}

