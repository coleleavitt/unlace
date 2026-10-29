__int64 __fastcall sub_41A4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int8 v7; // r10
  int v8; // edi
  int v10; // esi
  unsigned int v11; // eax
  int v12; // r10d
  int v13; // edx
  unsigned int v14; // ebp
  unsigned __int8 v15; // al
  bool v16; // cc
  __int64 dword; // rax
  int v19; // ecx
  __int64 v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = 0;
  v7 = *(_BYTE *)(a2 + 21);
  v8 = *(_DWORD *)(a1 + 24);
  v20[1] = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a2 + 16);
  v20[0] = a4 + a5;
  v11 = sub_41A250(v8, v10, v7, v20);
  v13 = *(unsigned __int8 *)(a2 + 22);
  v14 = v11;
  if ( (unsigned __int8)v13 <= 0x3Fu )
    v5 = (unsigned __int64)v20[0] >> v13;
  v15 = *(_BYTE *)(a2 + 20);
  v20[0] = v5;
  if ( v12 - v13 < 8 * v15 )
  {
    if ( v15 == 4 )
    {
      dword = (unsigned int)get_dword(a3);
    }
    else if ( v15 > 4u )
    {
      if ( v15 != 8 )
        return 0;
      dword = get_qword(a3);
    }
    else if ( v15 == 1 )
    {
      dword = (unsigned __int8)get_byte(a3);
    }
    else
    {
      if ( v15 != 2 )
        return 0;
      dword = (unsigned __int16)get_word(a3);
    }
    v19 = *(unsigned __int8 *)(a2 + 21) - *(unsigned __int8 *)(a2 + 22);
    if ( (unsigned __int64)v19 <= 0x3F )
      v5 |= dword & (-1LL << v19);
    v15 = *(_BYTE *)(a2 + 20);
    v20[0] = v5;
    v16 = v15 <= 4u;
    if ( v15 != 4 )
      goto LABEL_5;
LABEL_21:
    put_dword(a3, v20[0]);
    return v14;
  }
  v16 = v15 <= 4u;
  if ( v15 == 4 )
    goto LABEL_21;
LABEL_5:
  if ( !v16 )
  {
    if ( v15 == 8 )
    {
      put_qword(a3, v20[0]);
      return v14;
    }
    return 0;
  }
  if ( v15 == 1 )
  {
    put_byte(a3, v20[0]);
    return v14;
  }
  if ( v15 != 2 )
    return 0;
  put_word(a3, v20[0]);
  return v14;
}
