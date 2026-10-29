__int64 __fastcall sub_2A21E0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // r13
  _DWORD *v5; // r12

  v2 = *a2;
  v3 = (__int64 (__fastcall *)(_QWORD))a1[3];
  v4 = a1[1];
  if ( *a2 )
    ++*(_DWORD *)(v2 + 16);
  v5 = *(_DWORD **)(v4 + 24);
  if ( v5 )
  {
    if ( v5[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      sub_186B220(v5);
    }
  }
  *(_QWORD *)(v4 + 24) = v2;
  return v3(a1[2]);
}

