void __fastcall sub_1EE1CA0(__int64 *a1, unsigned __int64 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // edx
  unsigned __int64 *v6; // rbp
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // r15
  __int64 *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r13
  __int64 *v23; // rbp
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 *v26; // rsi
  __int64 v27; // r8
  unsigned int v28; // r10d
  __int64 v29; // rdi
  int v30; // r10d
  __int64 v31; // r8
  unsigned int v32; // r10d
  __int64 v33; // r8
  __int64 *v34; // rbx
  __int64 *v35; // r9
  __int64 *v36; // rbx
  __int64 v37; // [rsp+0h] [rbp-98h]
  __int64 v38; // [rsp+8h] [rbp-90h]
  __int64 *v39; // [rsp+18h] [rbp-80h]
  unsigned __int64 v40; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v41; // [rsp+20h] [rbp-78h]
  int v42; // [rsp+2Ch] [rbp-6Ch]
  int v43; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  __m128 v45; // [rsp+40h] [rbp-58h] BYREF
  char v46; // [rsp+50h] [rbp-48h]

  v4 = a3 >> 3;
  if ( v4 )
  {
    v6 = a2;
    v7 = a4;
    v37 = (__int64)(a4 + 1);
    v38 = (__int64)&a2[v4];
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *v6++;
        v44 = sub_1EE1310(*a1, a1[1], v8);
        if ( !*((_DWORD *)v7 + 4) )
        {
          v12 = *(unsigned int *)(*v7 + 8);
          if ( (_DWORD)v12 )
            break;
        }
LABEL_18:
        sub_1EDEA30((__m128i *)&v45, v37, (__int64)&v44, v9, v10, v11);
        if ( v46 )
        {
          v19 = *v7;
          v20 = v44;
          v21 = *(unsigned int *)(*v7 + 8);
          if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(*v7 + 12) )
          {
            v40 = v44;
            sub_2237220(*v7, v19 + 16, v21 + 1, 8);
            v21 = *(unsigned int *)(v19 + 8);
            v20 = v40;
          }
          *(_QWORD *)(*(_QWORD *)v19 + 8 * v21) = v20;
          ++*(_DWORD *)(v19 + 8);
          if ( v6 == (unsigned __int64 *)v38 )
            return;
        }
        else
        {
LABEL_16:
          if ( v6 == (unsigned __int64 *)v38 )
            return;
        }
      }
      v13 = v7[1];
      v14 = *((unsigned int *)v7 + 6);
      if ( (unsigned int)v12 > 4 )
        break;
      sub_1ECF950(&v45, (__int64 *)(v13 + 8 * v14), (__int64 *)(v13 + 8 * v14), v37, 1);
      v15 = v45.m128_u64[1];
      v16 = (_QWORD *)v45.m128_u64[0];
      v17 = (__int64 *)(v7[1] + 8LL * *((unsigned int *)v7 + 6));
      sub_1ECF950(&v45, v17, v17, v37, 1);
      if ( (_QWORD *)v45.m128_u64[0] != v16 )
      {
        if ( *v16 != v44 )
        {
          while ( 1 )
          {
            if ( v16 + 1 != (_QWORD *)v15 )
            {
              if ( v16[1] < 0xFFFFFFFFFFFFFFFELL )
              {
                ++v16;
                goto LABEL_14;
              }
              v18 = v16 + 2;
              while ( 1 )
              {
                v16 = v18;
                if ( v18 == (_QWORD *)v15 )
                  break;
                ++v18;
                if ( *v16 < 0xFFFFFFFFFFFFFFFELL )
                  goto LABEL_14;
              }
            }
            v16 = (_QWORD *)v15;
LABEL_14:
            if ( (_QWORD *)v45.m128_u64[0] == v16 )
              goto LABEL_38;
            if ( *v16 == v44 )
              goto LABEL_16;
          }
        }
        goto LABEL_16;
      }
LABEL_38:
      sub_1EADF30(*v7, v44);
      if ( v6 == (unsigned __int64 *)v38 )
        return;
    }
    v39 = a1;
    v22 = v7;
    v41 = v6;
    v23 = *(__int64 **)*v7;
    v24 = &v23[v12];
    while ( 1 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_28;
      LODWORD(v25) = (v14 - 1) & (((0xBF58476D1CE4E5B9LL * *v23) >> 31) ^ (484763065 * *(_DWORD *)v23));
      v26 = (__int64 *)(v13 + 8LL * (unsigned int)v25);
      v27 = *v26;
      if ( *v23 == *v26 )
        goto LABEL_25;
      v30 = 1;
      v11 = 0;
      if ( v27 != -1 )
      {
        while ( 1 )
        {
          if ( !v11 && v27 == -2 )
            v11 = (__int64)v26;
          v25 = ((_DWORD)v14 - 1) & (unsigned int)(v25 + v30);
          v26 = (__int64 *)(v13 + 8 * v25);
          v27 = *v26;
          if ( *v23 == *v26 )
            goto LABEL_25;
          if ( v27 == -1 )
            break;
          ++v30;
        }
        if ( v11 )
          v26 = (__int64 *)v11;
      }
      v12 = (unsigned int)(*((_DWORD *)v22 + 4) + 1);
      v10 = (unsigned int)(4 * v12);
      if ( (unsigned int)v10 < 3 * (int)v14 )
      {
        v31 = (unsigned int)(v14 - (v12 + *((_DWORD *)v22 + 5)));
        if ( (unsigned int)v31 > (unsigned int)v14 >> 3 )
        {
LABEL_37:
          v29 = *v26;
          goto LABEL_30;
        }
        sub_1EDE830(v37, v14, v12, v13, v31, v11);
        v14 = *((unsigned int *)v22 + 6);
        if ( !(_DWORD)v14 )
        {
LABEL_73:
          ++*((_DWORD *)v22 + 4);
          BUG();
        }
        v29 = *v23;
        v13 = v22[1];
        v32 = (v14 - 1) & (((0xBF58476D1CE4E5B9LL * *v23) >> 31) ^ (484763065 * *(_DWORD *)v23));
        v26 = (__int64 *)(v13 + 8LL * v32);
        LODWORD(v12) = *((_DWORD *)v22 + 4) + 1;
        v33 = *v26;
        if ( *v26 == *v23 )
          goto LABEL_30;
        if ( v33 != -1 )
        {
          v42 = 1;
          v34 = nullptr;
          while ( 1 )
          {
            if ( v34 || v33 != -2 )
              v26 = v34;
            v32 = (v14 - 1) & (v42 + v32);
            v35 = (__int64 *)(v13 + 8LL * v32);
            v33 = *v35;
            if ( v29 == *v35 )
              break;
            if ( v33 == -1 )
            {
LABEL_66:
              if ( v26 )
                goto LABEL_37;
              v26 = v35;
              goto LABEL_60;
            }
            ++v42;
            v34 = v26;
            v26 = (__int64 *)(v13 + 8LL * v32);
          }
LABEL_47:
          v26 = v35;
LABEL_30:
          *((_DWORD *)v22 + 4) = v12;
          if ( v29 != -1 )
            --*((_DWORD *)v22 + 5);
          goto LABEL_32;
        }
      }
      else
      {
LABEL_28:
        sub_1EDE830(v37, 2 * v14, v12, v13, v10, v11);
        v14 = *((unsigned int *)v22 + 6);
        if ( !(_DWORD)v14 )
          goto LABEL_73;
        v13 = v22[1];
        v28 = (v14 - 1) & (((0xBF58476D1CE4E5B9LL * *v23) >> 31) ^ (484763065 * *(_DWORD *)v23));
        v26 = (__int64 *)(v13 + 8LL * v28);
        LODWORD(v12) = *((_DWORD *)v22 + 4) + 1;
        v29 = *v26;
        if ( *v23 == *v26 )
          goto LABEL_30;
        if ( v29 != -1 )
        {
          v43 = 1;
          v36 = nullptr;
          while ( 1 )
          {
            if ( v29 != -2 || v36 )
              v26 = v36;
            v28 = (v14 - 1) & (v43 + v28);
            v35 = (__int64 *)(v13 + 8LL * v28);
            v29 = *v35;
            if ( *v23 == *v35 )
              goto LABEL_47;
            if ( v29 == -1 )
              goto LABEL_66;
            ++v43;
            v36 = v26;
            v26 = (__int64 *)(v13 + 8LL * v28);
          }
        }
      }
LABEL_60:
      *((_DWORD *)v22 + 4) = v12;
LABEL_32:
      *v26 = *v23;
LABEL_25:
      sub_1ECF950(&v45, v26, (__int64 *)(v13 + 8 * v14), v37, 1);
      if ( v24 == ++v23 )
      {
        v7 = v22;
        v6 = v41;
        a1 = v39;
        goto LABEL_18;
      }
      v13 = v22[1];
      v14 = *((unsigned int *)v22 + 6);
    }
  }
}
