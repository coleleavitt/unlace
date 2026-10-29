_QWORD *__fastcall sub_E32B0(_QWORD *a1, _DWORD *a2, unsigned int a3, const char *a4)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // al
  char *v10; // r15
  char *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  void (__fastcall ***v16)(_QWORD); // rdx
  bool v17; // zf
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  _QWORD *v23; // rcx
  void (__fastcall ***v24)(_QWORD); // rdx
  int v25; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __int128 v27; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !byte_2440E8 )
  {
    if ( !byte_251108 )
    {
      byte_251108 = 1;
      sub_92120((__int64)"The source level debugger has been disabled.\n"
                         "To enable it, use Debugger, Use source-level debugging");
    }
    goto LABEL_20;
  }
  v26 = 0;
  v25 = -1;
  v27 = 0;
  if ( !(unsigned __int8)sub_E31A0(a2, a3, (__int64)&v25, (__int64)&v26) )
  {
LABEL_12:
    v12 = v26;
    if ( !v26 )
    {
LABEL_20:
      *a1 = 0;
      return a1;
    }
    v13 = v27;
    if ( (_QWORD)v27 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 8 * v14);
        v16 = (void (__fastcall ***)(_QWORD))*v15;
        if ( *v15 )
        {
          v17 = (*((_DWORD *)v16 + 2))-- == 1;
          if ( v17 )
          {
            (**(void (__fastcall ***)(_QWORD))*v15)(*v15);
            v12 = v26;
          }
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
LABEL_19:
    *(_QWORD *)&v27 = 0;
    qfree();
    goto LABEL_20;
  }
  if ( !(_QWORD)v27 )
  {
    if ( !v26 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    s1 = nullptr;
    v29 = 0;
    v8 = 8 * v7;
    v9 = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(v26 + 8 * v7) + 16LL))(
           *(_QWORD *)(v26 + 8 * v7),
           &s1);
    v10 = s1;
    if ( v9 )
    {
      v11 = (char *)::s1;
      if ( (_QWORD)v29 )
        v11 = s1;
      if ( !strcmp(v11, a4) )
        break;
    }
    if ( v10 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    v7 = ++v6;
    if ( v6 >= (unsigned __int64)v27 )
      goto LABEL_12;
  }
  v19 = v26;
  v20 = *(_QWORD *)(v26 + v8);
  *a1 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  if ( v10 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
    v19 = v26;
  }
  if ( v19 )
  {
    v21 = v27;
    if ( (_QWORD)v27 )
    {
      v22 = 0;
      do
      {
        v23 = (_QWORD *)(v19 + 8 * v22);
        v24 = (void (__fastcall ***)(_QWORD))*v23;
        if ( *v23 )
        {
          v17 = (*((_DWORD *)v24 + 2))-- == 1;
          if ( v17 )
          {
            (**(void (__fastcall ***)(_QWORD))*v23)(*v23);
            v19 = v26;
          }
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return a1;
}

