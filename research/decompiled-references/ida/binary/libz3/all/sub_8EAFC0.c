__int64 __fastcall sub_8EAFC0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  std::chrono::_V2::steady_clock *v4; // rdi
  __int64 v5; // rdi
  void (*v6)(void); // rax
  unsigned int v7; // ebp
  char v8; // r12
  std::chrono::_V2::steady_clock *v9; // rdi
  void (*v10)(void); // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !*(_BYTE *)(a1 + 10320) )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 10308) )
    return 1;
  v3 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 8632) != 1 )
  {
    if ( (unsigned __int8)sub_18290A0(v3) )
      goto LABEL_7;
LABEL_11:
    *(_DWORD *)(a1 + 10308) = 3;
    return 1;
  }
  if ( !*(_BYTE *)(v3 + 4) || !(unsigned __int8)sub_18290A0(v3) )
    goto LABEL_11;
LABEL_7:
  v4 = *(std::chrono::_V2::steady_clock **)(a1 + 7520);
  if ( v4 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v6 != (char *)nullsub_550 )
      v6();
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 720LL) )
    {
      v7 = *(_DWORD *)(a1 + 7528);
      if ( v7 <= 0xFFFFFFFD )
      {
        v8 = *(_BYTE *)(a1 + 208);
        if ( v8 )
        {
          *(_QWORD *)(a1 + 200) += std::chrono::_V2::steady_clock::now(v4) - *(_QWORD *)(a1 + 192);
          *(_BYTE *)(a1 + 208) = 0;
          v11 = std::chrono::_V2::steady_clock::now(v4);
          *(_BYTE *)(a1 + 208) = 1;
          *(_QWORD *)(a1 + 192) = v11;
        }
        if ( (double)(int)(*(_QWORD *)(a1 + 200) / 1000000LL) / 1000.0 * 1000.0 > (double)(int)(v7 + 1) )
        {
          v9 = *(std::chrono::_V2::steady_clock **)(a1 + 7520);
          v10 = *(void (**)(void))(*(_QWORD *)v9 + 24LL);
          if ( (char *)v10 != (char *)nullsub_551 )
          {
            v10();
            v8 = *(_BYTE *)(a1 + 208);
          }
          if ( v8 )
          {
            *(_QWORD *)(a1 + 200) += std::chrono::_V2::steady_clock::now(v9) - *(_QWORD *)(a1 + 192);
            *(_BYTE *)(a1 + 208) = 0;
            v12 = std::chrono::_V2::steady_clock::now(v9);
            *(_BYTE *)(a1 + 208) = 1;
            *(_QWORD *)(a1 + 192) = v12;
          }
          *(_DWORD *)(a1 + 7528) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 720LL)
                                 + (int)((double)((int)*(_QWORD *)(a1 + 200) / 1000000) / 1000.0 * 1000.0);
        }
      }
    }
  }
LABEL_8:
  v5 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v5 + 4) || !(unsigned __int8)sub_18290A0(v5) )
    goto LABEL_11;
  result = sub_186AF30();
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 10308) = 2;
    return 1;
  }
  return result;
}

