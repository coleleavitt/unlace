__int64 __fastcall sub_40D150(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v6; // edx
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  int *v14; // r12
  int v15; // edx
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+10h] [rbp-48h] BYREF

  v16 = 0;
  if ( a3 == 2 )
  {
    v8 = a4[1];
    if ( *(_UNKNOWN ***)(v8 + 24) == &off_6560E0 )
    {
      v16 = *(_QWORD *)(v8 + 32);
    }
    else if ( (unsigned int)sub_47BF00(0, v8, &v16) )
    {
      v11 = sub_47C9E0(a2, a4[1], v17);
      v6 = 1;
      if ( v11 )
        return v6;
      sub_4B1D30(v17, 64, v17);
      v13 = sub_47CCC0(v17, 64, v12);
      v14 = (int *)v13;
      v15 = *(_DWORD *)v13 + 1;
      if ( *(_UNKNOWN ***)(v13 + 24) == &off_6560E0 )
      {
        v16 = *(_QWORD *)(v13 + 32);
      }
      else
      {
        *(_DWORD *)v13 = v15;
        sub_47BF00(0, v13, &v16);
        v15 = *v14;
      }
      *v14 = v15 - 1;
      if ( v15 - 1 <= 0 )
        sub_47B120(v14);
    }
    v9 = v16;
    *(_DWORD *)(a2 + 424) |= 0x40u;
    v10 = v9 & 0x7FFFFFFF;
    if ( (_DWORD)v10 == 0 || (unsigned int)v10 == 0x7FFFFFFF )
      v10 ^= 0x75BD924uLL;
    *(_QWORD *)(a2 + 432) = v10;
    return (unsigned int)sub_40CE50(a1, a2, 1, a4);
  }
  else
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
}

