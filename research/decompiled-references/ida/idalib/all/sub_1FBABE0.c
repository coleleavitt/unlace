__int64 __fastcall sub_1FBABE0(__int64 *a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  char v11; // al
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( *(char *)(result + 29) < 0 )
  {
    v5 = result;
    result = sub_1FB6730(*a1, a3);
    v10 = result;
    if ( (char *)result == a3 )
    {
      v11 = *(_BYTE *)(result + 28);
      v12 = *a1;
      v16[0] = v5;
      v13 = v11 & 0x7F;
      if ( v13 == 42 || v13 == 61 )
      {
        v15 = sub_1FBA920(v12 + 1408, v16, v6, v7, v8, v9);
        return sub_1FB2670(v15, (__int64)a3);
      }
      else
      {
        v14 = sub_1FBA920(v12 + 1368, v16, v6, v7, v8, v9);
        return sub_1FB2670(v14, v10);
      }
    }
  }
  return result;
}
