__int64 __fastcall sub_266E0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // r12
  unsigned int v13; // r14d
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // [rsp+Ch] [rbp-54h]
  _QWORD *v21; // [rsp+10h] [rbp-50h] BYREF
  __int128 v22; // [rsp+18h] [rbp-48h]
  char v23; // [rsp+28h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 496);
  if ( !v4 )
    return 0;
  v6 = *(_QWORD **)(a1 + 496);
  if ( a4 == -1 )
  {
    a4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4 + 48LL))(*(_QWORD *)(a1 + 496), a3);
    if ( a4 == -1 )
      return 0;
  }
  v7 = (unsigned __int64)&loc_10000;
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v6[1] + 32LL) + 24LL) - 1);
  if ( (unsigned int)v8 <= 7 )
  {
    v7 = dword_2C040[v8];
    if ( (_DWORD)v7 != (_DWORD)&loc_10000 )
    {
      v7 = a4 | (unsigned int)v7;
      if ( a4 >= (unsigned int)&loc_10000 )
        v7 = (unsigned __int64)&loc_10000;
    }
  }
  v23 = 0;
  v9 = -1;
  v22 = 0;
  v10 = v6[1];
  v21 = nullptr;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL) & a3;
  if ( v11 != sub_24640 )
  {
    v20 = v7;
    v18 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v11)(v6, v12, 0, -1);
    v7 = v20;
    v12 = v18;
    v9 = v19;
  }
  reg_finder_find(v6, &v21, v12, v9, v7, 0xFFFFFFFFLL, 0);
  v13 = 0;
  v14 = v21;
  if ( (unsigned __int8)(v23 - 12) <= 1u )
  {
    v15 = *v21;
    if ( (_QWORD)v22 == 1 || (v16 = v21 + 3, 24LL * (_QWORD)v22 == 24) )
    {
LABEL_21:
      *a2 = v15;
      v13 = 1;
      if ( !v14 )
        return v13;
      goto LABEL_18;
    }
    while ( *v16 == v15 )
    {
      v16 += 3;
      if ( &v21[3 * (_QWORD)v22] == v16 )
        goto LABEL_21;
    }
    v13 = 0;
  }
  if ( v21 )
  {
LABEL_18:
    *(_QWORD *)&v22 = 0;
    qfree(v14);
  }
  return v13;
}
