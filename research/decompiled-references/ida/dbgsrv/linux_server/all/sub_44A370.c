/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A370
// Address: 0x000000000044A370

//----- (000000000044A370) ----------------------------------------------------
char *__fastcall sub_44A370(__int64 *a1, char *a2, __int64 a3, __int64 a4, const char *a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int8 *v14; // rsi
  char *v15; // rax
  char *v16; // rbx
  const char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  char v22; // al
  unsigned __int8 *v23; // rdx
  char *v24; // rax
  pthread_mutex_t *v28; // [rsp+18h] [rbp-40h]

  v28 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v10 = a1[3];
  v11 = v10 + 24 * a1[4];
  if ( v11 != v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    v13 = a1[3];
    if ( !a5 )
      goto LABEL_7;
    v18 = s1;
    if ( v12 )
LABEL_13:
      v18 = *(const char **)v10;
    while ( strcasecmp(v18, a5) )
    {
      v13 += 24;
      if ( v11 == v13 )
        goto LABEL_18;
      v10 = v13;
      v18 = s1;
      if ( *(_QWORD *)(v13 + 8) )
        goto LABEL_13;
    }
    while ( 1 )
    {
      v13 += 24;
      v10 = v13;
      if ( v11 == v13 )
        break;
      v12 = *(_QWORD *)(v13 + 8);
LABEL_7:
      v14 = (unsigned __int8 *)s1;
      if ( v12 )
        v14 = *(unsigned __int8 **)v10;
      v15 = sub_480480(a2, a3, v14, a4, 0);
      v16 = v15;
      if ( a6 )
      {
        if ( (unsigned __int8)sub_448C90(v15, a3) )
          goto LABEL_11;
      }
      else if ( sub_480B00(v15) )
      {
        goto LABEL_11;
      }
    }
  }
LABEL_18:
  v19 = a1[1];
  if ( !v19 )
  {
    sub_47EAC0((__int64)a1, "idc", 0);
    v19 = a1[1];
  }
  v20 = *a1 + 24 * v19;
  v21 = *a1;
  if ( v20 == *a1 )
  {
LABEL_29:
    v16 = sub_47EDA0(a2, a3, a4, nullptr);
  }
  else
  {
    while ( 1 )
    {
      v23 = (unsigned __int8 *)s1;
      if ( *(_QWORD *)(v21 + 8) )
        v23 = *(unsigned __int8 **)v21;
      v24 = sub_480480(a2, a3, v23, a4, 0);
      v16 = v24;
      v22 = a6 ? sub_448C90(v24, a3) : sub_480B00(v24);
      if ( v22 )
        break;
      v21 += 24;
      if ( v20 == v21 )
        goto LABEL_29;
    }
  }
LABEL_11:
  sub_482F10(v28);
  return v16;
}
