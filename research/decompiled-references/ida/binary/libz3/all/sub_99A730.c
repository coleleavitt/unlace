__int64 __fastcall sub_99A730(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 8656);
  if ( v4 )
  {
    v5 = *a2;
    if ( (unsigned int)v5 < *(_DWORD *)(v4 - 4) )
    {
      v6 = *(_QWORD *)(v4 + 8 * v5);
      if ( v6 )
        return sub_B39350(v6, *(unsigned int *)(a1 + 8));
    }
  }
  sub_B6F780(v3);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v8 = sub_99A610(a1, a2);
  return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v8);
}

