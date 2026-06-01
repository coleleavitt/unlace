__int64 *__fastcall sub_1F545B0(__int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v4)(__int64); // rax
  __int64 v6; // rbp
  __int64 *result; // rax
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // [rsp+8h] [rbp-40h]
  __int64 v16[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
  if ( !a2 )
  {
    v4(a3);
    BUG();
  }
  v6 = ((__int64 (__fastcall *)(__int64))v4)(a3);
  result = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*(a2 - 8) + 32))(a2 - 8);
  if ( (__int64 *)v6 != result )
  {
    v8 = *((_BYTE *)a2 - 35);
    a2[1] = v6;
    *a2 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    *(_BYTE *)(v6 + 29) = (*(_BYTE *)(v6 + 29) | v8) & 4 | *(_BYTE *)(v6 + 29) & 0xFB;
    *((_BYTE *)a2 - 35) &= ~4u;
    result = sub_1F54330(a1, (__int64)(a2 - 8), v6, a4 != 0);
    if ( a4 )
    {
      v13 = *a1;
      v16[0] = v6;
      result = sub_1F3D390(v13 + 12968, v16, v9, v10, v11, v12);
      v14 = *((unsigned int *)result + 2);
      if ( v14 + 1 > (unsigned __int64)*((unsigned int *)result + 3) )
      {
        v15 = result;
        sub_2237220(result, result + 2, v14 + 1, 8);
        result = v15;
        v14 = *((unsigned int *)v15 + 2);
      }
      *(_QWORD *)(*result + 8 * v14) = a4;
      ++*((_DWORD *)result + 2);
    }
  }
  return result;
}
