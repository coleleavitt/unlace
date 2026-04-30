__int64 __fastcall sub_3DF970(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 33;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( !v5 )
      {
        if ( *(int *)a2 >= 0 && *(_QWORD *)(a2 + 16) )
          v5 = 0;
        else
          v5 = *(_QWORD *)(a1 + 32);
      }
      if ( *(_DWORD *)(v5 + 56) != 4 && !*(_DWORD *)(v5 + 312) && *(_BYTE *)(v5 + 320) )
        return 35;
    }
    return 33;
  }
  if ( *(_DWORD *)(v2 + 1116) == -1 )
    return 33;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)v6 + 104LL))(v7, *(_QWORD *)(a2 + 16), a2);
    if ( (v7[1] | v7[0]) >= 0 )
    {
      if ( v8 )
        return 33;
    }
  }
  return 35;
}
