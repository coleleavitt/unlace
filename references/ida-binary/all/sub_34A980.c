unsigned __int64 __fastcall sub_34A980(__int64 a1, char a2, __int64 a3)
{
  void (__fastcall **v3)(__int64, __int64, __int64 *); // rax
  __int64 (*v5)(void); // rdx
  __int64 v6; // r13
  int v7; // r12d
  char v8; // al
  char v9; // al
  char v10; // al
  void (__fastcall **v11)(__int64, __int64, __int64 *); // rax
  int v13; // [rsp+8h] [rbp-60h] BYREF
  int v14; // [rsp+Ch] [rbp-5Ch] BYREF
  int v15; // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+14h] [rbp-54h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v3 = *(void (__fastcall ***)(__int64, __int64, __int64 *))a1;
  v19 = __readfsqword(0x28u);
  v5 = (__int64 (*)(void))v3[9];
  if ( (char *)v5 == (char *)form_actions_impl_t__::vfunc_9 )
  {
    v6 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v6 = v5();
    v3 = *(void (__fastcall ***)(__int64, __int64, __int64 *))a1;
  }
  v18 = 0;
  LOBYTE(v18) = a2;
  (*v3)(a1, 2, (__int64 *)&v13);
  v7 = *(_DWORD *)(**(_QWORD **)(v6 + 176) + 4LL * v13);
  (**(void (__fastcall ***)(__int64, __int64, int *))a1)(a1, 3, &v14);
  (**(void (__fastcall ***)(__int64, __int64, int *))a1)(a1, 4, &v15);
  (**(void (__fastcall ***)(__int64, __int64, int *))a1)(a1, 5, &v16);
  if ( v14 )
    v8 = v15 == 0 ? 12 : 4;
  else
    v8 = 8 * (v15 != 0);
  v9 = (v16 | v8) & 0xF;
  if ( (v7 & 0xFFFFFF0F) != 0 || v7 == 192 )
  {
    v10 = v9 | 0xC0;
  }
  else
  {
    v10 = v7 | v9;
    v7 = 0;
  }
  BYTE1(v18) = v10;
  v11 = *(void (__fastcall ***)(__int64, __int64, __int64 *))a1;
  HIDWORD(v18) = v7;
  (*v11)(a1, 6, &v17);
  BYTE5(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 9, &v17);
  BYTE3(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 7, &v17);
  BYTE2(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 11, &v17);
  BYTE4(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 8, &v17);
  BYTE6(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 10, &v17);
  BYTE7(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 12, &v17);
  BYTE8(v18) = v17;
  (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, 15, &v17);
  BYTE9(v18) = v17;
  set_compiler(&v18, 9, a3);
  return v19 - __readfsqword(0x28u);
}
