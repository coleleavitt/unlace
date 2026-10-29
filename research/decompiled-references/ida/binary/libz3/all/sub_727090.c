void __fastcall sub_727090(std::chrono::_V2::steady_clock *a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  __int64 v3; // rax

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_BYTE *)(v1 + 56) == 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 12) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  if ( v2 )
  {
    v3 = std::chrono::_V2::steady_clock::now(a1);
    *(_BYTE *)(v1 + 56) = 1;
    *(_QWORD *)(v1 + 40) = v3;
  }
}

