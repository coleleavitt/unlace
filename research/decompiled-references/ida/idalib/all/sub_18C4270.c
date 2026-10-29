char __fastcall sub_18C4270(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // al
  char result; // al
  _QWORD *v11; // rax

  v6 = *a2 >> 14;
  if ( (v6 & 4) != 0 )
    return 1;
  v7 = (unsigned __int64)a2;
  if ( (v6 & 8) != 0 || (a2 = *(_DWORD **)(a1 + 248), (result = sub_C3EA40(v7, (__int64)a2, nullptr, a4, a5, a6)) != 0) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_BYTE *)(v8 + 16);
    if ( v9 == 13 )
    {
      return (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
    }
    else if ( v9 == 47 )
    {
      v11 = sub_F60F10(v8, (__int64)a2, a3, a4, a5, a6);
      return (*((_BYTE *)v11 + 74) & 1) != 0 || (v11[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
    }
    else
    {
      return v9 == 10;
    }
  }
  return result;
}
