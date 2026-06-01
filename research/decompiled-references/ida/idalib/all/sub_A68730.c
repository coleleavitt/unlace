__int64 __fastcall sub_A68730(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 (*v20)(); // rax
  _BYTE *v21; // r15
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 (*v26)(); // r8
  _BYTE *v27; // rax
  _BYTE *v28; // rsi
  size_t v29; // rdx
  void **v30; // r14
  __int64 v31; // rax
  void **v32; // rbx
  void **v33; // rbp
  __int64 v35; // r15
  _BYTE *v36; // rbp
  __int64 *v37; // r14
  __int64 v38; // rdx
  _BYTE *v39; // rax
  __int64 *v40; // rdi
  size_t v41; // rdx

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 17448) + 496LL))(
    a1,
    *(_QWORD *)(a2 + 17448),
    *(_QWORD *)(a3 + 48),
    *(unsigned int *)(a3 + 40));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(__int64 **)a1;
  v7 = v5 - *(_QWORD *)a1;
  v8 = v7 >> 7;
  v9 = v7 >> 5;
  if ( v8 > 0 )
  {
    v10 = &v6[16 * v8];
    while ( 1 )
    {
      v17 = *(_QWORD *)(a2 + 17448);
      v18 = v6[1];
      v19 = *v6;
      v20 = *(__int64 (**)())(*(_QWORD *)v17 + 544LL);
      if ( v18 )
      {
        --v18;
        ++v19;
      }
      if ( v20 != sub_A55ED0 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v20)(v17, v19, v18) )
          goto LABEL_20;
        v17 = *(_QWORD *)(a2 + 17448);
        v20 = *(__int64 (**)())(*(_QWORD *)v17 + 544LL);
      }
      v11 = v6[5];
      v12 = v6[4];
      if ( v11 )
      {
        --v11;
        ++v12;
      }
      if ( v20 != sub_A55ED0 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v20)(v17, v12, v11) )
        {
          v6 += 4;
          goto LABEL_20;
        }
        v17 = *(_QWORD *)(a2 + 17448);
        v20 = *(__int64 (**)())(*(_QWORD *)v17 + 544LL);
      }
      v13 = v6[9];
      v14 = v6[8];
      if ( v13 )
      {
        --v13;
        ++v14;
      }
      if ( v20 != sub_A55ED0 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v20)(v17, v14, v13) )
        {
          v6 += 8;
          goto LABEL_20;
        }
        v17 = *(_QWORD *)(a2 + 17448);
        v20 = *(__int64 (**)())(*(_QWORD *)v17 + 544LL);
      }
      v15 = v6[13];
      v16 = v6[12];
      if ( v15 )
      {
        --v15;
        ++v16;
      }
      if ( v20 != sub_A55ED0 && !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v20)(v17, v16, v15) )
      {
        v6 += 12;
        goto LABEL_20;
      }
      v6 += 16;
      if ( v6 == v10 )
      {
        v9 = (v5 - (__int64)v6) >> 5;
        break;
      }
    }
  }
  if ( v9 != 2 )
  {
    if ( v9 != 3 )
    {
      if ( v9 != 1 )
        return a1;
      goto LABEL_74;
    }
    if ( (unsigned __int8)sub_A56FF0(a2, v6) )
      goto LABEL_20;
    v6 += 4;
  }
  if ( (unsigned __int8)sub_A56FF0(a2, v6) )
    goto LABEL_20;
  v6 += 4;
LABEL_74:
  if ( !(unsigned __int8)sub_A56FF0(a2, v6) )
    return a1;
LABEL_20:
  if ( (__int64 *)v5 == v6 )
    return a1;
  if ( (__int64 *)v5 != v6 + 4 )
  {
    v21 = v6 + 6;
    while ( 1 )
    {
      v24 = *(_QWORD *)(a2 + 17448);
      v25 = *((_QWORD *)v21 - 1);
      v26 = *(__int64 (**)())(*(_QWORD *)v24 + 544LL);
      v27 = *((_BYTE **)v21 - 2);
      v28 = v27;
      if ( v25 )
      {
        --v25;
        v28 = v27 + 1;
      }
      if ( v26 == sub_A55ED0 )
      {
        v22 = (__int64 *)*v6;
        if ( v21 == v27 )
          goto LABEL_34;
      }
      else
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, _BYTE *, __int64))v26)(v24, v28, v25) )
          goto LABEL_28;
        v27 = *((_BYTE **)v21 - 2);
        v22 = (__int64 *)*v6;
        if ( v21 == v27 )
        {
LABEL_34:
          v29 = *((_QWORD *)v21 - 1);
          if ( v29 )
          {
            if ( v29 == 1 )
              *(_BYTE *)v22 = *v21;
            else
              memcpy(v22, v21, v29);
            v29 = *((_QWORD *)v21 - 1);
            v22 = (__int64 *)*v6;
          }
          v6[1] = v29;
          *((_BYTE *)v22 + v29) = 0;
          v22 = *((__int64 **)v21 - 2);
          goto LABEL_27;
        }
      }
      if ( v22 == v6 + 2 )
        break;
      *v6 = (__int64)v27;
      v23 = v6[2];
      v6[1] = *((_QWORD *)v21 - 1);
      v6[2] = *(_QWORD *)v21;
      if ( !v22 )
        goto LABEL_69;
      *((_QWORD *)v21 - 2) = v22;
      *(_QWORD *)v21 = v23;
LABEL_27:
      *((_QWORD *)v21 - 1) = 0;
      v6 += 4;
      *(_BYTE *)v22 = 0;
LABEL_28:
      v21 += 32;
      if ( (_BYTE *)(v5 + 16) == v21 )
      {
        if ( (__int64 *)v5 == v6 )
          return a1;
        goto LABEL_51;
      }
    }
    *v6 = (__int64)v27;
    v6[1] = *((_QWORD *)v21 - 1);
    v6[2] = *(_QWORD *)v21;
LABEL_69:
    *((_QWORD *)v21 - 2) = v21;
    v22 = (__int64 *)v21;
    goto LABEL_27;
  }
LABEL_51:
  v30 = *(void ***)(a1 + 8);
  v31 = (__int64)v30 - v5;
  if ( (void **)v5 == v30 )
    goto LABEL_44;
  v35 = v31 >> 5;
  if ( v31 <= 0 )
    goto LABEL_44;
  v36 = (_BYTE *)(v5 + 16);
  v37 = v6 + 2;
  do
  {
    v39 = *((_BYTE **)v36 - 2);
    v40 = (__int64 *)*(v37 - 2);
    if ( v39 == v36 )
    {
      v41 = *((_QWORD *)v36 - 1);
      if ( v41 )
      {
        if ( v41 == 1 )
          *(_BYTE *)v40 = *v36;
        else
          memcpy(v40, v36, v41);
        v41 = *((_QWORD *)v36 - 1);
        v40 = (__int64 *)*(v37 - 2);
      }
      *(v37 - 1) = v41;
      *((_BYTE *)v40 + v41) = 0;
      v40 = *((__int64 **)v36 - 2);
    }
    else
    {
      if ( v40 == v37 )
      {
        *(v37 - 2) = (__int64)v39;
        *(v37 - 1) = *((_QWORD *)v36 - 1);
        *v37 = *(_QWORD *)v36;
      }
      else
      {
        *(v37 - 2) = (__int64)v39;
        v38 = *v37;
        *(v37 - 1) = *((_QWORD *)v36 - 1);
        *v37 = *(_QWORD *)v36;
        if ( v40 )
        {
          *((_QWORD *)v36 - 2) = v40;
          *(_QWORD *)v36 = v38;
          goto LABEL_57;
        }
      }
      *((_QWORD *)v36 - 2) = v36;
      v40 = (__int64 *)v36;
    }
LABEL_57:
    *((_QWORD *)v36 - 1) = 0;
    v37 += 4;
    v36 += 32;
    *(_BYTE *)v40 = 0;
    --v35;
  }
  while ( v35 );
  v30 = *(void ***)(a1 + 8);
  v31 = (__int64)v30 - v5;
LABEL_44:
  v32 = (void **)((char *)v6 + v31);
  if ( v30 != v32 )
  {
    v33 = v32;
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v30 == v33 )
        {
          *(_QWORD *)(a1 + 8) = v32;
          return a1;
        }
      }
      v33 += 4;
    }
    while ( v30 != v33 );
    *(_QWORD *)(a1 + 8) = v32;
  }
  return a1;
}
