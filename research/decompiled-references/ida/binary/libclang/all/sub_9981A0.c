__int64 __fastcall sub_9981A0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5, char a6)
{
  __int64 v8; // r12
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  size_t v16; // r15
  _BYTE *v17; // rax
  _BYTE *v18; // rbp
  size_t v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rdi
  _DWORD *v28; // rsi
  char v30; // al
  _BYTE *v31; // rax
  size_t v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // r12
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  unsigned int v48; // esi
  __int64 v49; // rdi
  _WORD *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  unsigned int v54; // esi
  __int64 v55; // rdi
  _QWORD *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdi
  unsigned int v65; // esi
  __int64 v66; // rdi
  _BYTE *v67; // rsi
  __int64 v68; // rdi
  unsigned int v69; // esi
  __int64 v70; // rdi
  size_t n; // [rsp+8h] [rbp-50h]
  void *v72; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+18h] [rbp-40h]

  v8 = a3;
  v10 = (__int64 *)a2;
  v11 = *(_DWORD *)(a2 + 48);
  if ( v11 == 1 )
  {
    v14 = *(_QWORD *)(a2 + 24);
  }
  else if ( v11 )
  {
    if ( (unsigned int)(v11 - 2) <= 1 )
      BUG();
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(unsigned int *)(a2 + 32);
    v14 = *(_QWORD *)(v12 + 32);
    if ( (_DWORD)v13 != *(_DWORD *)(v14 + 16) && (_DWORD)v13 )
      v14 = *(_QWORD *)(v12 + v13 + 32);
  }
  if ( (*(_QWORD *)v14 & 2) == 0
    && (v15 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL) != 0
    && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 <= 2
    && (*(_BYTE *)(v15 + 68) & 1) != 0 )
  {
    v44 = sub_781830(v15);
    if ( v44 > (unsigned int)a5 )
      v44 = a5;
    v20 = v44;
  }
  else
  {
    if ( (_DWORD)v8 == 10 && a6 )
    {
      if ( (unsigned __int8)sub_A1C2E0(a2) )
      {
        v16 = a5 >> 3;
        v17 = (_BYTE *)operator new[](a5 >> 3);
        v18 = v17;
        if ( !v16 )
        {
          v20 = 1;
LABEL_78:
          v62 = *v10;
          v63 = v10[3];
          if ( *((_DWORD *)v10 + 12) )
            goto LABEL_84;
          v64 = *(_QWORD *)(v63 + 32);
          v65 = *((_DWORD *)v10 + 8);
          if ( *(_DWORD *)(v64 + 16) != v65 && v65 )
            v64 = *(_QWORD *)(v63 + v65 + 32);
          if ( !*(_BYTE *)(v64 + 51) || (v66 = v65, v67 = (_BYTE *)(v63 + v62 + 72), v66 != v62) )
LABEL_84:
            v67 = (_BYTE *)(v63 + v62 + 40);
LABEL_85:
          *v18 = *v67;
          goto LABEL_26;
        }
        v19 = v16;
        v20 = 1;
        memset(v17, 0, v19);
LABEL_15:
        switch ( v8 )
        {
          case 0LL:
          case 10LL:
            goto LABEL_78;
          case 1LL:
            v62 = *v10;
            v63 = v10[3];
            if ( !*((_DWORD *)v10 + 12) )
            {
              v68 = *(_QWORD *)(v63 + 32);
              v69 = *((_DWORD *)v10 + 8);
              if ( *(_DWORD *)(v68 + 16) != v69 && v69 )
                v68 = *(_QWORD *)(v63 + v69 + 32);
              if ( *(_BYTE *)(v68 + 51) )
              {
                v70 = v69;
                v67 = (_BYTE *)(v63 + v62 + 72);
                if ( v62 == v70 )
                  goto LABEL_85;
              }
            }
            goto LABEL_84;
          case 2LL:
          case 3LL:
            v45 = *v10;
            v46 = v10[3];
            if ( *((_DWORD *)v10 + 12) )
              goto LABEL_59;
            v47 = *(_QWORD *)(v46 + 32);
            v48 = *((_DWORD *)v10 + 8);
            if ( *(_DWORD *)(v47 + 16) != v48 && v48 )
              v47 = *(_QWORD *)(v46 + v48 + 32);
            if ( !*(_BYTE *)(v47 + 51) || (v49 = v48, v50 = (_WORD *)(v46 + v45 + 72), v49 != v45) )
LABEL_59:
              v50 = (_WORD *)(v46 + v45 + 40);
            *(_WORD *)v18 = *v50;
            break;
          case 4LL:
          case 5LL:
            v23 = *v10;
            v24 = v10[3];
            if ( *((_DWORD *)v10 + 12) )
              goto LABEL_24;
            v25 = *(_QWORD *)(v24 + 32);
            v26 = *((_DWORD *)v10 + 8);
            if ( *(_DWORD *)(v25 + 16) != v26 && v26 )
              v25 = *(_QWORD *)(v24 + v26 + 32);
            if ( !*(_BYTE *)(v25 + 51) || (v27 = v26, v28 = (_DWORD *)(v24 + v23 + 72), v27 != v23) )
LABEL_24:
              v28 = (_DWORD *)(v24 + v23 + 40);
            *(_DWORD *)v18 = *v28;
            break;
          case 6LL:
          case 7LL:
            v51 = *v10;
            v52 = v10[3];
            if ( *((_DWORD *)v10 + 12) )
              goto LABEL_67;
            v53 = *(_QWORD *)(v52 + 32);
            v54 = *((_DWORD *)v10 + 8);
            if ( *(_DWORD *)(v53 + 16) != v54 && v54 )
              v53 = *(_QWORD *)(v52 + v54 + 32);
            if ( !*(_BYTE *)(v53 + 51) || (v55 = v54, v56 = (_QWORD *)(v52 + v51 + 72), v55 != v51) )
LABEL_67:
              v56 = (_QWORD *)(v52 + v51 + 40);
            *(_QWORD *)v18 = *v56;
            break;
          case 8LL:
          case 9LL:
            v57 = *v10;
            v58 = v10[3];
            if ( *((_DWORD *)v10 + 12) )
              goto LABEL_75;
            v59 = *(_QWORD *)(v58 + 32);
            v60 = *((unsigned int *)v10 + 8);
            if ( *(_DWORD *)(v59 + 16) != (_DWORD)v60 && (_DWORD)v60 )
              v59 = *(_QWORD *)(v58 + (unsigned int)v60 + 32);
            if ( !*(_BYTE *)(v59 + 51) || (v61 = v58 + v57 + 72, v60 != v57) )
LABEL_75:
              v61 = v58 + v57 + 40;
            sub_2592CE0(v61, v18, *(_DWORD *)(v61 + 8) >> 3, v21, v22);
            break;
        }
LABEL_26:
        sub_B9DF10(*a1, a4, v20);
LABEL_27:
        sub_B9DCC0(*a1, v18, a4, v20, *(unsigned int *)a1[1]);
        operator delete[](v18);
        return 1;
      }
      return 1;
    }
    v20 = a5;
  }
  if ( v20 )
  {
    v30 = sub_A1C2E0(a2);
    if ( (_DWORD)v8 != 13 && v30 == 1 )
    {
      v31 = (_BYTE *)operator new[](a5 >> 3);
      v32 = a5 >> 3;
      v18 = v31;
      if ( v32 )
      {
        a2 = 0;
        memset(v31, 0, v32);
      }
      if ( (_DWORD)v8 == 12 )
      {
        v33 = *v10;
        v34 = v10[3];
        if ( *((_DWORD *)v10 + 12) )
          goto LABEL_42;
        v35 = *(_QWORD *)(v34 + 32);
        a2 = *((unsigned int *)v10 + 8);
        if ( *(_DWORD *)(v35 + 16) != (_DWORD)a2 && (_DWORD)a2 )
          v35 = *(_QWORD *)(v34 + (unsigned int)a2 + 32);
        if ( !*(_BYTE *)(v35 + 51) || (v36 = (_QWORD *)(v34 + v33 + 72), a2 != v33) )
LABEL_42:
          v36 = (_QWORD *)(v34 + v33 + 40);
        v37 = *v36;
        v38 = sub_2575E10(*v36);
        v39 = *v36;
        n = v38;
        if ( v39 == sub_2575D20(v37, a2, v40) )
          sub_25807A0(&v72, v36);
        else
          sub_2580530(&v72, v36);
        v41 = sub_2575D80(*v36);
        sub_2592CE0(&v72, v18, v41 >> 3, v42, v43);
        if ( v73 > 0x40 && v72 )
          operator delete[](v72);
        sub_B9DF10(*a1, a4, n);
        goto LABEL_27;
      }
      goto LABEL_15;
    }
  }
  return 1;
}

