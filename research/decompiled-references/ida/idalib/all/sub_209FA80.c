bool __fastcall sub_209FA80(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax
  __int64 v4; // r12
  _BYTE *v5; // rbp
  __int16 v6; // ax
  unsigned __int8 v7; // al
  __int64 v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  bool result; // al

  v2 = *(_BYTE *)(a1 - 16);
  if ( (v2 & 2) != 0 )
    v3 = *(_QWORD *)(a1 - 32);
  else
    v3 = a1 - 8LL * ((v2 >> 2) & 0xF) - 16;
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_BYTE **)(v3 + 8);
  v6 = sub_206CE80(a1);
  result = v5 != nullptr
        && v4 != 0
        && v6 == 13
        && *v5 == 14
        && ((v7 = *(v5 - 16), (v7 & 2) != 0)
          ? (v8 = *((_QWORD *)v5 - 4))
          : (v8 = (__int64)&v5[-8 * ((v7 >> 2) & 0xF) - 16]),
            *(_QWORD *)(v8 + 72)
         && (unsigned __int16)sub_206CE80(a2) == 13
         && ((v9 = *(_BYTE *)(a2 - 16), (v9 & 2) != 0)
           ? (v10 = *(_QWORD *)(a2 - 32))
           : (v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16),
             (v11 = *(_QWORD *)(v10 + 16), v4 == v11) && v11))
        && *(_QWORD *)(v10 + 8) == (_QWORD)v5;
  return result;
}
