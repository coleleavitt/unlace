/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140058320
// Address: 0x0000000140058320

//----- (0000000140058320) ----------------------------------------------------
unsigned __int64 __fastcall sub_140058320(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx
  unsigned __int64 result; // rax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = 0;
    do
    {
      if ( *(_BYTE *)(v2 + *(_QWORD *)a1) )
      {
        v4 = *(void **)(*(_QWORD *)(a1 + 24) + v3 + 8);
        if ( v4 )
          FreeContextBuffer(v4);
      }
      result = *(unsigned int *)(a1 + 76);
      ++v2;
      v3 += 16;
    }
    while ( v2 < result );
  }
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  return result;
}
