__int64 __fastcall sub_3FF2A0(__int64 a1, __int64 *a2, __int64 *a3, char *a4, unsigned __int8 a5, char a6)
{
  std::chrono::_V2::steady_clock *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp-10h] [rbp-50h]
  char *v14; // [rsp+8h] [rbp-38h]
  __int64 *v15; // [rsp+10h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 440) )
  {
    v14 = a4;
    v15 = a3;
    v11 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 440) = 1;
    a4 = v14;
    a3 = v15;
    *(_QWORD *)(a1 + 424) = v11;
  }
  v9 = *(std::chrono::_V2::steady_clock **)(a1 + 8);
  sub_3D9A20((__int64)v9, a2, a3, a4, a5, *(_BYTE *)(*(_QWORD *)(a1 + 16) + 640LL), a6 ^ 1);
  result = v13;
  if ( *(_BYTE *)(a1 + 440) )
  {
    v12 = std::chrono::_V2::steady_clock::now(v9);
    *(_BYTE *)(a1 + 440) = 0;
    result = v12 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 432) += result;
  }
  return result;
}

