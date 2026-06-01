__int64 __fastcall sub_41D6A0(_QWORD *a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // dl
  __int64 dword; // rax
  unsigned __int8 v11; // cl
  int v12; // esi
  int v13; // ecx

  if ( a3 < 0 )
  {
    v6 = a3 & 0x7FFF;
    if ( !v6 )
      return 0;
    v7 = *(_QWORD *)(*a1 + 1600LL);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(v7 + 24) )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL * v6);
  }
  else
  {
    result = 0;
    if ( (unsigned __int16)(a3 - 1) > 0xFu )
      return result;
    v4 = qword_2B27D20[(unsigned __int16)a3];
  }
  if ( !v4 )
    return 0;
  v5 = *(__int64 (__fastcall **)(__int64))(v4 + 40);
  if ( !v5 )
  {
    v8 = 0;
    if ( *(_BYTE *)(v4 + 21) )
    {
      v9 = *(_BYTE *)(v4 + 20);
      if ( v9 == 4 )
      {
        dword = (unsigned int)get_dword(a2);
        goto LABEL_17;
      }
      if ( v9 > 4u )
      {
        if ( v9 == 8 )
        {
          dword = get_qword(a2);
          goto LABEL_17;
        }
      }
      else
      {
        if ( v9 == 1 )
        {
          dword = (unsigned __int8)get_byte(a2);
          goto LABEL_17;
        }
        if ( v9 == 2 )
        {
          dword = (unsigned __int16)get_word(a2);
LABEL_17:
          v11 = *(_BYTE *)(v4 + 22);
          v12 = *(unsigned __int8 *)(v4 + 21);
          v8 = dword << v11;
          if ( v11 >= 0x40u )
            v8 = 0;
          v13 = 64 - v12;
          if ( 64 - v12 > 0 )
          {
            v8 = v8 << v13 >> v13;
            if ( v13 == 64 )
              v8 = 0;
          }
        }
      }
    }
    return *(_QWORD *)(a1[3] + 16LL) & v8;
  }
  return *(_QWORD *)(a1[3] + 16LL) & v5(v4);
}
