__int64 __fastcall sub_5FDA70(__int64 *a1, const char *a2, char a3)
{
  int v3; // eax
  int v4; // ebx
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // r12
  char v12; // al
  char v13; // dl
  char v14; // al
  const char *v15; // r13
  unsigned __int8 v16; // al
  __int64 v17; // rax
  int v18; // edi
  int v19; // edx
  unsigned __int8 v20; // al
  char v21; // [rsp+0h] [rbp-70h]
  __int64 v22; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v26; // [rsp+28h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  ptr = nullptr;
  v26 = 0;
  if ( !a2 )
    sub_375400();
  v3 = sub_5E9D80(*(_QWORD *)(*a1 + 1480), &ptr, (__int64)a2, 1u);
  v4 = v3;
  if ( v3 == 1 )
  {
    v22 = *a1;
    v6 = *(_QWORD *)(*a1 + 1480);
    v7 = getinf(57);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(int *)(v8 + 16);
    if ( v7 < 0 )
    {
      if ( (int)v9 <= 0 )
        goto LABEL_34;
      v17 = 0;
      v18 = -1;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v17) + 32LL) & 8) == 0 )
        {
          if ( v18 != -1 )
            goto LABEL_14;
          v18 = v17;
        }
        ++v17;
      }
      while ( v17 != v9 );
      if ( v18 == -1 )
        goto LABEL_14;
      set_compiler();
      v8 = *(_QWORD *)(v6 + 8);
      LODWORD(v9) = *(_DWORD *)(v8 + 16);
    }
    if ( (int)v9 <= 0 )
      goto LABEL_34;
LABEL_14:
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * v10);
      if ( !(unsigned __int8)set_compiler() )
        break;
      if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
      {
        v16 = getinf(57);
        setinf(57, v16 | 0x80u);
        if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
          goto LABEL_17;
LABEL_21:
        if ( (*(_BYTE *)(v11 + 36) & 0xF) == 0 )
          goto LABEL_17;
        goto LABEL_22;
      }
      if ( (*(_BYTE *)(v11 + 36) & 0xF) == 0 )
        goto LABEL_17;
LABEL_22:
      v12 = getinf(57) & 0xF;
      v13 = v12;
      if ( v12 == 8 )
      {
        v14 = *(_BYTE *)(v11 + 36) & 0xF;
        if ( v14 == 8 )
          goto LABEL_17;
        if ( v14 != 6 )
        {
          v13 = 2;
          goto LABEL_26;
        }
        getinf(5);
      }
      else if ( v12 == 6 )
      {
        v19 = getinf(5);
        v14 = *(_BYTE *)(v11 + 36) & 0xF;
        if ( v19 == 18 )
        {
          if ( v14 == 6 && (unsigned int)getinf(5) == 18 )
            goto LABEL_17;
        }
        else if ( v14 != 8 )
        {
          if ( v14 != 6 )
          {
            v13 = 1;
            goto LABEL_26;
          }
          if ( (unsigned int)getinf(5) != 18 )
            goto LABEL_17;
        }
      }
      else
      {
        v14 = *(_BYTE *)(v11 + 36) & 0xF;
        if ( v14 == 8 )
        {
          v14 = 2;
          goto LABEL_26;
        }
        if ( v14 != 6 )
          goto LABEL_26;
        v21 = v13;
        if ( (unsigned int)getinf(5) != 18 )
        {
          v13 = v21;
          v14 = 1;
LABEL_26:
          if ( v14 == v13 )
            goto LABEL_17;
        }
      }
      if ( (a3 & 1) == 0 )
      {
        if ( (a3 & 2) == 0 )
        {
          v20 = getinf(57);
          get_compiler_name(v20);
          get_compiler_name(*(unsigned __int8 *)(v11 + 36));
          sub_383E70();
        }
        v15 = *(const char **)v11;
        if ( !strcmp(*(const char **)v11, a2) )
        {
          sub_5EA3C0(v22, (__int64)v15, 0);
          v4 = 3;
        }
        else
        {
          del_til(v15);
        }
        goto LABEL_18;
      }
LABEL_17:
      ++v10;
LABEL_18:
      v8 = *(_QWORD *)(v6 + 8);
      if ( v10 >= *(_DWORD *)(v8 + 16) )
      {
        if ( v4 == 3 )
          sub_365330();
LABEL_34:
        sub_365330();
      }
    }
    if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
      goto LABEL_17;
    goto LABEL_21;
  }
  if ( v3 != 2 )
    sub_375400();
  if ( qword_2CA1648 )
    qword_2CA1648(0, 0xFFFFFFFFLL);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  return 1;
}

