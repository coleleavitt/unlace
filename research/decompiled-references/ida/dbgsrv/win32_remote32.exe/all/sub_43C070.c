/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C070
// Address: 0x0043C070

//----- (0043C070) --------------------------------------------------------
int __thiscall sub_43C070(void *this, int a2, int a3)
{
  int result; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // ecx

  result = (*(int (__stdcall **)(void *, _DWORD, int))(*(_DWORD *)this + 104))(this, *(_DWORD *)(a2 + 4), 1);
  if ( result > 0 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = (*(int (__stdcall **)(void *, int))(*(_DWORD *)this + 80))(this, a2);
    if ( v6 > 0 )
    {
      while ( !(*(int (__stdcall **)(void *, int, int))(*(_DWORD *)this + 64))(this, a2, -1) )
        ;
      v7 = *(_DWORD *)(a2 + 4);
      if ( v5 != v7 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
          sub_4104E0((int)this, (int)"unexpected event from thread %d arrived (expected thread %d)\n", v7, v5);
        return -1;
      }
    }
    return v6;
  }
  return result;
}
