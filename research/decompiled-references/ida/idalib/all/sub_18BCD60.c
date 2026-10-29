__int64 __fastcall sub_18BCD60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-48h] BYREF
  int v14; // [rsp+18h] [rbp-40h]
  __int64 *v15; // [rsp+20h] [rbp-38h]

  v8 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) != 7 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
      goto LABEL_3;
    v9 = sub_F63050(v9, a2, a3, a4);
    if ( !v9 )
    {
      v9 = *(_QWORD *)v8;
      goto LABEL_3;
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
  v10 = sub_F68450(v9, a2, a3, a4, a5);
  v12 = sub_EEC8C0(a3, a2, a6);
  v15 = &v12;
  v14 = 5214;
  v13 = off_2BC6FB8;
  return sub_1E63C20(a1, (unsigned int)a2, v10, 0, &v13);
}
