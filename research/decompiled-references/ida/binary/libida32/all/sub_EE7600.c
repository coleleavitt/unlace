__int64 __fastcall sub_EE7600(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  bool v14; // zf
  __int64 v15; // rax
  char *v16; // rsi
  __int64 result; // rax

  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 && (*(_QWORD *)a2 & 0x400000LL) == 0 )
    sub_971800(*a1, "{");
  v8 = *(_DWORD *)(a2 + 32);
  v9 = 0;
  v10 = (unsigned int)(v8 - 1);
  if ( v8 )
  {
    while ( 1 )
    {
      v12 = a2 + 40;
      v13 = *(_WORD *)a2 & 0x1FF;
      if ( v13 == 114 )
        v12 = a2 + 48;
      if ( (**(_WORD **)(v12 + 8 * v9) & 0x1FF) == 0x70 )
        break;
      if ( v9 )
      {
        sub_971800(*a1, ", ");
        v13 = *(_WORD *)a2 & 0x1FF;
      }
      v14 = v13 == 114;
      v15 = a2 + 40;
      if ( v14 )
        v15 = a2 + 48;
      v16 = *(char **)(v15 + 8 * v9);
      if ( v16 )
      {
        sub_EE16F0(a1, v16, a2 + 40, a5, a6, a7, a3);
        v11 = v9 + 1;
        if ( v9 == v10 )
          break;
      }
      else
      {
        sub_971800(*a1, "<null expr>");
        v11 = v9 + 1;
        if ( v9 == v10 )
          break;
      }
      v9 = v11;
    }
  }
  result = *(_QWORD *)a2 >> 16;
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 && (*(_QWORD *)a2 & 0x400000LL) == 0 )
    return sub_971800(*a1, "}");
  return result;
}

