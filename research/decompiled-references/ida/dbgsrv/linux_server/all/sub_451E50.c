/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451E50
// Address: 0x0000000000451E50

//----- (0000000000451E50) ----------------------------------------------------
__int64 __fastcall sub_451E50(__int64 a1, int a2)
{
  __int16 *v3; // rbp
  __int16 v4; // ax
  __int16 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD); // rdx
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(_QWORD); // rax
  _QWORD *v13; // rdi
  unsigned int v14; // ebx
  const char *v16; // rsi

  v3 = *(__int16 **)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  v4 = *v3;
  v5 = v3;
  if ( *v3 != -1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_4;
      if ( !*(_BYTE *)(a1 + 32) )
      {
        v12 = *(unsigned int (__fastcall **)(_QWORD))a1;
        v13 = (_QWORD *)(a1 + *(_QWORD *)(a1 + 8));
        if ( (*(_QWORD *)a1 & 1) != 0 )
          v12 = *(unsigned int (__fastcall **)(_QWORD))((char *)v12 + *v13 - 1);
        if ( v12(v13) )
          return 0;
        *(_BYTE *)(a1 + 32) = 1;
      }
      if ( *v5 == *(unsigned __int16 *)(a1 + 64) )
      {
        *(_BYTE *)(a1 + 32) = 0;
LABEL_4:
        if ( v5[1] != -1 && !(unsigned __int8)sub_451E50(a1) )
          return 0;
        v6 = *((unsigned __int8 *)v5 + 5);
        if ( (_BYTE)v6 != 0xFF )
        {
          v7 = *(_QWORD *)(a1 + 24) + 16 * v6;
          v8 = *(__int64 (__fastcall **)(_QWORD))v7;
          v9 = (_QWORD *)(a1 + *(_QWORD *)(v7 + 8));
          if ( (*(_QWORD *)v7 & 1) != 0 )
            v8 = *(__int64 (__fastcall **)(_QWORD))((char *)v8 + *v9 - 1);
          v10 = v8(v9);
          if ( v10 == 1507 )
          {
            *(_BYTE *)(a1 + 32) = 1;
            v5 += 3;
            goto LABEL_21;
          }
          if ( v10 )
            return 0;
        }
        v11 = *((unsigned __int8 *)v5 + 4);
        if ( (_BYTE)v11 == 0xFF )
          return 1;
        v5 = &v3[3 * v11];
        v4 = *v5;
        if ( *v5 == -1 )
          break;
      }
      else
      {
        v5 += 3;
LABEL_21:
        v4 = *v5;
        if ( *v5 == -1 )
          break;
      }
    }
  }
  v14 = v5[1];
  if ( !v14 )
    return 1;
  if ( v14 == 67 )
  {
    v16 = s1;
    if ( *(_QWORD *)(a1 + 48) )
      v16 = *(const char **)(a1 + 40);
    sub_479F30(0, v16);
  }
  sub_479EB0(v14);
  return 0;
}
