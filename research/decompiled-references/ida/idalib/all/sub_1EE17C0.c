void __fastcall sub_1EE17C0(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // ecx
  unsigned __int64 *v7; // rbp
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 *v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // rdx
  __int64 *v27; // rsi
  __int64 v28; // r8
  unsigned int v29; // r10d
  __int64 v30; // rdi
  int v31; // r10d
  __int64 v32; // r8
  unsigned int v33; // r10d
  __int64 v34; // r8
  __int64 *v35; // rbx
  __int64 *v36; // r9
  __int64 *v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+8h] [rbp-90h]
  __int64 *v40; // [rsp+18h] [rbp-80h]
  unsigned __int64 v41; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v42; // [rsp+20h] [rbp-78h]
  int v43; // [rsp+2Ch] [rbp-6Ch]
  int v44; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  __m128 v46; // [rsp+40h] [rbp-58h] BYREF
  char v47; // [rsp+50h] [rbp-48h]

  v5 = a4 >> 3;
  if ( v5 )
  {
    v7 = a3;
    v8 = a5;
    v38 = (__int64)(a5 + 1);
    v39 = (__int64)&a3[v5];
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v7++;
        v45 = sub_1EE1310(*a1, a1[1], v9);
        if ( !*((_DWORD *)v8 + 4) )
        {
          v13 = *(unsigned int *)(*v8 + 8);
          if ( (_DWORD)v13 )
            break;
        }
LABEL_18:
        sub_1EDEA30((__m128i *)&v46, v38, (__int64)&v45, v10, v11, v12);
        if ( v47 )
        {
          v20 = *v8;
          v21 = v45;
          v22 = *(unsigned int *)(*v8 + 8);
          if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(*v8 + 12) )
          {
            v41 = v45;
            sub_2237220(*v8, v20 + 16, v22 + 1, 8);
            v22 = *(unsigned int *)(v20 + 8);
            v21 = v41;
          }
          *(_QWORD *)(*(_QWORD *)v20 + 8 * v22) = v21;
          ++*(_DWORD *)(v20 + 8);
          if ( v7 == (unsigned __int64 *)v39 )
            return;
        }
        else
        {
LABEL_16:
          if ( v7 == (unsigned __int64 *)v39 )
            return;
        }
      }
      v14 = v8[1];
      v15 = *((unsigned int *)v8 + 6);
      if ( (unsigned int)v13 > 4 )
        break;
      sub_1ECF950(&v46, (__int64 *)(v14 + 8 * v15), (__int64 *)(v14 + 8 * v15), v38, 1);
      v16 = v46.m128_u64[1];
      v17 = (_QWORD *)v46.m128_u64[0];
      v18 = (__int64 *)(v8[1] + 8LL * *((unsigned int *)v8 + 6));
      sub_1ECF950(&v46, v18, v18, v38, 1);
      if ( (_QWORD *)v46.m128_u64[0] != v17 )
      {
        if ( *v17 != v45 )
        {
          while ( 1 )
          {
            if ( v17 + 1 != (_QWORD *)v16 )
            {
              if ( v17[1] < 0xFFFFFFFFFFFFFFFELL )
              {
                ++v17;
                goto LABEL_14;
              }
              v19 = v17 + 2;
              while ( 1 )
              {
                v17 = v19;
                if ( v19 == (_QWORD *)v16 )
                  break;
                ++v19;
                if ( *v17 < 0xFFFFFFFFFFFFFFFELL )
                  goto LABEL_14;
              }
            }
            v17 = (_QWORD *)v16;
LABEL_14:
            if ( (_QWORD *)v46.m128_u64[0] == v17 )
              goto LABEL_38;
            if ( *v17 == v45 )
              goto LABEL_16;
          }
        }
        goto LABEL_16;
      }
LABEL_38:
      sub_1EADF30(*v8, v45);
      if ( v7 == (unsigned __int64 *)v39 )
        return;
    }
    v40 = a1;
    v23 = v8;
    v42 = v7;
    v24 = *(__int64 **)*v8;
    v25 = &v24[v13];
    while ( 1 )
    {
      if ( !(_DWORD)v15 )
        goto LABEL_28;
      LODWORD(v26) = (v15 - 1) & (((0xBF58476D1CE4E5B9LL * *v24) >> 31) ^ (484763065 * *(_DWORD *)v24));
      v27 = (__int64 *)(v14 + 8LL * (unsigned int)v26);
      v28 = *v27;
      if ( *v24 == *v27 )
        goto LABEL_25;
      v31 = 1;
      v12 = 0;
      if ( v28 != -1 )
      {
        while ( 1 )
        {
          if ( !v12 && v28 == -2 )
            v12 = (__int64)v27;
          v26 = ((_DWORD)v15 - 1) & (unsigned int)(v26 + v31);
          v27 = (__int64 *)(v14 + 8 * v26);
          v28 = *v27;
          if ( *v24 == *v27 )
            goto LABEL_25;
          if ( v28 == -1 )
            break;
          ++v31;
        }
        if ( v12 )
          v27 = (__int64 *)v12;
      }
      v13 = (unsigned int)(*((_DWORD *)v23 + 4) + 1);
      v11 = (unsigned int)(4 * v13);
      if ( (unsigned int)v11 < 3 * (int)v15 )
      {
        v32 = (unsigned int)(v15 - (v13 + *((_DWORD *)v23 + 5)));
        if ( (unsigned int)v32 > (unsigned int)v15 >> 3 )
        {
LABEL_37:
          v30 = *v27;
          goto LABEL_30;
        }
        sub_1EDE830(v38, v15, v13, v14, v32, v12);
        v15 = *((unsigned int *)v23 + 6);
        if ( !(_DWORD)v15 )
        {
LABEL_73:
          ++*((_DWORD *)v23 + 4);
          BUG();
        }
        v30 = *v24;
        v14 = v23[1];
        v33 = (v15 - 1) & (((0xBF58476D1CE4E5B9LL * *v24) >> 31) ^ (484763065 * *(_DWORD *)v24));
        v27 = (__int64 *)(v14 + 8LL * v33);
        LODWORD(v13) = *((_DWORD *)v23 + 4) + 1;
        v34 = *v27;
        if ( *v27 == *v24 )
          goto LABEL_30;
        if ( v34 != -1 )
        {
          v43 = 1;
          v35 = nullptr;
          while ( 1 )
          {
            if ( v35 || v34 != -2 )
              v27 = v35;
            v33 = (v15 - 1) & (v43 + v33);
            v36 = (__int64 *)(v14 + 8LL * v33);
            v34 = *v36;
            if ( v30 == *v36 )
              break;
            if ( v34 == -1 )
            {
LABEL_66:
              if ( v27 )
                goto LABEL_37;
              v27 = v36;
              goto LABEL_60;
            }
            ++v43;
            v35 = v27;
            v27 = (__int64 *)(v14 + 8LL * v33);
          }
LABEL_47:
          v27 = v36;
LABEL_30:
          *((_DWORD *)v23 + 4) = v13;
          if ( v30 != -1 )
            --*((_DWORD *)v23 + 5);
          goto LABEL_32;
        }
      }
      else
      {
LABEL_28:
        sub_1EDE830(v38, 2 * v15, v13, v14, v11, v12);
        v15 = *((unsigned int *)v23 + 6);
        if ( !(_DWORD)v15 )
          goto LABEL_73;
        v14 = v23[1];
        v29 = (v15 - 1) & (((0xBF58476D1CE4E5B9LL * *v24) >> 31) ^ (484763065 * *(_DWORD *)v24));
        v27 = (__int64 *)(v14 + 8LL * v29);
        LODWORD(v13) = *((_DWORD *)v23 + 4) + 1;
        v30 = *v27;
        if ( *v24 == *v27 )
          goto LABEL_30;
        if ( v30 != -1 )
        {
          v44 = 1;
          v37 = nullptr;
          while ( 1 )
          {
            if ( v30 != -2 || v37 )
              v27 = v37;
            v29 = (v15 - 1) & (v44 + v29);
            v36 = (__int64 *)(v14 + 8LL * v29);
            v30 = *v36;
            if ( *v24 == *v36 )
              goto LABEL_47;
            if ( v30 == -1 )
              goto LABEL_66;
            ++v44;
            v37 = v27;
            v27 = (__int64 *)(v14 + 8LL * v29);
          }
        }
      }
LABEL_60:
      *((_DWORD *)v23 + 4) = v13;
LABEL_32:
      *v27 = *v24;
LABEL_25:
      sub_1ECF950(&v46, v27, (__int64 *)(v14 + 8 * v15), v38, 1);
      if ( v25 == ++v24 )
      {
        v8 = v23;
        v7 = v42;
        a1 = v40;
        goto LABEL_18;
      }
      v14 = v23[1];
      v15 = *((unsigned int *)v23 + 6);
    }
  }
}
