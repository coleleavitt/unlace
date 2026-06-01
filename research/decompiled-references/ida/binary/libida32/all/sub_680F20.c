unsigned __int64 __fastcall sub_680F20(void **a1, __int64 a2)
{
  unsigned int *v2; // rbp
  unsigned __int64 i; // rbx
  unsigned int v4; // edx
  unsigned int v5; // eax
  void **v6; // rdi
  unsigned int v8; // edx
  unsigned int v9; // ecx
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
  void *v23; // [rsp+38h] [rbp-60h]
  unsigned __int64 v24; // [rsp+40h] [rbp-58h]
  unsigned int v25; // [rsp+50h] [rbp-48h]
  char v26; // [rsp+59h] [rbp-3Fh]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  ptr = nullptr;
  v26 = 0;
  v20 = 0;
  sub_679080(&ptr, a1);
  v2 = (unsigned int *)ptr;
  for ( i = (unsigned __int64)(a1 - 12); ; i -= 96LL )
  {
    v4 = *v2;
    v6 = (void **)(i + 96);
    v5 = **(_DWORD **)i;
    if ( *v2 == -1 )
    {
      if ( v5 != -1 )
        goto LABEL_10;
    }
    else if ( (*(_BYTE *)(a2 + 12) & 8) != 0 )
    {
      if ( v5 == -1 )
        goto LABEL_7;
      v4 &= ~1u;
      v5 &= ~1u;
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
    if ( (v26 == 1) != (*(_BYTE *)(i + 89) == 1) )
    {
      if ( v26 != 1 )
        goto LABEL_10;
      goto LABEL_7;
    }
    v8 = v2[1];
    v9 = *(_DWORD *)(*(_QWORD *)i + 4LL);
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
    v11 = v24 < *(_QWORD *)(i + 64);
    if ( v24 != *(_QWORD *)(i + 64) )
      goto LABEL_26;
    if ( !v24 )
      break;
    v11 = *(_DWORD *)v23 < **(_DWORD **)(i + 56);
LABEL_26:
    v10 = v11;
LABEL_21:
    if ( !v10 )
      goto LABEL_10;
LABEL_7:
    sub_679080(v6, (void **)i);
  }
  if ( v25 < *(_DWORD *)(i + 80) )
    goto LABEL_7;
LABEL_10:
  sub_679080(v6, &ptr);
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
          v14 += 5;
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

