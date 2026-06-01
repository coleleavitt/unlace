__int64 __fastcall sub_67C4E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  __int128 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  result = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(result + 32) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = a2;
    v7 = 0;
    v5 = 0;
    v6 = 0;
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(result + 32))(v3, &v4);
  }
  return result;
}

