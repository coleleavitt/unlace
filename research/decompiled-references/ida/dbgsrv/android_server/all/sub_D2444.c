/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2444
// Address: 0x00000000000D2444

//----- (00000000000D2444) ----------------------------------------------------
__int64 __fastcall sub_D2444(__int64 a1)
{
  __int64 v1; // x20
  unsigned int v3; // w21
  __int64 v4; // x8

  if ( a1 && (v1 = *(_QWORD *)(a1 + 320)) != 0 )
  {
    if ( *(_QWORD *)(v1 + 192) || *(_DWORD *)(v1 + 312) )
    {
      v3 = 0;
    }
    else if ( *(_QWORD *)(v1 + 168) == *(_QWORD *)(v1 + 176) )
    {
      v3 = 0;
    }
    else
    {
      v3 = -105;
    }
    free(*(void **)v1);
    v4 = *(_QWORD *)(v1 + 128);
    *(_QWORD *)v1 = 0;
    if ( v4 == 8 )
      sub_CE950((_QWORD *)(v1 + 8));
    free((void *)v1);
    *(_QWORD *)(a1 + 320) = 0;
  }
  else
  {
    return (unsigned int)-102;
  }
  return v3;
}
