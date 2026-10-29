__int64 __fastcall sub_A088E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  int v6; // eax
  void *v7; // r15
  void *v8; // r15
  __int64 v9; // [rsp+0h] [rbp-68h]
  int v11[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  result = a3;
  if ( a3 )
  {
    v5 = a4;
    v9 = a4 + 40LL * a3;
    while ( 1 )
    {
      *(_QWORD *)v11 = 0;
      v8 = qword_1C7F2C0;
      v12 = 0;
      v13[0] = 1;
      v13[1] = 0;
      if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v11, v5);
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
        {
LABEL_8:
          sub_182C690(v8, v13, v5 + 16);
          goto LABEL_5;
        }
      }
      else
      {
        v11[0] = *(_DWORD *)v5;
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
          goto LABEL_8;
      }
      v6 = *(_DWORD *)(v5 + 16);
      BYTE4(v13[0]) &= ~1u;
      LODWORD(v13[0]) = v6;
LABEL_5:
      sub_A08160(
        a1,
        a2,
        (__int64)v11,
        *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * *(unsigned int *)(v5 + 32)) & 0xFFFFFFF,
        0);
      v7 = qword_1C7F2C0;
      v5 += 40;
      sub_182CBA0(qword_1C7F2C0, v11);
      sub_182CBA0(v7, v13);
      if ( v9 == v5 )
        return sub_18290D0(*(_QWORD *)(a1 + 24), a3);
    }
  }
  return result;
}

