__int64 __fastcall sub_CA16E0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // ax
  char v4; // bl
  unsigned int v5; // edx
  unsigned __int8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64); // rax
  unsigned int v12; // edx

  v3 = sub_CA0C10(a1, a2, 1, a3);
  v4 = HIBYTE(v3);
  if ( !HIBYTE(v3) )
  {
    v5 = (unsigned __int8)v3;
    BYTE1(v5) = 0;
    return v5;
  }
  v7 = v3;
  v5 = 257;
  if ( (_BYTE)v3 )
    return v5;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6
    && (!sub_990BA0(a2) || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && *(char *)(a2 + 97) < 0) )
  {
    v8 = sub_E0B510(*(_QWORD *)(a1 + 496), a2);
    if ( BYTE4(v8) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 496) + 224LL) + 8LL * (unsigned int)v8);
      v10 = *(_QWORD *)(v9 + 32);
      *(_DWORD *)(v9 + 40) = 2;
      v11 = *(void (__fastcall **)(__int64, __int64))(v10 + 72);
      if ( v11 )
        v11(v9, v9 + *(unsigned int *)(v10 + 24) + 40);
      *(_BYTE *)(v9 + 27) = 0;
    }
  }
  v12 = v7;
  BYTE1(v12) = v4;
  return v12;
}

