__int64 __fastcall sub_1ECA00(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  char v6; // r13
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v3 + 16) == 9
      && *(_BYTE *)v3 == 9
      && *(_DWORD *)(*(_QWORD *)(v3 + 24) + 16LL) == *(_DWORD *)(*(_QWORD *)(v3 + 8) + 16LL) )
    {
      v4 = v3 + 16;
      v5 = *(_QWORD *)(a2 + 8);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
      v6 = sub_11CC50((unsigned __int8 *)v5, v15);
      v7 = sub_11CC50((unsigned __int8 *)(v3 + 16), v15);
      if ( !v6 )
      {
        v5 = v3 + 16;
        v4 = v3;
      }
      if ( v6 == v7 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        v9 = *(_QWORD *)(v5 + 8);
        if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v8 + 8) + *(int *)(v4 + 4) )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v16 = 0xFFFFFFFF00000000LL;
          v17 = 0;
          v11 = *(_QWORD *)(v4 + 8);
          LOWORD(v16) = 9;
          v12 = *(_QWORD *)(v11 + 8);
          v13 = *(_DWORD *)(v11 + 16);
          v14 = j__qalloc_or_throw(24, v15, v9, v8);
          *(_QWORD *)v14 = v10;
          *(_QWORD *)(v14 + 8) = v12;
          *(_DWORD *)(v14 + 16) = v13;
          v17 = v14;
          HIDWORD(v16) = *(_DWORD *)(a2 + 4);
          sub_11CA10((char *)a2, (char *)&v16);
          *(_BYTE *)(a1 + 40) = 1;
          sub_11CDA0((__int64)&v16);
        }
      }
    }
  }
  return 0;
}
