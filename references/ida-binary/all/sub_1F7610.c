__int64 __fastcall sub_1F7610(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64, double); // rax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, _QWORD); // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F6F20(a1) )
  {
    *(_BYTE *)(a2 + 12) = 1;
    return v13 - __readfsqword(0x28u);
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 1048LL);
  if ( v5 == sub_1E6B40 )
  {
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        sub_1E69C0(a3, a1, a2, (__int64)sub_1E6B40, v4);
        return sub_1F77A0();
      }
      v6 = *(_DWORD *)(a1 + 416);
      if ( v6 == 2 )
      {
        v7 = *(_QWORD *)(a1 + 896);
      }
      else if ( v6 == 3 )
      {
        v7 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v7 = 0;
        if ( v6 == 1 )
          v7 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v7 = 0;
    }
    a3 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 424LL))(v7, a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64))v5)(a1, a2);
  }
  v12 = -1;
  v11[4] = -1;
  sub_1F73F0(a1, (__int64)v11, a2, v8, a3);
  sub_1F4990(3u, a1, v11);
  v9 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 312);
  if ( v9 )
    v9(a1, *(_QWORD *)(a1 + 376));
  return sub_459BE0(a1);
}
