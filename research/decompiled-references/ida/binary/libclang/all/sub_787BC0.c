_QWORD *__fastcall sub_787BC0(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  char v4; // dl
  unsigned __int64 v5; // rax
  char v6; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edx
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 72);
  v3 = nullptr;
  if ( (v2 & 1) == 0 && (v2 & 2) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v4 = v2;
      v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v6 = v4 & 0xFE;
      v3 = (_QWORD *)v5;
    }
    else
    {
      if ( (v2 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        return nullptr;
      v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
      if ( ((v2 >> 1) & 1) == 0 )
        return v3;
      v8 = sub_6D4E90(v3, a1);
      *(_QWORD *)(a1 + 72) = v8 | 1;
      v6 = v8 & 0xFE;
      if ( (v8 & 0xFFFFFFFFFFFFFFFELL) == 0 )
        return nullptr;
      v5 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v3 = (_QWORD *)v5;
    }
    if ( (v6 & 4) != 0 && v5 )
    {
      v9 = *(_QWORD *)v5;
      v10 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
      if ( *(_DWORD *)(v5 + 8) != v10 )
      {
        *(_DWORD *)(v5 + 8) = v10;
        v11 = v5;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 144LL))(v9, a1);
        v5 = v11;
      }
      return *(_QWORD **)(v5 + 16);
    }
  }
  return v3;
}

