unsigned __int64 __fastcall sub_3173F0(unsigned __int8 *a1, unsigned __int64 a2, char a3, __m128 a4)
{
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // eax
  unsigned __int64 result; // rax
  int v11; // eax
  _BYTE *v12; // rax
  unsigned __int8 *v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rdi
  char *v21; // rax
  char v22; // dl
  __int64 *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  _DWORD *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // dx
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // rdx
  signed int v45; // esi
  char v46; // dl
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  bool v51; // al
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r8
  _QWORD *v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 ph; // rax
  __int64 v60; // r15
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // [rsp+0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+18h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  while ( 2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 1504LL);
    v8 = *a1;
    switch ( (char)v8 )
    {
      case 0:
        if ( (a3 & 2) == 0 && *((_DWORD *)a1 + 1) != -1 )
          goto LABEL_12;
        return v66 - __readfsqword(0x28u);
      case 2:
        v11 = *((_DWORD *)a1 + 1);
        if ( (unsigned int)(v11 - 1) > 7 )
          goto LABEL_162;
        if ( (a3 & 4) == 0 && (v11 & (v11 - 1)) != 0 )
          goto LABEL_21;
LABEL_91:
        v48 = *((_QWORD *)a1 + 1);
        if ( !v48 )
          sub_315AF0(a2, 0xC646u, *(double *)a4.m128_u64);
        if ( *(_QWORD *)v48 != -1 )
        {
          v57 = sub_32B3E0(*(_QWORD *)(a2 + 8), *(_QWORD *)v48);
          if ( !(unsigned __int8)is_mapped(v57) )
            sub_315AF0(a2, 0xC647u, *(double *)a4.m128_u64);
          v48 = *((_QWORD *)a1 + 1);
        }
        if ( *(int *)(v48 + 8) > 8 )
          sub_315AF0(a2, 0xC648u, *(double *)a4.m128_u64);
        v49 = *((int *)a1 + 1);
        if ( v49 <= 7 && (*(_QWORD *)(v48 + 16) & (-1LL << (8 * (unsigned __int8)v49))) != 0 )
          sub_315AF0(a2, 0xC649u, *(double *)a4.m128_u64);
        return v66 - __readfsqword(0x28u);
      case 3:
        v9 = *(_DWORD *)(v7 + 84);
        if ( *((_DWORD *)a1 + 1) != v9 )
          sub_315AF0(a2, 0xC643u, *(double *)a4.m128_u64);
        if ( (unsigned int)(v9 - 1) > 7 )
LABEL_162:
          sub_315AF0(a2, 0xC982u, *(double *)a4.m128_u64);
        if ( (a3 & 4) == 0 && (v9 & (v9 - 1)) != 0 )
LABEL_21:
          sub_315AF0(a2, 0xC983u, *(double *)a4.m128_u64);
LABEL_16:
        if ( !*((_QWORD *)a1 + 1) )
          sub_315AF0(a2, 0xC661u, *(double *)a4.m128_u64);
        return v66 - __readfsqword(0x28u);
      case 7:
      case 12:
        if ( *((_DWORD *)a1 + 1) != -1 )
LABEL_12:
          sub_315AF0(a2, 0xC642u, *(double *)a4.m128_u64);
        goto LABEL_9;
      case 11:
LABEL_22:
        v12 = *((_BYTE **)a1 + 1);
        if ( !v12 || !*v12 )
          sub_315AF0(a2, 0xC65Eu, *(double *)a4.m128_u64);
        if ( **(_DWORD **)(a2 + 32) != 56 )
          sub_315AF0(a2, 0xC660u, *(double *)a4.m128_u64);
        return v66 - __readfsqword(0x28u);
      default:
        if ( (a3 & 1) != 0 )
        {
          if ( (v8 & 0xF7) != 1 && (_BYTE)v8 != 15 && *((_DWORD *)a1 + 1) != -1 )
            sub_315AF0(a2, 0xC644u, *(double *)a4.m128_u64);
          goto LABEL_9;
        }
        if ( (a3 & 4) != 0 || (a1[1] & 2) != 0 )
          goto LABEL_9;
        v51 = sub_11DA80((__int64)a1, *((_DWORD *)a1 + 1));
        v52 = *((unsigned int *)a1 + 1);
        if ( v51 )
          goto LABEL_129;
        if ( *a1 == 8 )
        {
          if ( !(_DWORD)v52 || *(_DWORD *)(v7 + 92) == (_DWORD)v52 )
            goto LABEL_129;
        }
        else if ( *(_DWORD *)(v7 + 92) == (_DWORD)v52 )
        {
          v52 = v7;
          if ( sub_117FF0(v7, **(_DWORD **)(a2 + 32)) )
          {
LABEL_128:
            LODWORD(v52) = *((_DWORD *)a1 + 1);
            goto LABEL_129;
          }
        }
        v53 = *(_QWORD *)(a2 + 8);
        if ( v53 )
        {
          v54 = v53 + 1008;
          v55 = *(_QWORD **)(v53 + 1016);
          v56 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL);
          if ( v55 )
          {
            v52 = v54;
            do
            {
              if ( v55[4] >= v56 )
              {
                v52 = (__int64)v55;
                v55 = (_QWORD *)v55[2];
              }
              else
              {
                v55 = (_QWORD *)v55[3];
              }
            }
            while ( v55 );
            if ( v54 != v52 && v56 >= *(_QWORD *)(v52 + 32) )
              goto LABEL_128;
          }
        }
        ph = get_ph(v52);
        v60 = *((int *)a1 + 1);
        v61 = ph;
        if ( (unsigned __int8)getinf(66) )
          v62 = (unsigned __int8)getinf(66);
        else
          v62 = *(_QWORD *)(v61 + 120);
        LODWORD(v52) = *((_DWORD *)a1 + 1);
        if ( v60 != v62 && (int)v52 != *(_QWORD *)(v61 + 120) )
          sub_315AF0(a2, 0xC645u, *(double *)a4.m128_u64);
LABEL_129:
        if ( !sub_117F10(v52) )
        {
          if ( (a3 & 8) != 0 )
            sub_315AF0(a2, 0xC84Bu, *(double *)a4.m128_u64);
          if ( (a1[1] & 4) != 0 )
            sub_315AF0(a2, 0xCB60u, *(double *)a4.m128_u64);
        }
        v8 = *a1;
LABEL_9:
        switch ( v8 )
        {
          case 0LL:
            return v66 - __readfsqword(0x28u);
          case 1LL:
            v45 = *((_DWORD *)a1 + 2);
            if ( v45 < 0 )
              sub_315AF0(a2, 0xC64Cu, *(double *)a4.m128_u64);
            v46 = sub_118110(v7, v45);
            v47 = *((_DWORD *)a1 + 1);
            if ( !v46 )
              goto LABEL_106;
            if ( v47 != 1 )
            {
              if ( **(_DWORD **)(a2 + 32) != 62 )
                sub_315AF0(a2, 0xC64Du, *(double *)a4.m128_u64);
LABEL_106:
              if ( v47 <= 0 )
                sub_315AF0(a2, 0xC64Eu, *(double *)a4.m128_u64);
            }
            return result;
          case 2LL:
            goto LABEL_91;
          case 3LL:
            goto LABEL_16;
          case 4LL:
            v41 = *((_QWORD *)a1 + 1);
            if ( !v41 )
              sub_315AF0(a2, 0xC64Fu, *(double *)a4.m128_u64);
            if ( *((_DWORD *)a1 + 1) != *(_DWORD *)(v41 + 68) )
              sub_315AF0(a2, 0xC650u, *(double *)a4.m128_u64);
            v42 = *(_QWORD *)(a2 + 32);
            *(_QWORD *)(a2 + 32) = v41;
            sub_3189D0(v41, a2, 0);
            *(_QWORD *)(a2 + 32) = v42;
            return v66 - __readfsqword(0x28u);
          case 5LL:
            v43 = *(_QWORD *)(a2 + 8);
            v44 = *((_QWORD **)a1 + 1);
            if ( v43 && v43 != *v44 )
              sub_315AF0(a2, 0xC64Au, *(double *)a4.m128_u64);
            v50 = v44[1];
            if ( v50 < 0 )
              sub_315AF0(a2, 0xC64Bu, *(double *)a4.m128_u64);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 1496) + 24LL) + 24LL) != 8 && v50 != (int)v50 )
              sub_315AF0(a2, 0xCDC7u, *(double *)a4.m128_u64);
            return v66 - __readfsqword(0x28u);
          case 6LL:
            v40 = *((_QWORD *)a1 + 1);
            if ( v40 != -1 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL) < v40 )
              sub_315AF0(a2, 0xCDC1u, *(double *)a4.m128_u64);
            return v66 - __readfsqword(0x28u);
          case 7LL:
            v32 = *(_QWORD *)(a2 + 8);
            if ( (*(_BYTE *)v32 & 4) == 0 )
            {
              v33 = *((_DWORD *)a1 + 2);
              if ( v33 < 0 || v33 >= *(_DWORD *)(v32 + 64) )
                sub_315AF0(a2, 0xC652u, *(double *)a4.m128_u64);
            }
            if ( (a3 & 0x10) == 0 )
              sub_315AF0(a2, 0xC9C2u, *(double *)a4.m128_u64);
            return v66 - __readfsqword(0x28u);
          case 8LL:
            v30 = *((_QWORD *)a1 + 1);
            if ( !v30 )
              sub_315AF0(a2, 0xC653u, *(double *)a4.m128_u64);
            sub_318360(v30, a2, *((unsigned int *)a1 + 1));
            v31 = *(_DWORD **)(a2 + 32);
            if ( a1 != (unsigned __int8 *)(v31 + 16) )
              sub_315AF0(a2, 0xC654u, *(double *)a4.m128_u64);
            if ( (unsigned int)(*v31 - 56) > 1 )
              sub_315AF0(a2, 0xC655u, *(double *)a4.m128_u64);
            return v66 - __readfsqword(0x28u);
          case 9LL:
            v23 = *((__int64 **)a1 + 1);
            v24 = *v23;
            if ( !*v23 )
              sub_315AF0(a2, 0xC656u, *(double *)a4.m128_u64);
            v25 = *(_QWORD *)(a2 + 8);
            if ( v25 )
            {
              if ( v24 != v25 )
                sub_315AF0(a2, 0xC657u, *(double *)a4.m128_u64);
              if ( (unsigned __int64)*((int *)v23 + 4) >= *(_QWORD *)(v24 + 440) )
                sub_315AF0(a2, 0xC658u, *(double *)a4.m128_u64);
              if ( !(unsigned __int8)sub_1E96A0((unsigned __int8 *)v24) )
              {
                v26 = *((_QWORD *)a1 + 1);
                v27 = *(_QWORD *)(a2 + 8);
                v28 = *(_QWORD *)(v26 + 8);
                if ( (*(_BYTE *)v27 & 4) == 0 )
                {
                  v29 = *(_QWORD *)(v24 + 432) + 104LL * *(int *)(v26 + 16);
                  if ( (*(_DWORD *)v29 != 1 || *(_QWORD *)(v29 + 8) < *(_QWORD *)(v27 + 144))
                    && (*(_WORD *)(v29 + 24) & 0x2040) == 0 )
                  {
                    v63 = *(int *)(v29 + 88);
                    if ( *((_DWORD *)a1 + 1) == -1 )
                    {
                      if ( v28 > v63 )
                      {
                        if ( (a3 & 1) == 0
                          || *(_DWORD *)(v7 + 84) >= *(_DWORD *)(v7 + 80)
                          || (unsigned int)lexcompare_tinfo(
                                             *(_QWORD *)(v29 + 80),
                                             *(_QWORD *)(*(_QWORD *)(v7 + 96) + 248LL),
                                             0) )
                        {
                          sub_315AF0(a2, 0xC659u, *(double *)a4.m128_u64);
                        }
                        v28 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
                      }
                    }
                    else if ( v28 >= v63 )
                    {
                      sub_315AF0(a2, 0xC65Au, *(double *)a4.m128_u64);
                    }
                  }
                }
                if ( v28 < 0 )
                  sub_315AF0(a2, 0xC65Bu, *(double *)a4.m128_u64);
              }
            }
            return v66 - __readfsqword(0x28u);
          case 10LL:
            v21 = *((char **)a1 + 1);
            if ( !v21 )
              sub_315AF0(a2, 0xC77Bu, *(double *)a4.m128_u64);
            v22 = *v21;
            if ( (unsigned __int8)(*v21 - 5) > 1u && v22 != 9 )
            {
              if ( v22 == 15 )
              {
                v65 = 0;
                v58 = *((_QWORD *)v21 + 1);
                v64 = -1;
                if ( !(unsigned __int8)sub_1BE390(v58, (__int64)&v64, *((_DWORD *)v21 + 1))
                  || (_BYTE)v65 != 5 && ((_BYTE)v65 != 1 || *(_DWORD *)(v7 + 68) > (int)v64) )
                {
                  sub_315AF0(a2, 0xCE7Fu, *(double *)a4.m128_u64);
                }
              }
              else if ( v22 != 1
                     || *(_BYTE *)(*(_QWORD *)(a2 + 32) + 32LL) != 11 && *((_DWORD *)v21 + 2) < *(_DWORD *)(v7 + 68) )
              {
                sub_315AF0(a2, 0xC65Cu, *(double *)a4.m128_u64);
              }
            }
            if ( *((_DWORD *)a1 + 1) > *(_DWORD *)(v7 + 84) )
              sub_315AF0(a2, 0xC65Du, *(double *)a4.m128_u64);
            a1 = *((unsigned __int8 **)a1 + 1);
            a3 = 1;
            continue;
          case 11LL:
            goto LABEL_22;
          case 12LL:
            if ( (a3 & 0x20) == 0 )
              sub_315AF0(a2, 0xC9C3u, *(double *)a4.m128_u64);
            v20 = *((_QWORD **)a1 + 1);
            if ( !v20 )
              sub_315AF0(a2, 0xC662u, *(double *)a4.m128_u64);
            return sub_316C80(v20, a2, a4);
          case 13LL:
            v19 = *((_QWORD *)a1 + 1);
            if ( !v19 )
              sub_315AF0(a2, 0xC663u, *(double *)a4.m128_u64);
            if ( *(_DWORD *)(v19 + 16) > 0x10u )
              sub_315AF0(a2, 0xC664u, *(double *)a4.m128_u64);
            return v66 - __readfsqword(0x28u);
          case 14LL:
            v13 = *((unsigned __int8 **)a1 + 1);
            if ( !v13 )
              sub_315AF0(a2, 0xC665u, *(double *)a4.m128_u64);
            v14 = *((_DWORD *)v13 + 1);
            if ( v14 != *((_DWORD *)v13 + 5) )
              sub_315AF0(a2, 0xC666u, *(double *)a4.m128_u64);
            if ( *((_DWORD *)a1 + 1) != 2 * v14 )
              sub_315AF0(a2, 0xC667u, *(double *)a4.m128_u64);
            v15 = *v13;
            if ( (unsigned __int8)v15 > 0xFu || (v16 = 58998, !_bittest64(&v16, v15)) )
              sub_315AF0(a2, 0xC668u, *(double *)a4.m128_u64);
            v17 = v13[16];
            if ( (unsigned __int8)v17 > 0xFu || !_bittest64(&v16, v17) )
              sub_315AF0(a2, 0xC669u, *(double *)a4.m128_u64);
            sub_3173F0(v13, a2, 0);
            sub_3173F0(*((_QWORD *)a1 + 1) + 16LL, a2, 0);
            v18 = *(_QWORD *)(a2 + 16);
            if ( v18
              && (**(_DWORD **)(a2 + 8) & 0x80000) == 0
              && !(unsigned __int8)sub_152680(v18, *((_QWORD *)a1 + 1), *((_QWORD *)a1 + 1) + 16LL) )
            {
              sub_315AF0(a2, 0xCB4Du, *(double *)a4.m128_u64);
            }
            return v66 - __readfsqword(0x28u);
          case 15LL:
            v34 = *((_QWORD *)a1 + 1);
            if ( *(_DWORD *)v34 != 2 )
              sub_315AF0(a2, 0xC7BFu, *(double *)a4.m128_u64);
            v35 = *(__int64 **)(v34 + 8);
            v36 = *v35;
            v37 = *v35 + 24 * v35[1];
            if ( v37 != *v35 )
            {
              v38 = 0;
              do
              {
                v39 = *(_WORD *)(v36 + 16);
                if ( v39 < v38 )
                  sub_315AF0(a2, 0xC7C0u, *(double *)a4.m128_u64);
                v38 = *(_WORD *)(v36 + 18) + v39;
                if ( __CFADD__(*(_WORD *)(v36 + 18), v39) )
                  sub_315AF0(a2, 0xC7C1u, *(double *)a4.m128_u64);
                if ( (*(_DWORD *)v36 & 0xFFFFFFFD) != 1 )
                  sub_315AF0(a2, 0xC7C2u, *(double *)a4.m128_u64);
                v36 += 24;
              }
              while ( v36 != v37 );
            }
            return v66 - __readfsqword(0x28u);
          default:
            sub_315AF0(a2, 0xC66Au, *(double *)a4.m128_u64);
        }
        return v66 - __readfsqword(0x28u);
    }
  }
}
