__int64 __fastcall sub_7B19E0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  _DWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) == 0 )
  {
    if ( v4 <= 3 || (v3 & 2) == 0 )
      goto LABEL_4;
    v7 = sub_6D4E90((_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL), v2);
    v4 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v3 = v7 | 1;
    *(_QWORD *)(v2 + 96) = v3;
  }
  if ( v4 )
  {
    if ( (v4 & 4) != 0 )
    {
      v8 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v8 )
      {
        v9 = *(_QWORD *)v8;
        v10 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
        if ( v8[2] != v10 )
        {
          v8[2] = v10;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 144LL))(v9, v2);
        }
      }
    }
  }
LABEL_4:
  v5 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v5 + 24) & 1) == 0 )
    return *(_QWORD *)(v5 + 24);
  v11 = sub_798D40(*(_QWORD *)(v5 + 88));
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 18200) + 56LL))(
             *(_QWORD *)(v11 + 18200),
             *(_QWORD *)(v5 + 24) >> 1);
  *(_QWORD *)(v5 + 24) = result;
  return result;
}

