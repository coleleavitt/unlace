void __fastcall sub_C05D90(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx

  if ( !*(_BYTE *)(a1 + 176) )
  {
    v2 = *(_QWORD *)(a1 + 88);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        if ( v3 >= *(_DWORD *)(v2 - 4) )
          break;
        v4 = v3++;
        sub_C05C90(a1, *(_QWORD *)(v2 + 8 * v4), a2);
        v2 = *(_QWORD *)(a1 + 88);
      }
      while ( v2 );
    }
  }
}

