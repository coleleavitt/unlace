__int64 __fastcall sub_19D1230(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  sub_168B6C0(a1);
  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
    && (v5 & 8) != 0
    && (v7 = ((*(__int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL))
             | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
           & 7,
        (_DWORD)v7 == 3)
    && (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                       & 0xFFFFFFFFFFFFFFF0LL),
        v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL,
        *(_BYTE *)(*(_QWORD *)v9 + 16LL) == 34)
    && (*(_BYTE *)(v8 + 16) == 34 || (v8 = sub_F63050(v8, a2, v9, v7)) != 0)
    && (v10 = sub_A5E7C0(v8, a2, v9, v7, v4), (v14 = sub_9C7D40(v10, a2, v11, v12, v13)) != 0) )
  {
    return (unsigned int)sub_BABC30(v14, a2, v15, v16, v17, v18) ^ 1;
  }
  else
  {
    return 1;
  }
}
