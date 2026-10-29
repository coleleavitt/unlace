__int64 __fastcall sub_750F10(unsigned __int8 a1, unsigned __int16 *a2)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  bool v5; // sf
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rcx
  _BYTE *v9; // rsi
  int v10; // esi
  __int64 v11; // rcx
  _DWORD *v12; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = dword_2CAA4F0 - 1 < 0;
    v6 = (unsigned int)--dword_2CAA4F0;
    if ( v5 )
      goto LABEL_12;
    v7 = 16 * (v6 + 125);
    v8 = &byte_2CA2EE0[v7];
    LOWORD(v2) = v7;
    *v8 = a1;
    v8[2] = 0x10000;
    v3 = *a2;
    if ( !(_WORD)v3 )
      return v2;
  }
  else
  {
    v3 = *a2;
    if ( !(_WORD)v3 )
      return v2;
  }
  v9 = &byte_2CA2EE0[v3];
  if ( (_WORD)v2 )
  {
    v10 = dword_2CAA4F0 - 1;
    if ( dword_2CAA4F0 - 1 < 0 )
    {
      --dword_2CAA4F0;
    }
    else
    {
      v11 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v11;
      v9 = &byte_2CA2EE0[16 * v10 + 2000];
      if ( (_DWORD)v11 != -1 )
      {
        v12 = &byte_2CA2EE0[16 * v11 + 2000];
        *v12 = 0;
        *(_WORD *)v12 = v2;
        *(_QWORD *)v9 = v12;
        *((_WORD *)v9 + 5) = 0;
        *((_WORD *)v9 + 4) = v3;
        goto LABEL_7;
      }
    }
LABEL_12:
    __longjmp_chk();
  }
LABEL_7:
  LOWORD(v2) = (_WORD)v9 - (unsigned __int16)byte_2CA2EE0;
  return v2;
}

