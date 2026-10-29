void __fastcall sub_1372050(char *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // r9d
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 *v29; // rbp
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // r8
  unsigned __int64 *v32; // r13
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r9d
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r12
  unsigned __int64 v51; // rcx
  __int64 v52; // rax

  v4 = (char *)a2 - a1;
  if ( (char *)a2 - a1 > 128 )
  {
    v6 = (unsigned __int64 *)(a1 + 8);
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = *((_QWORD *)a1 + 1);
        --a3;
        v8 = (unsigned __int64 *)&a1[8 * (v4 >> 4)];
        v9 = v7;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( !v10 )
            break;
          v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v10 & 4) == 0 || !v9 )
            goto LABEL_7;
        }
        v9 = 0;
LABEL_7:
        v11 = *v8;
        v12 = *(_DWORD *)(v9 + 72);
        v13 = *v8;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( !v14 )
            break;
          v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v14 & 4) == 0 || !v13 )
            goto LABEL_11;
        }
        v13 = 0;
LABEL_11:
        if ( v12 >= *(_DWORD *)(v13 + 72) )
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v7 + 8);
            if ( !v21 )
              break;
            v7 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v21 & 4) == 0 || !v7 )
              goto LABEL_24;
          }
          v7 = 0;
LABEL_24:
          v22 = *(a2 - 1);
          v23 = *(_DWORD *)(v7 + 72);
          v24 = v22;
          while ( 1 )
          {
            v25 = *(_QWORD *)(v24 + 8);
            if ( !v25 )
              break;
            v24 = v25 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v25 & 4) == 0 || !v24 )
              goto LABEL_28;
          }
          v24 = 0;
LABEL_28:
          v26 = *(_QWORD *)a1;
          if ( v23 >= *(_DWORD *)(v24 + 72) )
          {
            while ( 1 )
            {
              v43 = *(_QWORD *)(v11 + 8);
              if ( !v43 )
                break;
              v11 = v43 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v43 & 4) == 0 || !v11 )
                goto LABEL_56;
            }
            v11 = 0;
LABEL_56:
            v44 = *(_DWORD *)(v11 + 72);
            while ( 1 )
            {
              v45 = *(_QWORD *)(v22 + 8);
              if ( !v45 )
                break;
              v22 = v45 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v45 & 4) == 0 || !v22 )
              {
                if ( v44 < *(_DWORD *)(v22 + 72) )
                {
                  *(_QWORD *)a1 = *(a2 - 1);
                  *(a2 - 1) = v26;
                  goto LABEL_30;
                }
                break;
              }
            }
            *(_QWORD *)a1 = *v8;
            *v8 = v26;
          }
          else
          {
            v27 = *((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v26;
            *(_QWORD *)a1 = v27;
          }
        }
        else
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(v11 + 8);
            if ( !v15 )
              break;
            v11 = v15 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v15 & 4) == 0 || !v11 )
              goto LABEL_15;
          }
          v11 = 0;
LABEL_15:
          v16 = *(a2 - 1);
          v17 = *(_DWORD *)(v11 + 72);
          v18 = v16;
          while ( 1 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( !v19 )
              break;
            v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v19 & 4) == 0 || !v18 )
              goto LABEL_19;
          }
          v18 = 0;
LABEL_19:
          v20 = *(_QWORD *)a1;
          if ( v17 >= *(_DWORD *)(v18 + 72) )
          {
            while ( 1 )
            {
              v46 = *(_QWORD *)(v7 + 8);
              if ( !v46 )
                break;
              v7 = v46 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v46 & 4) == 0 || !v7 )
                goto LABEL_65;
            }
            v7 = 0;
LABEL_65:
            v47 = *(_DWORD *)(v7 + 72);
            while ( 1 )
            {
              v48 = *(_QWORD *)(v16 + 8);
              if ( !v48 )
                break;
              v16 = v48 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v48 & 4) == 0 || !v16 )
              {
                if ( v47 < *(_DWORD *)(v16 + 72) )
                {
                  *(_QWORD *)a1 = *(a2 - 1);
                  *(a2 - 1) = v20;
                  goto LABEL_30;
                }
                break;
              }
            }
            v52 = *((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20;
            *(_QWORD *)a1 = v52;
          }
          else
          {
            *(_QWORD *)a1 = *v8;
            *v8 = v20;
          }
        }
LABEL_30:
        v28 = *(_QWORD *)a1;
        v29 = v6;
        v30 = a2;
        while ( 1 )
        {
          v31 = *v29;
          v32 = v29;
          v33 = *v29;
          while ( 1 )
          {
            v34 = *(_QWORD *)(v33 + 8);
            if ( !v34 )
              break;
            v33 = v34 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v34 & 4) == 0 || !v33 )
              goto LABEL_35;
          }
          v33 = 0;
LABEL_35:
          v35 = *(_DWORD *)(v33 + 72);
          v36 = v28;
          while ( 1 )
          {
            v37 = *(_QWORD *)(v36 + 8);
            if ( !v37 )
              break;
            v36 = v37 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v37 & 4) == 0 || !v36 )
              goto LABEL_39;
          }
          v36 = 0;
LABEL_39:
          if ( v35 < *(_DWORD *)(v36 + 72) )
            goto LABEL_40;
          do
          {
            --v30;
            v39 = v28;
            while ( 1 )
            {
              v40 = *(_QWORD *)(v39 + 8);
              if ( !v40 )
                break;
              v39 = v40 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v40 & 4) == 0 || !v39 )
                goto LABEL_47;
            }
            v39 = 0;
LABEL_47:
            v41 = *(_DWORD *)(v39 + 72);
            v38 = *v30;
            while ( 1 )
            {
              v42 = *(_QWORD *)(v38 + 8);
              if ( !v42 )
                break;
              v38 = v42 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v42 & 4) == 0 )
                goto LABEL_42;
              if ( !v38 )
                goto LABEL_51;
            }
            v38 = 0;
LABEL_42:
            ;
          }
          while ( v41 < *(_DWORD *)(v38 + 72) );
LABEL_51:
          if ( v29 >= v30 )
            break;
          *v29 = *v30;
          *v30 = v31;
          v28 = *(_QWORD *)a1;
LABEL_40:
          ++v29;
        }
        sub_1372050(v29, a2, a3);
        v4 = (char *)v29 - a1;
        if ( (char *)v29 - a1 <= 128 )
          break;
        a2 = v29;
        if ( !a3 )
          goto LABEL_76;
      }
    }
    else
    {
      v32 = a2;
LABEL_76:
      v49 = v4 >> 3;
      v50 = ((v4 >> 3) - 2) >> 1;
      sub_13719B0((__int64)a1, v50, v4 >> 3, *(_QWORD *)&a1[8 * v50]);
      do
      {
        --v50;
        sub_13719B0((__int64)a1, v50, v49, *(_QWORD *)&a1[8 * v50]);
      }
      while ( v50 );
      do
      {
        v51 = *--v32;
        *v32 = *(_QWORD *)a1;
        sub_13719B0((__int64)a1, 0, ((char *)v32 - a1) >> 3, v51);
      }
      while ( (char *)v32 - a1 > 8 );
    }
  }
}
