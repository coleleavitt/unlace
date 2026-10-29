__int64 __fastcall sub_13AEEC0(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int *v7; // rdx
  int v8; // r8d
  unsigned int *v9; // r15
  int v11; // r14d
  unsigned int v12; // ebp
  __int64 v13; // r13
  _DWORD *v14; // rax
  unsigned __int64 v15; // r13
  unsigned int v16; // ebp
  __int64 v17; // r12
  _DWORD *v18; // rax
  unsigned int v19; // ebp
  unsigned __int64 v20; // r12
  const char *v21; // r14
  __int64 v22; // rdi
  _QWORD *v23; // rdx
  size_t v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r14
  _BYTE *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // r13
  _BYTE *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r13
  _BYTE *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  _WORD *v40; // rdx
  char v41; // dl
  char v42; // dl
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // r8
  unsigned __int64 v46; // r8
  __int64 v47; // rax
  _QWORD *v48; // r9
  __int64 *v49; // rdi
  __int64 v50; // rcx
  _DWORD *v51; // rax
  _DWORD *v52; // rdx
  __int64 *v53; // rdi
  __int64 v54; // rcx
  _DWORD *v55; // rax
  _DWORD *v56; // rdx
  unsigned int v58; // [rsp+8h] [rbp-98h]
  _QWORD *v59; // [rsp+8h] [rbp-98h]
  unsigned int v60; // [rsp+10h] [rbp-90h]
  __int64 v61; // [rsp+10h] [rbp-90h]
  unsigned __int64 v62; // [rsp+18h] [rbp-88h]
  unsigned __int64 v63; // [rsp+20h] [rbp-80h]
  __int64 v64; // [rsp+30h] [rbp-70h]
  _QWORD *v65; // [rsp+40h] [rbp-60h]
  char *s[11]; // [rsp+48h] [rbp-58h] BYREF

  result = a1[2];
  if ( (*(_BYTE *)(result + 1) & 0x10) != 0 )
  {
    v7 = &a2[16 * a3];
    if ( a2 != v7 )
    {
      result = *a2;
      if ( (_DWORD)result )
      {
        if ( (int)a2[1] > 0 && (int)result >= 0 )
        {
          result = (__int64)(a2 + 16);
          while ( v7 != (unsigned int *)result )
          {
            v8 = *(_DWORD *)result;
            if ( *(_DWORD *)result )
            {
              a6 = *(unsigned int *)(result + 4);
              if ( (int)a6 > 0 )
              {
                result += 64;
                if ( v8 >= 0 )
                  continue;
              }
            }
            return result;
          }
          v9 = a2;
          v64 = result;
          while ( 1 )
          {
            v11 = *v9;
            v60 = v9[1];
            v12 = *v9 & 0x7FFFFFFF;
            if ( v12 < *(_DWORD *)(a4 + 476) || v12 >= *(_DWORD *)(a4 + 480) )
              v13 = (unsigned int)sub_101D590(a4, v12);
            else
              v13 = *(unsigned int *)(a4 + 472);
            LOBYTE(s[0]) = 0;
            if ( (unsigned int)(v13 + 1) <= 1 )
            {
LABEL_56:
              v58 = 0;
              v13 = 0;
              goto LABEL_21;
            }
            if ( (int)v13 >= 0 )
            {
              v14 = (_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL * (unsigned int)v13);
              goto LABEL_19;
            }
            v43 = (unsigned int)(-2 - v13);
            v44 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - v13) >> 6));
            if ( _bittest64(&v44, v43) )
            {
              v45 = (_QWORD *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v43 >> 5));
              if ( *v45 )
              {
                v14 = (_DWORD *)(*v45 + 24LL * ((-2 - (_BYTE)v13) & 0x1F));
                goto LABEL_19;
              }
              v49 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
              v50 = *v49;
              v49[10] += 768;
              v51 = (_DWORD *)((v50 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v49[1] >= (unsigned __int64)(v51 + 192) && v50 )
              {
                *v49 = (__int64)(v51 + 192);
              }
              else
              {
                v59 = v45;
                v51 = (_DWORD *)sub_986170((__int64)v49, 768, 768, 3, (__int64)v45, a6);
                v45 = v59;
              }
              *v45 = v51;
              v52 = v51 + 192;
              do
              {
                *v51 = 0;
                v51 += 6;
                *((_OWORD *)v51 - 1) = 0;
                *((_QWORD *)v51 - 1) = 0;
              }
              while ( v51 != v52 );
              v42 = (char)s[0];
              v14 = (_DWORD *)(*v45 + 24LL * ((-2 - (_BYTE)v13) & 0x1F));
            }
            else
            {
              v14 = (_DWORD *)sub_101F930(a4, v43, s);
              v42 = (char)s[0];
            }
            if ( v42 )
              goto LABEL_56;
LABEL_19:
            if ( !v14 )
              goto LABEL_56;
            v58 = v12 - (*v14 & 0x7FFFFFFF);
LABEL_21:
            v15 = v62 & 0xFFFFFFFF00000000LL | v13;
            v62 = v15;
            v16 = v60 & 0x7FFFFFFF;
            if ( (v60 & 0x7FFFFFFF) < *(_DWORD *)(a4 + 476) || v16 >= *(_DWORD *)(a4 + 480) )
              v17 = (unsigned int)sub_101D590(a4, v16);
            else
              v17 = *(unsigned int *)(a4 + 472);
            LOBYTE(s[0]) = 0;
            if ( (unsigned int)(v17 + 1) <= 1 )
              goto LABEL_53;
            if ( (int)v17 < 0 )
            {
              v46 = (unsigned int)(-2 - v17);
              v47 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - v17) >> 6));
              if ( !_bittest64(&v47, v46) )
              {
                v18 = (_DWORD *)sub_101F930(a4, v46, s);
                v41 = (char)s[0];
                goto LABEL_52;
              }
              v48 = (_QWORD *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v46 >> 5));
              if ( !*v48 )
              {
                v53 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
                v54 = *v53;
                v53[10] += 768;
                v55 = (_DWORD *)((v54 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v53[1] >= (unsigned __int64)(v55 + 192) && v54 )
                {
                  *v53 = (__int64)(v55 + 192);
                }
                else
                {
                  v65 = v48;
                  v55 = (_DWORD *)sub_986170((__int64)v53, 768, 768, 3, v46, (__int64)v48);
                  v48 = v65;
                  LOBYTE(v46) = -2 - v17;
                }
                *v48 = v55;
                v56 = v55 + 192;
                do
                {
                  *v55 = 0;
                  v55 += 6;
                  *((_OWORD *)v55 - 1) = 0;
                  *((_QWORD *)v55 - 1) = 0;
                }
                while ( v55 != v56 );
                v41 = (char)s[0];
                v18 = (_DWORD *)(*v48 + 24 * (v46 & 0x1F));
LABEL_52:
                if ( v41 )
                  goto LABEL_53;
                goto LABEL_27;
              }
              v18 = (_DWORD *)(*v48 + 24LL * ((-2 - (_BYTE)v17) & 0x1F));
            }
            else
            {
              v18 = (_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL * (unsigned int)v17);
            }
LABEL_27:
            if ( v18 )
            {
              v19 = v16 - (*v18 & 0x7FFFFFFF);
              goto LABEL_29;
            }
LABEL_53:
            v19 = 0;
            v17 = 0;
LABEL_29:
            v20 = v63 & 0xFFFFFFFF00000000LL | v17;
            v63 = v20;
            if ( *((_BYTE *)v9 + 8) )
              v19 += sub_13DC0F0(v60, a4, a1[1]);
            result = sub_1022900((__int64)s, (__int64 *)a4, v11, 1);
            v21 = s[0];
            if ( !s[0] )
              return result;
            v22 = a1[5];
            v23 = *(_QWORD **)(v22 + 32);
            if ( *(_QWORD *)(v22 + 24) - (_QWORD)v23 > 7u )
            {
              *v23 = 0x223A74692D786966LL;
              *(_QWORD *)(v22 + 32) += 8LL;
            }
            else
            {
              sub_227BF10(v22, "fix-it:\"", 8);
            }
            v61 = a1[5];
            v24 = strlen(v21);
            sub_227BA90(v61, v21, v24, 0);
            v25 = a1[5];
            v26 = *(_QWORD *)(v25 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v25 + 24) - v26) > 2 )
            {
              *(_BYTE *)(v26 + 2) = 123;
              *(_WORD *)v26 = 14882;
              *(_QWORD *)(v25 + 32) += 3LL;
            }
            else
            {
              v25 = sub_227BF10(a1[5], "\":{", 3);
            }
            v27 = sub_1022630(a4, v15, v58, nullptr);
            v28 = sub_227B910(v25, v27);
            v29 = *(_BYTE **)(v28 + 32);
            if ( (unsigned __int64)v29 >= *(_QWORD *)(v28 + 24) )
            {
              v28 = sub_227BA10(v28, 58);
            }
            else
            {
              *(_QWORD *)(v28 + 32) = v29 + 1;
              *v29 = 58;
            }
            v30 = sub_1020110(a4, v15, v58, nullptr);
            v31 = sub_227B910(v28, v30);
            v32 = *(_BYTE **)(v31 + 32);
            if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
            {
              v31 = sub_227BA10(v31, 45);
            }
            else
            {
              *(_QWORD *)(v31 + 32) = v32 + 1;
              *v32 = 45;
            }
            v33 = sub_1022630(a4, v20, v19, nullptr);
            v34 = sub_227B910(v31, v33);
            v35 = *(_BYTE **)(v34 + 32);
            if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
            {
              v34 = sub_227BA10(v34, 58);
            }
            else
            {
              *(_QWORD *)(v34 + 32) = v35 + 1;
              *v35 = 58;
            }
            v36 = sub_1020110(a4, v20, v19, nullptr);
            v37 = sub_227B910(v34, v36);
            v38 = *(_QWORD *)(v37 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v37 + 24) - v38) > 2 )
            {
              *(_BYTE *)(v38 + 2) = 34;
              *(_WORD *)v38 = 14973;
              *(_QWORD *)(v37 + 32) += 3LL;
            }
            else
            {
              sub_227BF10(v37, "}:\"", 3);
            }
            sub_227BA90(a1[5], *((_QWORD *)v9 + 3), *((_QWORD *)v9 + 4), 0);
            v39 = a1[5];
            v40 = *(_WORD **)(v39 + 32);
            if ( *(_QWORD *)(v39 + 24) - (_QWORD)v40 > 1u )
            {
              result = 2594;
              v9 += 16;
              *v40 = 2594;
              *(_QWORD *)(v39 + 32) += 2LL;
              if ( (unsigned int *)v64 == v9 )
                return result;
            }
            else
            {
              v9 += 16;
              result = sub_227BF10(v39, "\"\n", 2);
              if ( (unsigned int *)v64 == v9 )
                return result;
            }
          }
        }
      }
    }
  }
  return result;
}
