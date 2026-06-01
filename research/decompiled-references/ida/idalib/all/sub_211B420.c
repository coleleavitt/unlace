__int64 (*__fastcall sub_211B420(_QWORD *a1, __int64 a2, __int64 a3))(void)
{
  char v5; // al
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 (*result)(void); // rax
  char v11; // al
  void *v12; // rax
  __int64 v13; // rdi
  _QWORD v14[4]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v15; // [rsp+30h] [rbp-58h]
  _QWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v17; // [rsp+60h] [rbp-28h]

  v5 = *(_BYTE *)(a2 + 8);
  if ( (v5 & 4) != 0 )
  {
    v11 = *(_BYTE *)(a2 + 9);
    if ( (v11 & 0x70) == 0x20 )
    {
      v11 &= 0x8Fu;
      *(_QWORD *)(a2 + 24) = 0;
      *(_BYTE *)(a2 + 9) = v11;
    }
    *(_BYTE *)(a2 + 8) &= ~4u;
    *(_QWORD *)a2 = 0;
  }
  else
  {
    if ( *(_QWORD *)a2 )
    {
LABEL_3:
      v6 = a1[1];
      if ( (v5 & 1) != 0 )
      {
        v7 = *(__int64 **)(a2 - 8);
        v8 = *v7;
        v9 = v7 + 3;
      }
      else
      {
        v8 = 0;
        v9 = nullptr;
      }
      v14[2] = v9;
      v14[3] = v8;
      v15 = 1283;
      v16[0] = v14;
      v17 = 770;
      v14[0] = "symbol '";
      v16[2] = "' is already defined";
      return (__int64 (*)(void))sub_2100A30(v6, a3, (__int64)v16);
    }
    v11 = *(_BYTE *)(a2 + 9);
  }
  if ( (v11 & 0x70) == 0x20 )
  {
    v5 = *(_BYTE *)(a2 + 8);
    if ( (v5 & 0x40) != 0 )
      goto LABEL_3;
    v12 = sub_210D820(*(_QWORD *)(a2 + 24));
    *(_QWORD *)a2 = v12;
    if ( v12 || (*(_BYTE *)(a2 + 9) & 0x70) == 0x20 )
    {
      v5 = *(_BYTE *)(a2 + 8);
      goto LABEL_3;
    }
  }
  v13 = a1[2];
  result = *(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(a1[36] + 8LL) + 56LL) + 8LL);
  *(_QWORD *)a2 = result;
  if ( v13 )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)result != (char *)nullsub_1427 )
      return (__int64 (*)(void))result();
  }
  return result;
}
