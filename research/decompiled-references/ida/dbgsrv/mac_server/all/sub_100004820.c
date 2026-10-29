/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004820
// Address: 0x0000000100004820

//----- (0000000100004820) ----------------------------------------------------
__int64 __fastcall sub_100004820(__int64 a1, int a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r15
  unsigned int v4; // ebx
  thread_read_t v5; // edi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  bool v8; // zf

  *(_BYTE *)(a1 + 1234) = 1;
  v2 = *(_QWORD **)(a1 + 1208);
  v3 = (_QWORD *)(a1 + 1216);
  v4 = 1;
  if ( v2 != (_QWORD *)(a1 + 1216) )
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)v2 + 8);
      if ( v5 != a2 )
      {
        if ( thread_suspend(v5) )
          break;
      }
      v6 = (_QWORD *)v2[1];
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        do
        {
          v7 = (_QWORD *)v2[2];
          v8 = *v7 == (_QWORD)v2;
          v2 = v7;
        }
        while ( !v8 );
      }
      v2 = v7;
      if ( v7 == v3 )
        return v4;
    }
    return 0;
  }
  return v4;
}
