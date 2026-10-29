__int64 __fastcall sub_59BB00(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v4; // rax
  char v5; // dl
  unsigned __int64 v6[2]; // [rsp+0h] [rbp-1A8h] BYREF
  char v7; // [rsp+11h] [rbp-197h]
  __int128 v8; // [rsp+20h] [rbp-188h] BYREF
  __int64 v9; // [rsp+30h] [rbp-178h]
  __int64 v10; // [rsp+38h] [rbp-170h]
  __int64 v11; // [rsp+40h] [rbp-168h]
  _BYTE v12[320]; // [rsp+48h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+188h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  if ( (sub_3BE900(a1, a2, 4) & 0x1000) != 0 && (unsigned __int8)xrefblk_t_first_to(v6, a2, 2) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 2) <= 1u && (~((unsigned __int16)sub_3BE900(a1, v6[0], 4) >> 8) & 6) == 0 )
      {
        v9 = -1;
        v4 = v12;
        v10 = 0;
        v11 = 0;
        v8 = -1;
        do
        {
          *(_WORD *)v4 = 0;
          v4 += 5;
          *((_WORD *)v4 - 19) = 0;
          *((_WORD *)v4 - 18) = 0;
          *((_DWORD *)v4 - 2) = 0;
          *((_WORD *)v4 - 17) = 0;
          *((_OWORD *)v4 - 2) = 0;
          *(v4 - 2) = 0;
        }
        while ( v13 != v4 );
        decode_insn(&v8, v6[0], v13, 0, 0, v3, 0.0);
        result = get_dtype_size(v12[5]);
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
    if ( (unsigned int)sub_3BDA80((__int64)a1, a2) != 8 )
      return 1;
    v5 = *((_BYTE *)sub_505D70((__int64)(a1 + 203), a2) + 43);
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
