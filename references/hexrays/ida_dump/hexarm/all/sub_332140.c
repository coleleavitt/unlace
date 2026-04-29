__int64 __fastcall sub_332140(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r15d
  __int64 *v4; // r8
  char v5; // al
  bool v6; // al
  char v7; // al
  char v8; // al
  int v9; // eax
  _QWORD *v11; // [rsp+8h] [rbp-80h]
  __int64 v12; // [rsp+18h] [rbp-70h] BYREF
  __int64 v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 48);
  if ( !v2 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    sub_127460((__int64)v13, a2, v2, 1u);
    if ( *(_DWORD *)v2 != 4 )
      break;
    v4 = a1 + 2;
    if ( *(_BYTE *)(v2 + 32) == 1 )
      goto LABEL_9;
LABEL_4:
    sub_63C80(v4, v13);
    sub_317070(a1 + 4, &v14);
    if ( v14 )
    {
      v15 = 0;
      qfree(v14);
    }
    qfree(v13[0]);
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return v3;
  }
  v4 = a1 + 2;
  if ( *(_DWORD *)v2 != 67 )
    goto LABEL_4;
  if ( *(_DWORD *)(v2 + 36) != *(_DWORD *)(v2 + 68) )
    goto LABEL_4;
  v4 = a1 + 2;
  if ( *(_BYTE *)(v2 + 32) != 1 )
    goto LABEL_4;
LABEL_9:
  v5 = sub_32F650(v2 + 64, &v12);
  v4 = a1 + 2;
  if ( !v5 )
    goto LABEL_4;
  v11 = a1 + 2;
  v6 = sub_64330(a1 + 2, *(_DWORD *)(v2 + 40));
  v4 = a1 + 2;
  if ( v6 )
    goto LABEL_4;
  v7 = sub_64180(v11, v13);
  v4 = a1 + 2;
  if ( v7 )
    goto LABEL_4;
  v8 = sub_318830((unsigned __int64 **)a1 + 4, (__int64)&v14);
  v4 = a1 + 2;
  if ( v8 )
    goto LABEL_4;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _QWORD *))(*a1 + 16LL))(
         a1,
         v2,
         *(unsigned int *)(v2 + 40),
         v12,
         v11);
  if ( v9 != -1 )
  {
    v4 = a1 + 2;
    v3 -= (v9 == 0) - 1;
    goto LABEL_4;
  }
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
  qfree(v13[0]);
  return v3;
}
