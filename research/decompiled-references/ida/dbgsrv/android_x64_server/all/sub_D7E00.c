/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7E00
// Address: 0x00000000000D7E00

//----- (00000000000D7E00) ----------------------------------------------------
_QWORD *__fastcall sub_D7E00(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  char v4; // r13
  _BYTE *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  char *v9; // rax
  char *v10; // rbp
  char *v11; // rbx
  _BYTE *v12; // r14
  signed __int64 v13; // rbx
  char *v14; // r15
  _BYTE *v15; // rax
  __int64 v16; // rbx
  char *v17; // r15
  _BYTE *v18; // rax
  _BYTE *v19; // rcx
  void *v20; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  char *v24; // r14
  _BYTE *v25; // rbx
  signed __int64 v26; // r14
  char *v27; // rbp
  char *v28; // rax
  char *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  _QWORD *v32; // rbp
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  char *v40; // rbp
  _BYTE *v41; // r14
  signed __int64 v42; // rbp
  char *v43; // rbx
  char *v44; // rax
  const void *v45; // r14
  signed __int64 v46; // r15
  unsigned __int64 v47; // rbp
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  char *v51; // rbp
  _QWORD *result; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  void *src; // [rsp+0h] [rbp-C8h]
  char v60; // [rsp+Ch] [rbp-BCh]
  __int64 v61; // [rsp+10h] [rbp-B8h]
  __int64 v62; // [rsp+10h] [rbp-B8h]
  __int64 v63; // [rsp+10h] [rbp-B8h]
  _QWORD *v64; // [rsp+18h] [rbp-B0h]
  _QWORD *v65; // [rsp+20h] [rbp-A8h]
  _QWORD *v66; // [rsp+28h] [rbp-A0h]
  __int64 v67; // [rsp+30h] [rbp-98h]
  _BYTE *ptr; // [rsp+38h] [rbp-90h]
  _BYTE *v69; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v70; // [rsp+48h] [rbp-80h]
  _BYTE dest[64]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-38h] BYREF

  v72 = __readfsqword(0x28u);
  v2 = (_BYTE *)*a1;
  v3 = (_BYTE *)a1[1];
  if ( (_BYTE *)*a1 == v3 || *v2 != 73 )
    return nullptr;
  v4 = a2;
  v6 = v2 + 1;
  *a1 = v6;
  if ( (_BYTE)a2 )
  {
    a2 = (__int64)(a1 + 73);
    v64 = a1 + 73;
    a1[73] = a1[72];
  }
  else
  {
    v64 = a1 + 73;
  }
  v67 = (__int64)(a1[3] - a1[2]) >> 3;
  v7 = a1 + 75;
  v66 = a1 + 83;
  v65 = a1 + 5;
  v60 = v4;
  src = a1 + 75;
  if ( v6 != v3 )
    goto LABEL_70;
  do
  {
    do
    {
      if ( v4 )
      {
        ptr = dest;
        v70 = &v72;
        v8 = (_QWORD *)a1[72];
        if ( v8 == v7 )
        {
          v15 = dest;
          v16 = *v64 - (_QWORD)v8;
          if ( (_QWORD *)*v64 != v8 )
          {
            a2 = (__int64)src;
            memcpy(dest, src, *v64 - (_QWORD)v8);
            v15 = &dest[v16 & 0xFFFFFFFFFFFFFFF8LL];
          }
          v69 = v15;
          *v64 = v8;
          v7 = src;
        }
        else
        {
          ptr = (_BYTE *)a1[72];
          v69 = (_BYTE *)a1[73];
          v70 = (unsigned __int64 *)a1[74];
          a1[72] = v7;
          a1[73] = v7;
          a1[74] = v66;
        }
        v17 = sub_D72F0((__int64)a1, a2);
        v18 = ptr;
        v19 = (_BYTE *)a1[72];
        if ( ptr == dest )
        {
          v20 = (void *)a1[72];
          if ( v19 == (_BYTE *)v7 )
          {
            v19 = dest;
          }
          else
          {
            free(v20);
            a1[72] = v7;
            a1[73] = v7;
            a1[74] = v66;
            v19 = ptr;
            v18 = ptr;
            v20 = v7;
          }
          if ( v69 == v18 )
          {
            v22 = 0;
            v21 = v7;
          }
          else
          {
            memmove(v20, v19, v69 - v18);
            v21 = (_QWORD *)a1[72];
            v19 = ptr;
            v22 = v69 - ptr;
          }
          v23 = (__int64)v21 + v22;
          a2 = (__int64)v64;
          *v64 = v23;
          if ( !v17 )
          {
LABEL_75:
            if ( v19 != dest )
              free(v19);
            return nullptr;
          }
        }
        else
        {
          a1[72] = ptr;
          if ( v19 == (_BYTE *)v7 )
          {
            a1[73] = v69;
            a1[74] = v70;
            ptr = dest;
            v19 = dest;
            if ( !v17 )
              goto LABEL_75;
          }
          else
          {
            ptr = v19;
            a1[73] = v69;
            a1[74] = v70;
            if ( !v17 )
              goto LABEL_75;
          }
        }
        v24 = (char *)a1[3];
        if ( v24 == (char *)a1[4] )
        {
          v25 = (_BYTE *)a1[2];
          v26 = v24 - v25;
          v62 = v26 >> 2;
          a2 = 2 * v26;
          if ( v65 == (_QWORD *)v25 )
          {
            v29 = (char *)malloc(2 * v26);
            v27 = v29;
            if ( v26 )
            {
              a2 = (__int64)v25;
              memmove(v29, v25, v26);
            }
          }
          else
          {
            v27 = (char *)realloc(v25, a2);
          }
          v7 = src;
          a1[2] = v27;
          v24 = &v27[8 * (v26 >> 3)];
          a1[3] = v24;
          a1[4] = &v27[8 * v62];
          v4 = v60;
        }
        a1[3] = v24 + 8;
        *(_QWORD *)v24 = v17;
        if ( v17[8] == 28 )
        {
          v30 = *((_QWORD *)v17 + 2);
          v31 = *((_QWORD *)v17 + 3);
          v32 = (_QWORD *)a1[604];
          v33 = v32[1];
          if ( (unsigned __int64)(v33 + 32) < 0xFF0 )
          {
            v35 = v32 + 1;
          }
          else
          {
            v34 = (_QWORD *)operator new[](0x1000u);
            *v34 = v32;
            v35 = v34 + 1;
            v34[1] = 0;
            a1[604] = v34;
            v33 = 0;
            v32 = v34;
          }
          *v35 = v33 + 32;
          v17 = (char *)v32 + v33 + 16;
          *(_DWORD *)((char *)v32 + v33 + 24) = 33686043;
          *(_QWORD *)v17 = off_152CA8;
          *(_QWORD *)((char *)v32 + v33 + 32) = v30;
          *(_QWORD *)((char *)v32 + v33 + 40) = v31;
          if ( v31 )
          {
            v36 = 0;
            while ( *(_BYTE *)(*(_QWORD *)(v30 + v36) + 10LL) == 1 )
            {
              v36 += 8;
              if ( 8 * v31 == v36 )
                goto LABEL_50;
            }
          }
          else
          {
LABEL_50:
            v17[10] = 1;
          }
          if ( v31 )
          {
            v37 = 0;
            while ( *(_BYTE *)(*(_QWORD *)(v30 + v37) + 11LL) == 1 )
            {
              v37 += 8;
              if ( 8 * v31 == v37 )
                goto LABEL_55;
            }
          }
          else
          {
LABEL_55:
            v17[11] = 1;
          }
          if ( v31 )
          {
            v38 = 8 * v31;
            v39 = 0;
            while ( *(_BYTE *)(*(_QWORD *)(v30 + v39) + 9LL) == 1 )
            {
              v39 += 8;
              if ( v38 == v39 )
                goto LABEL_60;
            }
          }
          else
          {
LABEL_60:
            v17[9] = 1;
          }
          v7 = src;
        }
        v40 = (char *)a1[73];
        if ( v40 == (char *)a1[74] )
        {
          v41 = (_BYTE *)a1[72];
          v42 = v40 - v41;
          v63 = v42 >> 2;
          a2 = 2 * v42;
          if ( v7 == (_QWORD *)v41 )
          {
            v44 = (char *)malloc(2 * v42);
            v43 = v44;
            if ( v42 )
            {
              a2 = (__int64)v41;
              memmove(v44, v41, v42);
            }
          }
          else
          {
            v43 = (char *)realloc(v41, a2);
          }
          a1[72] = v43;
          v40 = &v43[8 * (v42 >> 3)];
          a1[73] = v40;
          a1[74] = &v43[8 * v63];
          v4 = v60;
          v7 = src;
        }
        *v64 = v40 + 8;
        *(_QWORD *)v40 = v17;
        if ( ptr != dest )
          free(ptr);
      }
      else
      {
        v9 = sub_D72F0((__int64)a1, a2);
        if ( !v9 )
          return nullptr;
        v10 = v9;
        v11 = (char *)a1[3];
        if ( v11 == (char *)a1[4] )
        {
          v12 = (_BYTE *)a1[2];
          v13 = v11 - v12;
          v61 = v13 >> 2;
          a2 = 2 * v13;
          if ( v65 == (_QWORD *)v12 )
          {
            v28 = (char *)malloc(2 * v13);
            v14 = v28;
            if ( v13 )
            {
              a2 = (__int64)v12;
              memmove(v28, v12, v13);
            }
          }
          else
          {
            v14 = (char *)realloc(v12, a2);
          }
          a1[2] = v14;
          v11 = &v14[8 * (v13 >> 3)];
          a1[3] = v11;
          a1[4] = &v14[8 * v61];
          v4 = v60;
        }
        a1[3] = v11 + 8;
        *(_QWORD *)v11 = v10;
        v7 = src;
      }
      v6 = (_BYTE *)*a1;
    }
    while ( *a1 == a1[1] );
LABEL_70:
    ;
  }
  while ( *v6 != 69 );
  *a1 = v6 + 1;
  v45 = (const void *)(8 * v67 + a1[2]);
  v46 = a1[3] - (_QWORD)v45;
  v47 = ((_DWORD)v46 + 15) & 0xFFFFFFF0;
  v48 = (_QWORD *)a1[604];
  v49 = v48[1];
  if ( v49 + v47 < 0xFF0 )
  {
    v53 = v48 + 1;
  }
  else
  {
    if ( v47 >= 0xFF1 )
    {
      v50 = (_QWORD *)operator new[](v47 + 16);
      *v50 = *v48;
      v50[1] = 0;
      *v48 = v50;
      v51 = (char *)(v50 + 2);
      if ( !v46 )
        goto LABEL_82;
      goto LABEL_81;
    }
    v54 = (_QWORD *)operator new[](0x1000u);
    *v54 = v48;
    v54[1] = 0;
    a1[604] = v54;
    v49 = 0;
    v53 = v54 + 1;
    v48 = v54;
  }
  *v53 = v49 + v47;
  v51 = (char *)v48 + v49 + 16;
  if ( v46 )
  {
LABEL_81:
    memmove(v51, v45, v46);
    v45 = (const void *)(a1[2] + 8 * v67);
    v48 = (_QWORD *)a1[604];
  }
LABEL_82:
  v55 = v46 >> 3;
  a1[3] = v45;
  v56 = v48[1];
  if ( (unsigned __int64)(v56 + 32) < 0xFF0 )
  {
    v58 = v48 + 1;
  }
  else
  {
    v57 = (_QWORD *)operator new[](0x1000u);
    *v57 = v48;
    v57[1] = 0;
    a1[604] = v57;
    v56 = 0;
    v58 = v57 + 1;
    v48 = v57;
  }
  *v58 = v56 + 32;
  result = (_QWORD *)((char *)v48 + v56 + 16);
  *(_DWORD *)((char *)v48 + v56 + 24) = 16843038;
  *result = off_152D18;
  *(_QWORD *)((char *)v48 + v56 + 32) = v51;
  *(_QWORD *)((char *)v48 + v56 + 40) = v55;
  return result;
}
// 152CA8: using guessed type __int64 (__fastcall *off_152CA8[7])();
// 152D18: using guessed type __int64 (__fastcall *off_152D18[7])();
