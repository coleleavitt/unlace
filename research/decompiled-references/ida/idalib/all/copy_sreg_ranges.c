unsigned __int64 __fastcall copy_sreg_ranges(unsigned int a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rsi
  char **v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rsi

  result = a1;
  v5 = *(_QWORD **)(qword_2CCB598 + 1672);
  v6 = v5[2];
  v7 = *(_DWORD *)(v6 + 68);
  if ( (int)result >= v7 )
  {
    v8 = *(_DWORD *)(v6 + 72);
    if ( (int)result <= v8 && a2 >= v7 && a2 <= v8 )
    {
      v9 = *(_QWORD *)(*v5 + 1768LL);
      if ( *(_BYTE *)(v9 + 152) )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = (char **)((int)result - *(_DWORD *)(v10 + 68));
        if ( (unsigned __int64)v11 >= *(_QWORD *)(v9 + 40) )
          goto LABEL_12;
        v12 = (_QWORD)v11 << 6;
        *(_DWORD *)(*(_QWORD *)(v9 + 32) + v12 + 56) = result;
        v13 = *(_QWORD *)(v9 + 32);
        v11 = (char **)(v13 + v12);
        if ( *(_BYTE *)(v9 + 152) )
        {
          v14 = a2 - *(_DWORD *)(*(_QWORD *)(v9 + 8) + 68LL);
          v10 = v14;
          if ( (unsigned __int64)v14 < *(_QWORD *)(v9 + 40) )
          {
            v15 = (__int64)v14 << 6;
            *(_DWORD *)(v13 + v15 + 56) = a2;
            return sub_515CA0(v11, (_BYTE *)(*(_QWORD *)(v9 + 32) + v15), a3);
          }
LABEL_12:
          sub_5144F0(v11, v10);
        }
      }
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
  }
  return result;
}
