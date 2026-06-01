bool __fastcall sub_77DD70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // rax

  v4 = a1[5] & 7LL;
  if ( (_DWORD)v4 != 6 || (unsigned int)(*(_DWORD *)(a1[5] & 0xFFFFFFFFFFFFFFF8LL) - 1) > 3 )
    return 0;
  v7 = a1[2];
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) == 0 )
  {
    if ( (*(_BYTE *)(sub_79C2A0(v8, a2, v4, a4) + 8) & 0x7F) == 0 )
      goto LABEL_6;
    return 0;
  }
  if ( (*(_BYTE *)(sub_79C2A0(*v8, a2, v4, a4) + 8) & 0x7F) != 0 )
    return 0;
LABEL_6:
  v11 = (__int64 *)(a1[6] & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) != 26 )
    v12 = sub_B0D320(*v11);
  if ( (unsigned __int16)(*(_DWORD *)(v12 + 20) >> 6) != 2 || (*(_BYTE *)(v12 + 23) & 0x10) != 0 )
    return 0;
  v13 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a1[2] & 4) != 0 )
    v13 = (_QWORD *)*v13;
  v14 = sub_79C2A0(v13, a2, v9, v10);
  if ( !v14 )
    BUG();
  return (*(_QWORD *)&byte_8[*(_QWORD *)(v12 + 56) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v12 + 56) & 7LL) == *(_QWORD *)(*(_QWORD *)(v14 + 48) + 18896LL);
}

