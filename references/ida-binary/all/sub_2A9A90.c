__int64 __fastcall sub_2A9A90(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 440);
  v8 = __readfsqword(0x28u);
  result = 0;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v5 = *a2;
      v7 = 0;
      *(_QWORD *)&v7 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 128))(a2);
      *((_QWORD *)&v7 + 1) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3) + 1;
      return rangeset_t_has_common(v3 + 72, &v7, 0);
    }
  }
  return result;
}
