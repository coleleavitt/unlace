/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8067D80
// Address: 0x08067D80

//----- (08067D80) --------------------------------------------------------
int __cdecl sub_8067D80(int a1, int a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int result; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  _DWORD *v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int *v22; // eax
  _DWORD *v23; // edx
  _DWORD *v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // ebx
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
  int v34; // eax
  int v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // edx
  _DWORD *v38; // ecx
  _DWORD *v39; // eax
  _DWORD *v40; // ebx
  int v41; // [esp-Ch] [ebp-E8h]
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  _DWORD *v44; // [esp+4h] [ebp-D8h]
  __int16 v45; // [esp+8h] [ebp-D4h]
  int v46; // [esp+8h] [ebp-D4h]
  _DWORD *v47; // [esp+8h] [ebp-D4h]
  char v48; // [esp+Ch] [ebp-D0h]
  int v49; // [esp+Ch] [ebp-D0h]
  int v50; // [esp+14h] [ebp-C8h]
  unsigned int v51; // [esp+18h] [ebp-C4h]
  char v52; // [esp+2Fh] [ebp-ADh] BYREF
  int v53; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+34h] [ebp-A8h]
  int v55; // [esp+38h] [ebp-A4h]
  char v56[12]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+48h] [ebp-94h]
  unsigned int v58; // [esp+BCh] [ebp-20h]

  v58 = __readgsdword(0x14u);
  v55 = a3;
  v53 = 0;
  v54 = 0;
  v52 = 0;
  v48 = sub_8060740((_DWORD *)a1, &v53, &v52);
  if ( !v48 )
    goto LABEL_12;
  v3 = v53;
  v45 = v54;
  v44 = (_DWORD *)(a1 + 660);
  v4 = (_DWORD *)(a1 + 660);
  v5 = *(_DWORD **)(a1 + 664);
  if ( !v5 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      v6 = v5[2];
      v7 = v5[3];
      if ( v53 > v5[4] )
        break;
      v4 = v5;
      v5 = (_DWORD *)v5[2];
      if ( !v6 )
        goto LABEL_7;
    }
    v5 = (_DWORD *)v5[3];
  }
  while ( v7 );
LABEL_7:
  if ( v4 == v44 || v53 < v4[4] )
  {
LABEL_9:
    sub_80A03F0(a1, (char *)&qword_811CFF4 - 268204, v53);
    v8 = HIBYTE(v45);
    if ( (_BYTE)v45 != 127 )
      v8 = 0;
    ptrace(PTRACE_CONT, v3, 0, v8);
    goto LABEL_12;
  }
  if ( v4[10] == 1 && !*(_BYTE *)(a1 + 733) && (v54 & 0x7F) != 0 && (char)((v54 & 0x7F) + 1) <= 1 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v58 == __readgsdword(0x14u) )
        sub_80CFF40(30057, v41, v42, v43);
      sub_80D7AB0();
    }
    JUMPOUT(0x804CAC4);
  }
  *(_DWORD *)(a2 + 4) = 0;
  v4[10] = 1;
  sub_8061880(a1, 0, 1);
  *(_BYTE *)(a1 + 768) = 0;
  v10 = *(_DWORD **)(a1 + 664);
  if ( !v52 )
  {
    if ( !v10 )
      goto LABEL_25;
    v11 = (_DWORD *)(a1 + 660);
    do
    {
      while ( 1 )
      {
        v12 = v10[2];
        v13 = v10[3];
        if ( v3 > v10[4] )
          break;
        v11 = v10;
        v10 = (_DWORD *)v10[2];
        if ( !v12 )
          goto LABEL_23;
      }
      v10 = (_DWORD *)v10[3];
    }
    while ( v13 );
LABEL_23:
    if ( v44 == v11 || v3 < v11[4] )
    {
LABEL_25:
      sub_80A03F0(a1, (char *)&qword_811CFF4 - 268160, v3);
      v10 = *(_DWORD **)(a1 + 664);
      goto LABEL_26;
    }
    *(_QWORD *)a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 724)), _mm_cvtsi32_si128(v3)).m128i_u64[0];
    if ( *(_BYTE *)(a1 + 733) )
    {
      *(_DWORD *)(a2 + 8) = -1;
      *(_BYTE *)(a2 + 12) = 0;
      if ( (unsigned __int8)v45 == 127 )
        goto LABEL_55;
      if ( !__OFSUB__((v45 & 0x7F) + 1, 1) && (v45 & 0x7F) != 0 )
      {
        v18 = -1;
        goto LABEL_39;
      }
    }
    else
    {
      if ( !__OFSUB__((v45 & 0x7F) + 1, 1) && (v45 & 0x7F) != 0 )
      {
        ptrace(PTRACE_GETSIGINFO, v3, 0, v56);
        v18 = v57;
        *(_BYTE *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = v18;
        if ( (unsigned __int8)v45 != 127 )
        {
LABEL_39:
          v49 = v18;
          v19 = v45 & 0x7F;
          v20 = strsignal(v19);
          sub_80A03F0(a1, (char *)&qword_811CFF4 - 268012, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), v20, v19, v49);
          goto LABEL_40;
        }
        goto LABEL_55;
      }
      v21 = ptrace(PTRACE_PEEKUSER, v3, 48, 0);
      *(_BYTE *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = v21;
      if ( (unsigned __int8)v45 == 127 )
      {
LABEL_55:
        v46 = HIBYTE(v45);
        sub_80C6150((_DWORD *)a2, 7);
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
          goto LABEL_150;
        *(_BYTE *)(a2 + 24) = 1;
        *(_DWORD *)(a2 + 28) = -1;
        *(_DWORD *)(a2 + 20) = v46;
        if ( v46 == 19 && *((_BYTE *)v11 + 44) )
        {
          *((_BYTE *)v11 + 44) = 0;
          goto LABEL_74;
        }
        v50 = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 28))(a1, v46);
        if ( v50 )
        {
          v22 = &dword_80DDFD8;
          if ( *(_DWORD *)(v50 + 12) )
            v22 = *(int **)(v50 + 8);
          sub_805ED10((_DWORD *)(a2 + 32), "got %s signal (%s)", v22);
          v48 = (*(int (__cdecl **)(int, int, int))((char *)&off_811D0E0 + *(_DWORD *)a1 - 135385076))(a1, a2, v50);
          if ( !v48 )
          {
            v25 = 0;
            if ( (*(_BYTE *)(v50 + 4) & 2) == 0 )
              v25 = v46;
            v46 = v25;
          }
        }
        else
        {
          sub_805ED10((_DWORD *)(a2 + 32), "got unknown signal #%d", v46);
        }
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
          goto LABEL_150;
        if ( *(_DWORD *)(a2 + 20) != 5 )
          goto LABEL_63;
        v26 = *(_DWORD *)(a2 + 8);
        v27 = v26 - 1;
        v51 = v26 - 1;
        if ( !v26 )
          goto LABEL_63;
        v28 = *(_DWORD *)(a1 + 548);
        if ( v28 == v27 && v28 )
        {
          if ( (unsigned __int8)sub_8062CE0(a1, v3) )
          {
            if ( !sub_8067BE0((_DWORD *)a1) )
              goto LABEL_74;
            goto LABEL_105;
          }
        }
        else
        {
          v29 = *(_DWORD *)(a1 + 532);
          if ( v29 != v51 || !v29 )
          {
            v30 = *(_DWORD *)(a1 + 540);
            if ( v30 != v51 || !v30 )
            {
              if ( *(_DWORD *)(a1 + 776) <= 1u )
              {
                sub_8067BE0((_DWORD *)a1);
                v31 = *(_DWORD **)(a1 + 664);
                if ( v31 )
                {
                  v38 = (_DWORD *)(a1 + 660);
                  do
                  {
                    if ( v3 <= v31[4] )
                    {
                      v38 = v31;
                      v31 = (_DWORD *)v31[2];
                    }
                    else
                    {
                      v31 = (_DWORD *)v31[3];
                    }
                  }
                  while ( v31 );
                  if ( v44 != v38 && v3 >= v38[4] )
                    v31 = v38 + 5;
                }
              }
              else
              {
                v31 = v11 + 5;
              }
              if ( !(unsigned __int8)sub_805A170(a1, (_DWORD *)a2) )
              {
                v32 = *(_DWORD **)(a1 + 272);
                if ( !v32 )
                  goto LABEL_163;
                v47 = (_DWORD *)(a1 + 268);
                do
                {
                  if ( v32[4] >= v51 )
                  {
                    v47 = v32;
                    v32 = (_DWORD *)v32[2];
                  }
                  else
                  {
                    v32 = (_DWORD *)v32[3];
                  }
                }
                while ( v32 );
                if ( (_DWORD *)(a1 + 268) == v47 || v51 < v47[4] )
                  goto LABEL_163;
                v36 = *(_DWORD **)(a1 + 224);
                v37 = &v36[*(_DWORD *)(a1 + 228)];
                if ( v36 == v37 )
                  goto LABEL_133;
                while ( v51 != *v36 )
                {
                  if ( v37 == ++v36 )
                    goto LABEL_133;
                }
                if ( v36 == v37 )
                {
LABEL_133:
                  v39 = *(_DWORD **)(a1 + 744);
                  if ( v39 )
                  {
                    v40 = (_DWORD *)(a1 + 740);
                    do
                    {
                      if ( v39[4] >= v51 )
                      {
                        v40 = v39;
                        v39 = (_DWORD *)v39[2];
                      }
                      else
                      {
                        v39 = (_DWORD *)v39[3];
                      }
                    }
                    while ( v39 );
                    if ( (_DWORD *)(a1 + 740) != v40 && v51 >= v40[4] )
                      goto LABEL_74;
                  }
                  sub_80C6150((_DWORD *)a2, 5);
                  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 5 )
                  {
                    if ( v58 == __readgsdword(0x14u) )
                      sub_8054DD0();
                    sub_80D7AB0();
                  }
                  *(_DWORD *)(a2 + 20) = -1;
                  *(_DWORD *)(a2 + 24) = -1;
                  *(_DWORD *)(a2 + 8) = v51;
                }
                else
                {
LABEL_163:
                  if ( v31 && *((_BYTE *)v31 + 16) )
                  {
                    sub_80C6150((_DWORD *)a2, 6);
                  }
                  else if ( !v50 || (*(_BYTE *)(v50 + 4) & 2) == 0 )
                  {
                    if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7 )
                    {
                      v46 = *(_DWORD *)(a2 + 20);
                      goto LABEL_63;
                    }
LABEL_150:
                    if ( v58 == __readgsdword(0x14u) )
                      sub_8054E00();
                    sub_80D7AB0();
                  }
                }
              }
LABEL_106:
              v46 = 0;
LABEL_63:
              if ( !*(_DWORD *)(a1 + 664) )
                goto LABEL_34;
              v23 = *(_DWORD **)(a1 + 664);
              v24 = (_DWORD *)(a1 + 660);
              do
              {
                if ( v3 <= v23[4] )
                {
                  v24 = v23;
                  v23 = (_DWORD *)v23[2];
                }
                else
                {
                  v23 = (_DWORD *)v23[3];
                }
              }
              while ( v23 );
              v33 = v24;
              v10 = *(_DWORD **)(a1 + 664);
              if ( v33 == v44 || v3 < v33[4] )
              {
                v14 = *(_DWORD *)(a2 + 4);
LABEL_27:
                v15 = (_DWORD *)(a1 + 660);
                do
                {
                  while ( 1 )
                  {
                    v16 = v10[2];
                    v17 = v10[3];
                    if ( v14 > v10[4] )
                      break;
                    v15 = v10;
                    v10 = (_DWORD *)v10[2];
                    if ( !v16 )
                      goto LABEL_31;
                  }
                  v10 = (_DWORD *)v10[3];
                }
                while ( v17 );
LABEL_31:
                if ( v44 != v15 && v14 >= v15[4] )
                  *((_BYTE *)v15 + 36) = 0;
                goto LABEL_34;
              }
              v33[8] = v46;
              if ( !*(_BYTE *)(a1 + 769) && (unsigned __int8)sub_80A1AD0(a1, a2, 0) )
              {
LABEL_12:
                result = 0;
                goto LABEL_13;
              }
              if ( v48 || (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
              {
LABEL_53:
                v10 = *(_DWORD **)(a1 + 664);
                goto LABEL_26;
              }
              sub_80A1D60(a1, (_DWORD *)a2, v50);
LABEL_74:
              if ( *(_BYTE *)(a1 + 769) || *(_BYTE *)(a1 + 770) )
              {
                sub_80C6150((_DWORD *)a2, 13);
                goto LABEL_35;
              }
              sub_8063DA0(a1, 0);
              goto LABEL_12;
            }
          }
          v34 = *(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 84);
          *(_DWORD *)(a1 + 728) = v3;
          v35 = -1171354717 * ((v34 >> 2) + ((*(_DWORD *)(a1 + 72) - *(_DWORD *)(a1 + 64)) >> 2))
              + 11 * ((*(_DWORD *)(a1 + 92) == 0) + ((*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 76)) >> 2) - 1);
          if ( *(_DWORD *)(a1 + 528) )
            sub_8064400(a1);
          if ( (unsigned __int8)sub_8062CE0(a1, v3) )
          {
            if ( v35 == 11 * ((*(_DWORD *)(a1 + 92) == 0) + ((*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 76)) >> 2) - 1)
                      - 1171354717
                      * (((*(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 84)) >> 2)
                       + ((*(_DWORD *)(a1 + 72) - *(_DWORD *)(a1 + 64)) >> 2)) )
              goto LABEL_74;
LABEL_105:
            sub_80C6150((_DWORD *)a2, 0);
            goto LABEL_106;
          }
        }
        sub_8058290();
        goto LABEL_35;
      }
    }
    v19 = HIBYTE(v45);
LABEL_40:
    if ( *(_DWORD *)(a1 + 676) > 1u && v11[5] != *(_DWORD *)(a1 + 724) )
    {
      sub_80C6090((_DWORD *)a2);
      sub_8061680(a1, *(_DWORD *)(a2 + 4), 3);
      v10 = *(_DWORD **)(a1 + 664);
      goto LABEL_26;
    }
    sub_80C6150((_DWORD *)a2, 2);
    if ( (((*(_DWORD *)(a2 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( v58 == __readgsdword(0x14u) )
        sub_8054D70();
      sub_80D7AB0();
    }
    *(_DWORD *)(a2 + 20) = v19;
    *(_BYTE *)(a1 + 733) = 1;
    goto LABEL_53;
  }
LABEL_26:
  v14 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    goto LABEL_27;
LABEL_34:
  sub_80C62B0(a1 + 96, a2);
LABEL_35:
  result = 1;
LABEL_13:
  if ( v58 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80680F4: control flows out of bounds to 804CAC4
// 806811A: variable 'v41' is possibly undefined
// 806811A: variable 'v42' is possibly undefined
// 806811A: variable 'v43' is possibly undefined
// 804B7E0: using guessed type int __cdecl strsignal(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0E0: using guessed type _UNKNOWN *off_811D0E0;
// 811F8A1: using guessed type char byte_811F8A1;
// 811FA44: using guessed type int __cdecl fopen64(_DWORD, _DWORD, _DWORD);
