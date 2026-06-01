/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432650
// Address: 0x0000000000432650

//----- (0000000000432650) ----------------------------------------------------
_BYTE *__fastcall sub_432650(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void **v3; // r12
  _BYTE *v4; // rax
  void *v5; // rsi
  unsigned __int16 v6; // esi^2
  unsigned __int64 v7; // rbx
  _BYTE *result; // rax
  void *v9; // rsi
  void *v10; // rax
  void *v11; // rax
  _BYTE *v12; // rax
  void *v13; // rsi
  void *v14; // rax

  v2 = a2;
  v3 = *(void ***)(a1 + 200);
  if ( a2 <= 0xF )
  {
    LOBYTE(v2) = a2 - 32;
    *(_BYTE *)(a1 + 212) = a2 - 32;
  }
  else
  {
    if ( (char)a2 != a2 )
    {
      *(_BYTE *)(a1 + 212) = -45;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < v4 + 1 )
      {
        v10 = sub_481540((__int64)v3, v5, (unsigned __int64)(v4 + 1), 1u);
        *v3 = v10;
        v5 = v10;
        v4 = v3[1];
      }
      v4[(_QWORD)v5] = -45;
      v3[1] = (char *)v3[1] + 1;
      ++*(_DWORD *)(a1 + 208);
      sub_4313E0(a1, v2);
      v6 = WORD1(v2);
      v7 = HIDWORD(v2);
      sub_4313E0(a1, v6);
      sub_4313E0(a1, v7);
      return sub_4313E0(a1, WORD1(v7));
    }
    *(_BYTE *)(a1 + 212) = -96;
    v12 = v3[1];
    v13 = *v3;
    if ( v3[2] < v12 + 1 )
    {
      v14 = sub_481540((__int64)v3, v13, (unsigned __int64)(v12 + 1), 1u);
      *v3 = v14;
      v13 = v14;
      v12 = v3[1];
    }
    v12[(_QWORD)v13] = -96;
    v3[1] = (char *)v3[1] + 1;
    v3 = *(void ***)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
  }
  result = v3[1];
  v9 = *v3;
  if ( v3[2] < result + 1 )
  {
    v11 = sub_481540((__int64)v3, v9, (unsigned __int64)(result + 1), 1u);
    *v3 = v11;
    v9 = v11;
    result = v3[1];
  }
  result[(_QWORD)v9] = v2;
  v3[1] = (char *)v3[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return result;
}
