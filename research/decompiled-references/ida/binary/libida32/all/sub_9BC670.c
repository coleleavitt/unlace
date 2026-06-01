_QWORD *__fastcall sub_9BC670(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v13; // rdx
  _QWORD *result; // rax
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 32LL))(*(_QWORD *)(a2 + 16));
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x2B )
    goto LABEL_14;
  v8 = (unsigned __int8)(*(_WORD *)(v5 + 98) >> 4);
  if ( (_DWORD)v8 != 255 )
  {
    v9 = *(_QWORD *)(v5 + 16);
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) == 0 )
      goto LABEL_4;
LABEL_19:
    v10 = *(_QWORD *)v10;
    if ( a3 )
      goto LABEL_5;
    goto LABEL_12;
  }
  v8 = (unsigned int)sub_B50B40(v5);
  v17 = *(_QWORD *)(v5 + 16);
  v10 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v17 & 4) != 0 )
    goto LABEL_19;
LABEL_4:
  if ( a3 )
  {
LABEL_5:
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 8) + 32LL))(*(_QWORD *)(a3 + 8));
      if ( (*(_BYTE *)(v10 + 8) & 0x7Fu) - 34 > 5
         ? v11 == (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v10 - 48) + 32LL))(v10 - 48)
         : v11 == (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v10 - 72) + 32LL))(v10 - 72) )
      {
        v13 = *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        result = (_QWORD *)v13;
        if ( (*(_QWORD *)(a3 + 32) & 4) == 0 )
        {
          if ( v13 )
            return sub_9BB7E0((__int64)a1, *(_QWORD *)(v13 + 8 * v8), *(_QWORD **)a3, *(_QWORD *)(a3 + 32) & 4LL);
        }
        return result;
      }
    }
  }
LABEL_12:
  if ( (*(_BYTE *)(v10 + 8) & 0x7Fu) - 34 > 5 )
    v5 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v10 - 48) + 32LL))(v10 - 48)
                               + 96)
                   + 8 * v8);
  else
    v5 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v10 - 72) + 32LL))(v10 - 72)
                               + 120)
                   + 8 * v8);
LABEL_14:
  v15 = *a1;
  v16 = **a1;
  v15[10] += 24;
  result = (_QWORD *)((v16 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v15[1] >= (unsigned __int64)(result + 3) && v16 )
    *v15 = (__int64)(result + 3);
  else
    result = (_QWORD *)sub_962430((__int64)v15, 24, 24, 4, v6, v7);
  *result = 4;
  result[1] = 0;
  result[2] = v5;
  return result;
}

