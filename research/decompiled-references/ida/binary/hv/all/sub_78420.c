__int64 __fastcall sub_78420(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  _DWORD *v6; // r14
  unsigned __int64 v10; // rcx
  char v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  const char *v20; // rax
  _QWORD *v21; // rbx
  const char *v22; // r13
  size_t v23; // rax
  size_t v24; // r14
  size_t v25; // r15
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v4 = a1[5];
  if ( v4 > a2 )
  {
    if ( !byte_1671A1 )
      sub_96F80(3321);
    BUG();
  }
  v5 = a1[3];
  v6 = nullptr;
  if ( !*(_BYTE *)(v5 + 635) )
    v6 = (_DWORD *)a1[6];
  v10 = a1[1];
  v11 = byte_1671A0;
  byte_1671A0 = *(_BYTE *)(v5 + 634);
  v12 = v4;
  if ( v4 >= a2 )
    goto LABEL_14;
  if ( v4 < v10 )
  {
    v15 = a2 - v4;
    v16 = a1[4];
    v17 = v10 - v4;
    if ( v15 <= v10 - v4 )
      v17 = v15;
    a2 = 0;
    v26 = v17;
    if ( !(unsigned __int8)sub_7D080(v16, 0, v17, v5, (_DWORD)v6, v5) )
      goto LABEL_26;
    v12 = a1[5] + v26;
    a1[5] = v12;
    v10 = a1[1];
    v4 = v12;
LABEL_14:
    if ( v10 >= v12 )
    {
      v18 = v10 - v12;
      if ( v18 > a4 )
        v18 = a4;
      v13 = 0;
      if ( !v18 )
        goto LABEL_8;
      v19 = sub_91B10(a1[3], a1[4], a3, v18, 0);
      v13 = v19;
      if ( v19 >= 0 )
      {
        if ( v19 && v6 )
          *v6 = sub_8E7C0((unsigned int)*v6, a3, v19);
        v4 = v13 + a1[5];
        goto LABEL_8;
      }
LABEL_26:
      v13 = -1;
      goto LABEL_9;
    }
LABEL_23:
    sub_8F860(3, a2, v12);
    v20 = (const char *)sub_8FAE0(*(void **)(a1[3] + 48LL));
    v21 = (_QWORD *)a1[3];
    v22 = v20;
    if ( v20 && (v23 = strlen(v20), (v24 = v23) != 0) )
    {
      v25 = v23 + 1;
      if ( v21[2] < v23 + 1 )
        *v21 = sub_96080(v21, *v21, v23 + 1, 1);
      v21[1] = v25;
      memmove((void *)*v21, v22, v24);
      *(_BYTE *)(*v21 + v24) = 0;
    }
    else
    {
      v21[1] = 0;
    }
    goto LABEL_26;
  }
  if ( v10 < v4 )
    goto LABEL_23;
  v13 = 0;
LABEL_8:
  a1[5] = v4;
LABEL_9:
  byte_1671A0 = v11;
  return v13;
}

