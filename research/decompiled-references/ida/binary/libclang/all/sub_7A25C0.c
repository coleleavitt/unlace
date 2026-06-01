unsigned __int64 __fastcall sub_7A25C0(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdi
  int v12; // edx
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  v3 = v2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v2 & 1) != 0 )
    goto LABEL_2;
  if ( v3 <= 3 )
    return 0;
  result = v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v3 & 2) != 0 )
  {
    v6 = *(_QWORD *)(result + 18200);
    if ( v6 )
    {
      v7 = *(_QWORD *)(result + 2192);
      *(_QWORD *)(result + 2272) += 24LL;
      v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(result + 2200) >= v8 + 24 && v7 )
        *(_QWORD *)(result + 2192) = v8 + 24;
      else
        v8 = sub_7A1DE0(result + 2192, 24, 3);
      *(_QWORD *)v8 = v6;
      *(_DWORD *)(v8 + 8) = 0;
      v9 = v8 | 5;
      v10 = v8 & 0xFE;
      *(_QWORD *)(v8 + 16) = a1;
      v5 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      LOBYTE(v3) = v10 | 4;
      *(_QWORD *)(a1 + 48) = v9;
      result = v5;
LABEL_3:
      if ( (v3 & 4) != 0 && v5 )
      {
        v11 = *(_QWORD *)result;
        v12 = *(_DWORD *)(*(_QWORD *)result + 12LL);
        if ( *(_DWORD *)(result + 8) != v12 )
        {
          *(_DWORD *)(result + 8) = v12;
          v13 = result;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 144LL))(v11, a1);
          result = v13;
        }
        return *(_QWORD *)(result + 16);
      }
      return result;
    }
    v3 = a1 & 0xFFFFFFFFFFFFFFFALL;
    v2 = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(a1 + 48) = v2;
LABEL_2:
    result = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = result;
    if ( !v3 )
      return result;
    goto LABEL_3;
  }
  return result;
}

