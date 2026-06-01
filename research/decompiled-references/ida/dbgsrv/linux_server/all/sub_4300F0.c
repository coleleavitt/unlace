/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4300F0
// Address: 0x00000000004300F0

//----- (00000000004300F0) ----------------------------------------------------
__int64 __fastcall sub_4300F0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  void **v4; // rbp
  _BYTE *v5; // rdx
  void *v6; // rsi
  void *v7; // rax
  _BYTE *v8; // rdx

  v1 = *(unsigned __int8 *)(a1 + 212);
  if ( (unsigned __int8)v1 <= 0xEFu )
  {
    if ( (unsigned __int8)v1 <= 0xB3u )
    {
      if ( (unsigned __int8)v1 > 0xA1u )
      {
        if ( (_BYTE)v1 == 0xA7 )
          return 0;
      }
      else if ( (unsigned __int8)v1 > 0x9Fu )
      {
        return 0;
      }
    }
    else
    {
      v2 = 0xFFFF00087F007FFLL;
      if ( _bittest64(&v2, (unsigned int)(v1 + 76)) )
        return 0;
    }
  }
  v4 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -50;
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < v5 + 1 )
  {
    v7 = sub_481540((__int64)v4, v6, (unsigned __int64)(v5 + 1), 1u);
    v8 = v4[1];
    *v4 = v7;
    v8[(_QWORD)v7] = -50;
  }
  else
  {
    v5[(_QWORD)v6] = -50;
  }
  v4[1] = (char *)v4[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
