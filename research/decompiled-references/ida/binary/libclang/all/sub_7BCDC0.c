unsigned __int64 __fastcall sub_7BCDC0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdi
  int v12; // edx
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*a1 & 1) == 0 )
  {
    if ( v3 > 3 )
    {
      result = v2 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_DWORD *)a1 & 2) == 0 )
        return result;
      v6 = *(_QWORD *)(result + 18200);
      if ( v6 )
      {
        v7 = *(_QWORD *)(result + 2192);
        *(_QWORD *)(result + 2272) += 24LL;
        v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(result + 2200) >= v8 + 24 && v7 )
        {
          *(_QWORD *)(result + 2192) = v8 + 24;
          v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v9 = sub_7B4EB0(result + 2192, 24, 3);
        }
        *(_QWORD *)v9 = v6;
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = a2;
        *a1 = v9 | 5;
        v10 = v9;
        result = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = result;
        LOBYTE(v3) = v10 & 0xFA | 4;
        goto LABEL_3;
      }
      *a1 = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
      if ( (a2 & 0xFFFFFFFFFFFFFFFALL) != 0 )
        return a2 & 0xFFFFFFFFFFFFFFF8LL;
    }
    return 0;
  }
  result = v2 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = result;
  if ( !v3 )
    return 0;
LABEL_3:
  if ( (v3 & 4) != 0 && v5 )
  {
    v11 = *(_QWORD *)result;
    v12 = *(_DWORD *)(*(_QWORD *)result + 12LL);
    if ( *(_DWORD *)(result + 8) != v12 )
    {
      *(_DWORD *)(result + 8) = v12;
      v13 = result;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 144LL))(v11, a2);
      result = v13;
    }
    return *(_QWORD *)(result + 16);
  }
  return result;
}

