unsigned __int64 __fastcall sub_F940(__int64 a1, char a2)
{
  __int64 v3; // rdx
  const char *v4; // rbp
  __int64 v5; // r12
  int i; // ebp
  const char *v8; // rax
  const char *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // [rsp+8h] [rbp-80h]
  unsigned __int64 v14; // [rsp+18h] [rbp-70h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(const char **)a1;
    v13 = *(_QWORD *)(a1 + 8);
    if ( !strcmp(*(const char **)a1, "string") || !strcmp(v4, "interface_") )
      return v15 - __readfsqword(0x28u);
    v3 = v13;
    v5 = v13 - 1;
  }
  else
  {
    v5 = 0;
  }
  for ( i = 0; ; ++i )
  {
    v8 = s1;
    if ( v3 )
      v8 = *(const char **)a1;
    if ( !v8 || (get_idati(), !(unsigned __int8)create_tinfo()) )
    {
      if ( !a2 || get_name_ea() == -1 )
        break;
    }
    v9 = *(const char **)a1;
    v10 = *(_QWORD *)a1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v5 + 1;
      if ( v11 < v5 + 1 )
      {
        if ( *(_QWORD *)(a1 + 16) < v12 )
        {
          v10 = qvector_reserve();
          v11 = *(_QWORD *)(a1 + 8);
          v12 = v5 + 1;
          *(_QWORD *)a1 = v10;
        }
        v14 = v12;
        memset((void *)(v10 + v11), 0, v12 - v11);
        v9 = *(const char **)a1;
        *(_QWORD *)(a1 + 8) = v14;
      }
      else if ( v12 != v11 )
      {
        *(_QWORD *)(a1 + 8) = v12;
      }
      v9[v5] = 0;
    }
    else if ( v9 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    sub_F880((__int64 *)a1);
    clear_tinfo_t();
    v3 = *(_QWORD *)(a1 + 8);
  }
  clear_tinfo_t();
  return v15 - __readfsqword(0x28u);
}
