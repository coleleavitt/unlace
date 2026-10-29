__int64 __fastcall sub_A72040(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  int v9; // esi
  _DWORD *v10; // rcx
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rdx
  _DWORD *v16; // [rsp+8h] [rbp-50h]
  void *v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-40h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 & 7 | (a2 >> 3) & 1 || (v3 = *(_QWORD *)v2, (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v2 + 16LL) - 2) > 4u) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
      return 0;
    v6 = sub_F6AEA0(a2);
    v3 = v6;
    if ( (unsigned __int8)(*(_BYTE *)(v6 + 16) - 2) > 4u )
    {
      return 0;
    }
    else if ( v5 )
    {
      v7 = sub_A70F20((__int64)a1, *(_QWORD *)(v6 + 32), v5);
      v8 = v7;
      v9 = *(unsigned __int8 *)(v6 + 16);
      if ( (unsigned int)(v9 - 2) > 1 )
      {
        v13 = (*(_BYTE *)(v6 + 18) >> 3) & 7;
        if ( (_BYTE)v9 == 5 )
        {
          return *(_QWORD *)(sub_A71E50((__int64)a1, v7, (*(_WORD *)(v6 + 18) >> 6) & 7, (*(_BYTE *)(v6 + 18) >> 3) & 7)
                           & 0xFFFFFFFFFFFFFFF0LL);
        }
        else
        {
          v14 = (*(_WORD *)(v6 + 18) >> 6) & 7;
          v15 = *(_QWORD *)(v6 + 40);
          if ( (_BYTE)v9 == 4 )
            return *(_QWORD *)(sub_A71B90((__int64)a1, v7, v15, v14, v13) & 0xFFFFFFFFFFFFFFF0LL);
          else
            return *(_QWORD *)(sub_A71A40(a1, v7, v15, v14, v13) & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
      else
      {
        v10 = nullptr;
        v11 = (*(_BYTE *)(v6 + 18) >> 3) & 7;
        v12 = (*(_WORD *)(v6 + 18) >> 6) & 7;
        if ( (*(_BYTE *)(v6 + 19) & 2) != 0 )
          v10 = *(_DWORD **)(*(_QWORD *)(v6 + 40) + 16LL);
        v16 = v10;
        sub_A5DAD0((__int64)&v17, v6);
        v3 = *(_QWORD *)(sub_A70F70((__int64)a1, v8, (__int64)&v17, v16, v12, v11) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v18 > 0x40 && v17 )
          operator delete[](v17);
      }
    }
  }
  return v3;
}
