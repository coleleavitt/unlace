bool __fastcall sub_7B18F0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  _DWORD *v6; // rdi
  __int64 v8; // rax
  int v9; // edx

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) == 0 )
  {
    if ( v4 <= 3 || (v3 & 2) == 0 )
      goto LABEL_8;
    v5 = sub_6D4E90((_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL), v2);
    v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v3 = v5 | 1;
    *(_QWORD *)(v2 + 96) = v3;
  }
  if ( v4 )
  {
    if ( (v4 & 4) != 0 )
    {
      v6 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6 )
      {
        v8 = *(_QWORD *)v6;
        v9 = *(_DWORD *)(*(_QWORD *)v6 + 12LL);
        if ( v6[2] != v9 )
        {
          v6[2] = v9;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 144LL))(v8, v2);
        }
      }
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x10) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 1) == 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  return ((*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7) & 0x3Fu) > 0x1F;
}

