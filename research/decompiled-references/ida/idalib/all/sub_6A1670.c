unsigned __int64 __fastcall sub_6A1670(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  bool v10; // al
  bool v11; // cf
  void *v12; // r14
  unsigned __int64 v13; // r13
  void **v14; // rbx
  __int64 v15; // r12
  void *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v20; // [rsp+8h] [rbp-90h]
  void *v21; // [rsp+18h] [rbp-80h]
  unsigned __int64 v22; // [rsp+20h] [rbp-78h]
  void *v23; // [rsp+40h] [rbp-58h]
  unsigned __int64 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]
  char v26; // [rsp+61h] [rbp-37h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  ptr = nullptr;
  v26 = 0;
  v20 = 0;
  sub_698F60((__int64)&ptr, a1);
  v2 = (unsigned __int64 *)ptr;
  for ( i = a1 - 104; ; i -= 104LL )
  {
    v4 = *v2;
    v6 = i + 104;
    v5 = **(_QWORD **)i;
    if ( *v2 == -1 )
    {
      if ( v5 != -1 )
        goto LABEL_10;
    }
    else if ( (*(_BYTE *)(a2 + 12) & 8) != 0 )
    {
      if ( v5 == -1 )
        goto LABEL_7;
      v4 &= ~1uLL;
      v5 &= ~1uLL;
      if ( v5 != v4 )
        goto LABEL_17;
    }
    else
    {
      if ( v5 == -1 )
        goto LABEL_7;
      if ( v5 != v4 )
      {
LABEL_17:
        if ( v4 >= v5 )
          goto LABEL_10;
        goto LABEL_7;
      }
    }
    if ( (v26 == 1) != (*(_BYTE *)(i + 97) == 1) )
    {
      if ( v26 != 1 )
        goto LABEL_10;
      goto LABEL_7;
    }
    v8 = v2[1];
    v9 = *(_QWORD *)(*(_QWORD *)i + 8LL);
    if ( v8 != v9 )
    {
      v10 = v9 < v8;
      goto LABEL_21;
    }
    if ( v26 != 1 )
    {
      if ( v26 != 2 || (v18 = *(_QWORD *)(i + 32), v11 = v22 < v18, v22 == v18) )
        v11 = (unsigned __int64)&ptr < i;
      goto LABEL_26;
    }
    v17 = *(_QWORD *)(i + 32);
    if ( v22 != v17 )
    {
      if ( !v22 )
        goto LABEL_7;
      if ( !v17 )
        goto LABEL_10;
    }
    v11 = v24 < *(_QWORD *)(i + 72);
    if ( v24 != *(_QWORD *)(i + 72) )
      goto LABEL_26;
    if ( !v24 )
      break;
    v11 = *(_QWORD *)v23 < **(_QWORD **)(i + 64);
LABEL_26:
    v10 = v11;
LABEL_21:
    if ( !v10 )
      goto LABEL_10;
LABEL_7:
    sub_698F60(v6, i);
  }
  if ( v25 < *(_QWORD *)(i + 88) )
    goto LABEL_7;
LABEL_10:
  sub_698F60(v6, (__int64)&ptr);
  if ( v26 == 2 )
  {
    v12 = v21;
    if ( v21 )
    {
      v13 = v22;
      v14 = (void **)v21;
      v15 = 0;
      if ( v22 )
      {
        do
        {
          v16 = *v14;
          if ( *v14 )
          {
            v14[1] = nullptr;
            qfree(v16);
          }
          ++v15;
          v14 += 7;
        }
        while ( v13 != v15 );
      }
      qfree(v12);
    }
  }
  else if ( v26 == 1 )
  {
    if ( v23 )
      qfree(v23);
    if ( v21 )
      qfree(v21);
  }
  if ( v2 )
    qfree(v2);
  return v27 - __readfsqword(0x28u);
}
