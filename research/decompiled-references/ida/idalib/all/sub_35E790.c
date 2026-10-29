__int64 __fastcall sub_35E790(__int64 *a1, char a2)
{
  char v2; // r13
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(_QWORD *, char); // rdx
  unsigned int v6; // r15d
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // r14
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rsi
  _QWORD *v28; // rbx
  __int64 (__fastcall *v29)(_QWORD *, char); // rax
  __int64 v30; // r12
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h]

  v2 = a2;
  v4 = (_QWORD *)*a1;
  v5 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
  if ( a2 <= 13 )
  {
    if ( a2 > 6 )
    {
      switch ( a2 )
      {
        case 8:
          v6 = 98;
          v2 = 98;
          if ( v5 != sub_35CB90 )
            goto LABEL_15;
          goto LABEL_6;
        case 9:
          v6 = 116;
          v2 = 116;
          goto LABEL_5;
        case 10:
          v6 = 110;
          v2 = 110;
          goto LABEL_5;
        case 11:
          v6 = 118;
          v2 = 118;
          goto LABEL_5;
        case 12:
          v6 = 102;
          v2 = 102;
          goto LABEL_5;
        case 13:
          v6 = 114;
          v2 = 114;
          goto LABEL_5;
        default:
          v6 = 97;
          v2 = 97;
          goto LABEL_5;
      }
    }
    v6 = a2;
    if ( a2 != *(_BYTE *)(a1[1] + 56) )
      goto LABEL_36;
LABEL_5:
    if ( v5 != sub_35CB90 )
    {
LABEL_15:
      v5(v4, 92);
      v11 = (_QWORD *)*a1;
      v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
      if ( v12 == sub_35CB90 )
      {
LABEL_9:
        v13 = v11[4];
        if ( v13 )
        {
          v14 = v13 + 1;
          v15 = v11[4];
          v16 = v11[3];
          --v13;
          if ( v11[5] >= v14 )
          {
LABEL_11:
            v11[4] = v14;
            *(_BYTE *)(v16 + v13) = v2;
            *(_BYTE *)(v11[3] + v15) = 0;
LABEL_12:
            result = a1[3] + 2;
            goto LABEL_13;
          }
        }
        else
        {
          v16 = v11[3];
          v15 = 1;
          v14 = 2;
          if ( v11[5] >= 2u )
            goto LABEL_11;
        }
        v18 = qvector_reserve(v11 + 3, v16, v14, 1);
        v11[3] = v18;
        v16 = v18;
        goto LABEL_11;
      }
LABEL_16:
      v12(v11, v6);
      goto LABEL_12;
    }
LABEL_6:
    v7 = v4[4];
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = v4[4];
      v10 = v4[3];
      --v7;
      if ( v4[5] >= v8 )
        goto LABEL_8;
    }
    else
    {
      v10 = v4[3];
      v9 = 1;
      v8 = 2;
      if ( v4[5] >= 2u )
        goto LABEL_8;
    }
    v37 = v9;
    v19 = qvector_reserve(v4 + 3, v10, v8, 1);
    v9 = v37;
    v4[3] = v19;
    v10 = v19;
LABEL_8:
    v4[4] = v8;
    *(_BYTE *)(v10 + v7) = 92;
    *(_BYTE *)(v4[3] + v9) = 0;
    v11 = (_QWORD *)*a1;
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
    if ( v12 == sub_35CB90 )
      goto LABEL_9;
    goto LABEL_16;
  }
  v6 = 92;
  if ( a2 == 92 )
    goto LABEL_5;
  v6 = a2;
  if ( *(_BYTE *)(a1[1] + 56) == a2 )
    goto LABEL_5;
  if ( a2 <= 31 )
  {
LABEL_36:
    if ( v5 == sub_35CB90 )
    {
      v24 = v4[4];
      if ( v24 )
      {
        v25 = v24 + 1;
        v26 = v4[4];
        --v24;
      }
      else
      {
        v26 = 1;
        v25 = 2;
      }
      v27 = v4[3];
      if ( v4[5] < v25 )
      {
        v36 = qvector_reserve(v4 + 3, v27, v25, 1);
        v4[3] = v36;
        v27 = v36;
      }
      v4[4] = v25;
      *(_BYTE *)(v27 + v24) = 92;
      *(_BYTE *)(v4[3] + v26) = 0;
    }
    else
    {
      v5(v4, 92);
    }
    v28 = (_QWORD *)*a1;
    v29 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
    if ( v29 == sub_35CB90 )
    {
      v30 = v28[4];
      if ( v30 )
      {
        v31 = v30 + 1;
        v32 = v28[4];
        --v30;
      }
      else
      {
        v32 = 1;
        v31 = 2;
      }
      v33 = v28[3];
      if ( v28[5] < v31 )
      {
        v34 = qvector_reserve(v28 + 3, v33, v31, 1);
        v28[3] = v34;
        v33 = v34;
      }
      v28[4] = v31;
      *(_BYTE *)(v33 + v30) = 120;
      *(_BYTE *)(v28[3] + v32) = 0;
    }
    else
    {
      v29((_QWORD *)*a1, 120);
    }
    sub_35CD40(*a1, (__int64)"%02X", v6);
    result = a1[3] + 4;
    goto LABEL_13;
  }
  if ( v5 == sub_35CB90 )
  {
    v20 = v4[4];
    if ( v20 )
    {
      v21 = v20 + 1;
      v22 = v4[4];
      --v20;
    }
    else
    {
      v22 = 1;
      v21 = 2;
    }
    v23 = v4[3];
    if ( v4[5] < v21 )
    {
      v35 = qvector_reserve(v4 + 3, v23, v21, 1);
      v4[3] = v35;
      v23 = v35;
    }
    v4[4] = v21;
    *(_BYTE *)(v23 + v20) = a2;
    *(_BYTE *)(v4[3] + v22) = 0;
  }
  else
  {
    v5((_QWORD *)*a1, a2);
  }
  result = a1[3] + 1;
LABEL_13:
  a1[3] = result;
  return result;
}
