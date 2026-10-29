/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: open_linput
// Address: 0x000AB5B0

//----- (000AB5B0) --------------------------------------------------------
_DWORD *__cdecl open_linput(char *a1, char a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  FILE *v5; // eax
  FILE *v6; // edi

  if ( a2 )
  {
    v2 = (_DWORD *)sub_9B1C0();
    v3 = nullptr;
    if ( v2 )
    {
      v4 = v2;
      if ( v2[3] == -1 )
      {
        (*(void (__cdecl **)(_DWORD *))(*v2 + 8))(v2);
      }
      else
      {
        v3 = operator new(0x24u);
        *v3 = 2;
        v3[1] = v4;
        sub_AB220((int)v3);
      }
    }
  }
  else
  {
    v5 = fopenRB(a1);
    if ( v5 )
    {
      v6 = v5;
      v3 = operator new(0x24u);
      *v3 = 1;
      v3[1] = v6;
    }
    else
    {
      return nullptr;
    }
  }
  return v3;
}
