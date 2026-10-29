__int64 __fastcall sub_947690(__int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // r12d
  char v8; // bp
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int8 v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int16 v22; // ax
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned __int16 v25; // ax
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // r15
  int v32; // eax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r15
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // r15
  unsigned int v46; // ebp
  void *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+10h] [rbp-58h] BYREF
  __int64 v53; // [rsp+18h] [rbp-50h] BYREF
  void *v54; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v55; // [rsp+28h] [rbp-40h]

  v5 = a4;
  v7 = 1;
  v8 = a4;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v12 = *(_QWORD *)(a1 + 792);
        v13 = a1 + 384;
        *(_QWORD *)(v13 + 416) = *a5;
        v7 = sub_9DC8A0(v13, v12);
        if ( (_BYTE)v7 )
        {
          v14 = sub_915550(*(_QWORD *)(a1 + 568));
          v15 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          v16 = v14;
          goto LABEL_27;
        }
      }
      return v7;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        v18 = a1 + 384;
        *(_QWORD *)(v18 + 416) = *a5;
        v7 = sub_9DC8A0(v18, v17);
        if ( (_BYTE)v7 )
        {
          v19 = sub_915900(*(_QWORD *)(a1 + 568));
          v15 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          v16 = v19;
          goto LABEL_27;
        }
      }
      return v7;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        v21 = a1 + 384;
        *(_QWORD *)(v21 + 416) = *a5;
        v7 = sub_9DC8A0(v21, v20);
        if ( (_BYTE)v7 )
        {
          v22 = sub_915930(*(_QWORD *)(a1 + 568));
          v15 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          v16 = v22;
          goto LABEL_27;
        }
      }
      return v7;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 792);
        v24 = a1 + 384;
        *(_QWORD *)(v24 + 416) = *a5;
        v7 = sub_9DC8A0(v24, v23);
        if ( (_BYTE)v7 )
        {
          v25 = sub_915CE0(*(_QWORD *)(a1 + 568));
          v15 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          v16 = v25;
          goto LABEL_27;
        }
      }
      return v7;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = *(_QWORD *)(a1 + 792);
        v27 = a1 + 384;
        *(_QWORD *)(v27 + 416) = *a5;
        v7 = sub_9DC8A0(v27, v26);
        if ( (_BYTE)v7 )
        {
          v28 = sub_915D10(*(_QWORD *)(a1 + 568));
          v15 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          v16 = v28;
LABEL_27:
          v29 = sub_9A3010(a1 + 432, a3, v16, v15, 1);
          v30 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          sub_A1BFA0(v30, v29, 16);
        }
      }
      return v7;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v31 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a5;
        v7 = sub_9DC8A0(a1 + 384, v31);
        if ( !(_BYTE)v7 )
          return 0;
        v32 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v33 = *(_DWORD *)(a3 + 12);
        LODWORD(v52) = v32;
        if ( (unsigned __int8)sub_946AB0(a1 + 384, v31, (unsigned int *)&v52, v33, v8) )
        {
          v34 = (unsigned int)v52;
          v35 = a1 + 432;
          v36 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
          goto LABEL_36;
        }
        goto LABEL_40;
      }
      return v7;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v37 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a5;
        v7 = sub_9DC8A0(a1 + 384, v37);
        if ( !(_BYTE)v7 )
          return 0;
        v38 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v39 = *(_DWORD *)(a3 + 12);
        v52 = v38;
        if ( !(unsigned __int8)sub_946C90(a1 + 384, v37, &v52, v39, v8) )
          goto LABEL_40;
        goto LABEL_35;
      }
      return v7;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v7;
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      v7 = sub_9DC8A0(a1 + 384, v42);
      if ( !(_BYTE)v7 )
        return 0;
      v43 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v44 = *(_DWORD *)(a3 + 12);
      v52 = v43;
      if ( !(unsigned __int8)sub_946E70(a1 + 384, v42, &v52, v44, v8) )
      {
LABEL_40:
        if ( v8 )
        {
          v50 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          *(_QWORD *)v50 = 0;
          *(_DWORD *)(v50 + 48) = 1;
          *(_QWORD *)(v50 + 32) = 0;
          *(_QWORD *)(v50 + 24) = a3;
          *(_OWORD *)(v50 + 8) = 0;
          return v7;
        }
        return 0;
      }
LABEL_35:
      v34 = v52;
      v35 = a1 + 432;
      v36 = *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL);
LABEL_36:
      v40 = sub_9A3010(v35, a3, v34, v36, 1);
      v41 = *(_QWORD *)(a1 + 568);
      v53 = v40;
      v54 = &word_10;
      sub_8F63B0(v41, &v53, &v54);
      return v7;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v45 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a5;
        v7 = sub_9DC8A0(a1 + 384, v45);
        if ( (_BYTE)v7 )
        {
          sub_919FD0((__int64)&v54, *(_QWORD *)(a1 + 568));
          if ( !(unsigned __int8)sub_947050(a1 + 384, v45, (__int64)&v54, *(_DWORD *)(a3 + 12), v8) )
            goto LABEL_7;
          v46 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 32LL);
          v47 = sub_9301F0((__int64)&v54);
          goto LABEL_45;
        }
      }
      return v7;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v7;
      v11 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a5;
      v7 = sub_9DC8A0(a1 + 384, v11);
      if ( !(_BYTE)v7 )
        return v7;
      sub_91A020((__int64)&v54, *(_QWORD *)(a1 + 568));
      if ( (unsigned __int8)sub_9472B0(a1 + 384, v11, (__int64 *)&v54, *(_DWORD *)(a3 + 12), v8) )
      {
        v46 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 32LL);
        v47 = sub_930AB0((__int64)&v54);
LABEL_45:
        v48 = sub_9A3010(a1 + 432, a3, v47, v46, 1);
        v49 = *(_QWORD *)(a1 + 568);
        v52 = v48;
        v53 = 16;
        sub_8F63B0(v49, &v52, &v53);
      }
      else
      {
LABEL_7:
        if ( !v8 )
          goto LABEL_8;
        v51 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
        *(_QWORD *)v51 = 0;
        *(_DWORD *)(v51 + 48) = 1;
        *(_QWORD *)(v51 + 32) = 0;
        *(_QWORD *)(v51 + 24) = a3;
        *(_OWORD *)(v51 + 8) = 0;
      }
      v5 = v7;
LABEL_8:
      if ( v55 > 0x40 && v54 )
        operator delete[](v54);
      return v5;
  }
}

