_DWORD *__fastcall sub_7526B0(__int64 *a1, _WORD *a2)
{
  bool v2; // sf
  __int64 v3; // rax
  _DWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !*a2 || *((_WORD *)a1 + 4) >= *((_WORD *)a1 + 5) )
    sub_74E200();
  v2 = dword_2CAA4F0 - 1 < 0;
  v3 = (unsigned int)--dword_2CAA4F0;
  if ( v2 )
    __longjmp_chk();
  result = &byte_2CA2EE0[16 * v3 + 2000];
  *result = *(_DWORD *)a2;
  v5 = *((unsigned __int16 *)a1 + 4);
  v6 = *a1;
  *((_WORD *)a1 + 4) = v5 + 1;
  *(_QWORD *)(v6 + 8 * v5) = result;
  return result;
}

