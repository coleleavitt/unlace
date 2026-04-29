__int64 __fastcall sub_1E8180(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  char v6; // r13
  char v7; // al
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-60h]
  unsigned __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v3 + 16) == 9
      && *(_BYTE *)v3 == 9
      && *(_DWORD *)(*(_QWORD *)(v3 + 24) + 16LL) == *(_DWORD *)(*(_QWORD *)(v3 + 8) + 16LL) )
    {
      v4 = v3 + 16;
      v5 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
      v6 = sub_118A50((unsigned __int8 *)v5, v13);
      v7 = sub_118A50((unsigned __int8 *)(v3 + 16), v13);
      if ( !v6 )
      {
        v5 = v3 + 16;
        v4 = v3;
      }
      if ( v6 == v7
        && *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL) == *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL) + *(int *)(v4 + 4) )
      {
        v8 = *(_QWORD *)(a1 + 8);
        v14 = 0xFFFFFFFF00000000LL;
        v15 = 0;
        v9 = *(_QWORD *)(v4 + 8);
        LOWORD(v14) = 9;
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(_DWORD *)(v9 + 16);
        v12 = j__qalloc_or_throw(24);
        *(_QWORD *)v12 = v8;
        *(_QWORD *)(v12 + 8) = v10;
        *(_DWORD *)(v12 + 16) = v11;
        v15 = v12;
        HIDWORD(v14) = *(_DWORD *)(a2 + 4);
        sub_118810((char *)a2, (char *)&v14);
        *(_BYTE *)(a1 + 40) = 1;
        sub_118BA0((__int64)&v14);
      }
    }
  }
  return 0;
}
