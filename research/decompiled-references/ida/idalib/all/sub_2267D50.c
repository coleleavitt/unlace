void __fastcall sub_2267D50(__int64 a1, char *a2, double a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  void (__fastcall *v13)(__int64, void ***); // r13
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rdi
  char *v16; // r12
  __int64 v17; // rcx
  void *v18[2]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+10h] [rbp-78h] BYREF
  void **v20; // [rsp+30h] [rbp-58h] BYREF
  __int16 v21; // [rsp+50h] [rbp-38h]

  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v5 + 1;
  LODWORD(v8) = *(_DWORD *)(a1 + 24);
  v9 = (char *)(v6 + 8 * v5);
  v10 = a2;
  if ( v7 > *(unsigned int *)(a1 + 28) )
  {
    v15 = a1 + 16;
    if ( v6 > (unsigned __int64)a2 || v9 <= a2 )
    {
      sub_2267BE0(v15, v7, a3);
      v8 = *(unsigned int *)(a1 + 24);
      v9 = (char *)(*(_QWORD *)(a1 + 16) + 8 * v8);
      v10 = a2;
    }
    else
    {
      v16 = &a2[-v6];
      sub_2267BE0(v15, v7, a3);
      v17 = *(_QWORD *)(a1 + 16);
      v10 = &v16[v17];
      v8 = *(unsigned int *)(a1 + 24);
      v9 = (char *)(v17 + 8 * v8);
    }
  }
  v11 = *(_QWORD *)v10;
  *(_QWORD *)v9 = v11;
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    LODWORD(v8) = *(_DWORD *)(a1 + 24);
  }
  v12 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 24) = v8 + 1;
  v13 = *(void (__fastcall **)(__int64, void ***))(*(_QWORD *)v12 + 72LL);
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 80LL);
  if ( v14 == sub_2257DD0 )
    (*(void (__fastcall **)(void **))(***(_QWORD ***)(a1 + 16) + 80LL))(v18);
  else
    v14((__int64)v18, a1);
  v20 = v18;
  v21 = 260;
  v13(v12, &v20);
  if ( (v19[16] & 1) == 0 && v18[0] != v19 )
    operator delete(v18[0]);
}
