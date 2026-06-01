__int64 __fastcall sub_1EFF490(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rsi
  char *v19; // rdi
  size_t v20; // rsi
  __int64 result; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 *v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r15
  __int64 v29; // rdi
  unsigned int v30; // edx
  __int64 *v31; // rsi
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // esi
  bool v35; // zf
  int v36; // r11d
  __int64 *v37; // r15
  __int64 v38; // rax
  __int64 v39; // r15
  int v40; // r11d
  int v41; // edx
  int v42; // esi
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // rbx
  int v46; // ebp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  size_t v52; // rdx
  unsigned int v53; // edx
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v57; // [rsp+20h] [rbp-68h]
  __int64 v58; // [rsp+20h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-50h] BYREF
  __m128 v60[4]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(unsigned __int64 **)(a1 + 9048);
  v8 = &v7[*(unsigned int *)(a1 + 9056)];
  if ( v8 != v7 )
  {
    v55 = a2 + 40;
    v56 = a2 + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = sub_1EDB980((_QWORD *)a1, *v7, a3, a4, a5, a6);
          if ( v10 )
            break;
LABEL_23:
          if ( v8 == ++v7 )
            goto LABEL_24;
        }
        v11 = *(unsigned int *)(a2 + 8);
        v59 = v10;
        if ( (_DWORD)v11 )
          break;
        v12 = *(unsigned int *)(a2 + 32);
        a4 = *(_QWORD *)(a2 + 24);
        a5 = a4 + 8 * v12;
        v13 = (8 * v12) >> 3;
        if ( (8 * v12) >> 5 )
        {
          if ( v10 == *(_QWORD *)a4 )
          {
            a3 = *(_QWORD *)(a2 + 24);
          }
          else if ( v10 == *(_QWORD *)(a4 + 8) )
          {
            a3 = a4 + 8;
          }
          else if ( v10 == *(_QWORD *)(a4 + 16) )
          {
            a3 = a4 + 16;
          }
          else
          {
            v14 = a4 + 32 * ((8 * v12) >> 5);
            a3 = a4 + 24;
            if ( v10 != *(_QWORD *)(a4 + 24) )
            {
              while ( 1 )
              {
                a3 = a4 + 32;
                if ( a4 + 32 == v14 )
                {
                  a4 = a5 - v14;
                  v13 = (__int64)(a5 - v14) >> 3;
                  goto LABEL_18;
                }
                if ( v10 == *(_QWORD *)(a4 + 32) )
                  goto LABEL_34;
                if ( v10 == *(_QWORD *)(a4 + 40) )
                {
                  a3 = a4 + 40;
                  goto LABEL_34;
                }
                if ( v10 == *(_QWORD *)(a4 + 48) )
                {
                  a3 = a4 + 48;
                  if ( a5 != a4 + 48 )
                    goto LABEL_35;
                  goto LABEL_21;
                }
                if ( v10 == *(_QWORD *)(a4 + 56) )
                  break;
                a4 += 32LL;
              }
              a3 = a4 + 56;
              if ( a5 != a4 + 56 )
                goto LABEL_35;
LABEL_21:
              a4 = *(unsigned int *)(a2 + 36);
              a3 = v12 + 1;
              if ( v12 + 1 > a4 )
                goto LABEL_65;
              goto LABEL_22;
            }
          }
LABEL_34:
          if ( a5 == a3 )
            goto LABEL_21;
LABEL_35:
          if ( v8 == ++v7 )
            goto LABEL_24;
        }
        else
        {
          a3 = *(_QWORD *)(a2 + 24);
LABEL_18:
          if ( v13 != 2 )
          {
            if ( v13 != 3 )
            {
              if ( v13 != 1 )
                goto LABEL_21;
              goto LABEL_50;
            }
            if ( v10 == *(_QWORD *)a3 )
              goto LABEL_34;
            a3 += 8;
          }
          if ( v10 == *(_QWORD *)a3 )
            goto LABEL_34;
          a3 += 8;
LABEL_50:
          if ( v10 == *(_QWORD *)a3 )
            goto LABEL_34;
          a4 = *(unsigned int *)(a2 + 36);
          a3 = v12 + 1;
          if ( v12 + 1 > a4 )
          {
LABEL_65:
            v58 = v10;
            sub_2237220(v56, v55, a3, 8);
            a4 = *(unsigned int *)(a2 + 32);
            a3 = *(_QWORD *)(a2 + 24);
            v10 = v58;
            a5 = a3 + 8 * a4;
          }
LABEL_22:
          *(_QWORD *)a5 = v10;
          v15 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
          *(_DWORD *)(a2 + 32) = v15;
          if ( (unsigned int)v15 <= 4 )
            goto LABEL_23;
          v57 = v7;
          v27 = *(__int64 **)(a2 + 24);
          v28 = &v27[v15];
          do
          {
            v33 = *(unsigned int *)(a2 + 16);
            if ( !(_DWORD)v33 )
            {
              v60[0].m128_u64[0] = 0;
              goto LABEL_60;
            }
            a4 = *v27;
            v29 = *(_QWORD *)a2;
            v30 = (v33 - 1) & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4));
            v31 = (__int64 *)(*(_QWORD *)a2 + 8LL * v30);
            v32 = *v31;
            if ( *v27 == *v31 )
              goto LABEL_57;
            v40 = 1;
            a6 = 0;
            if ( v32 == -4096 )
            {
LABEL_78:
              v41 = *(_DWORD *)(a2 + 8);
              a5 = (unsigned int)(3 * v33);
              v60[0].m128_u64[0] = (unsigned __int64)v31;
              a3 = (unsigned int)(v41 + 1);
              if ( 4 * (int)a3 < (unsigned int)a5 )
              {
                a5 = (unsigned int)(v33 - *(_DWORD *)(a2 + 12) - a3);
                if ( (unsigned int)a5 <= (unsigned int)v33 >> 3 )
                {
                  v34 = v33;
LABEL_61:
                  sub_17ECD90(a2, v34, a3, a4, a5, a6);
                  sub_17AC700((__int64 *)a2, v27, v60);
                  a4 = *v27;
                  v29 = *(_QWORD *)a2;
                  v33 = *(unsigned int *)(a2 + 16);
                  LODWORD(a3) = *(_DWORD *)(a2 + 8) + 1;
                  v31 = (__int64 *)v60[0].m128_u64[0];
                }
                v35 = *v31 == -4096;
                *(_DWORD *)(a2 + 8) = a3;
                if ( !v35 )
                  --*(_DWORD *)(a2 + 12);
                *v31 = a4;
                goto LABEL_57;
              }
LABEL_60:
              v34 = 2 * v33;
              goto LABEL_61;
            }
            while ( 1 )
            {
              if ( !a6 && v32 == -8192 )
                a6 = (__int64)v31;
              v30 = (v33 - 1) & (v40 + v30);
              v31 = (__int64 *)(v29 + 8LL * v30);
              v32 = *v31;
              if ( a4 == *v31 )
                break;
              if ( v32 == -4096 )
              {
                if ( a6 )
                  v31 = (__int64 *)a6;
                goto LABEL_78;
              }
              ++v40;
            }
LABEL_57:
            sub_AEADE0(v60, v31, (_QWORD *)(v29 + 8 * v33), a2, 1);
            ++v27;
          }
          while ( v28 != v27 );
          v7 = v57 + 1;
          if ( v8 == v57 + 1 )
            goto LABEL_24;
        }
      }
      v22 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v22 )
        break;
      a5 = *(_QWORD *)a2;
      v23 = (v22 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v24 = (__int64 *)(*(_QWORD *)a2 + 8LL * v23);
      v25 = *v24;
      if ( v10 == *v24 )
        goto LABEL_39;
      v36 = 1;
      v37 = nullptr;
      if ( v25 == -4096 )
      {
LABEL_69:
        v11 = (unsigned int)(v11 + 1);
        v60[0].m128_u64[0] = (unsigned __int64)v24;
        a6 = (unsigned int)(4 * v11);
        if ( (unsigned int)a6 >= 3 * (int)v22 )
          goto LABEL_82;
        a6 = (unsigned int)v22 >> 3;
        if ( (int)v22 - *(_DWORD *)(a2 + 12) - (int)v11 <= (unsigned int)a6 )
        {
          v42 = v22;
          goto LABEL_83;
        }
LABEL_71:
        v35 = *v24 == -4096;
        *(_DWORD *)(a2 + 8) = v11;
        if ( !v35 )
          --*(_DWORD *)(a2 + 12);
        *v24 = v10;
        sub_AEADE0(v60, v24, (_QWORD *)(a5 + 8 * v22), a2, 1);
        v38 = *(unsigned int *)(a2 + 32);
        a4 = *(unsigned int *)(a2 + 36);
        v39 = v59;
        if ( v38 + 1 > a4 )
        {
          sub_2237220(v56, v55, v38 + 1, 8);
          v38 = *(unsigned int *)(a2 + 32);
        }
        a3 = *(_QWORD *)(a2 + 24);
        ++v7;
        *(_QWORD *)(a3 + 8 * v38) = v39;
        ++*(_DWORD *)(a2 + 32);
        if ( v8 == v7 )
          goto LABEL_24;
      }
      else
      {
        while ( 1 )
        {
          if ( v25 == -8192 && !v37 )
            v37 = v24;
          v23 = (v22 - 1) & (v36 + v23);
          v24 = (__int64 *)(a5 + 8LL * v23);
          v25 = *v24;
          if ( v10 == *v24 )
            break;
          if ( v25 == -4096 )
          {
            if ( v37 )
              v24 = v37;
            goto LABEL_69;
          }
          ++v36;
        }
LABEL_39:
        sub_AEADE0(v60, v24, (_QWORD *)(a5 + 8 * v22), a2, 1);
        if ( v8 == ++v7 )
          goto LABEL_24;
      }
    }
    v60[0].m128_u64[0] = 0;
LABEL_82:
    v42 = 2 * v22;
LABEL_83:
    sub_17ECD90(a2, v42, v11, v22, a5, a6);
    sub_17AC700((__int64 *)a2, &v59, v60);
    v10 = v59;
    a5 = *(_QWORD *)a2;
    v22 = *(unsigned int *)(a2 + 16);
    LODWORD(v11) = *(_DWORD *)(a2 + 8) + 1;
    v24 = (__int64 *)v60[0].m128_u64[0];
    goto LABEL_71;
  }
LABEL_24:
  v16 = *(_DWORD *)(a1 + 9032);
  if ( !v16 )
  {
    result = *(unsigned int *)(a1 + 9036);
    if ( !(_DWORD)result )
      goto LABEL_32;
    v19 = *(char **)(a1 + 9024);
    v26 = *(unsigned int *)(a1 + 9040);
    v20 = 8 * v26;
    if ( (unsigned int)v26 > 0x40 )
    {
      result = operator delete(v19, v20, 8);
      *(_QWORD *)(a1 + 9024) = 0;
      *(_QWORD *)(a1 + 9032) = 0;
      *(_DWORD *)(a1 + 9040) = 0;
      goto LABEL_32;
    }
    goto LABEL_29;
  }
  v17 = 4 * v16;
  v18 = *(unsigned int *)(a1 + 9040);
  v19 = *(char **)(a1 + 9024);
  if ( (unsigned int)(4 * v16) < 0x40 )
    v17 = 64;
  if ( v17 >= (unsigned int)v18 )
  {
    v20 = 8 * v18;
LABEL_29:
    result = (__int64)&v19[v20];
    if ( v19 != &v19[v20] )
      result = (__int64)memset(v19, 255, v20);
    *(_QWORD *)(a1 + 9032) = 0;
    goto LABEL_32;
  }
  v43 = v16 - 1;
  if ( v43 )
  {
    _BitScanReverse(&v43, v43);
    v44 = 1 << (33 - (v43 ^ 0x1F));
    if ( v44 < 64 )
      v44 = 64;
    if ( (_DWORD)v18 == v44 )
    {
      *(_QWORD *)(a1 + 9032) = 0;
      result = (__int64)memset(v19, 255, 8LL * (unsigned int)v18);
      goto LABEL_32;
    }
    v53 = 4 * v44 / 3u;
    v54 = (((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1) | (((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1)) >> 2)) >> 4)
        | (v53 + 1)
        | ((unsigned __int64)(v53 + 1) >> 1)
        | (((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1)) >> 2)
        | (((((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1) | (((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1)) >> 2)) >> 4)
          | (v53 + 1)
          | ((unsigned __int64)(v53 + 1) >> 1)
          | (((v53 + 1) | ((unsigned __int64)(v53 + 1) >> 1)) >> 2)) >> 8);
    v46 = (v54 | (v54 >> 16)) + 1;
    v45 = 8 * ((v54 | (v54 >> 16)) + 1);
  }
  else
  {
    v45 = 1024;
    v46 = 128;
  }
  operator delete(v19, 8 * v18, 8);
  *(_DWORD *)(a1 + 9040) = v46;
  result = sub_22300B0(v45, 8, v47, v48, v49, v50);
  v51 = *(unsigned int *)(a1 + 9040);
  *(_QWORD *)(a1 + 9032) = 0;
  *(_QWORD *)(a1 + 9024) = result;
  v52 = 8 * v51;
  if ( result != result + v52 )
    result = (__int64)memset((void *)result, 255, v52);
LABEL_32:
  *(_DWORD *)(a1 + 9056) = 0;
  return result;
}
