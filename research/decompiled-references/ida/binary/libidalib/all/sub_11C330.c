unsigned __int64 __fastcall sub_11C330(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rdi
  __int64 v4; // rbp
  char v5; // al
  __int64 v6; // r13
  const char *v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  const void *v11; // rbp
  char *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  char *s1; // [rsp+8h] [rbp-50h] BYREF
  __int128 v15; // [rsp+10h] [rbp-48h]
  int v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1];
  v13 = 40;
  v4 = v2;
  s1 = nullptr;
  v16 = 0;
  v15 = 0;
  v5 = (**v3)(v3, 40, &v13);
  v6 = **(_QWORD **)(*a1 + 24LL);
  if ( !v5 )
    goto LABEL_5;
  if ( *(_QWORD *)(v4 + 40) )
  {
    v7 = *(const char **)(v4 + 32);
    if ( !(_QWORD)v15 )
    {
      if ( strcmp(::s1, v7) )
        goto LABEL_5;
LABEL_18:
      if ( HIWORD(v16) == v6 )
        goto LABEL_9;
      goto LABEL_5;
    }
  }
  else
  {
    v7 = ::s1;
    if ( !(_QWORD)v15 )
      goto LABEL_18;
  }
  if ( !strcmp(s1, v7) )
    goto LABEL_18;
LABEL_5:
  HIWORD(v16) = v6;
  if ( &s1 != (char **)(v4 + 32) )
  {
    v8 = *(_QWORD *)(v4 + 40);
    if ( v8 > 1 )
    {
      v11 = *(const void **)(v4 + 32);
      v12 = s1;
      if ( *((_QWORD *)&v15 + 1) < v8 )
      {
        v12 = (char *)qvector_reserve();
        s1 = v12;
      }
      *(_QWORD *)&v15 = v8;
      memmove(v12, v11, v8 - 1);
      s1[v8 - 1] = 0;
    }
    else
    {
      *(_QWORD *)&v15 = 0;
    }
  }
  v9 = a1[1];
  LOWORD(v16) = 99;
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, 40, &v13);
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}

