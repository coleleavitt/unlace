__int64 __fastcall sub_55AAA0(_QWORD *a1, char *a2, int a3, char *a4)
{
  bool v4; // r15
  int v5; // ebp
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  char *v17; // r12
  char v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 (__fastcall *v23)(_QWORD *, char); // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  char v27; // r15
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 result; // rax
  __int64 (__fastcall *v33)(_QWORD *, char); // rax
  __int64 v34; // rax
  char *v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 (__fastcall *v40)(_QWORD *, char); // rax
  __int64 v41; // rax
  char *v42; // r14
  char v43; // r15
  unsigned __int64 v44; // rdx
  __int64 v45; // r10
  __int64 v46; // rsi
  __int64 v47; // r12
  __int64 (__fastcall *v48)(_QWORD *, char); // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // [rsp+8h] [rbp-60h]
  unsigned __int64 v52; // [rsp+8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+10h] [rbp-58h]
  char *v57; // [rsp+18h] [rbp-50h]

  v4 = 0;
  v5 = a3;
  v57 = a4;
  if ( a3 < 0 )
  {
    v4 = a4 != nullptr;
    v5 = -a3;
  }
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 64LL);
  if ( v7 == sub_558200 )
  {
    v8 = a1[4];
    if ( v8 )
    {
      v11 = v8 + 1;
      v10 = a1[4];
      v9 = a1[3];
      --v8;
      v12 = a1 + 3;
      if ( a1[5] >= v11 )
        goto LABEL_6;
    }
    else
    {
      v9 = a1[3];
      v10 = 1;
      v11 = 2;
      v12 = a1 + 3;
      if ( a1[5] >= 2u )
        goto LABEL_6;
    }
    v25 = qvector_reserve(v12, v9, v11, 1);
    a1[3] = v25;
    v9 = v25;
LABEL_6:
    a1[4] = v11;
    *(_BYTE *)(v9 + v8) = 1;
    *(_BYTE *)(a1[3] + v10) = 0;
    v13 = a1[4];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = a1[4];
      v16 = a1[3];
      --v13;
      if ( a1[5] >= v14 )
      {
LABEL_8:
        a1[4] = v14;
        *(_BYTE *)(v16 + v13) = 5;
        *(_BYTE *)(a1[3] + v15) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v16 = a1[3];
      v15 = 1;
      v14 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_8;
    }
    v50 = qvector_reserve(v12, v16, v14, 1);
    a1[3] = v50;
    v16 = v50;
    goto LABEL_8;
  }
  v7(a1, 5);
LABEL_9:
  if ( v4 )
  {
    v17 = v57;
    v18 = *v57;
    if ( *v57 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ++v17;
          v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v23 == sub_3598B0 )
            break;
          v23(a1, v18);
          v18 = *v17;
          if ( !*v17 )
          {
LABEL_21:
            v26 = (int)v57;
            v57 = nullptr;
            v5 += v26 - (_DWORD)v17;
            v27 = *a2;
            if ( !*a2 )
              goto LABEL_22;
LABEL_30:
            v35 = a2;
            while ( 2 )
            {
              while ( 1 )
              {
                ++v35;
                v40 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
                if ( v40 == sub_3598B0 )
                  break;
                v40(a1, v27);
                v27 = *v35;
                if ( !*v35 )
                {
LABEL_38:
                  v5 += (_DWORD)a2 - (_DWORD)v35;
                  goto LABEL_39;
                }
              }
              v39 = a1[4];
              if ( v39 )
              {
                v36 = v39 + 1;
                v37 = a1[4];
                v38 = a1[3];
                --v39;
                if ( a1[5] < v36 )
                  goto LABEL_36;
              }
              else
              {
                v38 = a1[3];
                v37 = 1;
                v36 = 2;
                if ( a1[5] < 2u )
                {
LABEL_36:
                  v55 = v37;
                  v52 = v36;
                  v41 = qvector_reserve(a1 + 3, v38, v36, 1);
                  v37 = v55;
                  v36 = v52;
                  a1[3] = v41;
                  v38 = v41;
                }
              }
              a1[4] = v36;
              *(_BYTE *)(v38 + v39) = v27;
              *(_BYTE *)(a1[3] + v37) = 0;
              v27 = *v35;
              if ( !*v35 )
                goto LABEL_38;
              continue;
            }
          }
        }
        v22 = a1[4];
        if ( v22 )
        {
          v19 = v22 + 1;
          v20 = a1[4];
          v21 = a1[3];
          --v22;
          if ( a1[5] < v19 )
            goto LABEL_17;
        }
        else
        {
          v21 = a1[3];
          v20 = 1;
          v19 = 2;
          if ( a1[5] < 2u )
          {
LABEL_17:
            v54 = v20;
            v51 = v19;
            v24 = qvector_reserve(a1 + 3, v21, v19, 1);
            v20 = v54;
            v19 = v51;
            a1[3] = v24;
            v21 = v24;
          }
        }
        a1[4] = v19;
        *(_BYTE *)(v21 + v22) = v18;
        *(_BYTE *)(a1[3] + v20) = 0;
        v18 = *v17;
        if ( !*v17 )
          goto LABEL_21;
      }
    }
    v57 = nullptr;
    v27 = *a2;
    if ( *a2 )
      goto LABEL_30;
    goto LABEL_22;
  }
  v27 = *a2;
  if ( *a2 )
    goto LABEL_30;
LABEL_39:
  v42 = v57;
  if ( v57 )
  {
    v43 = *v57;
    if ( *v57 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ++v42;
          v48 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v48 == sub_3598B0 )
            break;
          v48(a1, v43);
          v43 = *v42;
          if ( !*v42 )
          {
LABEL_49:
            v5 = (_DWORD)v57 + v5 - (_DWORD)v42;
            goto LABEL_22;
          }
        }
        v47 = a1[4];
        if ( v47 )
        {
          v44 = v47 + 1;
          v45 = a1[4];
          v46 = a1[3];
          --v47;
          if ( a1[5] < v44 )
            goto LABEL_47;
        }
        else
        {
          v46 = a1[3];
          v45 = 1;
          v44 = 2;
          if ( a1[5] < 2u )
          {
LABEL_47:
            v56 = v45;
            v53 = v44;
            v49 = qvector_reserve(a1 + 3, v46, v44, 1);
            v45 = v56;
            v44 = v53;
            a1[3] = v49;
            v46 = v49;
          }
        }
        a1[4] = v44;
        *(_BYTE *)(v46 + v47) = v43;
        *(_BYTE *)(a1[3] + v45) = 0;
        v43 = *v42;
        if ( !*v42 )
          goto LABEL_49;
      }
    }
  }
LABEL_22:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5);
  do
  {
    while ( 1 )
    {
      v33 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v33 != sub_3598B0 )
        break;
      v31 = a1[4];
      if ( v31 )
      {
        v28 = v31 + 1;
        v29 = a1[4];
        v30 = a1[3];
        --v31;
        if ( a1[5] < v28 )
          goto LABEL_28;
      }
      else
      {
        v30 = a1[3];
        v29 = 1;
        v28 = 2;
        if ( a1[5] < 2u )
        {
LABEL_28:
          v34 = qvector_reserve(a1 + 3, v30, v28, 1);
          a1[3] = v34;
          v30 = v34;
        }
      }
      a1[4] = v28;
      --v5;
      *(_BYTE *)(v30 + v31) = 32;
      result = a1[3];
      *(_BYTE *)(result + v29) = 0;
      if ( v5 <= 0 )
        return result;
    }
    --v5;
    result = v33(a1, 32);
  }
  while ( v5 > 0 );
  return result;
}

