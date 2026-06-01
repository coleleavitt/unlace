__int64 __fastcall sub_1C36C00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  int v7; // r13d
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  __int64 *v17; // rdx
  int v18; // eax
  int v19; // ecx
  __int16 v20; // dx
  bool v21; // al
  __int64 v22; // [rsp-10h] [rbp-68h]
  __int64 v23; // [rsp-8h] [rbp-60h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( (*(_DWORD *)a4 & 0x10000) != 0 )
    goto LABEL_2;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = sub_A70010(a1[31], *(_QWORD *)(a1[31] + 18632LL) | 1LL);
  v25[0] = v9;
  v14 = v13;
  v15 = sub_1919BF0(a1, v13, v25, 1, 0, 1u, a6, a7);
  if ( v25[0] == 1 )
    return 1;
  v9 = v25[0] & 0xFFFFFFFFFFFFFFFELL;
  a2 = v15;
  v21 = sub_18DCB30((__int64)a1, v15, v8, v14, v12, v25[0] & 0xFFFFFFFFFFFFFFFELL, 1, nullptr);
  a3 = v22;
  a4 = v23;
  if ( v21 )
    return 1;
  if ( v9 )
LABEL_2:
    v10 = (unsigned int)sub_C00A40(v9, a2, a3, a4, a5);
  else
    v10 = 0;
  result = sub_19B4A30((__int64)a1, v9, v10, 0, 0, 0, a6, a7);
  if ( result != 1 )
  {
    v16 = result & 0xFFFFFFFFFFFFFFFELL;
    sub_15F24A0((__int64)a1);
    v17 = (__int64 *)a1[76];
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 + 2);
      if ( (v18 & 0x10000000) != 0 )
      {
LABEL_20:
        sub_15F2480((__int64)a1);
      }
      else if ( (v18 & 0xDE1) == 0 )
      {
        do
        {
          v17 = (__int64 *)*v17;
          if ( !v17 )
            break;
          v19 = *((_DWORD *)v17 + 2);
          if ( (v19 & 0x10000000) != 0 )
            goto LABEL_20;
        }
        while ( (v19 & 0xDE1) == 0 );
      }
    }
    result = sub_EEE9A0(24, (_QWORD *)a1[31], 8u);
    v20 = *(_WORD *)result & 0xFE00;
    LOBYTE(v20) = -16;
    *(_WORD *)result = v20;
    if ( unk_2CD7484 )
    {
      v24 = result;
      sub_EE9B50(240);
      result = v24;
    }
    *(_DWORD *)(result + 8) = v8;
    *(_QWORD *)(result + 16) = v16;
    *(_DWORD *)(result + 4) = v7;
  }
  return result;
}
