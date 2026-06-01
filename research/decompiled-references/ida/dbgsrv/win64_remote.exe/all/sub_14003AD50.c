/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003AD50
// Address: 0x000000014003AD50

//----- (000000014003AD50) ----------------------------------------------------
__int64 __fastcall sub_14003AD50(__int64 a1, char a2, char a3)
{
  char v5; // cl
  unsigned int v6; // edi
  char *v7; // rcx
  char v8; // bl
  char v9; // bl
  unsigned __int64 v10; // rdi
  char *v11; // r14
  char *v12; // rax
  char *v13; // rdi
  void *v14; // rax
  __int64 v15; // rcx
  __int8 *v16; // rax
  __int64 v17; // r12
  __int8 *v18; // rax
  __int8 *v19; // r13
  char *v20; // r14
  size_t v21; // r14
  char *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r15
  size_t v25; // r12
  const char *v26; // rdx
  const char *v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  void *Block[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h]
  char *v36; // [rsp+50h] [rbp-B0h] BYREF
  size_t v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  void *Src[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int16 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  char v43; // [rsp+98h] [rbp-68h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  CHAR v45[272]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = *(_BYTE *)(a1 + 644);
  if ( v5 != 32 && (unsigned __int8)(v5 - 9) > 4u )
    *(_BYTE *)--*(_QWORD *)(a1 + 8) = v5;
  v6 = 0;
  *(_OWORD *)Block = 0;
  v35 = 0;
  v7 = *(char **)(a1 + 8);
  v8 = *v7;
  if ( *v7 != 34 )
  {
    if ( v8 != 60 )
    {
      *(_OWORD *)Src = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v6 = sub_140037FE0(a1, (__int64)Src, nullptr);
      if ( v6 )
      {
LABEL_31:
        if ( Src[0] )
        {
          Src[1] = nullptr;
          j_free(Src[0]);
        }
      }
      else
      {
        while ( 2 )
        {
          if ( v41 != 1 )
          {
            v9 = 0;
            switch ( v41 )
            {
              case 2:
              case 6:
                goto LABEL_10;
              case 4:
                v9 = 34;
                sub_140004830((__int64)Block, 34);
LABEL_10:
                v10 = (unsigned __int64)Src[1] - 1;
                if ( !Src[1] )
                  v10 = 0;
                if ( v10 )
                {
                  if ( Block[1] )
                    v11 = (char *)Block[1] - 1;
                  else
                    v11 = nullptr;
                  if ( (unsigned __int64)&v11[v10 + 1] <= v35 )
                  {
                    v12 = (char *)Block[0];
                  }
                  else
                  {
                    v12 = (char *)sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)&v11[v10 + 1], 1u);
                    Block[0] = v12;
                  }
                  Block[1] = &v11[v10 + 1];
                  v12[(_QWORD)v11 + v10] = 0;
                  memcpy(&v11[(unsigned __int64)Block[0]], Src[0], v10);
                }
                goto LABEL_21;
              case 46:
              case 47:
              case 58:
              case 60:
              case 62:
                v9 = v41;
LABEL_21:
                if ( v9 )
                {
                  v13 = (char *)Block[1] - 1;
                  if ( !Block[1] )
                    v13 = nullptr;
                  if ( (unsigned __int64)(v13 + 2) <= v35 )
                  {
                    v14 = Block[0];
                  }
                  else
                  {
                    v14 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)(v13 + 2), 1u);
                    Block[0] = v14;
                  }
                  Block[1] = v13 + 2;
                  v13[(_QWORD)v14] = v9;
                  *((_BYTE *)Block[0] + (unsigned __int64)v13 + 1) = 0;
                }
                if ( Src[0] )
                {
                  Src[1] = nullptr;
                  j_free(Src[0]);
                }
                *(_OWORD *)Src = 0;
                v40 = 0;
                v41 = 0;
                v42 = 0;
                v43 = 0;
                v44 = 0;
                v6 = sub_140037FE0(a1, (__int64)Src, nullptr);
                if ( v6 )
                  goto LABEL_31;
                continue;
              default:
                if ( Src[0] )
                {
                  Src[1] = nullptr;
                  j_free(Src[0]);
                }
                v6 = 30;
                goto LABEL_72;
            }
          }
          break;
        }
        if ( Src[0] )
        {
          Src[1] = nullptr;
          j_free(Src[0]);
        }
      }
      if ( v6 )
        goto LABEL_72;
      v7 = (char *)Block[0];
      *(void **)(a1 + 8) = Block[0];
      if ( !v7 )
        goto LABEL_39;
      v8 = *v7;
      if ( *v7 == 34 )
        goto LABEL_38;
      if ( v8 != 60 )
      {
LABEL_39:
        v6 = 30;
        goto LABEL_72;
      }
    }
    v8 = 62;
  }
LABEL_38:
  v15 = (__int64)(v7 + 1);
  *(_QWORD *)(a1 + 8) = v15;
  v16 = sub_14006CA14(v15, v8);
  if ( !v16 )
    goto LABEL_39;
  *v16 = 0;
  v17 = a1 + 272;
  if ( *(_QWORD *)(a1 + 280) >= 0x80u )
  {
    v6 = 31;
    goto LABEL_72;
  }
  v18 = sub_14003A350(a1, v45, 260, *(char **)(a1 + 8), v8, a3);
  v19 = v18;
  v20 = nullptr;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  if ( v18 )
  {
    v21 = strlen(v18);
    v22 = nullptr;
    if ( v21 != -1 )
    {
      v22 = (char *)sub_14005ABE0((__int64)&v36, nullptr, v21 + 1, 1u);
      v36 = v22;
    }
    v37 = v21 + 1;
    memcpy(v22, v19, v21);
    v36[v21] = 0;
    v20 = v36;
  }
  v23 = *(_QWORD *)(a1 + 248);
  v24 = v23 + 24LL * *(_QWORD *)(a1 + 256);
  if ( v23 != v24 )
  {
    v25 = v37;
    do
    {
      v26 = Str1;
      if ( *(_QWORD *)(v23 + 8) )
        v26 = *(const char **)v23;
      v27 = Str1;
      if ( v25 )
        v27 = v20;
      if ( !strcmp(v27, v26) )
        break;
      v23 += 24;
    }
    while ( v23 != v24 );
    v17 = a1 + 272;
  }
  if ( v20 )
  {
    v37 = 0;
    j_free(v20);
  }
  if ( v23 != v24 )
    goto LABEL_64;
  if ( v19 && (v28 = sub_1400642F0(v19)) != 0 )
  {
    v29 = *(_QWORD *)(v17 + 8) + 1LL;
    if ( v29 > *(_QWORD *)(v17 + 16) )
      *(_QWORD *)v17 = sub_14005ABE0(v17, *(void **)v17, v29, 0x28u);
    v30 = *(_QWORD *)(v17 + 8);
    v31 = *(_QWORD *)v17 + 40 * v30;
    *(_QWORD *)(v17 + 8) = v30 + 1;
    *(_QWORD *)(v31 + 8) = *(_QWORD *)(a1 + 296);
    *(_DWORD *)(v31 + 32) = *(_DWORD *)(a1 + 312);
    *(_QWORD *)v31 = *(_QWORD *)(a1 + 304);
    *(_BYTE *)(v31 + 36) = *(_BYTE *)(a1 + 152);
    *(_QWORD *)(v31 + 16) = *(_QWORD *)(a1 + 224);
    *(_QWORD *)(v31 + 24) = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 296) = v28;
    *(_QWORD *)(a1 + 304) = sub_14005AB50(v19);
    *(_DWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 224) = sub_14003A240;
    *(_QWORD *)(a1 + 232) = a1;
    *(_BYTE *)(a1 + 152) = 0;
  }
  else
  {
    if ( a2 )
    {
LABEL_64:
      sub_1400640B0(0);
      goto LABEL_72;
    }
    sub_140063F70(0, *(_BYTE **)(a1 + 8));
    v6 = 32;
  }
LABEL_72:
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v6;
}
