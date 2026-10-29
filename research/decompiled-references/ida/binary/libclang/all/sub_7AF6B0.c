__int64 __fastcall sub_7AF6B0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rdi
  __int64 v8; // rax
  int v9; // edx

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) == 0 )
  {
    if ( v4 <= 3 || (v3 & 2) == 0 )
      goto LABEL_4;
    v6 = sub_6D4E90((_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL), v2);
    v4 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v3 = v6 | 1;
    *(_QWORD *)(v2 + 96) = v3;
  }
  if ( v4 )
  {
    if ( (v4 & 4) != 0 )
    {
      v7 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)v7;
        v9 = *(_DWORD *)(*(_QWORD *)v7 + 12LL);
        if ( v7[2] != v9 )
        {
          v7[2] = v9;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 144LL))(v8, v2);
        }
      }
    }
  }
LABEL_4:
  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) & 4) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    result = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 8) == 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      return *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) & 1;
    }
  }
  return result;
}

