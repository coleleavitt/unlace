__int64 __fastcall sub_750E60(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // ax
  int v4; // edx
  _BYTE *v6; // rdi
  int v7; // edi
  __int64 v8; // rsi
  _DWORD *v9; // rsi

  v2 = *a2;
  v3 = *a1;
  v4 = a1[1];
  if ( !(_WORD)v2 )
    return (v4 << 16) | (unsigned int)v3;
  v6 = &byte_2CA2EE0[v2];
  if ( v3 )
  {
    v7 = dword_2CAA4F0 - 1;
    if ( dword_2CAA4F0 - 1 < 0 )
    {
      --dword_2CAA4F0;
    }
    else
    {
      v8 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v8;
      v6 = &byte_2CA2EE0[16 * v7 + 2000];
      if ( (_DWORD)v8 != -1 )
      {
        v9 = &byte_2CA2EE0[16 * v8 + 2000];
        *v9 = 0;
        *(_WORD *)v9 = v3;
        *(_QWORD *)v6 = v9;
        *((_WORD *)v6 + 5) = 0;
        *((_WORD *)v6 + 4) = v2;
        return (v4 << 16) | (unsigned int)(unsigned __int16)((_WORD)v6 - (unsigned __int16)byte_2CA2EE0);
      }
    }
    __longjmp_chk();
  }
  return (v4 << 16) | (unsigned int)(unsigned __int16)((_WORD)v6 - (unsigned __int16)byte_2CA2EE0);
}

