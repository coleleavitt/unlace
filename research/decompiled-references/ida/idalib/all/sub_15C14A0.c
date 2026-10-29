__int64 __fastcall sub_15C14A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  char v8; // dl
  int v9; // ecx
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdx
  _BYTE *i; // rdi
  _BYTE *v16; // rsi
  __int64 v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 40);
  v17[0] = v3;
  if ( (v3 & 7) == 0 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_8;
    v6 = *(_BYTE *)(v4 + 4);
    if ( (v6 & 0x10) == 0 )
    {
      if ( (v6 & 1) != 0 )
      {
        *(_BYTE *)(v4 + 4) = v6 | 4;
        v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      }
LABEL_8:
      result = *(_QWORD *)(v5 + 8);
      if ( (result & 1) == 0 )
      {
LABEL_9:
        *(_QWORD *)(v5 + 8) = 0;
        return result;
      }
      goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL)
                                                                       + 24LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL),
      v3 & 0xFFFFFFFFFFFFFFF8LL,
      v5);
    v7 = v17[0];
    v8 = *(_BYTE *)(v4 + 4);
    v9 = v17[0] & 7;
    if ( (v8 & 1) != 0 )
      *(_BYTE *)(v4 + 4) = v8 | 4;
    if ( !v9 )
    {
      v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_8;
    }
  }
  result = sub_B85750(v17);
  if ( (result & 1) != 0 )
  {
LABEL_11:
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    v13 = *(unsigned int *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
    v14 = (_BYTE *)(v12 + 8 * v13);
    if ( a2 != *((_QWORD *)v14 - 1) )
    {
      for ( i = v14; ; i -= 8 )
      {
        v16 = i - 8;
        if ( a2 == *((_QWORD *)i - 2) )
          break;
      }
      if ( v14 != v16 )
      {
        memmove(i - 16, v16, v14 - v16);
        LODWORD(v13) = *(_DWORD *)(v11 + 8);
      }
    }
    result = (unsigned int)(v13 - 1);
    *(_DWORD *)(v11 + 8) = result;
    return result;
  }
  if ( (v17[0] & 7) == 0 )
  {
    v5 = v17[0] & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_9;
  }
  return sub_B857B0(v17, 0);
}
