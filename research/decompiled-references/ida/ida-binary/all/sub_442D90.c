__int64 __fastcall sub_442D90(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int128 v4; // rax
  __int128 v6; // [rsp+8h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+20h] [rbp-10h]

  v3 = *(_DWORD *)a3;
  v7 = __readfsqword(0x28u);
  v6 = -1;
  if ( v3 < 0 )
    return 0;
  if ( *(int *)(a3 + 4) < 0 )
    return 0;
  if ( !*(_QWORD *)(a3 + 16) )
    return 0;
  *(_QWORD *)&v4 = sub_48B5B0(a1, a3);
  if ( (_QWORD)v4 == -1 )
    return 0;
  v6 = v4;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a1 + 536LL))(a1, a2, &v6);
}
