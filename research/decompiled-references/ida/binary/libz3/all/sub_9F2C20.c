__int64 __fastcall sub_9F2C20(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  char v5; // al
  char v6; // al
  void *v7; // [rsp+8h] [rbp-20h]
  void *v8; // [rsp+8h] [rbp-20h]

  v3 = qword_1C7F2C0;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0
        || *(_DWORD *)(a1 + 16) != 1
        || (*(_BYTE *)(a2 + 20) & 1) != 0
        || *(_DWORD *)(a2 + 16) != 1 )
      {
        sub_1851D20(qword_1C7F2C0, a1, a2, a1);
      }
      else
      {
        v7 = qword_1C7F2C0;
        sub_1831A80(qword_1C7F2C0, a1, a2, a1);
        sub_182CBA0(v7, a1 + 16);
        *(_BYTE *)(a1 + 20) &= ~1u;
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, a1, (int *)a2);
    }
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 4);
    if ( (v5 & 1) != 0 )
    {
      v8 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, a1, a1);
      v3 = v8;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = v5 & 0xFE;
    }
    v6 = *(_BYTE *)(a1 + 20);
    if ( (v6 & 1) != 0 )
      sub_182C690(v3, a1 + 16, a1 + 16);
    else
      *(_BYTE *)(a1 + 20) = v6 & 0xFE;
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 32, a2 + 32, a1 + 32);
  sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 64, a2 + 64, a1 + 64);
  return a1;
}

