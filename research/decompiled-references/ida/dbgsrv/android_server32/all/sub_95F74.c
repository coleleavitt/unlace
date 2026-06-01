/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95F74
// Address: 0x00095F74

//----- (00095F74) --------------------------------------------------------
_DWORD *__fastcall sub_95F74(__int64 *a1)
{
  int v2; // r5
  __int64 v3; // r0
  __int64 v4; // r0
  __int64 v6; // [sp+4h] [bp-1Ch] BYREF

  if ( !sub_924C8(a1, "fp", (unsigned __int8 *)"") )
  {
    if ( !sub_924C8(a1, "fL", (unsigned __int8 *)"") )
      return nullptr;
    v2 = 0;
    sub_92AAC((unsigned __int8 **)&v6, (unsigned __int8 **)a1, 0);
    if ( (_DWORD)v6 == HIDWORD(v6) )
      return (_DWORD *)v2;
    v4 = *a1;
    if ( (_DWORD)v4 == HIDWORD(v4) || *(_BYTE *)v4 != 112 )
      return nullptr;
    *(_DWORD *)a1 = v4 + 1;
  }
  sub_94068(a1);
  v2 = 0;
  sub_92AAC((unsigned __int8 **)&v6, (unsigned __int8 **)a1, 0);
  v3 = *a1;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    if ( *(_BYTE *)v3 == 95 )
    {
      *(_DWORD *)a1 = v3 + 1;
      return sub_96854((int)a1, &v6);
    }
    return nullptr;
  }
  return (_DWORD *)v2;
}
