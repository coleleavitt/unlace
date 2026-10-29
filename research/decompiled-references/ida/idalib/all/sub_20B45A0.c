__int64 __fastcall sub_20B45A0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r13
  char *v9; // r12
  __int64 v10; // r14
  __int64 v11; // r10
  char *v12; // r11
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  char *v16; // rbp
  char *v17; // rbx
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rdi
  unsigned int *v24; // rdx
  char *v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // r8
  char *v28; // r8
  char *v29; // rbx
  int v30; // esi
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rdx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rsi
  _DWORD *v43; // rcx
  char *v44; // rdx
  int v45; // edi
  char *v46; // rdx
  char *v48; // [rsp+18h] [rbp-50h]
  int v49; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+70h] [rbp+8h]

  v7 = a5;
  v8 = a3;
  v9 = a6;
  if ( a7 <= a5 )
    v7 = a7;
  if ( a4 <= v7 )
  {
    v17 = a2;
    result = a1;
LABEL_49:
    v42 = (__int64)&v17[-result] >> 4;
    if ( (__int64)&v17[-result] > 0 )
    {
      v43 = (_DWORD *)result;
      v44 = v9;
      do
      {
        v45 = *v43;
        v44 += 16;
        v43 += 4;
        *((_DWORD *)v44 - 4) = v45;
        *((_QWORD *)v44 - 1) = *((_QWORD *)v43 - 1);
        --v42;
      }
      while ( v42 );
      while ( (char *)v8 != v17 && v44 != v9 )
      {
        while ( 1 )
        {
          v37 = *(_DWORD *)v9;
          if ( *(_DWORD *)v17 < *(_DWORD *)v9 )
            break;
          v38 = *((_QWORD *)v9 + 1);
          v9 += 16;
          *(_DWORD *)result = v37;
          result += 16;
          *(_QWORD *)(result - 8) = v38;
          if ( v44 == v9 || (char *)v8 == v17 )
            goto LABEL_44;
        }
        v36 = *((_QWORD *)v17 + 1);
        result += 16;
        *(_DWORD *)(result - 16) = *(_DWORD *)v17;
        v17 += 16;
        *(_QWORD *)(result - 8) = v36;
      }
LABEL_44:
      if ( v44 != v9 )
      {
        v39 = v44 - v9;
        v40 = v39 >> 4;
        if ( v39 > 0 )
        {
          do
          {
            v41 = *(_DWORD *)v9;
            result += 16;
            v9 += 16;
            *(_DWORD *)(result - 16) = v41;
            *(_QWORD *)(result - 8) = *((_QWORD *)v9 - 1);
            --v40;
          }
          while ( v40 );
        }
      }
    }
    return result;
  }
  v10 = a5;
  if ( a7 < a5 )
  {
    v11 = a7;
    v12 = (char *)a1;
    v13 = a4;
    while ( 1 )
    {
      if ( v13 <= v10 )
      {
        v20 = v10 / 2;
        v33 = (a2 - v12) >> 4;
        v17 = &a2[16 * (v10 / 2)];
        if ( a2 - v12 <= 0 )
        {
          v16 = v12;
          v14 = 0;
        }
        else
        {
          v16 = v12;
          do
          {
            while ( 1 )
            {
              v34 = v33 >> 1;
              v35 = &v16[16 * (v33 >> 1)];
              if ( *(_DWORD *)v17 < *(_DWORD *)v35 )
                break;
              v16 = v35 + 16;
              v33 = v33 - v34 - 1;
              if ( v33 <= 0 )
              {
                v14 = (v16 - v12) >> 4;
                goto LABEL_12;
              }
            }
            v33 >>= 1;
          }
          while ( v34 );
          v14 = (v16 - v12) >> 4;
        }
      }
      else
      {
        v14 = v13 / 2;
        v15 = (a3 - (__int64)a2) >> 4;
        v16 = &v12[16 * (v13 / 2)];
        if ( a3 - (__int64)a2 <= 0 )
        {
          v17 = a2;
        }
        else
        {
          v17 = a2;
          do
          {
            while ( 1 )
            {
              v18 = v15 >> 1;
              v19 = &v17[16 * (v15 >> 1)];
              if ( *(_DWORD *)v19 >= *(_DWORD *)v16 )
                break;
              v17 = v19 + 16;
              v15 = v15 - v18 - 1;
              if ( v15 <= 0 )
                goto LABEL_11;
            }
            v15 >>= 1;
          }
          while ( v18 );
        }
LABEL_11:
        v20 = (v17 - a2) >> 4;
      }
LABEL_12:
      v49 = (int)v12;
      v13 -= v14;
      v10 -= v20;
      v51 = v11;
      v48 = sub_20B43A0(v16, a2, v17, v13, v20, a6, v11);
      sub_20B45A0(v49, (_DWORD)v16, (_DWORD)v48, v14, v20, (_DWORD)a6, v51);
      v21 = v10;
      v11 = v51;
      result = (__int64)v48;
      if ( v51 <= v10 )
        v21 = v51;
      if ( v13 <= v21 )
        break;
      v12 = v48;
      a2 = v17;
      if ( v51 >= v10 )
      {
        v8 = a3;
        v9 = a6;
        goto LABEL_17;
      }
    }
    v8 = a3;
    v9 = a6;
    goto LABEL_49;
  }
  v17 = a2;
  result = a1;
LABEL_17:
  v23 = (v8 - (__int64)v17) >> 4;
  if ( v8 - (__int64)v17 > 0 )
  {
    v24 = (unsigned int *)v9;
    v25 = v17;
    while ( 1 )
    {
      v26 = *(_DWORD *)v25;
      v27 = *((_QWORD *)v25 + 1);
      v25 += 16;
      *((_QWORD *)v24 + 1) = v27;
      v28 = (char *)(v24 + 4);
      *v24 = v26;
      if ( !--v23 )
        break;
      v24 += 4;
    }
    if ( (char *)result == v17 )
    {
      result = (v28 - v9) >> 4;
      if ( v28 - v9 > 0 )
      {
        do
        {
          v28 -= 16;
          v8 -= 16;
          *(_DWORD *)v8 = *(_DWORD *)v28;
          *(_QWORD *)(v8 + 8) = *((_QWORD *)v28 + 1);
          --result;
        }
        while ( result );
      }
    }
    else if ( v28 != v9 )
    {
      v29 = v17 - 16;
      v30 = *(_DWORD *)v29;
      v31 = v8 - 16;
      if ( v26 >= *(_DWORD *)v29 )
        goto LABEL_27;
      while ( 1 )
      {
        v32 = *((_QWORD *)v29 + 1);
        *(_DWORD *)v31 = v30;
        *(_QWORD *)(v31 + 8) = v32;
        if ( v29 == (char *)result )
          break;
        v26 = *v24;
        v29 -= 16;
        while ( 1 )
        {
          v30 = *(_DWORD *)v29;
          v31 -= 16;
          if ( v26 < *(_DWORD *)v29 )
            break;
LABEL_27:
          *(_DWORD *)v31 = v26;
          *(_QWORD *)(v31 + 8) = *((_QWORD *)v24 + 1);
          if ( v9 == (char *)v24 )
            return result;
          v24 -= 4;
          v26 = *v24;
        }
      }
      v46 = (char *)(v24 + 4);
      result = (v46 - v9) >> 4;
      if ( v46 - v9 > 0 )
      {
        do
        {
          v46 -= 16;
          v31 -= 16;
          *(_DWORD *)v31 = *(_DWORD *)v46;
          *(_QWORD *)(v31 + 8) = *((_QWORD *)v46 + 1);
          --result;
        }
        while ( result );
      }
    }
  }
  return result;
}
