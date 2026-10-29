void __fastcall sub_74F400(_DWORD *a1, unsigned __int8 a2)
{
  bool v2; // sf
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx

  *a1 = 0;
  if ( a2 )
  {
    v2 = dword_2CAA4F0 - 1 < 0;
    v3 = (unsigned int)--dword_2CAA4F0;
    if ( v2 )
      __longjmp_chk();
    v4 = 16 * (v3 + 125);
    v5 = &byte_2CA2EE0[v4];
    *(_WORD *)a1 = v4;
    *v5 = a2;
    v5[2] = 0x10000;
  }
}

