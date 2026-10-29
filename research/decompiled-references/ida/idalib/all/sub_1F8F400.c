__int64 __fastcall sub_1F8F400(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  char *v10; // rbx
  __int64 v11; // r13
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned int *v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r8
  int *v18; // rsi
  __int64 i; // r12
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r15
  char *v23; // rax
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  char *v27; // rdx
  int v28; // edi
  __int64 v29; // rdx
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  char *v35; // r11
  __int64 v36; // rax
  char *v37; // r12
  unsigned int v38; // edi
  unsigned int *v39; // r14
  __int64 v40; // rcx
  int *v41; // rdx
  __int64 v42; // r10
  __int64 v43; // rcx
  unsigned int v44; // edi
  char *v45; // rax
  __int64 v46; // rcx
  int v47; // [rsp+10h] [rbp-58h]
  char *v48; // [rsp+10h] [rbp-58h]
  int v49; // [rsp+18h] [rbp-50h]
  __int64 v50; // [rsp+20h] [rbp-48h]

  v7 = a5;
  v8 = a3;
  v10 = a1;
  if ( a7 <= a5 )
    v7 = a7;
  if ( a4 <= v7 )
  {
LABEL_26:
    result = a2 - v10;
    v26 = (a2 - v10) >> 4;
    if ( a2 - v10 <= 0 )
      return result;
    result = a6;
    v27 = v10;
    do
    {
      v28 = *(_DWORD *)v27;
      result += 16;
      v27 += 16;
      *(_DWORD *)(result - 16) = v28;
      *(_QWORD *)(result - 8) = *((_QWORD *)v27 - 1);
      --v26;
    }
    while ( v26 );
    if ( result != a6 && (char *)v8 != a2 )
    {
      do
      {
        v30 = *(_DWORD *)a2;
        v31 = *(_DWORD *)a6;
        if ( *(_DWORD *)a2 < *(_DWORD *)a6 || v30 == v31 && *((_QWORD *)a2 + 1) < *(_QWORD *)(a6 + 8) )
        {
          v32 = *((_QWORD *)a2 + 1);
          v10 += 16;
          *((_DWORD *)v10 - 4) = v30;
          a2 += 16;
          *((_QWORD *)v10 - 1) = v32;
          if ( result == a6 )
            break;
        }
        else
        {
          v29 = *(_QWORD *)(a6 + 8);
          a6 += 16;
          v10 += 16;
          *((_QWORD *)v10 - 1) = v29;
          *((_DWORD *)v10 - 4) = v31;
          if ( result == a6 )
            break;
        }
      }
      while ( a2 != (char *)v8 );
    }
    if ( result != a6 )
    {
      result -= a6;
      v33 = result >> 4;
      if ( result > 0 )
      {
        do
        {
          v34 = *(_DWORD *)a6;
          v10 += 16;
          a6 += 16;
          *((_DWORD *)v10 - 4) = v34;
          result = *(_QWORD *)(a6 - 8);
          *((_QWORD *)v10 - 1) = result;
          --v33;
        }
        while ( v33 );
      }
    }
  }
  else
  {
    v11 = a5;
    if ( a7 < a5 )
    {
      v22 = a4;
      v35 = a1;
      while ( 1 )
      {
        if ( v11 >= v22 )
        {
          v43 = (a2 - v35) >> 4;
          v42 = v11 / 2;
          v39 = (unsigned int *)&a2[16 * (v11 / 2)];
          if ( a2 - v35 <= 0 )
          {
            LODWORD(v50) = 0;
            v37 = v35;
          }
          else
          {
            v44 = *v39;
            v37 = v35;
            do
            {
              v45 = &v37[16 * (v43 >> 1)];
              if ( v44 < *(_DWORD *)v45 || v44 == *(_DWORD *)v45 && *((_QWORD *)v39 + 1) < *((_QWORD *)v45 + 1) )
              {
                v43 >>= 1;
              }
              else
              {
                v37 = v45 + 16;
                v43 = v43 - (v43 >> 1) - 1;
              }
            }
            while ( v43 > 0 );
            v50 = (v37 - v35) >> 4;
            v22 -= v50;
          }
          v11 -= v11 / 2;
        }
        else
        {
          v50 = v22 / 2;
          v36 = (a3 - (__int64)a2) >> 4;
          v37 = &v35[16 * (v22 / 2)];
          if ( a3 - (__int64)a2 <= 0 )
          {
            v39 = (unsigned int *)a2;
            v42 = 0;
          }
          else
          {
            v38 = *(_DWORD *)v37;
            v39 = (unsigned int *)a2;
            do
            {
              while ( 1 )
              {
                v40 = v36 >> 1;
                v41 = (int *)&v39[4 * (v36 >> 1)];
                if ( *v41 < v38 || *v41 == v38 && *((_QWORD *)v41 + 1) < *((_QWORD *)v37 + 1) )
                  break;
                v36 >>= 1;
                if ( v40 <= 0 )
                  goto LABEL_51;
              }
              v39 = (unsigned int *)(v41 + 4);
              v36 = v36 - v40 - 1;
            }
            while ( v36 > 0 );
LABEL_51:
            v42 = ((char *)v39 - a2) >> 4;
            v11 -= v42;
          }
          v22 -= v22 / 2;
        }
        v49 = (int)v35;
        v47 = v42;
        v23 = sub_1F8F200(v37, a2, (char *)v39, v22, v42, (_DWORD *)a6, a7);
        v24 = v47;
        v48 = v23;
        sub_1F8F400(v49, (_DWORD)v37, (_DWORD)v23, v50, v24, a6, a7);
        v25 = v11;
        if ( a7 <= v11 )
          v25 = a7;
        if ( v25 >= v22 )
        {
          v8 = a3;
          v10 = v48;
          a2 = (char *)v39;
          goto LABEL_26;
        }
        if ( a7 >= v11 )
          break;
        v35 = v48;
        a2 = (char *)v39;
      }
      v8 = a3;
      v10 = v48;
      a2 = (char *)v39;
    }
    result = v8 - (_QWORD)a2;
    v13 = (v8 - (__int64)a2) >> 4;
    if ( v8 - (__int64)a2 <= 0 )
      return result;
    result = a6;
    v14 = (unsigned int *)a2;
    while ( 1 )
    {
      v15 = *v14;
      v16 = *((_QWORD *)v14 + 1);
      v14 += 4;
      *(_QWORD *)(result + 8) = v16;
      v17 = result + 16;
      *(_DWORD *)result = v15;
      if ( !--v13 )
        break;
      result += 16;
    }
    if ( v10 != a2 )
    {
      if ( v17 == a6 )
        return result;
      v18 = (int *)(a2 - 16);
      for ( i = v8 - 16; ; i -= 16 )
      {
        v20 = *v18;
        if ( *v18 > v15 || v20 == v15 && *((_QWORD *)v18 + 1) > *(_QWORD *)(result + 8) )
        {
          *(_DWORD *)i = v20;
          v21 = i;
          *(_QWORD *)(i + 8) = *((_QWORD *)v18 + 1);
          if ( v18 == (int *)v10 )
          {
            result += 16;
            v46 = (result - a6) >> 4;
            if ( result - a6 > 0 )
            {
              do
              {
                result -= 16;
                v21 -= 16;
                *(_DWORD *)v21 = *(_DWORD *)result;
                *(_QWORD *)(v21 + 8) = *(_QWORD *)(result + 8);
                --v46;
              }
              while ( v46 );
            }
            return result;
          }
          v18 -= 4;
        }
        else
        {
          *(_DWORD *)i = v15;
          *(_QWORD *)(i + 8) = *(_QWORD *)(result + 8);
          if ( result == a6 )
            return result;
          result -= 16;
        }
        v15 = *(_DWORD *)result;
      }
    }
    result = (v17 - a6) >> 4;
    if ( v17 - a6 > 0 )
    {
      do
      {
        v17 -= 16;
        v8 -= 16;
        *(_DWORD *)v8 = *(_DWORD *)v17;
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(v17 + 8);
        --result;
      }
      while ( result );
    }
  }
  return result;
}
