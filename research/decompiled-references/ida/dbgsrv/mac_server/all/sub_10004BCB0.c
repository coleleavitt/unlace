/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004BCB0
// Address: 0x000000010004BCB0

//----- (000000010004BCB0) ----------------------------------------------------
__int64 __fastcall sub_10004BCB0(__int64 a1, char a2, unsigned __int8 a3)
{
  unsigned __int8 v5; // al
  _BYTE *v6; // rdi
  int v7; // eax
  unsigned int v8; // r12d
  unsigned __int8 v9; // r14
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rax
  char *v13; // r13
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // r12
  void *v17; // rdi
  int v18; // r14d
  unsigned __int8 *v19; // rdx
  char *v20; // r12
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // r14
  const char *v24; // rsi
  FILE *v26; // r14
  void *v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // [rsp+0h] [rbp-490h]
  __int64 v32; // [rsp+8h] [rbp-488h]
  const char *v33; // [rsp+10h] [rbp-480h]
  __int128 v35; // [rsp+20h] [rbp-470h] BYREF
  __int64 v36; // [rsp+30h] [rbp-460h]
  __int128 v37; // [rsp+40h] [rbp-450h] BYREF
  __int64 v38; // [rsp+50h] [rbp-440h]
  _OWORD v39[2]; // [rsp+60h] [rbp-430h] BYREF
  __int64 v40; // [rsp+80h] [rbp-410h]
  char v41; // [rsp+88h] [rbp-408h]
  __int128 v42; // [rsp+90h] [rbp-400h]

  v5 = *(_BYTE *)(a1 + 516);
  if ( (unsigned int)v5 - 9 >= 5 && v5 != 32 )
  {
    v19 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v19;
    *v19 = v5;
  }
  v37 = 0;
  v38 = 0;
  v6 = *(_BYTE **)(a1 + 8);
  v7 = (unsigned __int8)*v6;
  if ( v7 != 34 && v7 != 60 )
  {
    do
    {
      v40 = 0;
      v41 = 0;
      v42 = 0;
      memset(v39, 0, 26);
      v8 = sub_100048770(a1, (__int64)v39, 0, nullptr);
      if ( *(_QWORD *)(a1 + 64) != 0 && v8 == 0 )
        v8 = sub_100049580(a1, (__int64)v39);
      v18 = 5;
      if ( !v8 && WORD4(v39[1]) != 1 )
      {
        v18 = 6;
        if ( sub_10004C200((__int64)&v37, (__int64)v39) )
          v18 = 0;
      }
      if ( *(_QWORD *)&v39[0] )
      {
        *((_QWORD *)&v39[0] + 1) = 0;
        qfree(*(void **)&v39[0]);
      }
    }
    while ( !v18 );
    if ( v18 != 5 )
    {
      v8 = 30;
      goto LABEL_47;
    }
    if ( v8 )
      goto LABEL_47;
    v6 = (_BYTE *)v37;
    *(_QWORD *)(a1 + 8) = v37;
    if ( !v6 )
      return 30;
    LOBYTE(v7) = *v6;
  }
  v8 = 30;
  if ( (_BYTE)v7 != 60 && (unsigned __int8)v7 != 34 )
    goto LABEL_47;
  v9 = 62;
  if ( (_BYTE)v7 != 60 )
    v9 = v7;
  v10 = v6 + 1;
  *(_QWORD *)(a1 + 8) = v10;
  v11 = strchr(v10, v9);
  if ( !v11 )
    goto LABEL_47;
  *v11 = 0;
  v8 = 31;
  if ( *(_QWORD *)(a1 + 256) > 0x7Fu )
    goto LABEL_47;
  v12 = sub_1000480E0(a1, (char *)v39, 1024, *(unsigned __int8 **)(a1 + 8), v9, a3);
  v13 = v12;
  v35 = 0;
  v36 = 0;
  v33 = v12;
  if ( v12 )
  {
    v14 = strlen(v12);
    v15 = v14;
    v16 = v14 + 1;
    if ( v14 == -1 )
    {
      v17 = nullptr;
    }
    else
    {
      v17 = qvector_reserve((__int64)&v35, nullptr, v14 + 1, 1u);
      *(_QWORD *)&v35 = v17;
    }
    *((_QWORD *)&v35 + 1) = v16;
    memmove(v17, v13, v15);
    *(_BYTE *)(v35 + v15) = 0;
    v20 = (char *)v35;
  }
  else
  {
    v20 = nullptr;
  }
  v21 = *(_QWORD *)(a1 + 224);
  v22 = 24LL * *(_QWORD *)(a1 + 232);
  v23 = v22 + v21;
  if ( v22 )
  {
    v32 = v22 + v21;
    v31 = v20;
    if ( !*((_QWORD *)&v35 + 1) )
      v20 = (char *)_s1;
    while ( 1 )
    {
      v24 = _s1;
      if ( *(_QWORD *)(v21 + 8) )
        v24 = *(const char **)v21;
      if ( !strcmp(v20, v24) )
        break;
      v21 += 24;
      v22 -= 24;
      if ( !v22 )
      {
        v23 = v32;
        v21 = v32;
        v20 = v31;
        goto LABEL_41;
      }
    }
    v20 = v31;
    v23 = v32;
    if ( !v31 )
      goto LABEL_45;
  }
  else
  {
LABEL_41:
    if ( !v20 )
      goto LABEL_45;
  }
  *((_QWORD *)&v35 + 1) = 0;
  qfree(v20);
LABEL_45:
  if ( v21 != v23 )
    goto LABEL_46;
  if ( v33 )
  {
    v26 = fopenRT(v33);
    if ( v26 )
    {
      v27 = *(void **)(a1 + 248);
      v28 = *(_QWORD *)(a1 + 256);
      v29 = v28 + 1;
      if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v28 + 1) )
      {
        v27 = qvector_reserve(a1 + 248, v27, v29, 0x28u);
        *(_QWORD *)(a1 + 248) = v27;
        v28 = *(_QWORD *)(a1 + 256);
        v29 = v28 + 1;
      }
      v30 = 5 * v28;
      *(_QWORD *)(a1 + 256) = v29;
      *((_QWORD *)v27 + v30 + 1) = *(_QWORD *)(a1 + 272);
      *((_DWORD *)v27 + 2 * v30 + 8) = *(_DWORD *)(a1 + 288);
      *((_QWORD *)v27 + v30) = *(_QWORD *)(a1 + 280);
      *((_BYTE *)v27 + 8 * v30 + 36) = *(_BYTE *)(a1 + 128);
      *((_QWORD *)v27 + v30 + 2) = *(_QWORD *)(a1 + 200);
      *((_QWORD *)v27 + v30 + 3) = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 272) = v26;
      *(_QWORD *)(a1 + 280) = qstrdup(v33);
      *(_DWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 200) = sub_100044F70;
      *(_QWORD *)(a1 + 208) = a1;
      *(_BYTE *)(a1 + 128) = 0;
      v8 = 0;
      goto LABEL_47;
    }
  }
  if ( !a2 )
  {
    v8 = 32;
    set_error_string(0, *(const char **)(a1 + 8));
  }
  else
  {
LABEL_46:
    v8 = 0;
    set_qerrno();
  }
LABEL_47:
  if ( (_QWORD)v37 )
  {
    *((_QWORD *)&v37 + 1) = 0;
    qfree((void *)v37);
  }
  return v8;
}
