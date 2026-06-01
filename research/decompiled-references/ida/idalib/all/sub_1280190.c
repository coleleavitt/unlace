void __fastcall sub_1280190(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rdi
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+8h] [rbp-50h]
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  sub_112D4E0(&v16, v6, "crt0.o");
  v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v16, v17);
  v8 = *(unsigned int *)(a4 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    v14 = v7;
    sub_2237220(a4, a4 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a4 + 8);
    v7 = v14;
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v8) = v7;
  v9 = v16;
  ++*(_DWORD *)(a4 + 8);
  if ( v9 != v18 )
    operator delete(v9);
  v10 = (char *)"crtbegin.o";
  if ( !a2 )
    v10 = "crtbegin_no_eh.o";
  sub_112D4E0(&v16, v6, v10);
  v11 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v16, v17);
  v12 = *(unsigned int *)(a4 + 8);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    v15 = v11;
    sub_2237220(a4, a4 + 16, v12 + 1, 8);
    v12 = *(unsigned int *)(a4 + 8);
    v11 = v15;
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v12) = v11;
  v13 = v16;
  ++*(_DWORD *)(a4 + 8);
  if ( v13 != v18 )
    operator delete(v13);
}
