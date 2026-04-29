unsigned __int64 __fastcall sub_1AF040(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        double a6)
{
  const char *v6; // r13
  unsigned int v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r14
  size_t v15; // rax
  unsigned int v16; // r15d
  size_t v17; // r10
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned int i; // eax
  __int64 v23; // rdx
  __int64 v24; // r13
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 j; // r15
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // r14
  __int64 v33; // r11
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  char *v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r15d
  __int64 v44; // r13
  __int64 v45; // r14
  unsigned __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r13
  unsigned __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // r14
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v62; // [rsp+8h] [rbp-90h]
  __int64 v63; // [rsp+10h] [rbp-88h]
  __int64 v64; // [rsp+18h] [rbp-80h]
  unsigned __int64 v65; // [rsp+18h] [rbp-80h]
  unsigned __int64 v66; // [rsp+18h] [rbp-80h]
  size_t v67; // [rsp+20h] [rbp-78h]
  __int64 v68; // [rsp+20h] [rbp-78h]
  _BYTE *v70; // [rsp+40h] [rbp-58h] BYREF
  __int128 v71; // [rsp+48h] [rbp-50h]
  unsigned __int64 v72; // [rsp+58h] [rbp-40h]

  v6 = "this";
  v72 = __readfsqword(0x28u);
  v63 = sub_1AACF0(a3, (__int64)a2, a1);
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 != 128 )
  {
    if ( v10 > 0x80 )
    {
      v6 = "spce";
      if ( v10 != 208 )
      {
        if ( v10 > 0xD0 )
        {
          v6 = "spec";
          if ( v10 != 240 )
          {
            v6 = "gostk";
            if ( v10 != 256 )
            {
              v6 = "?";
              if ( v10 == 224 )
                v6 = "spcp";
            }
          }
        }
        else
        {
          v6 = "go";
          if ( v10 != 176 )
          {
            if ( v10 > 0xB0 )
            {
              v6 = "?";
              if ( v10 == 192 )
                v6 = "rsv3";
            }
            else
            {
              v6 = "swft";
              if ( v10 != 144 )
              {
                v6 = "?";
                if ( v10 == 160 )
                  v6 = "!spl";
              }
            }
          }
        }
      }
    }
    else
    {
      v6 = "...";
      if ( v10 != 64 )
      {
        if ( v10 > 0x40 )
        {
          v6 = "pas";
          if ( v10 != 96 )
          {
            v6 = "fast";
            if ( v10 != 112 )
            {
              v6 = "?";
              if ( v10 == 80 )
                v6 = "std";
            }
          }
        }
        else
        {
          v6 = "void";
          if ( v10 != 32 )
          {
            if ( v10 > 0x20 )
            {
              v6 = "?";
              if ( v10 == 48 )
                v6 = "cdecl";
            }
            else
            {
              v6 = "inv";
              if ( v10 )
              {
                v6 = "?";
                if ( v10 == 16 )
                  v6 = "unk";
              }
            }
          }
        }
      }
    }
  }
  v11 = a2[1];
  v12 = 2;
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = *a2;
    --v11;
    if ( a2[2] >= v12 )
      goto LABEL_12;
LABEL_56:
    v50 = qvector_reserve(a2, v13, v12, 1);
    *a2 = v50;
    v13 = v50;
    goto LABEL_12;
  }
  v13 = *a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_56;
LABEL_12:
  a2[1] = v12;
  *(_BYTE *)(v13 + v11) = 60;
  *(_BYTE *)(*a2 + v11 + 1) = 0;
  if ( *(_DWORD *)(a1 + 20) != 32 )
  {
    v14 = a2[1];
    v15 = strlen(v6);
    v16 = v15;
    v17 = v15;
    if ( v14 )
    {
      --v14;
      v17 = v15 + v14;
    }
    v18 = *a2;
    v19 = v17 + 1;
    if ( a2[2] < v17 + 1 )
    {
      v67 = v17;
      v64 = v17 + 1;
      v51 = qvector_reserve(a2, v18, v19, 1);
      *a2 = v51;
      v17 = v67;
      v18 = v51;
      v19 = v64;
    }
    a2[1] = v19;
    *(_BYTE *)(v18 + v17) = 0;
    v20 = *a2;
    v21 = *a2 + v14;
    if ( v16 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v23 = i;
        *(_BYTE *)(v21 + v23) = v6[v23];
      }
      v20 = *a2;
    }
    v24 = a2[1];
    v25 = 2;
    if ( v24 )
      v25 = v24-- + 1;
    v26 = v20;
    if ( a2[2] < v25 )
    {
      v26 = qvector_reserve(a2, v20, v25, 1);
      *a2 = v26;
    }
    a2[1] = v25;
    *(_BYTE *)(v26 + v24) = 58;
    *(_BYTE *)(*a2 + v24 + 1) = 0;
    v27 = *(_QWORD *)(a1 + 32);
    if ( (int)v27 > 0 )
    {
      v28 = (unsigned int)(v27 - 1);
      for ( j = 0; ; j = v30 )
      {
        if ( j )
        {
          v56 = a2[1];
          v57 = 2;
          if ( v56 )
            v57 = v56-- + 1;
          v58 = *a2;
          if ( a2[2] < v57 )
          {
            v66 = v57;
            v60 = qvector_reserve(a2, v58, v57, 1);
            *a2 = v60;
            v57 = v66;
            v58 = v60;
          }
          a2[1] = v57;
          *(_BYTE *)(v58 + v56) = 44;
          *(_BYTE *)(*a2 + v56 + 1) = 0;
        }
        v31 = *(_QWORD *)(a1 + 24) + 80 * j;
        v32 = v31;
        if ( *(_BYTE *)v31 )
        {
          sub_1AADB0(a2, a3, v31 + 24, (__int64 *)(v31 + 32));
          v33 = a2[1];
          v34 = 2;
          if ( v33 )
            v34 = v33-- + 1;
          v35 = *a2;
          if ( a2[2] < v34 )
          {
            v68 = v33;
            v65 = v34;
            v59 = qvector_reserve(a2, v35, v34, 1);
            *a2 = v59;
            v33 = v68;
            v35 = v59;
            v34 = v65;
          }
          a2[1] = v34;
          *(_BYTE *)(v35 + v33) = 32;
          *(_BYTE *)(*a2 + v33 + 1) = 0;
          sub_1AD320(v32, (__int64)a2, a3, a5, a6);
          v30 = j + 1;
          if ( v28 == j )
            break;
        }
        else
        {
          sub_F7090(a2, (__int64)"?");
          v30 = j + 1;
          if ( v28 == j )
            break;
        }
      }
    }
  }
  v36 = a2[1];
  v37 = 2;
  if ( v36 )
  {
    v37 = v36 + 1;
    v38 = *a2;
    --v36;
    if ( a2[2] >= v37 )
      goto LABEL_38;
  }
  else
  {
    v38 = *a2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_38;
  }
  v49 = qvector_reserve(a2, v38, v37, 1);
  *a2 = v49;
  v38 = v49;
LABEL_38:
  a2[1] = v37;
  *(_BYTE *)(v38 + v36) = 62;
  v39 = (char *)&word_2;
  *(_BYTE *)(*a2 + v36 + 1) = 0;
  v40 = *(_QWORD *)(a1 + 72);
  if ( (get_tinfo_property(v40, 2) & 0x3F) == 1 )
    goto LABEL_39;
  sub_F7090(a2, (__int64)" => ");
  a6 = 0.0;
  v71 = 0;
  v70 = nullptr;
  v70 = (_BYTE *)qvector_reserve(&v70, 0, 1, 1);
  *(_QWORD *)&v71 = 1;
  *v70 = 0;
  sub_1AADB0(a2, a3, a1 + 72, (__int64 *)&v70);
  v40 = (unsigned __int64)v70;
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  v53 = a2[1];
  v54 = 2;
  if ( v53 )
  {
    v54 = v53 + 1;
    v39 = (char *)*a2;
    --v53;
    if ( a2[2] >= v54 )
      goto LABEL_69;
LABEL_71:
    v40 = (unsigned __int64)a2;
    v55 = qvector_reserve(a2, v39, v54, 1);
    *a2 = v55;
    v39 = (char *)v55;
    goto LABEL_69;
  }
  v39 = (char *)*a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_71;
LABEL_69:
  a2[1] = v54;
  v39[v53] = 32;
  *(_BYTE *)(*a2 + v53 + 1) = 0;
LABEL_39:
  if ( *(_QWORD *)(a1 + 56) )
  {
    v43 = 0;
    v44 = 0;
    while ( 1 )
    {
      v39 = (char *)a2;
      v40 = *(_QWORD *)(a1 + 48) + 16 * v44;
      sub_1AD320(v40, (__int64)a2, a3, 6u, a6);
      v44 = ++v43;
      if ( (unsigned __int64)v43 >= *(_QWORD *)(a1 + 56) )
        break;
      v45 = a2[1];
      v46 = 2;
      if ( v45 )
        v46 = v45-- + 1;
      v47 = *a2;
      if ( a2[2] < v46 )
      {
        v62 = v46;
        v52 = qvector_reserve(a2, v47, v46, 1);
        *a2 = v52;
        v46 = v62;
        v47 = v52;
      }
      a2[1] = v46;
      *(_BYTE *)(v47 + v45) = 58;
      *(_BYTE *)(*a2 + v45 + 1) = 0;
    }
  }
  else if ( a4 != -1 )
  {
    v39 = ".%d";
    v40 = (unsigned __int64)a2;
    sub_F7090(a2, (__int64)".%d", a4);
  }
  if ( v63 != -1 )
  {
    if ( ((unsigned __int8)v63 & 7u) > 2 )
      sub_1AA590(v40, v39, v41, v42);
    sub_3267B0(a2, (unsigned int)(v63 & 7) + 41);
  }
  return v72 - __readfsqword(0x28u);
}
