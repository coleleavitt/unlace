/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045990
// Address: 0x0000000100045990

//----- (0000000100045990) ----------------------------------------------------
void __fastcall sub_100045990(__int64 a1)
{
  void *v1; // r14
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  if ( !*(_BYTE *)(a1 + 568) )
  {
    v1 = *(void **)(a1 + 520);
    if ( v1 )
    {
      sub_10004EA00(*(_QWORD *)(a1 + 520));
      operator delete(v1);
    }
  }
  *(_QWORD *)(a1 + 520) = 0;
  *(_BYTE *)(a1 + 568) = 0;
  if ( *(_QWORD *)(a1 + 552) )
  {
    v2 = *(_QWORD **)(a1 + 544);
    if ( v2 )
    {
      do
      {
        v3 = (_QWORD *)*v2;
        sub_10004CE40((__int64)(v2 + 2));
        operator delete(v2);
        v2 = v3;
      }
      while ( v3 );
    }
    *(_QWORD *)(a1 + 544) = 0;
    v4 = *(_QWORD *)(a1 + 536);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 536) & 3LL;
      if ( v4 >= 4 )
      {
        v7 = v4 & 0xFFFFFFFFFFFFFFFCLL;
        v6 = 0;
        do
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6) = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6 + 8) = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6 + 16) = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6 + 24) = 0;
          v6 += 4;
        }
        while ( v7 != v6 );
      }
      else
      {
        v6 = 0;
      }
      for ( ; v5; --v5 )
        *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6++) = 0;
    }
    *(_QWORD *)(a1 + 552) = 0;
  }
}
