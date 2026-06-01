__int64 *__fastcall sub_1F3D610(__int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v4)(__int64); // rax
  __int64 v6; // r13
  __int64 *result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 *v17; // [rsp+8h] [rbp-40h]
  __int64 v18[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
  if ( !a2 )
  {
    v4(a3);
    BUG();
  }
  v6 = ((__int64 (__fastcall *)(__int64))v4)(a3);
  result = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*(a2 - 9) + 32))(a2 - 9);
  if ( (__int64 *)v6 != result )
  {
    v11 = *((_BYTE *)a2 - 43);
    a2[1] = v6;
    *a2 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    v12 = *(_BYTE *)(v6 + 29);
    v13 = (v12 | v11) & 4;
    *(_BYTE *)(v6 + 29) = v13 | v12 & 0xFB;
    v14 = *((_BYTE *)a2 - 44);
    *((_BYTE *)a2 - 43) &= ~4u;
    result = (__int64 *)((v14 & 0x7Fu) - 69);
    if ( (unsigned int)result <= 3 )
      sub_2EB12A(v6);
    if ( a4 )
    {
      v15 = *a1;
      v18[0] = v6;
      result = sub_1F3D390(v15 + 12968, v18, v13, v8, v9, v10);
      v16 = *((unsigned int *)result + 2);
      if ( v16 + 1 > (unsigned __int64)*((unsigned int *)result + 3) )
      {
        v17 = result;
        sub_2237220(result, result + 2, v16 + 1, 8);
        result = v17;
        v16 = *((unsigned int *)v17 + 2);
      }
      *(_QWORD *)(*result + 8 * v16) = a4;
      ++*((_DWORD *)result + 2);
    }
  }
  return result;
}
