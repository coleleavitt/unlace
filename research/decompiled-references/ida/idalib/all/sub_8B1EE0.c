__int64 __fastcall sub_8B1EE0(__int64 a1, __int64 a2, char *a3, char a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, char *, _QWORD *); // rax
  char v14; // al
  char v15; // [rsp+Fh] [rbp-69h] BYREF
  int v16[2]; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)a1;
  *(_QWORD *)v16 = __readfsqword(0x28u);
  v9 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v9 == (char *)sub_6D3380 )
    v10 = a1 + 40;
  else
    v10 = v9();
  if ( *(_BYTE *)(v10 + 32) )
  {
    v11 = *(_QWORD *)a1;
    v15 = 0;
    v12 = *(__int64 (__fastcall **)(__int64, char *, _QWORD *))(v11 + 88);
    if ( v12 == sub_8AFF40 )
    {
      if ( !*(_DWORD *)(a1 + 208) )
        return 0;
      if ( !*(_BYTE *)(a1 + 352) )
      {
        if ( a3 )
          *a3 = 0;
        goto LABEL_10;
      }
      v15 = 1;
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      if ( !v12(a1, &v15, nullptr) )
        return 0;
      v14 = v15;
      if ( a3 )
        *a3 = v15;
      if ( !v14 )
LABEL_10:
        callui(87, 3, *(_QWORD *)(a1 + 408), 2, a5, a6);
    }
    if ( (a4 & 1) != 0 )
      return 0;
    goto LABEL_10;
  }
  return 0;
}
