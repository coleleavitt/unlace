__int64 __fastcall sub_212F510(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int8 *v8; // rbp
  _QWORD *v9; // rax
  __m128 v10; // xmm0
  __int64 v11; // r14
  unsigned __int8 v12; // dl
  __int64 v13; // r15
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rsi
  char v17; // al
  unsigned __int8 *v18; // rax
  _QWORD *v19; // rbx
  _BYTE *v20; // r13
  char v21; // al
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r12
  int v26; // r13d
  unsigned __int64 v27; // r13
  unsigned __int8 *v28; // r9
  size_t v29; // r15
  void *v30; // rdi
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rsi
  int v34; // r12d
  size_t v35; // r8
  __int64 v36; // rbx
  size_t v37; // rbp
  unsigned int v38; // r12d
  int v39; // r14d
  __int64 v40; // rbx
  _BYTE *v41; // rax
  void *v42; // rdi
  size_t v43; // rbx
  unsigned __int8 *v44; // r15
  int v45; // r12d
  __int64 v46; // r13
  unsigned int v47; // ebp
  _QWORD *v48; // r12
  unsigned int v49; // esi
  __int64 v50; // rbx
  unsigned __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r12
  size_t v55; // rdx
  const void *v56; // rsi
  __int64 v57; // rax
  _BYTE *v58; // rax
  _QWORD *v59; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+8h] [rbp-C0h]
  size_t v61; // [rsp+10h] [rbp-B8h]
  char v62; // [rsp+1Fh] [rbp-A9h]
  __int64 v63; // [rsp+20h] [rbp-A8h]
  int **v64; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v65; // [rsp+30h] [rbp-98h]
  __int64 v66; // [rsp+38h] [rbp-90h]
  _QWORD v67[3]; // [rsp+40h] [rbp-88h] BYREF
  int v68; // [rsp+5Ch] [rbp-6Ch]
  __m128 v69; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v70; // [rsp+70h] [rbp-58h]
  __int64 v71; // [rsp+78h] [rbp-50h]
  __int64 v72; // [rsp+80h] [rbp-48h]

  v8 = *(unsigned __int8 **)(a3 + 16);
  v60 = a1;
  v59 = v67;
  v70 = &a7;
  v9 = *(_QWORD **)(a3 + 24);
  v63 = a3;
  v10 = _mm_loadh_ps((const double *)&v59);
  v67[0] = a4;
  v67[1] = a5;
  v62 = a6;
  v68 = a5;
  v69 = v10;
  v71 = a1;
  v72 = a2;
  v59 = v9;
  if ( v9 )
  {
    v11 = a2;
    v12 = *v8;
    v13 = 0;
    v64 = (int **)&v69;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = (_QWORD *)(v13 + 1);
        if ( v12 != 92 )
          break;
        if ( v59 == v19 )
        {
          LOBYTE(v61) = 92;
          v14 = 92;
          v32 = isalnum(92);
          v12 = v61;
          if ( !v32 )
            goto LABEL_9;
LABEL_7:
          v17 = *(_BYTE *)(v60 + 860);
          goto LABEL_8;
        }
        v20 = (char *)v19 + (_QWORD)v8;
        v21 = *((_BYTE *)v19 + (_QWORD)v8);
        if ( v62 && v21 == 64 )
        {
          v13 += 2;
          sub_227B910(v11, *(unsigned int *)(v60 + 468));
          goto LABEL_11;
        }
        if ( v21 == 43 )
        {
          v13 += 2;
          sub_227B910(v11, *(unsigned int *)(v63 + 84));
          goto LABEL_11;
        }
        if ( v21 != 40 || v8[v13 + 2] != 41 )
        {
          ++v13;
          while ( 1 )
          {
            v34 = v8[v13];
            if ( !isalnum(v34) )
            {
              if ( (unsigned __int8)(v34 - 36) > 0x3Bu )
              {
LABEL_48:
                v35 = v13 - (_QWORD)v19;
                goto LABEL_49;
              }
              v33 = 0x800000000000401LL;
              if ( !_bittest64(&v33, (unsigned int)(v34 - 36)) )
                break;
            }
            if ( (_QWORD *)++v13 == v59 )
              goto LABEL_48;
          }
          v35 = v13 - (_QWORD)v19;
          if ( *(_BYTE *)(v60 + 863) && v59 != (_QWORD *)v13 && (_BYTE)v34 == 38 )
            ++v13;
LABEL_49:
          if ( v68 )
          {
            v36 = v67[0];
            v61 = (size_t)v8;
            v37 = v35;
            v65 = (unsigned __int8 *)v11;
            v38 = 0;
            v39 = v68;
            while ( *(_QWORD *)(v36 + 8) != v37 || v37 && memcmp(*(const void **)v36, v20, v37) )
            {
              ++v38;
              v36 += 48;
              if ( v38 == v39 )
              {
                v35 = v37;
                v11 = (__int64)v65;
                v8 = (unsigned __int8 *)v61;
                goto LABEL_56;
              }
            }
            v8 = (unsigned __int8 *)v61;
            v11 = (__int64)v65;
            sub_212F220(v64, v38);
          }
          else
          {
LABEL_56:
            v40 = v11;
            v41 = *(_BYTE **)(v11 + 32);
            if ( (unsigned __int64)v41 >= *(_QWORD *)(v11 + 24) )
            {
              v61 = v35;
              v57 = sub_227BA10(v11, 92);
              v35 = v61;
              v40 = v57;
            }
            else
            {
              *(_QWORD *)(v11 + 32) = v41 + 1;
              *v41 = 92;
            }
            v42 = *(void **)(v40 + 32);
            if ( *(_QWORD *)(v40 + 24) - (_QWORD)v42 < v35 )
            {
              sub_227BF10(v40, v20, v35);
            }
            else if ( v35 )
            {
              v61 = v35;
              memcpy(v42, v20, v35);
              *(_QWORD *)(v40 + 32) += v61;
            }
          }
          goto LABEL_11;
        }
        v13 += 3;
        if ( (_QWORD *)v13 == v59 )
          goto LABEL_21;
LABEL_12:
        v12 = v8[v13];
      }
      if ( v12 != 36 )
      {
        v14 = v12;
        LOBYTE(v61) = v12;
        v15 = isalnum(v12);
        v12 = v61;
        if ( !v15 )
        {
          if ( (unsigned __int8)(v61 - 36) > 0x3Bu )
            goto LABEL_9;
          v16 = 0x800000000000401LL;
          if ( !_bittest64(&v16, (unsigned int)(unsigned __int8)v61 - 36) )
            goto LABEL_9;
        }
        goto LABEL_7;
      }
      v17 = *(_BYTE *)(v60 + 860);
      if ( v59 == v19 )
      {
        v14 = 36;
LABEL_8:
        if ( v17 )
          goto LABEL_9;
        goto LABEL_29;
      }
      if ( v17 )
      {
        if ( v68 )
        {
          v14 = 36;
        }
        else
        {
          v23 = *((char *)v19 + (_QWORD)v8);
          if ( *((_BYTE *)v19 + (_QWORD)v8) == 36 )
          {
            v58 = *(_BYTE **)(v11 + 32);
            if ( (unsigned __int64)v58 >= *(_QWORD *)(v11 + 24) )
            {
              sub_227BA10(v11, 36);
            }
            else
            {
              *(_QWORD *)(v11 + 32) = v58 + 1;
              *v58 = 36;
            }
            goto LABEL_28;
          }
          if ( (_BYTE)v23 == 110 )
          {
            sub_227B910(v11, a8);
LABEL_28:
            v13 += 2;
            goto LABEL_11;
          }
          v14 = 36;
          if ( (unsigned __int8)(v23 - 48) <= 9u )
          {
            v51 = v23 - 48;
            if ( v51 < a8 )
            {
              v52 = (__int64 *)(a7 + 24 * v51);
              v53 = *v52;
              v54 = v52[1];
              if ( v54 != *v52 )
              {
                do
                {
                  v55 = *(_QWORD *)(v53 + 16);
                  v56 = *(const void **)(v53 + 8);
                  v53 += 40;
                  sub_9954E0(v11, v56, v55);
                }
                while ( v54 != v53 );
              }
            }
            goto LABEL_28;
          }
        }
LABEL_9:
        v18 = *(unsigned __int8 **)(v11 + 32);
        ++v13;
        if ( (unsigned __int64)v18 >= *(_QWORD *)(v11 + 24) )
        {
          sub_227BA10(v11, v14);
        }
        else
        {
          *(_QWORD *)(v11 + 32) = v18 + 1;
          *v18 = v12;
        }
        goto LABEL_11;
      }
LABEL_29:
      v24 = v13;
      v25 = v13 + 1;
      if ( v13 == -1 )
      {
LABEL_39:
        v24 = -1;
      }
      else
      {
        while ( 1 )
        {
          v26 = v8[v24 + 1];
          if ( !isalnum(v26) )
          {
            v27 = (unsigned int)(v26 - 36);
            if ( (unsigned __int8)v27 > 0x3Bu )
              break;
            v31 = 0x800000000000401LL;
            if ( !_bittest64(&v31, v27) )
              break;
          }
          v24 = v25++;
          if ( !v25 )
            goto LABEL_39;
        }
      }
      v28 = &v8[v13];
      v29 = v25 - v13;
      if ( !*(_BYTE *)(v60 + 863) || !v68 )
      {
        v30 = *(void **)(v11 + 32);
        if ( v29 > *(_QWORD *)(v11 + 24) - (_QWORD)v30 )
        {
LABEL_68:
          sub_227BF10(v11, v28, v29);
        }
        else
        {
LABEL_34:
          if ( v29 )
          {
            memcpy(v30, v28, v29);
            *(_QWORD *)(v11 + 32) += v29;
          }
        }
        v13 = v25;
LABEL_11:
        if ( (_QWORD *)v13 == v59 )
          break;
        goto LABEL_12;
      }
      v66 = v24;
      v43 = v29;
      v61 = v25;
      v44 = v28;
      v45 = v68;
      v65 = v8;
      v46 = v67[0];
      v47 = 0;
      while ( v43 != *(_QWORD *)(v46 + 8) || v43 && memcmp(*(const void **)v46, v44, v43) )
      {
        ++v47;
        v46 += 48;
        if ( v45 == v47 )
        {
          v30 = *(void **)(v11 + 32);
          v28 = v44;
          v29 = v43;
          v25 = v61;
          v8 = v65;
          if ( v43 <= *(_QWORD *)(v11 + 24) - (_QWORD)v30 )
            goto LABEL_34;
          goto LABEL_68;
        }
      }
      v48 = (_QWORD *)v61;
      v49 = v47;
      v50 = v66;
      v8 = v65;
      sub_212F220(v64, v49);
      if ( v48 == v59 )
        break;
      v12 = *((_BYTE *)v48 + (_QWORD)v8);
      v13 = (__int64)v48;
      if ( v12 == 38 )
      {
        v13 = v50 + 2;
        goto LABEL_11;
      }
    }
  }
LABEL_21:
  ++*(_DWORD *)(v63 + 84);
  return 0;
}
