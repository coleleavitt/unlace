char __fastcall sub_927C80(__int64 a1, __int64 a2)
{
  char v2; // r12
  void *v4; // r14
  bool v5; // al
  bool v6; // al

  v2 = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
  if ( !v2
    && ((v4 = qword_1C7F2C0, (*(_BYTE *)(a1 + 4) & 1) == 0) && (*(_BYTE *)(a2 + 4) & 1) == 0
      ? (v5 = *(_DWORD *)a1 == *(_DWORD *)a2)
      : (v5 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, a2) == 0),
        v5
     && ((*(_BYTE *)(a1 + 20) & 1) == 0 && (*(_BYTE *)(a2 + 20) & 1) == 0
       ? (v6 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16))
       : (v6 = (unsigned int)sub_182C7B0(v4, a1 + 16, a2 + 16) == 0),
         v6)) )
  {
    return sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a2 + 32);
  }
  else
  {
    return v2;
  }
}

