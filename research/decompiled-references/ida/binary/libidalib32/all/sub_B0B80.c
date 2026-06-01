__int64 __fastcall sub_B0B80(__int64 a1, signed int *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 *v7; // rax
  char v8; // r15
  __int64 flags; // rax
  unsigned int v11; // r12d
  int v12; // eax
  __int64 v13; // rdx
  unsigned int i; // ebp
  char v15; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 v16; // [rsp+E8h] [rbp-40h] BYREF

  v16 = __readfsqword(0x28u);
  v7 = (unsigned __int64 *)&v15;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 3;
    *((_WORD *)v7 - 11) = 0;
    *((_WORD *)v7 - 10) = 0;
    *((_DWORD *)v7 - 1) = 0;
    *((_WORD *)v7 - 9) = 0;
    *(v7 - 2) = 0;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( &v16 != v7 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v8 = is_call_insn();
  flags = get_flags_ex();
  if ( (flags & 0x10000) == 0 || (~(_WORD)flags & 0x600) != 0 )
  {
    if ( !v8 && a5 != *(_DWORD *)(a4 + 4) )
      goto LABEL_7;
  }
  else
  {
    if ( v8 )
    {
      if ( (flags & 0x1000) == 0 && sub_9E220() != 1 )
      {
        if ( !*(_BYTE *)(a1 + 28) )
          return 0;
        v11 = *(_DWORD *)(a1 + 24);
        v12 = a5;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v13 = sub_9E220();
    v12 = a5;
    if ( v13 != 1 )
    {
      if ( *(_DWORD *)(a4 + 4) == a5 )
      {
        if ( !*(_BYTE *)(a1 + 28) )
          return 0;
        v11 = *(_DWORD *)(a1 + 24);
        goto LABEL_14;
      }
LABEL_7:
      *(_BYTE *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 24) = a5;
      return 1;
    }
    if ( *(_DWORD *)(a4 + 4) != a5 )
      goto LABEL_7;
  }
LABEL_12:
  if ( !*(_BYTE *)(a1 + 28) )
    return 0;
  v11 = *(_DWORD *)(a1 + 24);
  v12 = -1;
LABEL_14:
  *(_DWORD *)(a1 + 24) = v12;
  if ( a5 >= v11 && (int)get_func_chunknum() >= 0 )
  {
    if ( v11 < a5 )
    {
      sub_B0AC0(xmmword_250E60, a2, v11, 2);
      if ( (dword_250A9C & 1) != 0 )
      {
        for ( i = next_that(); i != -1; i = next_that() )
          sub_B0AC0(xmmword_250E60, a2, i, 2);
      }
    }
    sub_B0AC0(xmmword_250E60, a2, a5, 2);
    return 1;
  }
  return 0;
}

