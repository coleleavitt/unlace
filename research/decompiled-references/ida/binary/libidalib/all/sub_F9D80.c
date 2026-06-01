unsigned __int64 __fastcall sub_F9D80(__int64 a1, __int64 **a2)
{
  __int64 entry_ordinal; // rax
  __int64 v3; // rbx
  __int64 entry; // r12
  __int64 *v5; // r8
  size_t v6; // rax
  size_t v7; // r15
  __int64 *v9; // rbx
  size_t v10; // r13
  char *v11; // r15
  __int64 v12; // rbp
  size_t v13; // r12
  __int64 v14; // rsi
  void *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // [rsp+0h] [rbp-88h]
  __int64 *v20; // [rsp+0h] [rbp-88h]
  size_t v21; // [rsp+8h] [rbp-80h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  entry_ordinal = get_entry_ordinal();
  if ( entry_ordinal == -1 )
    return v22 - __readfsqword(0x28u);
  v3 = entry_ordinal;
  entry = get_entry();
  get_entry_name();
  if ( *(_BYTE *)(TProgram::application + 353LL) && (getinf(), (int)demangle_name() > 0) )
  {
    v5 = *a2;
  }
  else
  {
    v5 = *a2;
    if ( s1 )
    {
      v19 = *a2;
      v6 = strlen(s1);
      v5 = v19;
      v7 = v6;
      if ( v6 )
      {
        v15 = (void *)*v19;
        v16 = v6 + 1;
        if ( v19[2] < v6 + 1 )
        {
          v21 = v6 + 1;
          v18 = qvector_reserve();
          v5 = v19;
          v16 = v21;
          v15 = (void *)v18;
          *v19 = v18;
        }
        v5[1] = v16;
        v20 = v5;
        memmove(v15, s1, v7);
        *(_BYTE *)(*v20 + v7) = 0;
        goto LABEL_6;
      }
    }
  }
  v5[1] = 0;
LABEL_6:
  sub_94440(*a2 + 3);
  if ( v3 == entry )
  {
    if ( entry != getinf() )
      return v22 - __readfsqword(0x28u);
    v9 = *a2;
    v10 = 12;
    v11 = "[main entry]";
  }
  else
  {
    sub_94440(*a2 + 6);
    if ( entry != getinf() )
      return v22 - __readfsqword(0x28u);
    v9 = *a2;
    v10 = 13;
    v11 = " [main entry]";
  }
  v12 = v9[7];
  v13 = v10;
  if ( v12 )
    v13 = --v12 + v10;
  v14 = v9[6];
  if ( v9[8] < v13 + 1 )
  {
    v17 = qvector_reserve();
    v9[6] = v17;
    v14 = v17;
  }
  v9[7] = v13 + 1;
  *(_BYTE *)(v14 + v13) = 0;
  memmove((void *)(v12 + v9[6]), v11, v10);
  return v22 - __readfsqword(0x28u);
}

