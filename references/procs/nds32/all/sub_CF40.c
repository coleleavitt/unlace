__int64 __fastcall sub_CF40(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rdx
  __int64 *v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx

  if ( (unsigned __int8)(*((_BYTE *)a1 + 24) - 10) > 1u )
    return 0;
  v2 = *a1;
  v3 = a1[1];
  v4 = **a1;
  if ( v3 != (__int64 *)((char *)&dword_0 + 1) )
  {
    v5 = v2 + 3;
    v6 = &v2[3 * (_QWORD)v3];
    if ( 24LL * (_QWORD)v3 != 24 )
    {
      while ( *v5 == v4 )
      {
        v5 += 3;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  *a2 = v4;
  return 1;
}
