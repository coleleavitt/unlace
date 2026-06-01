/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf16_utf8
// Address: 0x00000000000B6880

//----- (00000000000B6880) ----------------------------------------------------
char __fastcall utf16_utf8(__int64 a1, unsigned __int16 *a2, int a3)
{
  char result; // al
  unsigned __int16 *v4; // rbp
  int v5; // ebx
  int v7; // eax
  int v8; // r14d
  unsigned __int16 v9; // ax
  _WORD *v10; // rcx
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r12
  char *v14; // rax
  __int64 v15; // rbp
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  unsigned __int64 v20; // r14
  char v21; // r13
  __int64 v22; // rax
  char *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  __int64 v28; // rax
  int v29; // r14d
  int v30; // edi
  int v31; // r13d
  unsigned int v32; // ecx
  char v33; // r14
  __int64 v34; // rax
  __int64 v35; // r12
  char *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned int v38; // r13d
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rbx
  _BYTE *v42; // rax
  char v43; // r12
  char v44; // r13
  __int64 v45; // rax
  __int64 v46; // rbx
  _BYTE *v47; // rax
  char v48; // dl
  __int64 v49; // rax
  char *v50; // rax
  int v51; // [rsp+8h] [rbp-50h]
  int v52; // [rsp+8h] [rbp-50h]
  int v53; // [rsp+Ch] [rbp-4Ch]
  _WORD *v54; // [rsp+10h] [rbp-48h]
  _WORD *v55; // [rsp+10h] [rbp-48h]

  result = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 )
    {
      v5 = a3;
      v7 = 16;
      if ( a3 > 0 )
        v7 = a3;
      *(_QWORD *)(a1 + 8) = 0;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v7 )
        *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, v7, 1u);
      if ( v5 )
      {
        v8 = 0;
        v53 = v5;
        while ( 1 )
        {
          v9 = *v4;
          if ( v5 < 0 && !v9 )
            return 1;
          v10 = v4 + 1;
          v11 = v9;
          if ( v9 <= 0x7Fu )
          {
            v12 = *(_QWORD *)(a1 + 8);
            v13 = v12 - 1;
            if ( !v12 )
              v13 = 0;
            v14 = *(char **)a1;
            v15 = v13 + 2;
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 2) )
            {
              v54 = v10;
              v14 = (char *)qvector_reserve(a1, v14, v13 + 2, 1u);
              v10 = v54;
              *(_QWORD *)a1 = v14;
            }
LABEL_26:
            *(_QWORD *)(a1 + 8) = v15;
            v23 = &v14[v13];
            v4 = v10;
            goto LABEL_27;
          }
          if ( v9 <= 0x7FFu )
            break;
          v24 = v9 & 0xFC00;
          if ( v24 != 55296 )
          {
            if ( (unsigned __int16)v24 == 56320 )
              return 0;
            v51 = v8;
            v25 = *(_QWORD *)(a1 + 8);
            v26 = v25 - 1;
            if ( !v25 )
              v26 = 0;
            v27 = *(char **)a1;
            v55 = v4 + 1;
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v26 + 2) )
            {
              v27 = (char *)qvector_reserve(a1, v27, v26 + 2, 1u);
              *(_QWORD *)a1 = v27;
            }
            *(_QWORD *)(a1 + 8) = v26 + 2;
            v27[v26] = (v11 >> 12) | 0xE0;
            *(_BYTE *)(*(_QWORD *)a1 + v26 + 1) = 0;
            v16 = (v11 >> 6) & 0x3F | 0x80;
            v28 = *(_QWORD *)(a1 + 8);
            v18 = v28 - 1;
            if ( !v28 )
              v18 = 0;
            v19 = *(char **)a1;
            v20 = v18 + 2;
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v18 + 2) )
            {
LABEL_21:
              *(_QWORD *)(a1 + 8) = v20;
              v19[v18] = v16;
              *(_BYTE *)(*(_QWORD *)a1 + v18 + 1) = 0;
              v21 = v11 & 0x3F;
              v22 = *(_QWORD *)(a1 + 8);
              v13 = v22 - 1;
              if ( !v22 )
                v13 = 0;
              v14 = *(char **)a1;
              v15 = v13 + 2;
              if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 2) )
              {
                v14 = (char *)qvector_reserve(a1, *(char **)a1, v13 + 2, 1u);
                *(_QWORD *)a1 = v14;
              }
              v5 = v53;
              v8 = v51;
              v10 = v55;
              LOBYTE(v11) = v21 | 0x80;
              goto LABEL_26;
            }
LABEL_20:
            v19 = (char *)qvector_reserve(a1, v19, v20, 1u);
            *(_QWORD *)a1 = v19;
            goto LABEL_21;
          }
          v29 = v8 + 1;
          if ( v5 >= 0 && v29 >= v5 )
            return 0;
          v30 = v4[1];
          result = 0;
          if ( (v4[1] & 0xFC00) != 0xDC00 || v30 == 0 && v5 < 0 )
            return result;
          v52 = v29;
          v31 = (v11 & 0x3FF) << 10;
          v32 = v31 + 0x10000;
          v33 = ((unsigned int)(v31 + 0x10000) >> 18) | 0xF0;
          v34 = *(_QWORD *)(a1 + 8);
          v35 = v34 - 1;
          if ( !v34 )
            v35 = 0;
          v36 = *(char **)a1;
          v37 = v35 + 2;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v35 + 2) )
          {
            v36 = (char *)qvector_reserve(a1, v36, v37, 1u);
            v37 = v35 + 2;
            v32 = v31 + 0x10000;
            *(_QWORD *)a1 = v36;
          }
          v38 = (v30 & 0x3C0) + v31 + 0x10000;
          *(_QWORD *)(a1 + 8) = v37;
          v36[v35] = v33;
          *(_BYTE *)(*(_QWORD *)a1 + v35 + 1) = 0;
          v39 = (v32 >> 12) & 0x3F | 0x80;
          v40 = *(_QWORD *)(a1 + 8);
          v41 = v40 - 1;
          if ( !v40 )
            v41 = 0;
          v42 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v41 + 2) )
          {
            v43 = v39;
            v42 = qvector_reserve(a1, *(char **)a1, v41 + 2, 1u);
            v39 = v43;
            *(_QWORD *)a1 = v42;
          }
          *(_QWORD *)(a1 + 8) = v41 + 2;
          v42[v41] = v39;
          *(_BYTE *)(*(_QWORD *)a1 + v41 + 1) = 0;
          v44 = (v38 >> 6) & 0x3F | 0x80;
          v45 = *(_QWORD *)(a1 + 8);
          v46 = v45 - 1;
          if ( !v45 )
            v46 = 0;
          v47 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v46 + 2) )
          {
            v47 = qvector_reserve(a1, *(char **)a1, v46 + 2, 1u);
            *(_QWORD *)a1 = v47;
          }
          *(_QWORD *)(a1 + 8) = v46 + 2;
          v47[v46] = v44;
          *(_BYTE *)(*(_QWORD *)a1 + v46 + 1) = 0;
          v48 = v30 & 0x3F;
          v49 = *(_QWORD *)(a1 + 8);
          v13 = v49 - 1;
          if ( !v49 )
            v13 = 0;
          v50 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 2) )
          {
            v50 = (char *)qvector_reserve(a1, *(char **)a1, v13 + 2, 1u);
            v48 = v30 & 0x3F;
            *(_QWORD *)a1 = v50;
          }
          v8 = v52;
          v4 += 2;
          *(_QWORD *)(a1 + 8) = v13 + 2;
          v23 = &v50[v13];
          LOBYTE(v11) = v48 | 0x80;
          v5 = v53;
LABEL_27:
          ++v8;
          *v23 = v11;
          *(_BYTE *)(*(_QWORD *)a1 + v13 + 1) = 0;
          if ( v5 >= 0 && v8 >= v5 )
            return 1;
        }
        v51 = v8;
        v16 = (v9 >> 6) & 0x1F | 0xC0;
        v17 = *(_QWORD *)(a1 + 8);
        v18 = v17 - 1;
        if ( !v17 )
          v18 = 0;
        v19 = *(char **)a1;
        v20 = v18 + 2;
        v55 = v10;
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v18 + 2) )
          goto LABEL_21;
        goto LABEL_20;
      }
      return 1;
    }
  }
  return result;
}
