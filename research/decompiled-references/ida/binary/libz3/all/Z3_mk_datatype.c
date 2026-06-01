__int64 __fastcall Z3_mk_datatype(__int64 a1, char *a2, unsigned int a3, char *ptr)
{
  char v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 *v10; // rbp
  __int64 v11; // rsi
  bool v12; // zf
  _QWORD *v14; // r8
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r12
  int ptra; // [rsp+0h] [rbp-A8h]
  _QWORD *ptrb; // [rsp+0h] [rbp-A8h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  _QWORD *v25; // [rsp+10h] [rbp-98h]
  __int64 v26; // [rsp+18h] [rbp-90h]
  __int64 v27; // [rsp+20h] [rbp-88h]
  unsigned int v28; // [rsp+2Ch] [rbp-7Ch]
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-60h]
  _BYTE v32[88]; // [rsp+50h] [rbp-58h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_2956F0();
    ptra = (int)ptr;
    v28 = a3;
  }
  else
  {
    ptra = 0;
    v28 = 0;
  }
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v24 = v7;
  sub_15F01E0(v32, v7);
  v31 = nullptr;
  v30 = v24;
  v29 = sub_24D140(a1, a2, a3, (__int64)ptr);
  if ( (unsigned __int8)sub_15FA930(
                          *(_QWORD *)(a1 + 1480),
                          1,
                          (unsigned int)&v29,
                          0,
                          0,
                          (unsigned int)&v30,
                          ptra,
                          (unsigned int)&v30) )
  {
    v9 = *v31;
    sub_251FD0(a1, *v31);
    v14 = (_QWORD *)sub_15F6BE0(v32, v9);
    v15 = 0;
    v16 = 8LL * a3;
    if ( a3 )
    {
      do
      {
        v17 = *(_QWORD *)&ptr[v15];
        v18 = *(_QWORD *)(*v14 + v15);
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v19 = *(_QWORD *)(v17 + 48);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v17 + 56);
          v12 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v12 )
          {
            v27 = v16;
            v26 = v17;
            v25 = v14;
            sub_15D7BC0(v20, v19);
            v16 = v27;
            v17 = v26;
            v14 = v25;
          }
        }
        v15 += 8;
        *(_QWORD *)(v17 + 48) = v18;
      }
      while ( v16 != v15 );
    }
    if ( !v6 )
    {
      v8 = v31;
      if ( !v31 )
        return v9;
      goto LABEL_6;
    }
    sub_2BB620(v9);
    v21 = 0;
    if ( v28 )
    {
      do
      {
        sub_2BB770(ptrb[v21], 3, (unsigned int)v21);
        ++v21;
      }
      while ( v28 != v21 );
    }
    v8 = v31;
    if ( v31 )
      goto LABEL_6;
LABEL_30:
    byte_1C7EBA0 = 1;
    return v9;
  }
  sub_24EA30(a1, 3, 0);
  if ( v6 )
  {
    sub_2BB620(0);
    v8 = v31;
    v9 = 0;
    if ( v31 )
      goto LABEL_6;
    goto LABEL_30;
  }
  v8 = v31;
  v9 = 0;
  if ( !v31 )
    return v9;
LABEL_6:
  v10 = &v8[*((unsigned int *)v8 - 1)];
  if ( v8 >= v10 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 )
      {
        v12 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v12 )
          break;
      }
      if ( ++v8 >= v10 )
        goto LABEL_12;
    }
    sub_15D7BC0(v30, v11);
    ++v8;
  }
  while ( v8 < v10 );
LABEL_12:
  v8 = v31;
  if ( v31 )
LABEL_13:
    sub_186B220(v8 - 1);
  if ( v6 )
    goto LABEL_30;
  return v9;
}

