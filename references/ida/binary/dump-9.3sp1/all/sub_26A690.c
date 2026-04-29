__int64 __fastcall sub_26A690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int tinfo_size; // eax
  __int64 v17; // rbp
  unsigned int tinfo_property; // r14d
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp-8h] [rbp-40h]
  _QWORD v22[7]; // [rsp+0h] [rbp-38h] BYREF

  v22[1] = __readfsqword(0x28u);
  v4 = a1;
  if ( a4 != 1 )
  {
    v7 = 2;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      tinfo_size = get_tinfo_size();
      sub_32C430(v22, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), tinfo_size, 1);
      v7 = *(_QWORD *)(a2 + 216);
      sub_246B40(a1, v7, v22);
      clear_tinfo_t();
    }
    if ( a4 == -1 )
    {
      v20 = j__qalloc_or_throw(64, v7, v10, v11);
      *(_QWORD *)(v20 + 24) = a1;
      v4 = v20;
      *(_QWORD *)v20 = -1;
      *(_DWORD *)(v20 + 8) = 47;
      *(_QWORD *)(v20 + 12) = -1;
      *(_QWORD *)(v20 + 32) = 0;
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0;
      *(_DWORD *)(v20 + 56) = 0;
    }
    else if ( *(_DWORD *)(a1 + 8) == 61 )
    {
      v17 = sub_255A30(*(__int64 **)(a1 + 24)) * a4;
      tinfo_property = get_tinfo_property();
      v19 = get_tinfo_size();
      sub_240A20(a1, *(_QWORD *)(a2 + 216), a2, v17, v19, tinfo_property);
    }
    else
    {
      v12 = a4;
      v13 = sub_240F50(*(_QWORD *)(a2 + 216), a4, a2, *(_QWORD *)a3, *(_DWORD *)(a3 + 8), 1u, 0);
      v15 = j__qalloc_or_throw(64, v12, v21, v14);
      *(_QWORD *)v15 = -1;
      *(_DWORD *)(v15 + 8) = 37;
      *(_QWORD *)(v15 + 12) = -1;
      *(_QWORD *)(v15 + 24) = v13;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 32) = a1;
      v4 = v15;
    }
    *(_QWORD *)v4 = *(_QWORD *)a3;
    sub_2441C0(v4, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), 0);
    *(_DWORD *)(v4 + 56) |= 1u;
  }
  return v4;
}
