__int64 __fastcall sub_7CA3F0(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r13

  v2 = *(unsigned __int8 *)(*(_QWORD *)(a1[3] + 3336LL) + a2);
  if ( (_BYTE)v2 )
    return 1;
  v3 = a1[291];
  if ( v3 )
  {
    if ( a2 < *(_DWORD *)(v3 - 4) && *(_QWORD *)(v3 + 8LL * a2) )
      return 1;
  }
  v5 = (_QWORD *)a1[299];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 64LL))(*v5, a2) )
      {
        if ( v6 == ++v5 )
          return v2;
      }
      return 1;
    }
  }
  return v2;
}

