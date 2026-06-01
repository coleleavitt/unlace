__int64 __fastcall sub_F5D8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r15
  unsigned __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r8d
  unsigned int i; // eax
  _QWORD *v44; // rsi
  unsigned int v45; // eax
  __int64 v46; // r13
  __int64 v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r8
  char v52; // dl
  unsigned __int64 v53; // r9
  char v54; // al
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // r8
  char v58; // r10
  __int64 v59; // rax
  __int64 v60; // r9
  unsigned __int64 v61; // rdx
  char v62; // al
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 *v69; // rbp
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // [rsp+Ch] [rbp-8Ch]
  __int64 v74; // [rsp+10h] [rbp-88h]
  unsigned __int64 v75; // [rsp+18h] [rbp-80h]
  __int64 v76; // [rsp+20h] [rbp-78h]
  _QWORD *v77; // [rsp+28h] [rbp-70h]
  unsigned __int64 v80; // [rsp+40h] [rbp-58h]
  __int64 v81; // [rsp+50h] [rbp-48h]
  __int64 v82; // [rsp+58h] [rbp-40h]

  v76 = a2;
  v77 = sub_EBA840(*(_QWORD *)(a1 + 24), (char *)a2, a3, a4, a5, a6);
  v7 = *(_QWORD *)(v77[9] + 48LL);
  v80 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v7 & 4) == 0 )
  {
    a2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    sub_F5D8E0(a1, v7 & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  }
  v8 = sub_B6AC30(v76 + 64);
  v13 = (_QWORD *)v8;
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 35 > 3 )
    {
      while ( 1 )
      {
        v14 = v13[1] & 0xFFFFFFFFFFFFFFF8LL;
        v13 = (_QWORD *)v14;
        if ( !v14 )
          break;
        if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 32LL))(v13);
      if ( ((*(_QWORD *)(v29 + 80) & 0x40000LL) != 0
         || ((*(_QWORD *)(v29 + 80) >> 16) & 8) != 0
         || (unsigned int)sub_B747A0(v29))
        && !(unsigned __int8)sub_B59AB0((__int64)v13) )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 32LL))(v13);
        v32 = *(_QWORD *)(a1 + 24);
        a2 = 32;
        v33 = v31;
        v74 = ((*(_BYTE *)(*(_QWORD *)(v32 + 2320) + 172LL) & 0x20) == 0) + 2LL;
        v73 = *(_DWORD *)(a1 + 40);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 136LL) != 1 )
          a2 = *(unsigned __int8 *)(*(_QWORD *)(v32 + 17448) + 8LL);
        v34 = sub_A742B0(v32, a2);
        v35 = *(__int64 **)(a1 + 616);
        v75 = v34;
        v36 = *(unsigned int *)(a1 + 624);
        if ( v35 != &v35[2 * v36] )
        {
          v10 = (__int64)&v35[2 * *(unsigned int *)(a1 + 624)];
          do
          {
            while ( 1 )
            {
              v9 = *v35;
              if ( (*(_BYTE *)(*v35 + 28) & 0x7F) != 0x24 )
                break;
              if ( (*(_BYTE *)(v33 + 28) & 0x7F) == 0x24 )
                goto LABEL_21;
              v35 += 2;
              if ( (__int64 *)v10 == v35 )
                goto LABEL_33;
            }
            if ( *(_QWORD *)(v9 + 40) == *(_QWORD *)(v33 + 40) )
            {
              v46 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              v47 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              if ( v46 == v47 )
                goto LABEL_21;
              v48 = *(_QWORD *)(v47 + 16);
              if ( (v48 & 0x1000000) != 0 )
              {
                v49 = *(unsigned __int16 *)(v47 + 22);
                v50 = (v48 & 0x40000000) != 0;
                v51 = 8 * v49 + 48;
                v52 = *(_BYTE *)(v47 + 19);
                if ( (v52 & 0x40) != 0 )
                  v50 += (*(_BYTE *)(((v47 + v51 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                v53 = ((v47 + v51 + ((SBYTE3(v48) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v50;
                v54 = ((unsigned __int8)v52 >> 1) & 0xF;
                if ( v54 != 2 )
                  __asm { jmp     rdx }
                v11 = ((SBYTE3(v48) >> 5) & 4) + v51;
                v12 = v53 + 8LL * (*(_WORD *)((v47 + v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
                v55 = v12;
                if ( (v48 & 0x20000000) != 0 )
                  v55 = v12 + v49;
                a2 = *(_QWORD *)((v55 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              }
              else if ( *(_BYTE *)(v47 + 16) == 26
                     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
                     && (v81 = v10, v71 = sub_F3F310(v47), v10 = v81, v71) )
              {
                a2 = *(_BYTE *)(v47 + 18) >> 5;
              }
              else
              {
                a2 = 0;
              }
              v56 = *(_QWORD *)(v46 + 16);
              if ( (v56 & 0x1000000) != 0 )
              {
                v57 = *(unsigned __int16 *)(v46 + 22);
                v58 = *(_BYTE *)(v46 + 19);
                v59 = (v56 & 0x40000000) != 0;
                v60 = 8 * v57 + 48;
                if ( (v58 & 0x40) != 0 )
                  v59 += (*(_BYTE *)(((v46 + v60 + ((v58 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                v61 = ((v46 + v60 + ((SBYTE3(v56) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v59;
                v62 = ((unsigned __int8)v58 >> 1) & 0xF;
                if ( v62 == 2 )
                {
                  v61 += 8LL * (*(_WORD *)((v46 + ((SBYTE3(v56) >> 5) & 4) + v60 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_60:
                  v63 = v61;
                  v12 = 0;
                }
                else
                {
                  switch ( v62 )
                  {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                      switch ( v62 )
                      {
                        case 6:
                        case 7:
                        case 8:
                          v61 += 8LL;
                          goto LABEL_58;
                        case 9:
                          goto LABEL_73;
                        case 10:
                          goto LABEL_72;
                        default:
LABEL_58:
                          switch ( v62 )
                          {
                            case 0:
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 11:
                              goto LABEL_60;
                            case 9:
                              goto LABEL_73;
                            case 10:
                              goto LABEL_72;
                            default:
                              goto LABEL_90;
                          }
                      }
                    case 9:
LABEL_73:
                      v63 = v61 + 8;
                      v12 = 8;
                      break;
                    case 10:
LABEL_72:
                      v63 = v61 + 16;
                      v12 = 16;
                      break;
                    default:
LABEL_90:
                      BUG();
                  }
                }
                v11 = v12 + v57;
                v64 = v11 + v61;
                if ( (v56 & 0x20000000) != 0 )
                  v63 = v64;
                v65 = *(_QWORD *)((v63 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              }
              else if ( *(_BYTE *)(v46 + 16) == 26
                     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
                     && (v82 = v10, v72 = sub_F3F310(v46), v10 = v82, v72) )
              {
                v65 = *(_BYTE *)(v46 + 18) >> 5;
              }
              else
              {
                v65 = 0;
              }
              if ( v65 == a2 )
              {
                v66 = *(unsigned __int16 *)(v47 + 22);
                a2 = *(unsigned __int16 *)(v46 + 22);
                v67 = 8 * v66;
                if ( v66 == a2 )
                {
                  v68 = (_QWORD *)(v46 + 48);
                  v9 = v46 + 48 + v67;
                  if ( v46 + 48 == v9 )
                    goto LABEL_21;
                  if ( *(_QWORD *)(v46 + 48) == *(_QWORD *)(v47 + 48) )
                  {
                    v69 = (__int64 *)(v47 + 48);
                    do
                    {
                      ++v68;
                      ++v69;
                      if ( (_QWORD *)v9 == v68 )
                        goto LABEL_21;
                      a2 = *v69;
                    }
                    while ( *v68 == *v69 );
                  }
                }
              }
            }
            v35 += 2;
          }
          while ( (__int64 *)v10 != v35 );
LABEL_33:
          v36 = *(unsigned int *)(a1 + 624);
        }
        if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 628) )
        {
          sub_22134E0(a1 + 616, a1 + 632, v36 + 1, 16);
          v36 = *(unsigned int *)(a1 + 624);
        }
        v37 = (__int64 *)(*(_QWORD *)(a1 + 616) + 16 * v36);
        a2 = 0;
        *v37 = v33;
        v37[1] = v75 * -(v74 + v73);
        v38 = *(_QWORD *)(a1 + 912);
        ++*(_DWORD *)(a1 + 624);
        if ( v38 )
        {
          v39 = *(_DWORD *)(v38 + 56);
          v40 = *(_QWORD *)(v38 + 40);
          if ( v39 )
          {
            v41 = v39 - 1;
            v42 = 1;
            for ( i = v41
                    & (((0xBF58476D1CE4E5B9LL
                       * ((unsigned int)(37 * a3)
                        | ((unsigned __int64)(((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4)) << 32))) >> 31)
                     ^ (756364221 * a3)); ; i = v41 & v45 )
            {
              v44 = (_QWORD *)(v40 + 40LL * i);
              if ( v33 == *v44 && a3 == v44[1] )
                break;
              if ( *v44 == -4096 && v44[1] == 0x7FFFFFFFFFFFFFFFLL )
                goto LABEL_89;
              v45 = v42 + i;
              ++v42;
            }
            v70 = v44[4];
          }
          else
          {
LABEL_89:
            v70 = 0;
          }
          a2 = 8 * (v70 - a4);
        }
        sub_F59E60(a1 + 32, a2);
      }
LABEL_21:
      while ( 1 )
      {
        v30 = v13[1] & 0xFFFFFFFFFFFFFFF8LL;
        v13 = (_QWORD *)v30;
        if ( !v30 )
          break;
        if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_16;
      }
    }
  }
  result = sub_A56850(v76, a2, v9, v10, v11, v12);
  v19 = v16;
  if ( result != v16 )
  {
    v20 = result;
    do
    {
      if ( (*(_BYTE *)(v20 + 12) & 1) == 0 )
      {
        v21 = sub_F55F20(*(__int64 **)(v20 + 16), a2, v16, v17, v18);
        result = (__int64)sub_F3F530(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), a2, v22, v23, v24, v25);
        v27 = result;
        if ( v80 != result )
        {
          v28 = sub_F5D7C0(v77 + 9, result, v16, v17, v18, v26);
          a2 = v27;
          result = sub_F5D8E0(a1, v27, v28 + a3, a4);
        }
      }
      v20 += 24;
    }
    while ( v19 != v20 );
  }
  return result;
}

