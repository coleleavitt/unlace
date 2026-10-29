/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AE70
// Address: 0x000000000008AE70

//----- (000000000008AE70) ----------------------------------------------------
__int64 __fastcall sub_8AE70(__int64 a1, char a2, char a3, double a4, __m128 a5)
{
  char v8; // al
  unsigned __int8 *v9; // rdi
  unsigned __int8 v10; // bl
  unsigned int v11; // ebp
  const char *v12; // rdi
  char *v13; // rax
  char *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r15
  void *v17; // r14
  const char *v18; // rbp
  const char *v19; // rsi
  __int64 v20; // rbp
  const char *v21; // r15
  char v22; // r15
  _BYTE *v23; // rdx
  FILE *v25; // rbx
  char **v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+8h] [rbp-1080h]
  char *v32; // [rsp+10h] [rbp-1078h]
  void *v33; // [rsp+18h] [rbp-1070h] BYREF
  __int64 v34; // [rsp+20h] [rbp-1068h]
  __int64 v35; // [rsp+28h] [rbp-1060h]
  void *v36[2]; // [rsp+30h] [rbp-1058h] BYREF
  __int64 v37; // [rsp+40h] [rbp-1048h]
  void *ptr[5]; // [rsp+50h] [rbp-1038h] BYREF
  char v39; // [rsp+78h] [rbp-1010h]
  __int128 v40; // [rsp+80h] [rbp-1008h]
  unsigned __int64 v41; // [rsp+1050h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v8 = *(_BYTE *)(a1 + 452);
  if ( (unsigned __int8)(v8 - 9) >= 5u && v8 != 32 )
  {
    v23 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v23;
    *v23 = v8;
  }
  *(_OWORD *)v36 = 0;
  v37 = 0;
  v9 = *(unsigned __int8 **)(a1 + 8);
  v10 = *v9;
  if ( *v9 != 34 && v10 != 60 )
  {
    do
    {
      ptr[4] = nullptr;
      v39 = 0;
      v40 = 0;
      memset(ptr, 0, 26);
      v11 = sub_862A0(a1, (__int64)ptr, 0, nullptr, 0.0, a5);
      if ( !v11 && *(_QWORD *)(a1 + 64) )
        v11 = sub_871E0(a1, (__int64)ptr, 0.0, a5);
      v22 = 5;
      if ( !v11 && LOWORD(ptr[3]) != 1 )
      {
        if ( (unsigned __int8)sub_8B370((__int64)v36, (__int64)ptr) )
          v22 = 0;
        else
          v22 = 6;
      }
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
    }
    while ( !v22 );
    if ( v22 != 5 )
      goto LABEL_35;
    if ( v11 )
      goto LABEL_42;
    v9 = (unsigned __int8 *)v36[0];
    *(void **)(a1 + 8) = v36[0];
    if ( !v9 )
    {
LABEL_35:
      v11 = 30;
      goto LABEL_42;
    }
    v10 = *v9;
  }
  v11 = 30;
  if ( v10 != 34 )
  {
    if ( v10 != 60 )
      goto LABEL_42;
    v10 = 62;
  }
  v12 = (const char *)(v9 + 1);
  *(_QWORD *)(a1 + 8) = v12;
  v13 = strchr(v12, v10);
  if ( v13 )
  {
    *v13 = 0;
    v11 = 31;
    if ( *(_QWORD *)(a1 + 256) <= 0x7Fu )
    {
      v14 = sub_85CF0(a1, (char *)ptr, 4096, *(_BYTE **)(a1 + 8), v10, a3);
      sub_37F60((__int64)&v33, v14);
      v15 = *(_QWORD *)(a1 + 224);
      v16 = 24LL * *(_QWORD *)(a1 + 232);
      v31 = v15 + v16;
      if ( v16 )
      {
        v32 = v14;
        v17 = v33;
        v18 = (const char *)v33;
        if ( !v34 )
          v18 = s1;
        do
        {
          v19 = s1;
          if ( *(_QWORD *)(v15 + 8) )
            v19 = *(const char **)v15;
          if ( !strcmp(v18, v19) )
          {
            v21 = v32;
            goto LABEL_38;
          }
          v15 += 24;
          v16 -= 24;
        }
        while ( v16 );
        v20 = v31;
        v15 = v31;
        v21 = v32;
        if ( v17 )
          goto LABEL_39;
      }
      else
      {
        v21 = v14;
        v17 = v33;
LABEL_38:
        v20 = v31;
        if ( v17 )
        {
LABEL_39:
          v34 = 0;
          qfree(v17);
          v33 = nullptr;
          v35 = 0;
        }
      }
      if ( v15 != v20 )
        goto LABEL_41;
      if ( v21 )
      {
        v25 = fopenRT(v21);
        if ( v25 )
        {
          v26 = (char **)(a1 + 248);
          v27 = *(_QWORD *)(a1 + 256);
          v28 = v27 + 1;
          if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v27 + 1) )
          {
            v29 = *v26;
          }
          else
          {
            v29 = (char *)qvector_reserve((__int64)v26, *v26, v28, 0x28u);
            *(_QWORD *)(a1 + 248) = v29;
            v27 = *(_QWORD *)(a1 + 256);
            v28 = v27 + 1;
          }
          v30 = 5 * v27;
          *(_QWORD *)(a1 + 256) = v28;
          *(_QWORD *)&v29[8 * v30 + 8] = *(_QWORD *)(a1 + 272);
          *(_DWORD *)&v29[8 * v30 + 32] = *(_DWORD *)(a1 + 288);
          *(_QWORD *)&v29[8 * v30] = *(_QWORD *)(a1 + 280);
          v29[8 * v30 + 36] = *(_BYTE *)(a1 + 128);
          *(_QWORD *)&v29[8 * v30 + 16] = *(_QWORD *)(a1 + 200);
          *(_QWORD *)&v29[8 * v30 + 24] = *(_QWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 272) = v25;
          *(_QWORD *)(a1 + 280) = qstrdup(v21);
          *(_DWORD *)(a1 + 288) = 0;
          *(_QWORD *)(a1 + 200) = sub_814A0;
          *(_QWORD *)(a1 + 208) = a1;
          *(_BYTE *)(a1 + 128) = 0;
          v11 = 0;
          goto LABEL_42;
        }
      }
      if ( a2 )
      {
LABEL_41:
        v11 = 0;
        set_qerrno(0);
      }
      else
      {
        v11 = 32;
        set_error_string(0, *(const char **)(a1 + 8));
      }
    }
  }
LABEL_42:
  if ( v36[0] )
  {
    v36[1] = nullptr;
    qfree(v36[0]);
    v36[0] = nullptr;
    v37 = 0;
  }
  return v11;
}
