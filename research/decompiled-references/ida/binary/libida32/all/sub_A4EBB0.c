unsigned __int64 __fastcall sub_A4EBB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 42 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 42 )
      return a2;
    v6 = sub_F3F310(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v11, a4, a5);
    if ( !v6 )
      return a2;
  }
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v8 & 8) == 0
    || ((*(_DWORD *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v8 & 7)) >> 9) - 16 > 2 )
  {
    return a2;
  }
  v10 = sub_A4EA40(a1, v7, v8 & 0xFFFFFFFFFFFFFFF0LL, a4, a5);
  return sub_A4C2D0((__int64)a1, v10);
}

