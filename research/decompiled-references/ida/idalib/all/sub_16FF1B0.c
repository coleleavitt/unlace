unsigned __int64 __fastcall sub_16FF1B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  *a1 = &off_2C4EFD0;
  v5 = *a5;
  a1[2] = a3;
  v6 = a3 - 64;
  a1[5] = v5;
  v7 = a5[1];
  a1[1] = a2;
  a1[6] = v7;
  v8 = a5[2];
  a1[4] = 0;
  a1[7] = v8;
  LOBYTE(v8) = *(_BYTE *)(v6 + 72);
  a5[2] = 0;
  *(_OWORD *)a5 = 0;
  if ( (unsigned int)(v8 & 0x7F) - 59 >= 3 )
    v6 = 0;
  a1[3] = v6;
  result = sub_19A27D0(*(_QWORD *)(a2 + 176)) & 0xFFFFFFFFFFFFFFF0LL;
  v13 = result;
  if ( result )
  {
    result = sub_F68450(*(_QWORD *)result, a2, v10, v11, v12);
    v13 = result;
    if ( !a1[3] )
    {
      result = (unsigned __int64)sub_F63270(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15, v16, v17);
      a1[3] = result;
    }
  }
  a1[4] = v13;
  return result;
}
