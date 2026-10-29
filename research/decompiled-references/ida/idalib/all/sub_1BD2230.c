bool __fastcall sub_1BD2230(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  bool result; // al
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)a1 == 2 )
  {
    v11 = (_QWORD *)a2;
    a2 = v5;
    v5 = sub_A72210(v11, v5);
  }
  result = *(_BYTE *)(a1 + 1) == 13
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x22
        && ((v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL), v9 = *v8, *(_BYTE *)(*v8 + 16) == 42)
         || (v9 = sub_1BC7590(*v8, a2, a3, a4)) != 0)
        && (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v10 + 16) == 13)
        && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 435;
  return result;
}
