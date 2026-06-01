unsigned __int8 *__fastcall sub_20CA960(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx
  char v3; // r14
  __int64 v4; // r12
  int v5; // eax
  unsigned __int8 *v6; // rbx
  unsigned __int8 **v7; // rax
  char v8; // dl
  char *v9; // rcx
  char *v10; // rcx
  __int16 v11; // ax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int8 *v15; // r13
  _BYTE *v16; // rdi
  unsigned int v17; // edx
  __int64 v19; // rdx
  unsigned __int8 **v20; // rsi
  char *v21; // rax
  char *v22; // rsi
  unsigned __int64 v23; // rax
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h]
  int v26; // [rsp+20h] [rbp-68h]
  char v27; // [rsp+24h] [rbp-64h]
  unsigned __int8 *v28; // [rsp+28h] [rbp-60h] BYREF

  v1 = a1;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 8LL) != 14 )
    return v1;
  v27 = 1;
  v3 = 1;
  v4 = 0x8000000000041LL;
  v26 = 0;
  ptr = &v28;
  v25 = 0x100000004LL;
  v28 = a1;
  while ( 1 )
  {
    v5 = *v1;
    if ( (unsigned __int8)v5 > 0x1Cu )
    {
      if ( (_BYTE)v5 != 63 )
      {
        if ( (unsigned __int8)v5 == 78 )
        {
LABEL_16:
          if ( (v1[7] & 0x40) != 0 )
            v12 = *((__int64 **)v1 - 1);
          else
            v12 = (__int64 *)&v1[-32 * (*((_DWORD *)v1 + 1) & 0x7FFFFFF)];
          v13 = *v12;
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 8) + 8LL) != 14 )
            goto LABEL_42;
        }
        else
        {
          if ( (unsigned __int8)v5 == 79 )
            goto LABEL_8;
          v23 = (unsigned int)(v5 - 34);
          if ( (unsigned __int8)v23 > 0x33u )
            goto LABEL_42;
          if ( !_bittest64(&v4, v23) )
            goto LABEL_42;
          v13 = sub_20906B0((__int64)v1, 53);
          v3 = v27;
          if ( !v13 )
            goto LABEL_42;
        }
        v1 = (unsigned __int8 *)v13;
        goto LABEL_27;
      }
      goto LABEL_20;
    }
    if ( (_BYTE)v5 != 18 )
    {
      if ( (_BYTE)v5 != 14 )
        goto LABEL_42;
      v1 = *((unsigned __int8 **)v1 - 4);
      goto LABEL_27;
    }
    v11 = *((_WORD *)v1 + 1);
    if ( v11 != 34 )
      break;
LABEL_20:
    v14 = *((_DWORD *)v1 + 1) & 0x7FFFFFF;
    v15 = &v1[32 * (1 - v14)];
    if ( v1 != v15 )
    {
      while ( 1 )
      {
        v16 = *(_BYTE **)v15;
        if ( **(_BYTE **)v15 != 5 )
          break;
        v17 = *((_DWORD *)v16 + 8);
        if ( !(v17 <= 0x40 ? *((_QWORD *)v16 + 3) == 0 : v17 == (unsigned int)sub_2206780(v16 + 24)) )
          break;
        v15 += 32;
        if ( v1 == v15 )
          goto LABEL_26;
      }
LABEL_42:
      if ( v3 )
        return v1;
LABEL_43:
      free(ptr);
      return v1;
    }
LABEL_26:
    v1 = *(unsigned __int8 **)&v1[-32 * v14];
LABEL_27:
    if ( !v3 )
      goto LABEL_11;
LABEL_28:
    v9 = (char *)ptr;
    v19 = 8LL * HIDWORD(v25);
    v20 = (unsigned __int8 **)((char *)ptr + v19);
    if ( ptr != (char *)ptr + v19 )
    {
      v7 = (unsigned __int8 **)ptr;
      if ( v1 == *(unsigned __int8 **)ptr )
      {
LABEL_44:
        v8 = 0;
        goto LABEL_35;
      }
      while ( v20 != ++v7 )
      {
        if ( v1 == *v7 )
          goto LABEL_44;
      }
    }
    if ( HIDWORD(v25) < (unsigned int)v25 )
    {
      ++HIDWORD(v25);
      *v20 = v1;
      v9 = (char *)ptr;
      v7 = (unsigned __int8 **)((char *)ptr + v19);
      v8 = v3;
      goto LABEL_35;
    }
LABEL_11:
    v7 = (unsigned __int8 **)sub_2236760(&ptr, v1);
    v3 = v27;
    v9 = (char *)ptr;
    if ( !v27 )
    {
      v10 = (char *)ptr + 8 * (unsigned int)v25;
      goto LABEL_36;
    }
LABEL_35:
    v3 = 1;
    v10 = &v9[8 * HIDWORD(v25)];
LABEL_36:
    if ( v10 != (char *)v7 && (unsigned __int64)*v7 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v21 = (char *)(v7 + 1);
      do
      {
        v22 = v21;
        if ( v10 == v21 )
          break;
        v21 += 8;
      }
      while ( *(_QWORD *)v22 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !v8 )
      goto LABEL_42;
  }
  if ( v11 == 49 )
    goto LABEL_16;
  if ( v11 == 50 )
  {
LABEL_8:
    if ( (v1[7] & 0x40) != 0 )
      v6 = *((unsigned __int8 **)v1 - 1);
    else
      v6 = &v1[-32 * (*((_DWORD *)v1 + 1) & 0x7FFFFFF)];
    v1 = *(unsigned __int8 **)v6;
    if ( !v3 )
      goto LABEL_11;
    goto LABEL_28;
  }
  if ( !v3 )
    goto LABEL_43;
  return v1;
}
