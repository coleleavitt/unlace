__int64 __fastcall sub_14F5E70(__int64 a1, int a2)
{
  int *v2; // rbp
  __int64 *v4; // rdi
  __int16 v5; // ax
  __int64 *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // edx
  int v10; // r14d
  __int64 *v11; // rdi
  __int16 v12; // ax
  __int64 *v13; // rdi
  size_t v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _WORD v19[68]; // [rsp+0h] [rbp-88h] BYREF

  v2 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v4 = *(__int64 **)(a1 + 8);
  while ( 1 )
  {
    sub_14634E0(v4, v2);
    v5 = *(_WORD *)(a1 + 32);
    if ( v5 == 3 )
      break;
    if ( v5 != 5 )
    {
      sub_1564840(v19, a1, v2, 1893);
      sub_AEA040((__int64)v19);
      v19[0] = 63;
      sub_15680D0(a1, v19, 1, 0);
      return 0;
    }
    v6 = *(__int64 **)(a1 + 8);
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v6, v2);
    v9 = 0;
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_WORD *)(a1 + 32) == 64 )
    {
      v11 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v11, v2);
      if ( *(_WORD *)(a1 + 32) == 3 )
      {
        v18 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v18 + 760) )
        {
          *(_BYTE *)(v18 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v18 + 48) + 6LL) = 1;
        }
        *(_WORD *)(a1 + 32) = 1;
        sub_1717E90(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v8);
        return 0;
      }
      if ( (unsigned __int8)sub_15648A0(a1) )
      {
LABEL_13:
        v14 = j__strlen("@synthesize");
        sub_1569A00(a1, 63, 15, "@synthesize", v14);
        return 0;
      }
      v12 = *(_WORD *)(a1 + 32);
      if ( (unsigned __int16)(v12 - 7) > 0xCu && v12 != 1 )
        v7 = *(_QWORD *)(a1 + 24);
      v13 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v13, v2);
      v9 = *(_DWORD *)(a1 + 40);
    }
    sub_1A963E0(
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
      a2,
      v10,
      1,
      v8,
      v7,
      v9,
      0);
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_13;
    v4 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v16 + 760) )
  {
    *(_BYTE *)(v16 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v16 + 48) + 6LL) = 1;
  }
  v17 = *(_QWORD *)(a1 + 96);
  *(_WORD *)(a1 + 32) = 1;
  sub_171E7F0(*(_QWORD *)(v17 + 656), *(_QWORD *)(v17 + 608));
  return 0;
}
