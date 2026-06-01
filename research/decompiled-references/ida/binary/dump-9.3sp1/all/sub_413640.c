__int64 __fastcall sub_413640(__int64 *a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4, __int64 a5, char a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v9 = a1[23];
  v24 = __readfsqword(0x28u);
  if ( !*a4 )
    a4 = nullptr;
  v10 = sub_1D6450(v9, a2, a3, a4, (unsigned __int8 *)a5);
  v13 = v10;
  if ( !v10 )
  {
    if ( *(_BYTE *)a5 != 1 )
      return v13;
    v17 = *(_DWORD *)(a5 + 4);
    v18 = *(_DWORD *)(a5 + 8);
    v21[0] = 0;
    v21[1] = 0;
    sub_63E80(v21, v18, v17);
    v22 = nullptr;
    v23 = 0;
    sub_64280(a1 + 3, v21);
    sub_316CB0(a1 + 5, &v22, v19, v20);
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree((__int64)v22);
    }
    goto LABEL_12;
  }
  if ( a6 )
  {
    *(_DWORD *)(v10 + 4) |= 0x10u;
  }
  else if ( (int)a2 > 62 )
  {
    *(_DWORD *)(v10 + 4) |= 0x10u;
LABEL_10:
    sub_127A20((__int64)v21, *(_QWORD *)(a1[23] + 16), v10, 1, v11, v12);
    sub_64280(a1 + 3, v21);
    sub_316CB0(a1 + 5, &v22, v15, v16);
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree((__int64)v22);
    }
LABEL_12:
    qfree(v21[0]);
    return v13;
  }
  if ( (_DWORD)a2 != 61 )
    goto LABEL_10;
  return v13;
}
