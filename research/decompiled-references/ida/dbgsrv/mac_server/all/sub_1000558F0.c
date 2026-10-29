/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000558F0
// Address: 0x00000001000558F0

//----- (00000001000558F0) ----------------------------------------------------
__int64 __fastcall sub_1000558F0(__int64 a1, void **a2, unsigned __int64 *a3)
{
  int v4; // ebx
  __int64 v5; // r13
  int v6; // ebx
  const char *v7; // r14
  _BYTE *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v11; // r15
  size_t v12; // rax
  size_t v13; // r15
  unsigned __int64 v14; // rdx
  void *v15; // rax
  int v16; // eax
  unsigned __int8 *v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  void **v20; // rdi
  unsigned __int64 v21; // rcx
  char *v22; // rax
  const void *v23; // rax
  unsigned __int64 v24; // rcx
  void *v25; // rdi
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ebx
  unsigned __int64 v30; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+18h] [rbp-88h]
  unsigned int v34; // [rsp+24h] [rbp-7Ch]
  _QWORD *v35; // [rsp+28h] [rbp-78h]
  void **v36; // [rsp+28h] [rbp-78h]
  __int128 v37; // [rsp+30h] [rbp-70h] BYREF
  __int64 v38; // [rsp+40h] [rbp-60h]
  unsigned int v39; // [rsp+4Ch] [rbp-54h] BYREF
  __int128 v40; // [rsp+50h] [rbp-50h] BYREF
  __int64 v41; // [rsp+60h] [rbp-40h]

  v40 = 0;
  v41 = 0;
  v4 = unpack_dd(a3, a3[1]);
  sub_100055CE0((unsigned __int64 *)&v40, v4);
  v34 = v4;
  if ( v4 > 0 )
  {
    v5 = v40;
    v33 = 0;
    v6 = 0;
    while ( 1 )
    {
      *(_BYTE *)(v5 + 424) = 0;
      v33 = unpack_dq(a3, a3[1]) + v33 - 1;
      *(_QWORD *)v5 = v33;
      v7 = (const char *)*a3;
      v8 = (_BYTE *)*a3;
      do
      {
        if ( (unsigned __int64)v8 >= a3[1] )
        {
          v11 = v5 + 8;
          goto LABEL_14;
        }
        v9 = (unsigned __int64)(v8 + 1);
      }
      while ( *v8++ != 0 );
      *a3 = v9;
      v11 = v5 + 8;
      if ( !v7 )
        goto LABEL_14;
      v35 = (_QWORD *)(v5 + 8);
      v12 = strlen(v7);
      if ( !v12 )
        break;
      v13 = v12;
      v14 = v12 + 1;
      v15 = *(void **)(v5 + 8);
      if ( *(_QWORD *)(v5 + 24) < v14 )
      {
        v30 = v14;
        v15 = qvector_reserve((__int64)v35, *(void **)(v5 + 8), v14, 1u);
        *v35 = v15;
        v14 = v30;
      }
      *(_QWORD *)(v5 + 16) = v14;
      memmove(v15, v7, v13);
      *(_BYTE *)(*(_QWORD *)(v5 + 8) + v13) = 0;
      if ( *(_QWORD *)(v5 + 16) >= 2u )
        goto LABEL_15;
LABEL_31:
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000AE0((int)"update_lowcnd(ea=%a cnd=%s)\n", v33);
      ++v6;
      v5 += 432;
      if ( v6 == v34 )
        goto LABEL_33;
    }
    v11 = v5 + 8;
LABEL_14:
    *(_QWORD *)(v5 + 16) = 0;
    if ( *(_QWORD *)(v11 + 8) < 2u )
      goto LABEL_31;
LABEL_15:
    *(_DWORD *)(v5 + 428) = 0;
    v16 = unpack_dd(a3, a3[1]);
    *(_DWORD *)(v5 + 32) = v16;
    if ( v16 != 4 )
      *(_DWORD *)(v5 + 428) = unpack_dd(a3, a3[1]);
    v17 = (unsigned __int8 *)*a3;
    v18 = a3[1];
    if ( *a3 >= v18 || (v19 = *v17, *a3 = (unsigned __int64)(v17 + 1), !v19) )
    {
LABEL_29:
      v26 = unpack_dq(a3, v18);
      *(_QWORD *)(v5 + 80) = v26 - 1;
      if ( v26 )
        sub_100067160(v5 + 64, a3);
      goto LABEL_31;
    }
    v20 = (void **)(v5 + 40);
    v21 = *(_QWORD *)(v5 + 48);
    if ( v21 >= v19 )
    {
      if ( v21 == v19 )
        goto LABEL_27;
      LOBYTE(v37) = 0;
      v36 = (void **)(v5 + 40);
      sub_10001CE90((__int64)v20, v19, (unsigned __int8 *)&v37);
    }
    else
    {
      v22 = *(char **)(v5 + 40);
      v36 = (void **)(v5 + 40);
      if ( *(_QWORD *)(v5 + 56) < v19 )
      {
        v22 = (char *)qvector_reserve((__int64)v20, v22, v19, 1u);
        *(_QWORD *)(v5 + 40) = v22;
        v21 = *(_QWORD *)(v5 + 48);
      }
      __bzero(&v22[v21], v19 - v21);
      *(_QWORD *)(v5 + 48) = v19;
    }
    v20 = v36;
LABEL_27:
    v23 = (const void *)*a3;
    v18 = a3[1];
    v24 = *a3 + v19;
    if ( v24 >= *a3 && v24 <= v18 )
    {
      v25 = *v20;
      *a3 = v24;
      memcpy(v25, v23, v19);
      v18 = a3[1];
    }
    goto LABEL_29;
  }
LABEL_33:
  v37 = 0;
  v38 = 0;
  v27 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int128 *))(**(_QWORD **)(a1 + 440) + 352LL))(
          *(_QWORD *)(a1 + 440),
          &v39,
          v40,
          v34,
          &v37);
  v28 = v27;
  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000AE0((int)"  update_lowcnds => %d\n", v27);
  sub_100032FE0(a2, v28);
  sub_100032FE0(a2, v39);
  if ( v28 != 1 )
    sub_100055750((__int64)a2, (__int64)&v37);
  if ( (_QWORD)v37 )
  {
    *((_QWORD *)&v37 + 1) = 0;
    qfree((void *)v37);
  }
  sub_10005F160((char **)&v40);
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
