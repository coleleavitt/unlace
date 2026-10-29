__int64 __fastcall sub_5C1170(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+4h] [rbp-34h]
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v4 = *(_DWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 14);
  v13 = __readfsqword(0x28u);
  v6 = sub_3B9AA0((__int64)a1, v4, 4);
  if ( (v6 & 0x10000) == 0 )
    return 1;
  if ( (~(_WORD)v6 & 0x600) != 0 )
    return 1;
  if ( (v6 & 0x1000) != 0 )
    return 1;
  v7 = sub_5C0D40((__int64)a1, nullptr, *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int16 *)(a2 + 14));
  if ( (_BYTE)v7 )
    return 1;
  v9 = sub_375980(0x25u, a2, (unsigned __int8)a3);
  if ( v9 < 0 )
    return v7;
  if ( v9 == 1 )
  {
    return 1;
  }
  else
  {
    v7 = a3;
    if ( !(unsigned __int8)is_call_insn(a2) )
    {
      v10 = *(unsigned int *)(a2 + 8);
      v11 = -1;
      v12 = 0;
      return (unsigned int)sub_3DC190(a1, (__int64)&v11, v10);
    }
  }
  return v7;
}

