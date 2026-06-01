unsigned __int64 __fastcall sub_16FE930(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v5 = a4;
  *a1 = &off_2C4EFD0;
  v6 = *a5;
  a1[2] = a3;
  v7 = a3 - 64;
  a1[5] = v6;
  v8 = a5[1];
  a1[1] = a2;
  a1[6] = v8;
  v9 = a5[2];
  a1[4] = 0;
  a1[7] = v9;
  LOBYTE(v9) = *(_BYTE *)(v7 + 72);
  *(_OWORD *)a5 = 0;
  a5[2] = 0;
  v10 = (unsigned int)(v9 & 0x7F) - 59 < 3;
  result = 0;
  if ( !v10 )
    v7 = 0;
  a1[3] = v7;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    result = sub_19A27D0(*(_QWORD *)(a2 + 176)) & 0xFFFFFFFFFFFFFFF0LL;
    if ( result )
    {
      result = sub_F68450(*(_QWORD *)result, a2, v12, v13, v14);
      v5 = result;
      if ( !a1[3] )
      {
        result = (unsigned __int64)sub_F63270(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v16, v17, v18);
        a1[3] = result;
      }
    }
  }
  a1[4] = v5;
  return result;
}
