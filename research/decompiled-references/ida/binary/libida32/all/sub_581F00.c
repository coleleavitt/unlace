__int64 __fastcall sub_581F00(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v4; // rax
  char v5; // dl
  unsigned int v6[2]; // [rsp+4h] [rbp-104h] BYREF
  char v7; // [rsp+Dh] [rbp-FBh]
  _QWORD v8[3]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v9[192]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v10[4]; // [rsp+E8h] [rbp-20h] BYREF

  v10[0] = __readfsqword(0x28u);
  if ( (sub_3B9AA0(a1, a2, 4) & 0x1000) != 0 && (unsigned __int8)xrefblk_t_first_to(v6, a2, 2) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 2) <= 1u && (~((unsigned __int16)sub_3B9AA0(a1, v6[0], 4) >> 8) & 6) == 0 )
      {
        v8[0] = -1;
        v8[2] = 0;
        v8[1] = 0xFFFFFFFFLL;
        v4 = v9;
        do
        {
          *(_WORD *)v4 = 0;
          v4 += 3;
          *((_WORD *)v4 - 11) = 0;
          *((_WORD *)v4 - 10) = 0;
          *((_DWORD *)v4 - 1) = 0;
          *((_WORD *)v4 - 9) = 0;
          *(v4 - 2) = 0;
          *((_DWORD *)v4 - 2) = 0;
        }
        while ( v10 != v4 );
        decode_insn(v8, v6[0], v10, 0, 0, v3);
        result = get_dtype_size(v9[5]);
        if ( result )
          break;
      }
      if ( !(unsigned __int8)xrefblk_t_next_to(v6) )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)sub_3B8DF0(a1, a2) != 8 )
      return 1;
    v5 = *((_BYTE *)sub_4EE820(a1 + 1552, a2) + 23);
    result = 8;
    if ( v5 != 2 )
    {
      if ( v5 == 1 )
        return 4;
      return 1;
    }
  }
  return result;
}

