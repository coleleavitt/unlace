__int64 __fastcall sub_408AC0(__int64 a1, int a2, int a3, _BYTE *a4, __int64 a5, char a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v13; // edx
  int v14; // esi
  __int64 v15[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v9 = *(_QWORD *)(a1 + 184);
  v18 = __readfsqword(0x28u);
  if ( !*a4 )
    LODWORD(a4) = 0;
  v10 = sub_1D38D0(v9, a2, a3, (_DWORD)a4, a5, a6);
  v11 = v10;
  if ( !v10 )
  {
    if ( *(_BYTE *)a5 != 1 )
      return v11;
    v13 = *(_DWORD *)(a5 + 4);
    v14 = *(_DWORD *)(a5 + 8);
    v15[0] = 0;
    v15[1] = 0;
    sub_63580(v15, v14, v13);
    v16 = 0;
    v17 = 0;
    sub_63980((__int64 *)(a1 + 24), v15);
    sub_313730(a1 + 40, &v16);
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    goto LABEL_12;
  }
  if ( a6 )
  {
    *(_DWORD *)(v10 + 4) |= 0x10u;
  }
  else if ( a2 > 62 )
  {
    *(_DWORD *)(v10 + 4) |= 0x10u;
LABEL_10:
    sub_125510((__int64)v15, *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL), v10, 1);
    sub_63980((__int64 *)(a1 + 24), v15);
    sub_313730(a1 + 40, &v16);
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
LABEL_12:
    qfree();
    return v11;
  }
  if ( a2 != 61 )
    goto LABEL_10;
  return v11;
}
