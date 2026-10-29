/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27CA0
// Address: 0x00027CA0

//----- (00027CA0) --------------------------------------------------------
unsigned int __cdecl sub_27CA0(int a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // esi
  bool v5; // zf
  __time_t v7[6]; // [esp+4h] [ebp-18h] BYREF

  v7[1] = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1 + 568);
  if ( (_DWORD *)(a1 + 572) != v1 )
  {
    do
    {
      if ( *((_BYTE *)v1 + 44) )
      {
        if ( *(_BYTE *)(a1 + 634) )
        {
          *((_BYTE *)v1 + 44) = 0;
        }
        else
        {
          if ( v1[10] != 1 )
          {
            if ( !(_BYTE)under_debugger )
              interr(30181);
            BUG();
          }
          ptrace(PTRACE_CONT, v1[5], 0, 0);
          if ( sub_2F940(a1, v7, v1[5], -1) != v1[5] )
            sub_1C900();
        }
      }
      v2 = (_DWORD *)v1[1];
      if ( v2 )
      {
        do
        {
          v3 = v2;
          v2 = (_DWORD *)*v2;
        }
        while ( v2 );
      }
      else
      {
        v3 = (_DWORD *)v1[2];
        if ( (_DWORD *)*v3 != v1 )
        {
          v4 = (int)(v1 + 2);
          do
          {
            v3 = *(_DWORD **)(*(_DWORD *)v4 + 8);
            v5 = *v3 == *(_DWORD *)v4;
            v4 = *(_DWORD *)v4 + 8;
          }
          while ( !v5 );
        }
      }
      v1 = v3;
    }
    while ( (_DWORD *)(a1 + 572) != v3 );
  }
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
