void __fastcall sub_752640(__int64 *a1, _DWORD *a2)
{
  bool v2; // sf
  __int64 v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *(_WORD *)a2 && *((_WORD *)a1 + 4) < *((_WORD *)a1 + 5) )
  {
    v2 = dword_2CAA4F0 - 1 < 0;
    v3 = (unsigned int)--dword_2CAA4F0;
    if ( v2 )
      __longjmp_chk();
    v4 = &byte_2CA2EE0[16 * v3 + 2000];
    *v4 = *a2;
    v5 = *((unsigned __int16 *)a1 + 4);
    v6 = *a1;
    *((_WORD *)a1 + 4) = v5 + 1;
    *(_QWORD *)(v6 + 8 * v5) = v4;
  }
}

