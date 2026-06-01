__int64 __fastcall sub_35C7A0(
        _DWORD *a1,
        _BYTE *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        __int64 a8)
{
  int v8; // r13d
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  char v11; // al
  int v12; // ecx
  __int64 v13; // r13
  int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // rdi
  char v22; // bl
  __int64 wide_byte; // rax
  int v24; // r13d
  char v25; // cl

  v8 = a4 - a7;
  v9 = a3 + (a7 >> 3);
  v10 = (a8 - a7) >> 3;
  v11 = getinf_flag(3, 32);
  v12 = a8 - a7 - a5 - v8;
  if ( !v11 )
    v12 = v8;
  *a1 = v12;
  if ( (int)v10 <= 0 )
  {
    *a2 = 1;
    v18 = 0;
    getinf_flag(3, 32);
    return v18;
  }
  v13 = v9;
  v14 = 1;
  v15 = v9 + (unsigned int)(v10 - 1) + 1;
  do
  {
    v16 = v13++;
    v14 &= is_loaded(v16);
  }
  while ( v15 != v13 );
  *a2 = v14;
  if ( !(_BYTE)v14 )
    return -1;
  if ( (_DWORD)v10 == 4 )
    return get_wide_dword(v9);
  if ( (int)v10 > 4 )
  {
    if ( (_DWORD)v10 != 8 )
    {
LABEL_19:
      v19 = v9 + 1;
      v20 = 0;
      v21 = v9;
      v18 = 0;
      v22 = getinf_flag(3, 32);
      wide_byte = get_wide_byte(v21);
      v24 = 8 * a6;
      if ( v22 )
      {
        while ( 1 )
        {
          v18 = wide_byte + (v18 << v24);
          if ( v15 == v19 )
            break;
          wide_byte = get_wide_byte(v19++);
        }
      }
      else
      {
        while ( 1 )
        {
          v25 = v20;
          v20 += v24;
          v18 += wide_byte << v25;
          if ( v15 == v19 )
            break;
          wide_byte = get_wide_byte(v19++);
        }
      }
      return v18;
    }
    return get_qword(v9);
  }
  else
  {
    if ( (_DWORD)v10 != 1 )
    {
      if ( (_DWORD)v10 == 2 )
        return get_wide_word(v9);
      goto LABEL_19;
    }
    return get_wide_byte(v9);
  }
}
