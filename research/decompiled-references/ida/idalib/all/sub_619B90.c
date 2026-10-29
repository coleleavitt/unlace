__int64 __fastcall sub_619B90(__int64 *a1, const char *a2, char a3)
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
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  unsigned __int8 v21; // al
  char v22; // [rsp+0h] [rbp-70h]
  __int64 v23; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v27; // [rsp+28h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  ptr = nullptr;
  v27 = 0;
  if ( !a2 )
    sub_378D50();
  v3 = sub_605C50(*(_QWORD *)(*a1 + 1672), &ptr, (__int64)a2, 1u);
  v4 = v3;
  if ( v3 == 1 )
  {
    v23 = *a1;
    v6 = *(_QWORD *)(*a1 + 1672);
    v7 = getinf(57);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(int *)(v8 + 16);
    if ( v7 < 0 )
    {
      if ( (int)v9 <= 0 )
        goto LABEL_34;
      v17 = *(_QWORD *)(v8 + 24);
      v18 = 0;
      v19 = -1;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v17 + 8 * v18) + 32LL) & 8) == 0 )
        {
          if ( (_DWORD)v19 != -1 )
            goto LABEL_14;
          v19 = (int)v18;
        }
        ++v18;
      }
      while ( v18 != v9 );
      if ( (_DWORD)v19 == -1 )
        goto LABEL_14;
      set_compiler((const __m128i *)(*(_QWORD *)(v17 + 8 * v19) + 36LL), (_BYTE *)&dword_0 + 1, nullptr);
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
      if ( !(unsigned __int8)set_compiler((const __m128i *)(v11 + 36), nullptr, nullptr) )
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
        v20 = getinf(5);
        v14 = *(_BYTE *)(v11 + 36) & 0xF;
        if ( v20 == 18 )
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
        v22 = v13;
        if ( (unsigned int)getinf(5) != 18 )
        {
          v13 = v22;
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
          v21 = getinf(57);
          get_compiler_name(v21);
          get_compiler_name(*(unsigned __int8 *)(v11 + 36));
          sub_387B90();
        }
        v15 = *(const char **)v11;
        if ( !strcmp(*(const char **)v11, a2) )
        {
          sub_606290(v23, (__int64)v15, 0);
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
          sub_368890();
LABEL_34:
        sub_368890();
      }
    }
    if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
      goto LABEL_17;
    goto LABEL_21;
  }
  if ( v3 != 2 )
    sub_378D50();
  if ( qword_2CCB548 )
    qword_2CCB548(0, -1);
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  return 1;
}
