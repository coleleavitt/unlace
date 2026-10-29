__int16 __fastcall sub_2A90(__int64 *a1, __int64 a2, __int64 a3)
{
  int basic_file_type; // ebx
  _UNKNOWN **v6; // rdx
  int v7; // eax
  __int16 result; // ax
  __int64 v9; // rax
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // r12
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax

  qlseek(a3, 0, 0);
  basic_file_type = get_basic_file_type(a3);
  v6 = &off_7CA0;
  v7 = 0;
  while ( *((_DWORD *)v6 + 8) != basic_file_type )
  {
    ++v7;
    v6 += 5;
    if ( v7 == 4 )
      return 0;
  }
  v9 = 5LL * v7;
  v10 = *(&off_7CA0 + v9 + 3);
  if ( v10 && (v11 = strlen((const char *)*(&off_7CA0 + v9 + 3)), (v12 = v11) != 0) )
  {
    v13 = (void *)*a1;
    v14 = v11 + 1;
    if ( a1[2] < v11 + 1 )
    {
      v15 = qvector_reserve(a1, *a1, v11 + 1, 1);
      *a1 = v15;
      v13 = (void *)v15;
    }
    a1[1] = v14;
    memmove(v13, v10, v12);
    *(_BYTE *)(*a1 + v12) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  LOBYTE(result) = basic_file_type;
  HIBYTE(result) = BYTE1(basic_file_type) | 0x20;
  return result;
}

