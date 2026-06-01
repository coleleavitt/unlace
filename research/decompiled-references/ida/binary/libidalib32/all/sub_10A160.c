void __fastcall sub_10A160(__int64 a1, unsigned __int8 a2, _QWORD *a3, int a4, int a5, int a6)
{
  __int64 v8; // r12
  const char *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  const char *v12; // rdi
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+0h] [rbp-48h]
  unsigned int v16; // [rsp+4h] [rbp-44h]
  int v17; // [rsp+8h] [rbp-40h]

  if ( a3 )
    v8 = a3[1];
  else
    v8 = *(_QWORD *)(a1 + 192);
  if ( v8 )
  {
    v9 = "Applying";
    if ( !a2 )
      v9 = "Restoring";
    v17 = (int)v9;
    sub_10DDF0((unsigned int)"%s metadata", (_DWORD)v9, (unsigned int)"Restoring", a4, a5, a6);
    v10 = 0;
    v16 = a2;
    do
    {
      while ( 1 )
      {
        v11 = v10;
        if ( a3 )
          v11 = *(_QWORD *)(*a3 + 8 * v10);
        v12 = (const char *)a1;
        ++v10;
        sub_10A0D0(a1, v16, v11);
        if ( __ROR8__(0x8F5C28F5C28F5C29LL * v10, 2) <= 0x28F5C28F5C28F5CuLL )
          break;
        if ( v10 == v8 )
          goto LABEL_13;
      }
      if ( (unsigned __int8)sub_19F870(a1, v16) )
        break;
      v12 = "%s metadata (%zu/%zu)";
      sub_10DEE0((unsigned int)"%s metadata (%zu/%zu)", v17, v10, v8, v13, v14, v15);
    }
    while ( v10 != v8 );
LABEL_13:
    sub_10D850(v12);
  }
}

