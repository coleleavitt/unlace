__int64 __fastcall sub_4DA3A0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 48) = a2;
  if ( !v3 )
  {
    a1 = 24;
    v7 = sub_186B270(0x18u);
    *(_BYTE *)(v7 + 16) = 0;
    v3 = v7;
    *(_QWORD *)(v2 + 40) = v7;
    *(_OWORD *)v7 = 0;
    goto LABEL_4;
  }
  if ( !*(_BYTE *)(v3 + 16) )
  {
    *(_QWORD *)(v3 + 8) = 0;
LABEL_4:
    result = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(v3 + 16) = 1;
    *(_QWORD *)v3 = result;
    return result;
  }
  v5 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  *(_BYTE *)(v3 + 16) = 0;
  result = v5 - *(_QWORD *)v3;
  *(_QWORD *)(v3 + 8) += result;
  v3 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(v3 + 16) == 0;
  *(_QWORD *)(v3 + 8) = 0;
  if ( v6 )
    goto LABEL_4;
  return result;
}

