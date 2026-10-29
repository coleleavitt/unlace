__int64 __fastcall sub_74F810(_DWORD *a1, int a2, __int16 a3)
{
  int v3; // eax
  int v4; // eax
  __int64 result; // rax
  _BYTE *v6; // rcx

  v3 = dword_2CAA4F0;
  *a1 = 0;
  v4 = v3 - 1;
  dword_2CAA4F0 = v4;
  if ( v4 < 0 )
    __longjmp_chk();
  result = 16 * ((unsigned int)v4 + 125LL);
  v6 = &byte_2CA2EE0[result];
  *(_WORD *)a1 = result;
  *(_DWORD *)v6 = a2;
  *((_WORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 5) = a3;
  return result;
}

