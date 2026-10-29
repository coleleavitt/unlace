/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1030
// Address: 0x00000000000D1030

//----- (00000000000D1030) ----------------------------------------------------
void __fastcall __spoils<> sub_D1030(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax

  if ( a1 == *(_QWORD *)(a2 + 16) )
  {
    v4 = *(_QWORD *)(a2 + 32);
    if ( v4 )
    {
      if ( v4 == a3 )
      {
        if ( *(_DWORD *)(a2 + 48) == 2 )
          *(_DWORD *)(a2 + 48) = a4;
      }
      else
      {
        ++*(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 48) = 2;
        *(_BYTE *)(a2 + 78) = 1;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 32) = a3;
      *(_DWORD *)(a2 + 48) = a4;
      *(_DWORD *)(a2 + 60) = 1;
    }
  }
}
