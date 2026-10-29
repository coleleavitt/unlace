__int64 __fastcall sub_79AF20(__int64 a1, __int64 a2, unsigned int a3, _QWORD **a4)
{
  __int64 v4; // r12
  char v6; // al
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // r13
  _QWORD **v10; // r12
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rsi
  __int64 v17; // rax
  int v18; // r15d
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rax
  __m128i v25; // xmm0
  int v26; // eax
  __m128i v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+30h] [rbp-68h]
  __m128i v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h]

  v4 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 16LL))(*(_QWORD *)(a1 + 152));
  v7 = *(unsigned int *)(a1 + 2280);
  if ( v6 )
    v4 = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      if ( !*v8 && v8[1] == 4 )
      {
        v9 = sub_13D8930(a1 + 1592, a2, v7, 0, a4);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 16LL))(
               *(_QWORD *)(a1 + 152),
               a2) )
        {
          sub_13D8B90(a1 + 1592, v9, 0);
        }
        return v9;
      }
    }
  }
  v9 = sub_13D8930(a1 + 1592, a2, v7, (unsigned int)v4, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 16LL))(*(_QWORD *)(a1 + 152), a2) )
    sub_13D8B90(a1 + 1592, v9, 0);
  if ( (_DWORD)v4 )
  {
    v10 = &a4[v4];
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 144);
        if ( *(_QWORD *)(v11 + 840) == sub_15D1F10(**a4) )
          break;
LABEL_10:
        if ( ++a4 == v10 )
          return v9;
      }
      v15 = *a4;
      if ( !*((_BYTE *)*a4 + 14)
        || *((_DWORD *)v15 + 8) <= 1u
        && ((v17 = v15[6]) == 0 || (v12 = *(unsigned int *)(v17 - 4), !(_DWORD)v12))
        && !*((_DWORD *)v15 + 38) )
      {
        sub_13D7610(a1 + 1592, v15, 1, v12, v13, v14, v27.m128i_i32[0], v27.m128i_i32[2], v28);
        if ( *(_DWORD *)(v9 + 24) && !(unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 144), **(_QWORD **)(v9 + 64)) )
        {
          v18 = 32 * *(_DWORD *)(v9 + 28);
          if ( *(_DWORD *)(v9 + 24) == 1 )
          {
            v26 = sub_7CB460(a1);
            v27.m128i_i32[0] = 2;
            v23 = v26;
            v24 = v18 | 1u;
            v27.m128i_i8[8] = 0;
            v28 = v24;
            v25 = _mm_load_si128(&v27);
          }
          else
          {
            v19 = sub_7CB4E0(a1);
            v29.m128i_i8[8] = 0;
            v23 = v19;
            v24 = v18 | 0x11u;
            v29.m128i_i32[0] = 2;
            v30 = v24;
            v25 = _mm_load_si128(&v29);
          }
          sub_13D9120(a1 + 1592, v9, v23, v20, v21, v22, v25.m128i_i32[0], v25.m128i_i32[2], v24);
        }
        goto LABEL_10;
      }
      ++a4;
      sub_13D7610(a1 + 1592, v15, 1, v12, v13, v14, v27.m128i_i32[0], v27.m128i_i32[2], v28);
    }
    while ( a4 != v10 );
  }
  return v9;
}

