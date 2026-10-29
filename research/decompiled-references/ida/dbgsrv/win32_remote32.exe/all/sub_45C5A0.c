/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C5A0
// Address: 0x0045C5A0

//----- (0045C5A0) --------------------------------------------------------
_DWORD *__userpurge sub_45C5A0@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, LPCCH lpMultiByteStr, char a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *result; // eax
  int v10; // esi

  if ( a5 )
  {
    v5 = (_DWORD *)sub_4085E0();
    v6 = v5;
    if ( v5 )
    {
      if ( v5[4] != -1 )
      {
        v7 = sub_4627C2(0x30u);
        v8 = v7;
        if ( v7 )
        {
          *v7 = 2;
          v7[2] = v6;
          sub_45C2B0(v7);
          return v8;
        }
        else
        {
          MEMORY[8] = v6;
          sub_45C2B0(nullptr);
          return nullptr;
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*v5 + 4))(v5, 1);
    }
    return nullptr;
  }
  v10 = sub_45CE00(a1, a2, a3, lpMultiByteStr);
  if ( !v10 )
    return nullptr;
  result = sub_4627C2(0x30u);
  if ( result )
  {
    *result = 1;
    result[2] = v10;
  }
  else
  {
    MEMORY[8] = v10;
    return nullptr;
  }
  return result;
}
