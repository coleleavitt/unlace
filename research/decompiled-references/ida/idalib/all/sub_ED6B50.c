unsigned __int64 __fastcall sub_ED6B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int8 v8; // al
  char v9; // al
  bool v10; // al
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 (*v14)(); // rax
  bool v15; // al
  unsigned __int64 result; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  signed __int64 v30; // rax
  char v31; // dl
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 **v35; // rax

  v6 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 58 <= 3 )
  {
    v8 = *(_BYTE *)(a2 + 73);
    a2 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 200) = (8 * (v8 >> 5 == 2)) | *(_BYTE *)(a1 + 200) & 0xF7;
    v9 = sub_B78D70(v6, a2);
    a3 = (unsigned __int8)(v9 & 1) << 6;
    *(_BYTE *)(a1 + 200) = ((v9 & 1) << 6) | *(_BYTE *)(a1 + 200) & 0xBF;
  }
  v10 = 0;
  if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
    v10 = sub_ED65D0(v6, a2, a3, (__int64)a4, a5, a6);
  v11 = *(_BYTE *)(a1 + 200) & 0xFB;
  *(_BYTE *)(a1 + 200) = *(_BYTE *)(a1 + 200) & 0xFB | (4 * v10);
  v12 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2320LL) + 24LL);
  if ( (_DWORD)v12 )
    *(_QWORD *)(a1 + 208) = v12;
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    goto LABEL_8;
  v19 = sub_B8C3D0(v6, a2, v11, (__int64)a4, a5, a6);
  v11 = *v19;
  a4 = (unsigned __int64 *)(*v19 + 8LL * *((unsigned int *)v19 + 2));
  if ( *v19 >= (unsigned __int64)a4 )
  {
    if ( (unsigned __int64 *)v11 == a4 )
      goto LABEL_21;
    while ( *(_WORD *)(*a4 + 36) != 124 )
    {
      if ( (unsigned __int64 *)v11 == ++a4 )
        goto LABEL_21;
    }
LABEL_50:
    *(_BYTE *)(a1 + 200) |= 0x10u;
    *(_QWORD *)(a1 + 208) = 2;
    *(_QWORD *)(a1 + 24) = 2;
    *(_QWORD *)(a1 + 32) = 2;
    goto LABEL_9;
  }
  v20 = (unsigned __int64 *)*v19;
  while ( 1 )
  {
    v11 = *v20;
    if ( *(_WORD *)(*v20 + 36) == 124 )
      break;
    if ( a4 == ++v20 )
      goto LABEL_21;
  }
  if ( a4 != v20 )
    goto LABEL_50;
LABEL_21:
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    goto LABEL_8;
  v21 = sub_B8C3D0(v6, a2, v11, (__int64)a4, a5, a6);
  v11 = *v21;
  a4 = (unsigned __int64 *)(*v21 + 8LL * *((unsigned int *)v21 + 2));
  if ( *v21 >= (unsigned __int64)a4 )
  {
    if ( (unsigned __int64 *)v11 == a4 )
      goto LABEL_26;
    if ( *(_WORD *)(*a4 + 36) == 125 )
      goto LABEL_64;
    v35 = (unsigned __int64 **)(a4 + 1);
    while ( 1 )
    {
      a4 = (unsigned __int64 *)v35;
      if ( (unsigned __int64 **)v11 == v35 )
        break;
      a4 = *v35++;
      if ( *((_WORD *)a4 + 18) == 125 )
        goto LABEL_64;
    }
  }
  else
  {
    v22 = (unsigned __int64 *)*v21;
    while ( 1 )
    {
      v11 = *v22;
      if ( *(_WORD *)(*v22 + 36) == 125 )
        break;
      if ( a4 == ++v22 )
        goto LABEL_26;
    }
    if ( a4 != v22 )
LABEL_64:
      *(_BYTE *)(a1 + 200) |= 0x20u;
  }
LABEL_26:
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    goto LABEL_8;
  v23 = sub_B8C3D0(v6, a2, v11, (__int64)a4, a5, a6);
  v11 = *v23;
  v24 = *v23 + 8LL * *((unsigned int *)v23 + 2);
  if ( v11 >= v24 )
  {
    if ( v11 == v24 )
      goto LABEL_8;
    while ( 1 )
    {
      a4 = *(unsigned __int64 **)v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 253 )
        break;
      v24 += 8LL;
      if ( v11 == v24 )
        goto LABEL_8;
    }
  }
  else
  {
    a4 = (unsigned __int64 *)v11;
    while ( 1 )
    {
      a2 = *a4;
      if ( *(_WORD *)(*a4 + 36) == 253 )
        break;
      if ( (unsigned __int64 *)v24 == ++a4 )
        goto LABEL_8;
    }
    if ( (unsigned __int64 *)v24 == a4 )
    {
LABEL_8:
      v13 = sub_B8C970(v6, a2, v11, (__int64)a4, a5, a6);
      if ( !v13 )
        goto LABEL_9;
      goto LABEL_36;
    }
  }
  while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 253 )
    v11 += 8LL;
  v25 = *(unsigned int *)(*(_QWORD *)v11 + 40LL);
  *(_QWORD *)(a1 + 208) = sub_A97FF0(*(_QWORD *)a1, v25);
  v13 = sub_B8C970(v6, v25, v26, v27, v28, v29);
  if ( !v13 )
    goto LABEL_9;
LABEL_36:
  v30 = sub_A97FF0(*(_QWORD *)a1, v13);
  v31 = *(_BYTE *)(a1 + 200);
  if ( (v31 & 0x10) == 0 && (v31 & 3) != 1 )
  {
    if ( v30 > *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = v30;
    if ( v30 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 40) = v30;
    if ( v30 > *(_QWORD *)(a1 + 32) )
      *(_QWORD *)(a1 + 32) = v30;
  }
LABEL_9:
  v14 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)a1 + 17448LL) + 832LL);
  v15 = v14 == sub_A55F20 || !(unsigned __int8)v14() || (*(_BYTE *)(a1 + 200) & 0x20) != 0;
  *(_BYTE *)(a1 + 267) = v15;
  result = (*(_BYTE *)(v6 + 28) & 0x7Fu) - 58;
  if ( (unsigned int)result <= 3 )
  {
    result = *(_QWORD *)a1;
    v17 = *(_QWORD *)(*(_QWORD *)a1 + 18360LL);
    if ( v17 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 216LL))(
                 v17,
                 v6,
                 a1 + 664,
                 a1 + 672,
                 a1 + 680,
                 a1 + 704,
                 a1 + 728)
             & 1
             | *(_BYTE *)(a1 + 200) & 0xFE;
      *(_BYTE *)(a1 + 200) = result;
      if ( (result & 1) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 672);
        if ( v18 )
        {
          v32 = sub_A97FF0(*(_QWORD *)a1, v18);
          v33 = *(_QWORD *)(a1 + 672);
          v34 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 24) = v32;
          result = sub_A97FF0(v34, v33);
          *(_QWORD *)(a1 + 32) = result;
        }
        else
        {
          result = (unsigned int)result | 2;
          *(_BYTE *)(a1 + 200) = result;
        }
      }
    }
  }
  return result;
}
