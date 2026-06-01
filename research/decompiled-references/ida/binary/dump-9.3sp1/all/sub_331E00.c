__int64 __fastcall sub_331E00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  bool v12; // al
  char v13; // al
  char v14; // al
  int v15; // eax
  _QWORD *v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 48);
  if ( !v6 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    sub_127A20((__int64)v19, a2, v6, 1, a5, a6);
    if ( *(_DWORD *)v6 != 4 )
      break;
    v8 = a1 + 2;
    if ( *(_BYTE *)(v6 + 32) == 1 )
      goto LABEL_9;
LABEL_4:
    sub_64280(v8, v19);
    sub_316CB0(a1 + 4, &v20, v9, v10);
    if ( v20 )
    {
      v21 = 0;
      qfree((__int64)v20);
    }
    qfree(v19[0]);
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      return v7;
  }
  v8 = a1 + 2;
  if ( *(_DWORD *)v6 != 67 )
    goto LABEL_4;
  if ( *(_DWORD *)(v6 + 36) != *(_DWORD *)(v6 + 68) )
    goto LABEL_4;
  v8 = a1 + 2;
  if ( *(_BYTE *)(v6 + 32) != 1 )
    goto LABEL_4;
LABEL_9:
  v11 = sub_32F330(v6 + 64, &v18);
  v8 = a1 + 2;
  if ( !v11 )
    goto LABEL_4;
  v17 = a1 + 2;
  v12 = sub_64930(a1 + 2, *(_DWORD *)(v6 + 40));
  v8 = a1 + 2;
  if ( v12 )
    goto LABEL_4;
  v13 = sub_64780(v17, v19);
  v8 = a1 + 2;
  if ( v13 )
    goto LABEL_4;
  v14 = sub_318470((unsigned __int64 **)a1 + 4, (__int64)&v20);
  v8 = a1 + 2;
  if ( v14 )
    goto LABEL_4;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _QWORD *))(*a1 + 16LL))(
          a1,
          v6,
          *(unsigned int *)(v6 + 40),
          v18,
          v17);
  if ( v15 != -1 )
  {
    v8 = a1 + 2;
    v7 -= (v15 == 0) - 1;
    goto LABEL_4;
  }
  if ( v20 )
  {
    v21 = 0;
    qfree((__int64)v20);
  }
  qfree(v19[0]);
  return v7;
}
