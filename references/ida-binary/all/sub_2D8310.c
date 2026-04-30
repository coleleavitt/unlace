void __fastcall sub_2D8310(__int64 a1, const char *a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  int v7; // r14d
  int v9; // ebp
  char *v10; // rax
  int v11; // r8d
  int v12; // r9d
  char *v13; // rbx
  const char *v14; // rsi
  char v15; // al
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 i; // r12
  __int64 *v20; // rax
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // edx
  __int64 v24; // [rsp+8h] [rbp-40h]

  v7 = a3;
  v9 = (int)a2;
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x20) != 0 )
  {
    v22 = a3;
    v23 = (int)a2;
    a2 = "IDADisasmCursor::setPosition(p=%d, MoveMode=%d)\n";
    sub_4F7CB0(32, (unsigned int)"IDADisasmCursor::setPosition(p=%d, MoveMode=%d)\n", v23, v22, a5, a6);
  }
  v10 = (char *)sub_1EB5B0(*(_QWORD *)a1, (__int64)a2, a3, a4, a7);
  v13 = v10;
  if ( v10[68]
    || (v14 = v10 + 40,
        v15 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v10 + 520LL))(v10, v10 + 40),
        (v13[68] = v15) != 0) )
  {
    v16 = *((_DWORD *)v13 + 16);
    if ( v9 < 0 )
      goto LABEL_19;
  }
  else
  {
    v17 = *((_QWORD *)v13 + 5);
    if ( v17 )
    {
      v18 = *((_QWORD *)v13 + 6);
      if ( v18 )
      {
        for ( i = 0; i != v18; ++i )
        {
          v20 = (__int64 *)(v17 + 24 * i);
          v21 = *v20;
          if ( *v20 )
          {
            v20[1] = 0;
            v24 = v18;
            qfree(v21, v14);
            v17 = *((_QWORD *)v13 + 5);
            v18 = v24;
          }
        }
      }
      *((_QWORD *)v13 + 6) = 0;
      qfree(v17, v14);
      *((_QWORD *)v13 + 5) = 0;
      *((_QWORD *)v13 + 7) = 0;
    }
    *((_DWORD *)v13 + 16) = -1;
    v16 = -1;
    if ( v9 < 0 )
      goto LABEL_19;
  }
  if ( v9 <= v16 )
  {
    *(_DWORD *)(a1 + 8) = v9;
    if ( !v7 )
      *(_DWORD *)(a1 + 12) = v9;
    return;
  }
LABEL_19:
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x20) != 0 )
    sub_4F7CB0(
      32,
      (unsigned int)"IDADisasmCursor::setPosition(): Position '%d' out of range (char_count=%d)\n",
      v9,
      v16,
      v11,
      v12);
}
