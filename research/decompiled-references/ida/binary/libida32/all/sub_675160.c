__int64 __fastcall sub_675160(_QWORD *a1, unsigned int a2, _QWORD *a3, char a4, char a5)
{
  __int64 v7; // rax
  bool v8; // zf
  const char *v9; // rdx
  __int64 v10; // rax
  const char *v12; // r8
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-88h]
  unsigned int v24; // [rsp+Ch] [rbp-7Ch] BYREF
  void *v25; // [rsp+10h] [rbp-78h] BYREF
  __int128 v26; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v7 = *a1;
  v8 = a3 == nullptr;
  v9 = nullptr;
  v24 = a2;
  v10 = *(_QWORD *)(v7 + 1624);
  v29 = __readfsqword(0x28u);
  v23 = v10;
  v12 = nullptr;
  v25 = nullptr;
  ptr = nullptr;
  v26 = 0;
  v28 = 0;
  if ( v8 || !*(_BYTE *)a3 )
  {
    v13 = v24;
    if ( !a5 )
      goto LABEL_4;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)serialize_tinfo(&v25, &ptr, 0, a3, 272) )
    goto LABEL_29;
  v12 = (const char *)ptr;
  v9 = (const char *)v25;
  v13 = v24;
  if ( a5 )
  {
LABEL_16:
    sub_396090(0xCu, v13, v9, v12);
    v12 = (const char *)ptr;
    v9 = (const char *)v25;
  }
LABEL_4:
  v14 = sub_674FC0(a1, v13, 0x3000u, v9, v12);
  if ( (_BYTE)v14 )
  {
    if ( a4 )
    {
      if ( (unsigned __int64)v26 <= 1 )
      {
        sub_3CB500((__int64)a1, v13, 3321890816LL, 0);
        if ( (unsigned __int64)v26 > 1 )
          goto LABEL_9;
        goto LABEL_17;
      }
      set_abits(v13, 2048);
    }
    if ( (unsigned __int64)v26 > 1 )
    {
LABEL_9:
      sub_6745C0((_QWORD *)(v23 + 8), &v24, a3, 0x9Au, v15);
      goto LABEL_10;
    }
LABEL_17:
    v18 = *(_QWORD *)(*a1 + 1624LL);
    v19 = *(_QWORD *)(v18 + 24);
    v16 = v18 + 16;
    if ( v19 )
    {
      v20 = v18 + 16;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v19 + 16);
          v22 = *(_QWORD *)(v19 + 24);
          if ( *(_DWORD *)(v19 + 32) < v13 )
            break;
          v20 = v19;
          v19 = *(_QWORD *)(v19 + 16);
          if ( !v21 )
            goto LABEL_22;
        }
        v19 = *(_QWORD *)(v19 + 24);
      }
      while ( v22 );
LABEL_22:
      if ( v20 != v16 && v13 >= *(_DWORD *)(v20 + 32) )
      {
        sub_6743C0(v18 + 8, v20, 155);
        if ( !a5 )
          goto LABEL_11;
        goto LABEL_25;
      }
    }
LABEL_10:
    if ( !a5 )
      goto LABEL_11;
LABEL_25:
    sub_396090(0xDu, v13, v25, ptr, v16);
    goto LABEL_11;
  }
LABEL_29:
  v14 = 0;
LABEL_11:
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v14;
}

