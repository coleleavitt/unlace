unsigned __int64 __fastcall sub_A8CEB0(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r15
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // edx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned int v28; // r12d
  __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int8 v45; // cl
  int v46; // edx
  unsigned int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  unsigned __int8 v50; // cl
  unsigned __int64 v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+10h] [rbp-48h]

  v3 = a2;
  v6 = sub_B68C30(a2);
  if ( v6 )
  {
    v9 = v6;
    LODWORD(v10) = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v10 - 49) > 2 )
      goto LABEL_36;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_4;
    goto LABEL_42;
  }
  v9 = 8;
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v10 - 49) > 2 )
    goto LABEL_9;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
LABEL_42:
    v36 = sub_B68690(a2);
    v7 = *(_QWORD *)v36;
    v37 = *(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 8);
    if ( *(_QWORD *)v36 >= v37 )
    {
      if ( v7 != v37 )
      {
        while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 325 )
        {
          v37 += 8LL;
          if ( v7 == v37 )
            goto LABEL_4;
        }
        goto LABEL_35;
      }
    }
    else
    {
      v38 = *(__int64 **)v36;
      while ( 1 )
      {
        v7 = *v38;
        if ( *(_WORD *)(*v38 + 36) == 325 )
          break;
        if ( (__int64 *)v37 == ++v38 )
          goto LABEL_4;
      }
      if ( (__int64 *)v37 != v38 )
        goto LABEL_35;
    }
  }
LABEL_4:
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  if ( (*(_BYTE *)(v11 - 35) & 1) != 0 )
  {
    v39 = sub_B68690(v11 - 64);
    v7 = *(_QWORD *)v39;
    a2 = *(_QWORD *)v39 + 8LL * *(unsigned int *)(v39 + 8);
    if ( *(_QWORD *)v39 >= a2 )
    {
      v10 = *(_BYTE *)(v3 + 28) & 0x7F;
      if ( v7 != a2 )
      {
        while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 325 )
        {
          a2 += 8LL;
          if ( v7 == a2 )
            goto LABEL_9;
        }
        goto LABEL_36;
      }
    }
    else
    {
      v40 = *(__int64 **)v39;
      while ( 1 )
      {
        v7 = *v40;
        if ( *(_WORD *)(*v40 + 36) == 325 )
          break;
        if ( (__int64 *)a2 == ++v40 )
          goto LABEL_8;
      }
      v10 = *(_BYTE *)(v3 + 28) & 0x7F;
      if ( (__int64 *)a2 != v40 )
        goto LABEL_36;
    }
  }
  else
  {
LABEL_8:
    v10 = *(_BYTE *)(v3 + 28) & 0x7F;
  }
LABEL_9:
  if ( (unsigned int)(v10 - 26) > 0x1A )
    goto LABEL_36;
  v12 = *(_QWORD *)(v3 + 48);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43 <= 1 || (v14 = sub_A32F40(v14, a2, v7, v10, v8)) != 0 )
  {
    if ( a3 )
    {
      v12 = sub_990B30(v14, a2, v7, v10, v8);
    }
    else
    {
      v15 = sub_990B30(v14, a2, v7, v10, v8);
      v12 = sub_A4C2D0((__int64)a1, v15);
    }
    v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v16 = sub_A4D710((__int64)a1, v12);
  v51 = v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
  {
    v53 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !(unsigned __int8)sub_F3E930(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), 0) )
    {
      v43 = sub_A4E300(a1, v12);
      if ( v43 )
      {
        v44 = a1[2181];
        v45 = *(_BYTE *)(v44 + 28);
        if ( a3 != 1 )
        {
          if ( v45 )
          {
            v46 = *(unsigned __int8 *)(v43 + 16);
            if ( (_BYTE)v46 == 6 )
            {
              if ( v9 < *(unsigned __int8 *)(v44 + 29) )
                v9 = *(unsigned __int8 *)(v44 + 29);
            }
            else if ( (unsigned int)(v46 - 2) <= 1
                   && v45 <= (unsigned __int64)sub_A73FE0((__int64)a1, v43)
                   && v9 < *(unsigned __int8 *)(a1[2181] + 29LL) )
            {
              v9 = *(unsigned __int8 *)(a1[2181] + 29LL);
            }
          }
        }
      }
      v47 = sub_A8BCD0(a1, *v13);
      if ( v9 < v47 )
        v9 = v47;
      v48 = *(_QWORD *)(v53 + 8);
      if ( (v48 & 8) != 0 && (*((_BYTE *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
        v9 = 8;
    }
  }
  else
  {
    sub_A8C200((__int64)a1, *v13, v17, v18, v19);
    v9 = v20;
  }
  v21 = *(_BYTE *)(v3 + 28) & 0x7F;
  LODWORD(v10) = v21;
  if ( (unsigned int)v21 - 40 > 6 )
  {
    if ( (unsigned int)v21 - 49 > 2 )
      return v9 / (unsigned __int64)sub_A74290((__int64)a1);
    goto LABEL_22;
  }
  v22 = *(_BYTE *)(v3 + 96) & 7;
  if ( !v22 )
  {
    v23 = *(_QWORD *)&byte_8[*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( ((v23 & 8) == 0
       || (*(_DWORD *)((char *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v23 & 7)) >> 9 != 3)
      && !sub_A3AE50(v3)
      && (*(_BYTE *)(v3 + 96) & 0x18) == 0 )
    {
      goto LABEL_21;
    }
    goto LABEL_64;
  }
  if ( v22 != 5 )
    goto LABEL_88;
  if ( v21 != 46 && v21 != 40 )
    goto LABEL_111;
  v49 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
    v49 = *(_QWORD *)(v49 + 8);
  if ( v49 )
  {
    v50 = *(_BYTE *)(sub_B6AD60(v49) + 8) & 0x7F;
    if ( v50 > 0x12u )
    {
      if ( ((v50 + 94) & 0x7Fu) <= 5 )
      {
LABEL_110:
        v22 = *(_BYTE *)(v3 + 96) & 7;
LABEL_88:
        if ( v22 > 3u )
          goto LABEL_21;
        goto LABEL_64;
      }
    }
    else if ( ((1LL << v50) & 0x40182) != 0 )
    {
      goto LABEL_110;
    }
    if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x2B || (*(_BYTE *)(v3 + 96) & 7u) <= 3 )
    {
LABEL_64:
      if ( !a3 )
      {
        v41 = 0;
        if ( !(unsigned __int8)sub_F3E930(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL), 0) )
          v41 = sub_A73FE0((__int64)a1, *v13);
        v42 = sub_A3F1B0((__int64)a1, v41, v3);
        if ( v9 < v42 )
          v9 = v42;
      }
LABEL_21:
      LODWORD(v10) = *(_BYTE *)(v3 + 28) & 0x7F;
      if ( (unsigned int)(v10 - 49) > 2 )
        goto LABEL_36;
LABEL_22:
      v24 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
        v24 = *(_QWORD *)v24;
      if ( (*(_BYTE *)(v24 + 8) & 0x7Fu) - 58 > 3 )
        BUG();
      if ( *(char *)(v24 - 36) >= 0 )
      {
        v25 = sub_EBA840(a1, v24 - 64);
        v26 = *(_QWORD *)(v25 + 16);
        v27 = v25;
        v28 = sub_A74290((__int64)a1) * v26;
        v29 = v3;
        v30 = v28;
        if ( *(char *)(v3 + 29) < 0 )
          v29 = sub_B4E9E0(v3);
        v31 = *(_DWORD *)(v29 + 68);
        if ( (v31 & 0xFFFFFFF0) == 0 )
        {
          v52 = v29;
          sub_B5AD70(v29);
          v31 = *(_DWORD *)(v52 + 68);
        }
        v32 = *(_QWORD *)(*(_QWORD *)(v27 + 48) + 8LL * ((v31 >> 4) - 1));
        if ( v32 )
        {
          v33 = -v32 & v32;
          if ( v33 < v28 )
            v30 = v33;
        }
        if ( v9 > v30 )
          v9 = v30;
LABEL_35:
        LODWORD(v10) = *(_BYTE *)(v3 + 28) & 0x7F;
      }
LABEL_36:
      if ( (unsigned int)(v10 - 40) > 6 )
        return v9 / (unsigned __int64)sub_A74290((__int64)a1);
    }
  }
  else
  {
LABEL_111:
    if ( v21 != 43 )
      goto LABEL_64;
  }
  v34 = *(_DWORD *)(a1[2181] + 196LL);
  if ( v34 && (*(_BYTE *)(v3 + 96) & 7) == 2 && v9 > v34 )
    v9 = *(_DWORD *)(a1[2181] + 196LL);
  return v9 / (unsigned __int64)sub_A74290((__int64)a1);
}

