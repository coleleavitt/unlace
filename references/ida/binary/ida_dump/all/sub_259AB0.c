char __fastcall sub_259AB0(__int64 a1, __int64 a2)
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
  _QWORD *v43; // r13
  _QWORD *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  int v61; // [rsp+10h] [rbp-58h]
  int v62; // [rsp+10h] [rbp-58h]
  __int64 v63; // [rsp+10h] [rbp-58h]
  __int64 v64; // [rsp+10h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  _QWORD *v66; // [rsp+18h] [rbp-50h]
  __int64 v67; // [rsp+18h] [rbp-50h]
  __int64 v68; // [rsp+20h] [rbp-48h]
  __int64 v69; // [rsp+20h] [rbp-48h]
  unsigned int v70; // [rsp+2Ch] [rbp-3Ch]

  if ( sub_259850(a1, a2, 0) )
  {
    v3 = *(_DWORD *)(a1 + 8);
    for ( i = a1; v3 == 48; v3 = *(_DWORD *)(i + 8) )
      i = *(_QWORD *)(i + 24);
    if ( v3 != 61 )
      goto LABEL_89;
    v13 = *(_QWORD **)(i + 24);
    tinfo_size = get_tinfo_size();
    v15 = (unsigned int)get_tinfo_property() == 1;
    v16 = 16;
    if ( tinfo_size <= 16 )
      v16 = tinfo_size;
    if ( sub_32ABC0(*v13, v16, v15) )
      goto LABEL_89;
    v17 = *(_DWORD *)(a2 + 8);
    for ( j = a2; v17 == 48; v17 = *(_DWORD *)(j + 8) )
      j = *(_QWORD *)(j + 24);
    if ( v17 != 61 )
      goto LABEL_89;
    v19 = *(_QWORD **)(j + 24);
    v20 = get_tinfo_size();
    v21 = (unsigned int)get_tinfo_property() == 1;
    v22 = 16;
    if ( v20 <= 16 )
      v22 = v20;
    if ( sub_32ABC0(*v19, v22, v21) )
    {
LABEL_89:
      if ( ((*(_BYTE *)(a2 + 56) & 4) != 0) != ((*(_BYTE *)(a1 + 56) & 4) != 0) )
        return 0;
      v6 = *(_DWORD *)(a1 + 8);
      LODWORD(v7) = *(_DWORD *)(a2 + 8);
      if ( v6 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * (int)v6 + 11) & 0x10) != 0 )
      {
        v8 = sub_255000(v6);
        if ( v8 != (unsigned int)sub_255000(v7) )
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
        v24 = dword_42BF40[v23];
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
            v65 = v12;
            v58 = v11;
            v51 = sub_253280(v9);
            v12 = v65;
            v11 = v58;
            v9 = v51;
          }
          if ( *(_DWORD *)(v10 + 8) == 48 )
          {
            v64 = v12;
            v57 = v11;
            v50 = sub_253280(v10);
            v12 = v64;
            v11 = v57;
            v10 = v50;
          }
          v63 = v12;
          v56 = v11;
          v38 = sub_259AB0(v9, v10);
          v7 = *(unsigned int *)(a1 + 8);
          v39 = v56;
          v40 = v63;
          if ( v38 )
          {
            v41 = v7 - 1;
          }
          else
          {
            if ( (unsigned int)v7 > 0x2C )
              return 0;
            v42 = 0x142800F80000LL;
            if ( !_bittest64(&v42, v7) || !(unsigned __int8)sub_259AB0(v9, v63) )
              return 0;
            LODWORD(v7) = *(_DWORD *)(a1 + 8);
            v39 = v56;
            v40 = v10;
            v41 = v7 - 1;
          }
          if ( v41 > 0x2C && (_DWORD)v7 != 58 )
            goto LABEL_13;
          if ( *(_DWORD *)(v39 + 8) == 48 )
          {
            v60 = v40;
            v53 = sub_253280(v39);
            v40 = v60;
            v39 = v53;
          }
          if ( *(_DWORD *)(v40 + 8) == 48 )
          {
            v59 = v39;
            v52 = sub_253280(v40);
            v39 = v59;
            v40 = v52;
          }
          if ( (unsigned __int8)sub_259AB0(v39, v40) )
          {
            LODWORD(v7) = *(_DWORD *)(a1 + 8);
LABEL_13:
            switch ( (int)v7 )
            {
              case '0':
                return compare_tinfo();
              case '9':
                v43 = *(_QWORD **)(a1 + 32);
                v44 = *(_QWORD **)(a2 + 32);
                v45 = v43[1];
                if ( (int)v45 != v44[1] )
                  return 0;
                if ( (int)v45 <= 0 )
                  return 1;
                v46 = 0;
                v47 = 8 * (9LL * (unsigned int)(v45 - 1) + 9);
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
              v48 = v46 + *v43;
              if ( *(_DWORD *)(v48 + 8) == 48 )
                v48 = sub_253340(v46 + *v43);
              v49 = v46 + *v44;
              if ( *(_DWORD *)(v49 + 8) == 48 )
                v49 = sub_253340(v46 + *v44);
              if ( !(unsigned __int8)sub_259AB0(v48, v49) )
                break;
              v46 += 72;
              if ( v46 == v47 )
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
              v6 = dword_42BF40[v6 - 24];
              v9 = *(_QWORD *)(a1 + 32);
              v11 = *(_QWORD *)(a1 + 24);
            }
            v70 = v24;
            v68 = *(_QWORD *)(a2 + 32);
            v66 = *(_QWORD **)(v11 + 24);
            v54 = v11;
            v61 = get_tinfo_size();
            v27 = (unsigned int)get_tinfo_property() == 1;
            v28 = 16;
            if ( v61 <= 16 )
              v28 = v61;
            v29 = sub_32ABC0(*v66, v28, v27);
            v30 = v54;
            v31 = v68;
            v32 = v70;
            if ( v6 != 29 || v29 )
            {
              if ( v6 != 25 )
                return 0;
              if ( v29 != 1 )
                return 0;
            }
            if ( *(_DWORD *)(v68 + 8) == 61 )
            {
              v32 = v7;
              v31 = v10;
              v10 = v68;
            }
            else if ( *(_DWORD *)(v10 + 8) != 61 )
            {
              return 0;
            }
            v67 = v29;
            v62 = v32;
            v33 = *(_QWORD **)(v10 + 24);
            v55 = v31;
            v69 = v30;
            v34 = get_tinfo_size();
            v35 = (unsigned int)get_tinfo_property() == 1;
            v36 = 16;
            if ( v34 <= 16 )
              v36 = v34;
            v37 = sub_32ABC0(*v33, v36, v35);
            if ( v62 != 29 || (v11 = v69, v37) )
            {
              if ( v37 != 1 || v62 != 25 || (v67 & 1) != 0 )
                return 0;
              v11 = v10;
              LODWORD(v7) = *(_DWORD *)(a1 + 8);
              v10 = v55;
              v12 = v11;
            }
            else
            {
              if ( !v67 )
                return 0;
              v10 = v55;
              LODWORD(v7) = *(_DWORD *)(a1 + 8);
              v12 = v69;
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
