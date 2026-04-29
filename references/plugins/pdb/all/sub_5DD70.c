__int64 __fastcall sub_5DD70(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *a1;
  v8[1] = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 248))(a1, &v7);
  if ( !v4 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, v8, v3, 0);
    if ( !v4 )
    {
      v6 = a1[12];
      if ( v8[0] )
        *a2 = v6 / v8[0];
      else
        *a2 = v6;
    }
  }
  return v4;
}
