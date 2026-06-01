__int64 __fastcall sub_9AEDC0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // r15
  int v6; // eax
  void *v7; // rdi
  void *v8; // rbx
  void *v10; // [rsp+8h] [rbp-60h]
  _QWORD v11[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( (*(_BYTE *)(a2 + 20) & 1) == 0 && *(_DWORD *)(a2 + 16) == 1 )
        return sub_89ABF0((__int64)qword_1C7F2C0, a1, a3, a1);
    }
    else if ( *(_DWORD *)a2 == -1 && (*(_BYTE *)(a2 + 20) & 1) == 0 && *(_DWORD *)(a2 + 16) == 1 )
    {
      return sub_2FC4A0((__int64)qword_1C7F2C0, a1, a3, a1);
    }
  }
  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v11, a3);
  else
    LODWORD(v11[0]) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v5, v12, a3 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 16);
    BYTE4(v12[0]) &= ~1u;
    LODWORD(v12[0]) = v6;
  }
  if ( (v12[0] & 0x100000000LL) != 0
    || LODWORD(v12[0]) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v11, a2);
  }
  else
  {
    v10 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, v11, a2);
    sub_182CBA0(v10, v12);
    BYTE4(v12[0]) &= ~1u;
    LODWORD(v12[0]) = 1;
  }
  v7 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (v12[0] & 0x100000000LL) != 0
    || LODWORD(v12[0]) != 1 )
  {
    sub_1852000(qword_1C7F2C0, a1, v11);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, a1, v11);
    sub_182CBA0(v7, a1 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = 1;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  return sub_182CBA0(v8, v12);
}

