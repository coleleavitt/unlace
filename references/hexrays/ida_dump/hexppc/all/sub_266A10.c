__int64 __fastcall sub_266A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int tinfo_size; // eax
  __int64 v11; // rbp
  unsigned int tinfo_property; // r14d
  unsigned int v13; // eax
  __int64 v14; // rax
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v4 = a1;
  if ( a4 != 1 )
  {
    if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) - 10) <= 2u )
    {
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
      sub_328100(v15, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), tinfo_size, 1);
      sub_242EC0(a1, *(_QWORD *)(a2 + 216), v15);
      clear_tinfo_t(v15);
    }
    if ( a4 == -1 )
    {
      v14 = j__qalloc_or_throw(64);
      *(_QWORD *)(v14 + 24) = a1;
      v4 = v14;
      *(_QWORD *)v14 = -1;
      *(_DWORD *)(v14 + 8) = 47;
      *(_QWORD *)(v14 + 12) = -1;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 56) = 0;
    }
    else if ( *(_DWORD *)(a1 + 8) == 61 )
    {
      v11 = sub_251DB0(*(__int64 **)(a1 + 24), (_QWORD *)(a1 + 48)) * a4;
      tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 48), 3);
      v13 = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
      sub_23CDA0(a1, *(_QWORD *)(a2 + 216), a2, v11, v13, tinfo_property);
    }
    else
    {
      v8 = sub_23D2D0(*(_QWORD *)(a2 + 216), a4, a2, *(_QWORD *)a3, *(_DWORD *)(a3 + 8), 1u, 0);
      v9 = j__qalloc_or_throw(64);
      *(_QWORD *)v9 = -1;
      *(_DWORD *)(v9 + 8) = 37;
      *(_QWORD *)(v9 + 12) = -1;
      *(_QWORD *)(v9 + 24) = v8;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = 0;
      *(_DWORD *)(v9 + 56) = 0;
      *(_QWORD *)(v9 + 32) = a1;
      v4 = v9;
    }
    *(_QWORD *)v4 = *(_QWORD *)a3;
    sub_240540(v4, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), 0);
    *(_DWORD *)(v4 + 56) |= 1u;
  }
  return v4;
}
