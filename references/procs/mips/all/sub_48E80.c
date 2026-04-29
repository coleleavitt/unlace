__int64 __fastcall sub_48E80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v17; // [rsp+0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+8h] [rbp-48h]
  char v19; // [rsp+18h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 624);
  if ( !v4 )
    return 0;
  if ( (_DWORD)a4 == -1 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*v4 + 48LL))(*(_QWORD *)(a1 + 624), a3);
    a4 = v6;
    if ( v6 == -1 )
      return 0;
  }
  v7 = 0x10000;
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4[1] + 32LL) + 24LL) - 1);
  if ( (unsigned int)v8 <= 7 )
  {
    v7 = dword_5DF20[v8];
    if ( v7 != 0x10000 )
    {
      v7 |= a4;
      if ( (unsigned int)a4 >= 0x10000 )
        v7 = 0x10000;
    }
  }
  v19 = 0;
  v18 = 0;
  v9 = v4[1];
  v17 = nullptr;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v4 + 16LL))(
          v4,
          a3 & *(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL),
          0,
          a4);
  reg_finder_find(v4, &v17, v10, v11, v7, 0xFFFFFFFFLL, 0);
  v12 = 0;
  v13 = v17;
  if ( (unsigned __int8)(v19 - 12) <= 1u )
  {
    v14 = *v17;
    if ( (_QWORD)v18 == 1 || (v15 = v17 + 3, 24LL * (_QWORD)v18 == 24) )
    {
LABEL_19:
      *a2 = v14;
      v12 = 1;
      if ( !v13 )
        return v12;
      goto LABEL_16;
    }
    while ( v14 == *v15 )
    {
      v15 += 3;
      if ( &v17[3 * (_QWORD)v18] == v15 )
        goto LABEL_19;
    }
    v12 = 0;
  }
  if ( v17 )
  {
LABEL_16:
    *(_QWORD *)&v18 = 0;
    qfree(v13);
  }
  return v12;
}
