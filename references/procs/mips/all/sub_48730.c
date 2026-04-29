__int64 __fastcall sub_48730(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // r12d
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v16; // [rsp+0h] [rbp-50h] BYREF
  __int128 v17; // [rsp+8h] [rbp-48h]
  char v18; // [rsp+18h] [rbp-38h]
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  if ( a4 == 29 )
    return 0;
  v4 = *(_QWORD **)(a1 + 624);
  if ( !v4 )
    return 0;
  v5 = 0x10000;
  v6 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v6 <= 7 )
  {
    v5 = dword_5DF20[v6];
    if ( v5 != 0x10000 )
    {
      v5 |= a4;
      if ( a4 >= 0x10000 )
        v5 = 0x10000;
    }
  }
  v18 = 0;
  v7 = v4;
  v17 = 0;
  v8 = v4[1];
  v16 = nullptr;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v4 + 16LL))(
         v4,
         a3 & *(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL),
         0);
  reg_finder_find(v7, &v16, v9, v10, v5, 0, 0);
  v11 = 0;
  v12 = v16;
  if ( (unsigned __int8)(v18 - 10) <= 1u )
  {
    v13 = *v16;
    if ( (_QWORD)v17 == 1 || (v14 = v16 + 3, 24LL * (_QWORD)v17 == 24) )
    {
LABEL_17:
      *a2 = v13;
      v11 = 1;
      if ( !v12 )
        return v11;
      goto LABEL_15;
    }
    while ( *v14 == v13 )
    {
      v14 += 3;
      if ( &v16[3 * (_QWORD)v17] == v14 )
        goto LABEL_17;
    }
    v11 = 0;
  }
  if ( v16 )
  {
LABEL_15:
    *(_QWORD *)&v17 = 0;
    qfree(v12);
  }
  return v11;
}
