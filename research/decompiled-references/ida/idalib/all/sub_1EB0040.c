__int64 __fastcall sub_1EB0040(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-290h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-288h] BYREF
  __int64 v17; // [rsp+20h] [rbp-278h] BYREF
  char v18; // [rsp+28h] [rbp-270h]
  _QWORD v19[2]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v20; // [rsp+40h] [rbp-258h] BYREF
  char v21; // [rsp+48h] [rbp-250h]
  void *ptr[2]; // [rsp+50h] [rbp-248h] BYREF
  _BYTE v23[568]; // [rsp+60h] [rbp-238h] BYREF

  v3 = a2 + 1288;
  v4 = *(_QWORD *)(a2 + 1304);
  v5 = *(unsigned int *)(a2 + 1320);
  v16[0] = a2 + 1288;
  v16[1] = 8 * v4 - v5;
  sub_1EAF7C0((__int64 *)ptr, a2 + 1288, *(_QWORD *)(a2 + 1656) + *(unsigned int *)(*(_QWORD *)(a2 + 1664) + 4LL * a3));
  v6 = ptr[0];
  if ( ptr[0] )
  {
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v6;
  }
  else
  {
    sub_1EAFE10((__int64)&v17, v3);
    if ( (v18 & 1) != 0 )
    {
      v8 = v17;
      *(_BYTE *)(a1 + 8) |= 1u;
      v17 = 0;
      *(_QWORD *)a1 = v8;
    }
    else if ( (_DWORD)v17 == 3 )
    {
      ptr[0] = v23;
      v19[0] = 0;
      ptr[1] = (void *)0x4000000000LL;
      v19[1] = 0;
      sub_2027F10(&v20, v3, HIDWORD(v17), ptr, v19);
      if ( (v21 & 1) != 0 )
      {
        v11 = v20;
        *(_BYTE *)(a1 + 8) |= 1u;
        v20 = 0;
        *(_QWORD *)a1 = v11;
      }
      else if ( (unsigned int)v20 <= 5 && ((1LL << v20) & 0x26) != 0 )
      {
        v12 = *(_QWORD *)ptr[0] + *(unsigned int *)(a2 + 1648);
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = v12;
      }
      else
      {
        v13 = std::_V2::generic_category((std::_V2 *)&v20);
        sub_A09EA0((__int64)&v15, 0x54u, v13, "incorrectly-formatted source location entry in AST file");
        v14 = v15;
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v14;
      }
      sub_A0AE90(&v20);
      if ( ptr[0] != v23 )
        free(ptr[0]);
    }
    else
    {
      v9 = std::_V2::generic_category((std::_V2 *)&v17);
      sub_A09EA0((__int64)ptr, 0x54u, v9, "incorrectly-formatted source location entry in AST file");
      v10 = ptr[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v10;
    }
    sub_A0B030(&v17);
  }
  sub_1EAF840((__int64)v16);
  return a1;
}
