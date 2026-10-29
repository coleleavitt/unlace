__int64 *__fastcall sub_1F3D810(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 *result; // rax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // [rsp+8h] [rbp-40h]
  __int64 v19[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a2;
  if ( a2 )
    v7 = a2 - 64;
  v8 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL);
  if ( v8 == sub_B708D0 )
    v9 = a3[9];
  else
    v9 = v8((__int64)a3);
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
  if ( v10 == sub_B708D0 )
    result = *(__int64 **)(v7 + 72);
  else
    result = (__int64 *)v10(v7);
  if ( (__int64 *)v9 != result )
  {
    v12 = *(_BYTE *)(v7 + 29);
    *(_QWORD *)(v7 + 72) = v9;
    *(_QWORD *)(v7 + 64) = v9 & 0xFFFFFFFFFFFFFFFCLL;
    v13 = *(_BYTE *)(v9 + 29);
    v14 = (v13 | v12) & 4;
    *(_BYTE *)(v9 + 29) = v14 | v13 & 0xFB;
    v15 = *(_BYTE *)(v7 + 28);
    *(_BYTE *)(v7 + 29) &= ~4u;
    result = (__int64 *)((v15 & 0x7Fu) - 69);
    if ( (unsigned int)result <= 3 )
      sub_2EB12A(v9);
    if ( a4 )
    {
      v16 = *a1;
      v19[0] = v9;
      result = sub_1F3D390(v16 + 12968, v19, v14, a4, a5, a6);
      v17 = *((unsigned int *)result + 2);
      if ( v17 + 1 > (unsigned __int64)*((unsigned int *)result + 3) )
      {
        v18 = result;
        sub_2237220(result, result + 2, v17 + 1, 8);
        result = v18;
        v17 = *((unsigned int *)v18 + 2);
      }
      *(_QWORD *)(*result + 8 * v17) = a4;
      ++*((_DWORD *)result + 2);
    }
  }
  return result;
}
