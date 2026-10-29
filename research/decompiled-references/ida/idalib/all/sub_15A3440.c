__int64 __fastcall sub_15A3440(unsigned int *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // r12
  unsigned int v9; // r13d
  bool v10; // cf
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  signed int v14; // eax
  bool v15; // zf

  result = a1[6];
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 3 )
      goto LABEL_13;
    v8 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_13;
  }
  else
  {
    v8 = *(_QWORD *)a1;
  }
  v9 = sub_B90D60(v8, nullptr, nullptr, 0, 0, a6);
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x21 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v11 = (_QWORD *)*v11;
    v12 = sub_B8C1B0((__int64)v11);
    v14 = sub_B90D60(v12, nullptr, nullptr, 0, 0, v13);
    if ( (int)v9 < v14 )
      v9 = v14;
    v10 = v9 < 2;
    if ( v9 != 2 )
      goto LABEL_6;
LABEL_29:
    a1[8] = 1;
    goto LABEL_9;
  }
  v10 = v9 < 2;
  if ( v9 == 2 )
    goto LABEL_29;
LABEL_6:
  if ( v10 )
  {
    a1[8] = 0;
  }
  else if ( v9 == 3 )
  {
    a1[8] = 2;
  }
LABEL_9:
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 28LL) & 0x7Fu) - 34 <= 5
    && (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1) + 82) & 0x40) != 0 )
  {
    a1[8] = 2;
  }
  result = sub_1704F30();
  a1[7] = result;
  if ( (_DWORD)result != 1 )
  {
LABEL_13:
    if ( a2 )
      return result;
    goto LABEL_14;
  }
  result = *(_BYTE *)(*(_QWORD *)a1 + 28LL) & 0x7F;
  if ( (_BYTE)result == 20 )
  {
    a1[7] = 11;
    goto LABEL_13;
  }
  v15 = (_BYTE)result == 19;
  result = 72;
  if ( v15 )
    result = 13;
  a1[7] = result;
  if ( !a2 )
LABEL_14:
    a1[8] = 3;
  return result;
}
