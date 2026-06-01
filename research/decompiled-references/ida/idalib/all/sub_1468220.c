__int64 __fastcall sub_1468220(__int64 a1, int a2, unsigned int *a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  unsigned int *v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 result; // rax
  __int64 v10; // r12
  unsigned int v11; // ebp
  signed __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // r15
  __int64 v15; // r10
  int v16; // eax
  int *v17; // r14
  __int64 v18; // r15
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  int *v22; // r8
  int *v23; // r15
  unsigned int v24; // esi
  int v25; // r14d
  unsigned int v26; // eax
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  char v36; // dl
  int *i; // rdx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int *v41; // rdx
  _QWORD *v42; // r8
  unsigned int v43; // esi
  int *v44; // rax
  unsigned int v45; // ecx
  int *v46; // rsi
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // ecx
  __int64 *v51; // rdi
  __int64 v52; // rcx
  _DWORD *v53; // rax
  _DWORD *v54; // rdx
  unsigned __int64 v55; // rcx
  int v57; // [rsp+14h] [rbp-74h]
  char *v58; // [rsp+18h] [rbp-70h]
  __int64 v59; // [rsp+20h] [rbp-68h]
  __int64 v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+20h] [rbp-68h]
  __int64 v63; // [rsp+30h] [rbp-58h]
  __int64 v64; // [rsp+30h] [rbp-58h]
  _QWORD *v65; // [rsp+38h] [rbp-50h]
  _BYTE v66[57]; // [rsp+4Fh] [rbp-39h] BYREF

  v4 = a2 & 0x7FFFFFFF;
  v5 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  v7 = *(_DWORD *)(a1 + 56) & 0x7FFFFFFF;
  if ( v4 >= v7 + *(_DWORD *)(a1 + 60) || v4 < v7 )
    v8 = 0;
  else
    v8 = v4 - v7;
  result = a4;
  v57 = *(_DWORD *)(a1 + 48) + v8;
  if ( a4 > (unsigned __int64)a3 )
  {
    v10 = a4 - (_QWORD)a3;
    if ( a4 - (_QWORD)a3 != 24 )
    {
      while ( 1 )
      {
        v11 = *v5;
        v58 = (char *)v5 + v10;
        v12 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
        v13 = *v5;
        v14 = v12;
        v15 = v12 >> 2;
        if ( (*v5 & 0x80000000) == 0 )
        {
          if ( v15 > 0 )
          {
            v16 = v5[6];
            v17 = (int *)(v5 + 6);
            v18 = (__int64)v5;
            if ( v16 < 0 || v16 - v11 > 0x32 )
              goto LABEL_11;
            for ( i = (int *)v5; ; i = v17 )
            {
              v38 = i[12];
              v17 = i + 12;
              if ( v38 < 0 )
                break;
              if ( (unsigned int)(v38 - v16) > 0x32 )
                break;
              v39 = i[18];
              v17 = i + 18;
              if ( v39 < 0 || (unsigned int)(v39 - v38) > 0x32 )
                break;
              v17 = i + 24;
              if ( !--v15 )
              {
                v55 = 0xAAAAAAAAAAAAAAABLL * ((v58 - (char *)v17) >> 3);
                switch ( v55 )
                {
                  case 2uLL:
                    v13 = i[24];
                    v50 = v39;
                    v39 = v13;
                    goto LABEL_98;
                  case 3uLL:
                    v50 = i[24];
                    v13 = v50;
                    goto LABEL_95;
                  case 1uLL:
                    goto LABEL_101;
                }
                goto LABEL_80;
              }
              v40 = i[24];
              if ( v40 < 0 || (unsigned int)(v40 - v39) > 0x32 )
                goto LABEL_70;
              v16 = i[30];
              v41 = i + 30;
              if ( v16 < 0 || (unsigned int)(v16 - v40) > 0x32 )
              {
                v18 = (__int64)(v41 - 6);
                v17 = v41;
                goto LABEL_11;
              }
            }
            goto LABEL_70;
          }
          switch ( v12 )
          {
            case 2LL:
              v39 = *v5;
              v50 = *v5;
              v17 = (int *)v5;
LABEL_98:
              if ( v13 >= 0 && (unsigned int)(v39 - v50) <= 0x32 )
              {
                v17 += 6;
LABEL_101:
                if ( *v17 >= 0 && (unsigned int)(*v17 - v39) <= 0x32 )
                  goto LABEL_80;
              }
              goto LABEL_70;
            case 3LL:
              v50 = *v5;
              v39 = *v5;
              v17 = (int *)v5;
LABEL_95:
              if ( v13 >= 0 && (unsigned int)(v50 - v39) <= 0x32 )
              {
                v39 = v17[6];
                v17 += 6;
                v13 = v39;
                goto LABEL_98;
              }
LABEL_70:
              v18 = (__int64)(v17 - 6);
              goto LABEL_11;
            case 1LL:
              goto LABEL_80;
          }
          v17 = (int *)((char *)v5 + v10);
          v18 = (__int64)v5 + v10 - 24;
          goto LABEL_11;
        }
        v24 = v11 & 0x7FFFFFFF;
        if ( (v11 & 0x7FFFFFFF) < *(_DWORD *)(v6 + 476) || v24 >= *(_DWORD *)(v6 + 480) )
        {
          v60 = v12 >> 2;
          v33 = sub_101D590(v6, v24);
          v15 = v60;
          v25 = v33;
        }
        else
        {
          v25 = *(_DWORD *)(v6 + 472);
        }
        v59 = v15;
        v26 = sub_101FBC0(v6, v25);
        v66[0] = 0;
        v27 = v59;
        v28 = v26;
        if ( (unsigned int)(v25 + 1) <= 1 )
          goto LABEL_43;
        if ( v25 < 0 )
        {
          v34 = (unsigned int)(-2 - v25);
          v35 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)v34 >> 6));
          if ( !_bittest64(&v35, v34) )
          {
            v63 = v59;
            v61 = v28;
            v29 = sub_101F930(v6, v34, v66);
            v36 = v66[0];
            LODWORD(v28) = v61;
            v27 = v63;
            goto LABEL_42;
          }
          v42 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v34 >> 5));
          if ( !*v42 )
          {
            v51 = (__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL);
            v52 = *v51;
            v51[10] += 768;
            v53 = (_DWORD *)((v52 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v51[1] >= (unsigned __int64)(v53 + 192) && v52 )
            {
              *v51 = (__int64)(v53 + 192);
            }
            else
            {
              v65 = v42;
              v64 = v59;
              v62 = v28;
              v53 = (_DWORD *)sub_986170((__int64)v51, 768, 768, 3, (__int64)v42, v28);
              v42 = v65;
              v27 = v64;
              LODWORD(v28) = v62;
            }
            *v42 = v53;
            v54 = v53 + 192;
            do
            {
              *v53 = 0;
              v53 += 6;
              *((_OWORD *)v53 - 1) = 0;
              *((_QWORD *)v53 - 1) = 0;
            }
            while ( v53 != v54 );
            v36 = v66[0];
            v29 = *v42 + 24 * (v34 & 0x1F);
LABEL_42:
            if ( v36 )
              goto LABEL_43;
            goto LABEL_28;
          }
          v29 = *v42 + 24 * (v34 & 0x1F);
        }
        else
        {
          v29 = *(_QWORD *)(v6 + 184) + 24LL * (unsigned int)v25;
        }
LABEL_28:
        if ( v29 )
        {
          v30 = v28 + (*(_DWORD *)v29 & 0x7FFFFFFF);
          if ( *(char *)(v29 + 3) < 0 )
            v30 |= 0x80000000;
          goto LABEL_31;
        }
LABEL_43:
        v30 = 0;
LABEL_31:
        if ( v27 <= 0 )
        {
          v45 = v11;
          v17 = (int *)v5;
LABEL_77:
          if ( v14 != 2 )
          {
            if ( v14 != 3 )
            {
              if ( v14 != 1 )
                goto LABEL_80;
              goto LABEL_90;
            }
            v47 = *v17;
            if ( v11 > *v17 || v47 > v30 || v47 - v45 > 0x32 )
              goto LABEL_70;
            v17 += 6;
            v45 = v47;
          }
          v48 = *v17;
          if ( v11 > *v17 || v48 > v30 || v48 - v45 > 0x32 )
            goto LABEL_70;
          v17 += 6;
          v45 = v48;
LABEL_90:
          v49 = *v17;
          if ( v11 <= *v17 && v49 <= v30 )
          {
            v18 = (__int64)(v17 - 6);
            if ( v49 - v45 > 0x32 )
              goto LABEL_11;
LABEL_80:
            v18 = (__int64)v5 + v10 - 24;
            v17 = (int *)((char *)v5 + v10);
            goto LABEL_11;
          }
          goto LABEL_70;
        }
        v31 = *v5;
        if ( v11 > *v5 || v31 > v30 || v31 - v11 > 0x32 )
        {
          v18 = (__int64)(v5 - 6);
          v17 = (int *)v5;
        }
        else
        {
          v32 = v5[6];
          v17 = (int *)(v5 + 6);
          if ( v11 <= v32 && v32 <= v30 )
          {
            while ( v32 - v31 <= 0x32 )
            {
              v43 = v17[6];
              v44 = v17 + 6;
              if ( v43 > v30
                || v11 > v43
                || v43 - v32 > 0x32
                || (v45 = v17[12], v44 = v17 + 12, v45 > v30)
                || v11 > v45
                || v45 - v43 > 0x32 )
              {
                v18 = (__int64)(v44 - 6);
                v17 = v44;
                goto LABEL_11;
              }
              v46 = v17 + 18;
              if ( !--v27 )
              {
                v17 += 18;
                v14 = 0xAAAAAAAAAAAAAAABLL * ((v58 - (char *)v46) >> 3);
                goto LABEL_77;
              }
              v31 = v17[18];
              if ( v11 > v31 || v31 > v30 || v31 - v45 > 0x32 )
              {
                v18 = (__int64)(v17 + 12);
                v17 += 18;
                goto LABEL_11;
              }
              v17 += 24;
              v32 = *v17;
              if ( *v17 > v30 || v11 > v32 )
                goto LABEL_70;
            }
            goto LABEL_70;
          }
          v18 = (__int64)v5;
        }
LABEL_11:
        v19 = sub_10CCDE0(*(_WORD *)(v18 + 16));
        v20 = *(_DWORD *)(v18 + 4);
        if ( v19 )
        {
          if ( !v20 )
            v20 = *(_DWORD *)v18;
        }
        else
        {
          v20 += *(_DWORD *)v18;
        }
        v21 = sub_1021080(v6, v11, v57, v20 - *v5);
        v22 = (int *)v5;
        result = v21 - v11;
        if ( v5 != (unsigned int *)v17 )
        {
          do
          {
            *v22 += result;
            v22 += 6;
          }
          while ( v17 != v22 );
        }
        if ( a4 <= (unsigned __int64)v17 )
          return result;
        v5 = (unsigned int *)v17;
        v10 = a4 - (_QWORD)v17;
        if ( a4 - (_QWORD)v17 == 24 )
        {
          v23 = v17;
          goto LABEL_19;
        }
      }
    }
    v23 = (int *)a3;
LABEL_19:
    result = sub_1021080(v6, *v23, v57, v23[1]);
    *v23 = result;
  }
  return result;
}
