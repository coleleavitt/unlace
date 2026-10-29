__int64 __fastcall sub_40A280(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // dl
  int dword; // eax
  unsigned __int8 v9; // cl
  int v10; // esi
  int v11; // ecx

  if ( a3 >= 0 )
  {
    if ( (unsigned __int16)(a3 - 1) <= 0xFu )
    {
      v3 = qword_2AFDD60[(unsigned __int16)a3];
      goto LABEL_4;
    }
    return 0;
  }
  result = a3 & 0x7FFF;
  if ( (a3 & 0x7FFF) == 0 )
    return result;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 1408LL);
  if ( (unsigned __int64)(unsigned int)result >= *(_QWORD *)(v6 + 24) )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL * (unsigned int)result);
LABEL_4:
  if ( !v3 )
    return 0;
  v4 = *(__int64 (__fastcall **)(__int64))(v3 + 40);
  if ( v4 )
    return v4(v3);
  result = 0;
  if ( *(_BYTE *)(v3 + 21) )
  {
    v7 = *(_BYTE *)(v3 + 20);
    if ( v7 == 4 )
    {
      dword = get_dword(a2);
    }
    else if ( v7 > 4u )
    {
      if ( v7 != 8 )
        return result;
      dword = get_qword(a2);
    }
    else if ( v7 == 1 )
    {
      dword = (unsigned __int8)get_byte(a2);
    }
    else
    {
      if ( v7 != 2 )
        return result;
      dword = (unsigned __int16)get_word(a2);
    }
    v9 = *(_BYTE *)(v3 + 22);
    v10 = *(unsigned __int8 *)(v3 + 21);
    result = (unsigned int)(dword << v9);
    if ( v9 >= 0x20u )
      result = 0;
    v11 = 32 - v10;
    if ( 32 - v10 > 0 )
    {
      result = (unsigned int)((int)((_DWORD)result << v11) >> v11);
      if ( v11 == 32 )
        return 0;
    }
  }
  return result;
}

