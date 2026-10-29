__int64 __fastcall sub_9DD190(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int8 v8; // bl
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  char v12; // di
  unsigned int v13; // ecx
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+8h] [rbp-40h]
  char v27; // [rsp+10h] [rbp-38h]

  v5 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a4;
  a1[1] = 0;
  *a1 = 0;
  a1[2] = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v9 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4, a5);
    if ( v9 )
    {
      sub_9DCF30(&v25, v9);
      v10 = v25;
      v11 = v26;
      v12 = v27;
      goto LABEL_4;
    }
LABEL_8:
    v13 = v8;
    v11 = 5;
    v10 = "mutex";
    goto LABEL_6;
  }
  v15 = (_QWORD *)v5;
  v16 = sub_F6AC00();
  if ( v16 )
  {
    v20 = *(_QWORD *)(v16 + 32);
    if ( !v20 )
      goto LABEL_8;
    sub_9DCF30(&v25, v20);
    v10 = v25;
    v11 = v26;
    v12 = v27;
  }
  else
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) > 2u )
      goto LABEL_8;
    v21 = sub_F68450(*v15, a2, v17, v18, v19);
    sub_9DD0C0(&v25, v21, v22, v23, v24);
    v10 = v25;
    v11 = v26;
    v12 = v27;
  }
LABEL_4:
  v13 = v8;
  if ( v12 )
    v13 = v8 | 2;
LABEL_6:
  a1[1] = (unsigned __int64)v10;
  a1[2] = v11;
  *a1 = a2 & 0xFFFFFFFFFFFFFFF9LL | (2LL * v13);
  return v13;
}
