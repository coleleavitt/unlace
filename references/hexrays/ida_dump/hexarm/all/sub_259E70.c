char __fastcall sub_259E70(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 i; // rbx
  unsigned int v6; // r13d
  unsigned __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r14
  int tinfo_size; // r13d
  bool v15; // zf
  unsigned int v16; // eax
  int v17; // eax
  __int64 j; // rbx
  _QWORD *v19; // r14
  int v20; // r13d
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // eax
  int v26; // eax
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  _QWORD *v33; // r13
  int v34; // ebx
  bool v35; // zf
  unsigned int v36; // eax
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // r13
  _QWORD *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  __int64 v61; // [rsp+8h] [rbp-60h]
  int v62; // [rsp+10h] [rbp-58h]
  int v63; // [rsp+10h] [rbp-58h]
  __int64 v64; // [rsp+10h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  __int64 v66; // [rsp+10h] [rbp-58h]
  _QWORD *v67; // [rsp+18h] [rbp-50h]
  __int64 v68; // [rsp+18h] [rbp-50h]
  __int64 v69; // [rsp+20h] [rbp-48h]
  __int64 v70; // [rsp+20h] [rbp-48h]
  unsigned int v71; // [rsp+2Ch] [rbp-3Ch]

  if ( sub_259C10(a1, a2, 0) )
  {
    v3 = *(_DWORD *)(a1 + 8);
    for ( i = a1; v3 == 48; v3 = *(_DWORD *)(i + 8) )
      i = *(_QWORD *)(i + 24);
    if ( v3 != 61 )
      goto LABEL_89;
    v13 = *(_QWORD **)(i + 24);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(i + 48), 0);
    v15 = (unsigned int)get_tinfo_property(*(_QWORD *)(i + 48), 3) == 1;
    v16 = 16;
    if ( tinfo_size <= 16 )
      v16 = tinfo_size;
    if ( sub_32AEF0(*v13, v16, v15) )
      goto LABEL_89;
    v17 = *(_DWORD *)(a2 + 8);
    for ( j = a2; v17 == 48; v17 = *(_DWORD *)(j + 8) )
      j = *(_QWORD *)(j + 24);
    if ( v17 != 61 )
      goto LABEL_89;
    v19 = *(_QWORD **)(j + 24);
    v20 = get_tinfo_size(0, *(_QWORD *)(j + 48), 0);
    v21 = (unsigned int)get_tinfo_property(*(_QWORD *)(j + 48), 3) == 1;
    v22 = 16;
    if ( v20 <= 16 )
      v22 = v20;
    if ( sub_32AEF0(*v19, v22, v21) )
    {
LABEL_89:
      if ( ((*(_BYTE *)(a2 + 56) & 4) != 0) != ((*(_BYTE *)(a1 + 56) & 4) != 0) )
        return 0;
      v6 = *(_DWORD *)(a1 + 8);
      LODWORD(v7) = *(_DWORD *)(a2 + 8);
      if ( v6 <= 0x45 && (*((_BYTE *)&off_4DA9E0 + 16 * (int)v6 + 11) & 0x10) != 0 )
      {
        v8 = sub_2553C0(v6);
        if ( v8 != (unsigned int)sub_2553C0(v7) )
          return 0;
      }
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a2 + 24);
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a2 + 32);
      if ( v6 == (_DWORD)v7 )
        goto LABEL_11;
      v23 = (unsigned int)(v7 - 24);
      if ( (unsigned int)v23 > 7 )
      {
        v24 = v7;
        v25 = v6 & 0xFFFFFFFB;
        if ( (v6 & 0xFFFFFFFB) == 0x19 )
        {
          v26 = v7 & 0xFFFFFFFB;
          goto LABEL_61;
        }
      }
      else
      {
        v24 = dword_427000[v23];
        if ( v6 == v24 )
        {
          LODWORD(v7) = v6;
          v10 = *(_QWORD *)(a2 + 32);
          v12 = *(_QWORD *)(a2 + 24);
LABEL_11:
          if ( (unsigned int)(v7 - 1) > 0x3B && (_DWORD)v7 != 67 )
            goto LABEL_13;
          if ( *(_DWORD *)(v9 + 8) == 48 )
          {
            v66 = v12;
            v59 = v11;
            v52 = sub_253640(v9);
            v12 = v66;
            v11 = v59;
            v9 = v52;
          }
          if ( *(_DWORD *)(v10 + 8) == 48 )
          {
            v65 = v12;
            v58 = v11;
            v51 = sub_253640(v10);
            v12 = v65;
            v11 = v58;
            v10 = v51;
          }
          v64 = v12;
          v57 = v11;
          v38 = sub_259E70(v9, v10);
          v7 = *(unsigned int *)(a1 + 8);
          v39 = v57;
          v40 = v64;
          if ( v38 )
          {
            v41 = v7 - 1;
          }
          else
          {
            if ( (unsigned int)v7 > 0x2C )
              return 0;
            v42 = 0x142800F80000LL;
            if ( !_bittest64(&v42, v7) || !(unsigned __int8)sub_259E70(v9, v64) )
              return 0;
            LODWORD(v7) = *(_DWORD *)(a1 + 8);
            v43 = v10;
            v39 = v57;
            v10 = v64;
            v40 = v43;
            v41 = v7 - 1;
          }
          if ( v41 > 0x2C && (_DWORD)v7 != 58 )
            goto LABEL_13;
          if ( *(_DWORD *)(v39 + 8) == 48 )
          {
            v61 = v40;
            v54 = sub_253640(v39);
            v40 = v61;
            v39 = v54;
          }
          if ( *(_DWORD *)(v40 + 8) == 48 )
          {
            v60 = v39;
            v53 = sub_253640(v40);
            v39 = v60;
            v40 = v53;
          }
          if ( (unsigned __int8)sub_259E70(v39, v40) )
          {
            LODWORD(v7) = *(_DWORD *)(a1 + 8);
LABEL_13:
            switch ( (int)v7 )
            {
              case '0':
                return compare_tinfo(*(_QWORD *)(v9 + 48), *(_QWORD *)(v10 + 48), 0);
              case '9':
                v44 = *(_QWORD **)(a1 + 32);
                v45 = *(_QWORD **)(a2 + 32);
                v46 = v44[1];
                if ( (int)v46 != v45[1] )
                  return 0;
                if ( (int)v46 <= 0 )
                  return 1;
                v47 = 0;
                v48 = 8 * (9LL * (unsigned int)(v46 - 1) + 9);
                break;
              case ';':
              case '<':
                return *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32);
              case '=':
              case '>':
              case '@':
              case 'A':
                return 0;
              default:
                return 1;
            }
            while ( 1 )
            {
              v49 = v47 + *v44;
              if ( *(_DWORD *)(v49 + 8) == 48 )
                v49 = sub_253700(v47 + *v44);
              v50 = v47 + *v45;
              if ( *(_DWORD *)(v50 + 8) == 48 )
                v50 = sub_253700(v47 + *v45);
              if ( !(unsigned __int8)sub_259E70(v49, v50) )
                break;
              v47 += 72;
              if ( v47 == v48 )
                return 1;
            }
          }
          return 0;
        }
        v25 = v6 & 0xFFFFFFFB;
        if ( (v6 & 0xFFFFFFFB) == 0x19 )
        {
LABEL_29:
          v26 = v7 & 0xFFFFFFFB;
          if ( (v7 & 0xFFFFFFFB) == 0x19 )
          {
LABEL_30:
            if ( *(_DWORD *)(v11 + 8) != 61 )
            {
              if ( *(_DWORD *)(v9 + 8) != 61 )
                return 0;
              v6 = dword_427000[v6 - 24];
              v9 = *(_QWORD *)(a1 + 32);
              v11 = *(_QWORD *)(a1 + 24);
            }
            v71 = v24;
            v69 = *(_QWORD *)(a2 + 32);
            v67 = *(_QWORD **)(v11 + 24);
            v55 = v11;
            v62 = get_tinfo_size(0, *(_QWORD *)(v11 + 48), 0);
            v27 = (unsigned int)get_tinfo_property(*(_QWORD *)(v55 + 48), 3) == 1;
            v28 = 16;
            if ( v62 <= 16 )
              v28 = v62;
            v29 = sub_32AEF0(*v67, v28, v27);
            v30 = v55;
            v31 = v69;
            v32 = v71;
            if ( v6 != 29 || v29 )
            {
              if ( v6 != 25 )
                return 0;
              if ( v29 != 1 )
                return 0;
            }
            if ( *(_DWORD *)(v69 + 8) == 61 )
            {
              v32 = v7;
              v31 = v10;
              v10 = v69;
            }
            else if ( *(_DWORD *)(v10 + 8) != 61 )
            {
              return 0;
            }
            v68 = v29;
            v63 = v32;
            v33 = *(_QWORD **)(v10 + 24);
            v56 = v31;
            v70 = v30;
            v34 = get_tinfo_size(0, *(_QWORD *)(v10 + 48), 0);
            v35 = (unsigned int)get_tinfo_property(*(_QWORD *)(v10 + 48), 3) == 1;
            v36 = 16;
            if ( v34 <= 16 )
              v36 = v34;
            v37 = sub_32AEF0(*v33, v36, v35);
            if ( v63 != 29 || (v11 = v70, v37) )
            {
              if ( v37 != 1 || v63 != 25 || (v68 & 1) != 0 )
                return 0;
              v11 = v10;
              LODWORD(v7) = *(_DWORD *)(a1 + 8);
              v10 = v56;
              v12 = v11;
            }
            else
            {
              if ( !v68 )
                return 0;
              v10 = v56;
              LODWORD(v7) = *(_DWORD *)(a1 + 8);
              v12 = v70;
            }
            goto LABEL_11;
          }
LABEL_61:
          if ( v26 != 27 )
            return 0;
          goto LABEL_30;
        }
      }
      if ( v25 != 27 )
        return 0;
      goto LABEL_29;
    }
  }
  return 1;
}
