__int64 __fastcall sub_264050(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 tinfo_property4; // [rsp+8h] [rbp-D0h]
  __int64 v8; // [rsp+8h] [rbp-D0h]
  __int64 v9; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v10; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int128 v12; // [rsp+38h] [rbp-A0h]
  __int64 v13; // [rsp+48h] [rbp-90h]
  __int128 v14; // [rsp+50h] [rbp-88h]
  _OWORD v15[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v16; // [rsp+90h] [rbp-48h]
  int v17; // [rsp+98h] [rbp-40h]
  __int64 v18; // [rsp+A0h] [rbp-38h]
  char v19; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+B8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 64 )
    return *(_QWORD *)(a1 + 24);
  if ( v1 != 65 )
    return -1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32);
  if ( *(_DWORD *)v3 != 1 )
    return -1;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 < 0 )
    return -1;
  v5 = *(_QWORD **)(a1 + 24);
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v16 = 1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  v9 = 0;
  v12 = 0;
  v14 = 0;
  v15[0] = 0;
  v6 = sub_1C9330(v5, &v10, v4, nullptr, &v9);
  if ( v6 == -1 )
  {
    clear_tinfo_t(&v9);
    clear_tinfo_t(v15);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    return -1;
  }
  tinfo_property4 = get_tinfo_property4(v9, 297, v6, 0, 0, 0);
  clear_tinfo_t(&v9);
  clear_tinfo_t(v15);
  result = tinfo_property4;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
    result = tinfo_property4;
  }
  if ( v11 )
  {
    v8 = result;
    *(_QWORD *)&v12 = 0;
    qfree(v11);
    return v8;
  }
  return result;
}
