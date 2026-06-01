__int64 __fastcall sub_5DD1F0(__int64 a1, __int64 a2, unsigned int a3, __m128i a4, double a5)
{
  unsigned __int8 v7; // al
  __int64 result; // rax
  __int64 v9; // rcx
  char v10; // bp
  unsigned int v11; // eax
  int v12; // r13d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // r13
  unsigned int v17; // [rsp+Ch] [rbp-2Ch]

  while ( 1 )
  {
    ++a3;
    v7 = *(_BYTE *)(a2 + 186) & 0xF;
    if ( v7 == 12 )
    {
      result = sub_5DD1F0(a1, *(_QWORD *)(a2 + 48), a3);
      v12 = result;
      if ( (_DWORD)result )
        return result;
      while ( *(_DWORD *)(a2 + 64) > v12 )
      {
        v13 = v12++;
        result = sub_5DD1F0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8 * v13), a3);
        if ( (_DWORD)result )
          return result;
      }
      return 0;
    }
    if ( v7 > 0xCu )
      break;
    if ( v7 == 10 )
    {
      result = sub_5DD1F0(a1, *(_QWORD *)(a2 + 48), a3);
      if ( (_DWORD)result )
        return result;
      a2 = *(_QWORD *)(a2 + 32);
      if ( !a2 )
        return 0;
    }
    else
    {
      if ( v7 != 11 )
        return 0;
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  if ( v7 != 13 )
    return 0;
  v9 = 0x100010001LL;
  if ( !_bittest64(&v9, *(_BYTE *)(a2 + 186) & 0x30) || (*(_BYTE *)(a2 + 80) & 2) == 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 186) & 0x20) != 0
    || (v14 = *(_QWORD **)(a2 + 48), v15 = (_QWORD *)*v14, v16 = *v14 + 8LL * v14[1], v16 == *v14) )
  {
LABEL_14:
    if ( (int)a3 > 1 )
    {
      v10 = *(_BYTE *)(a2 + 186);
      *(_BYTE *)(a2 + 186) = v10 & 0x3F;
      v11 = sub_5DCBB0(a1, a2, 0, a4, a5);
      *(_BYTE *)(a2 + 186) = v10;
      v17 = v11;
      sub_5C8300(a2);
      return v17;
    }
    return 0;
  }
  while ( 1 )
  {
    result = sub_5DD1F0(a1, *v15, a3);
    if ( (_DWORD)result )
      return result;
    if ( (_QWORD *)v16 == ++v15 )
      goto LABEL_14;
  }
}

