unsigned __int64 __fastcall vault_with_events_t__::vfunc_3(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  const char *v7; // rdx
  unsigned int *v8; // r15
  __int64 v9; // rsi
  const char *v10; // rcx
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 v16; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbp
  char *v21; // rbx
  __int64 v22; // [rsp+8h] [rbp-88h]
  __int64 v23; // [rsp+10h] [rbp-80h]
  const char *v24; // [rsp+18h] [rbp-78h] BYREF
  __int128 v25; // [rsp+20h] [rbp-70h]
  __int64 v26; // [rsp+38h] [rbp-58h] BYREF
  __int128 v27; // [rsp+40h] [rbp-50h]
  unsigned __int64 v28; // [rsp+50h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v25 = 0;
  v24 = nullptr;
  sub_169A50((__int64 *)&v24, (__int64)"Hex-Rays Vault [errc:%d]: ", a2);
  v4 = 0;
  v5 = 0;
  if ( !a3[1] )
    goto LABEL_24;
  do
  {
    v7 = &s1;
    v8 = (unsigned int *)(32 * v5 + *a3);
    if ( *((_QWORD *)v8 + 2) )
      v7 = *((const char **)v8 + 1);
    v9 = *v8;
    v26 = 0;
    v27 = 0;
    vault_errstr(&v26, v9, v7);
    if ( (unsigned __int64)v27 > 1 )
      goto LABEL_9;
    v16 = v26;
    if ( *((_QWORD *)&v27 + 1) <= 3u )
    {
      v26 = qvector_reserve(&v26, v26, 4, 1);
      v16 = v26;
    }
    *(_QWORD *)&v27 = 4;
    *(_WORD *)v16 = 12142;
    *(_BYTE *)(v16 + 2) = 97;
    *(_BYTE *)(v26 + 3) = 0;
    if ( (_QWORD)v27 )
LABEL_9:
      v10 = (const char *)v26;
    else
      v10 = &s1;
    v11 = "[errc:%d] %s";
    sub_169A50((__int64 *)&v24, (__int64)"[errc:%d] %s", *v8, v10);
    if ( v5 < a3[1] - 1LL )
    {
      v12 = v25;
      if ( (_QWORD)v25 )
      {
        v13 = v25 + 4;
        v14 = v25 + 5;
        v11 = v24;
        v12 = v25 - 1;
        if ( *((_QWORD *)&v25 + 1) >= (unsigned __int64)(v25 + 5) )
        {
LABEL_13:
          *(_QWORD *)&v25 = v14;
          v11[v13] = 0;
          v15 = (char *)&v24[v12];
          *(_DWORD *)v15 = 1042292746;
          v15[4] = 32;
          goto LABEL_3;
        }
      }
      else
      {
        v11 = v24;
        v14 = 6;
        v13 = 5;
        if ( *((_QWORD *)&v25 + 1) >= 6u )
          goto LABEL_13;
      }
      v23 = v13;
      v22 = v14;
      v24 = (const char *)qvector_reserve(&v24, v11, v14, 1);
      v13 = v23;
      v11 = v24;
      v14 = v22;
      goto LABEL_13;
    }
LABEL_3:
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, v11);
    }
    v6 = a3[1];
    v5 = ++v4;
  }
  while ( v4 < v6 );
  if ( v6 )
    goto LABEL_21;
LABEL_24:
  v18 = v25;
  if ( (_QWORD)v25 )
  {
    v20 = v25 + 2;
    v19 = v25 + 3;
    v11 = v24;
    v18 = v25 - 1;
    if ( *((_QWORD *)&v25 + 1) >= (unsigned __int64)(v25 + 3) )
      goto LABEL_26;
LABEL_28:
    v24 = (const char *)qvector_reserve(&v24, v11, v19, 1);
    v11 = v24;
    goto LABEL_26;
  }
  v11 = v24;
  v19 = 4;
  v20 = 3;
  if ( *((_QWORD *)&v25 + 1) < 4u )
    goto LABEL_28;
LABEL_26:
  v11[v20] = 0;
  v21 = (char *)&v24[v18];
  *(_WORD *)v21 = 12142;
  v21[2] = 97;
LABEL_21:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v11);
  }
  return v28 - __readfsqword(0x28u);
}
