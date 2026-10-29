unsigned __int64 __fastcall sub_321A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  size_t v4; // rax
  __int64 v5; // r12
  char *v6; // rsi
  __int64 v7; // rax
  size_t v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  char *v13; // rax
  __int64 v14; // r9
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  _BYTE v17[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v18[0] = __readfsqword(0x28u);
  v4 = sub_28E10(v17, (unsigned __int64)v18, v2) - v17;
  if ( v4 )
    sub_30190((char **)a2, v17, v4);
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v10 = *(_QWORD *)(a2 + 8);
      v14 = *(_QWORD *)(a1 + 16) + 6 * v5;
      v11 = v10 + 6;
      if ( v10 < 0xFFFFFFFFFFFFFFFALL )
      {
        v6 = *(char **)a2;
        v7 = *(_QWORD *)(a2 + 8);
        v8 = 6;
        if ( *(_QWORD *)(a2 + 16) < v11 )
        {
          v16 = *(_QWORD *)(a1 + 16) + 6 * v5;
          v13 = (char *)sub_29E60(a2, v6, v11, 1u);
          v14 = v16;
          *(_QWORD *)a2 = v13;
          v6 = v13;
          v7 = *(_QWORD *)(a2 + 8);
          v8 = v11 - v7;
        }
        v15 = v14;
        memset(&v6[v7], 0, v8);
        v14 = v15;
      }
      else
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      *(_QWORD *)(a2 + 8) = v11;
      ++v5;
      v9 = *(_QWORD *)a2 + v10;
      *(_DWORD *)v9 = *(_DWORD *)v14;
      *(_WORD *)(v9 + 4) = *(_WORD *)(v14 + 4);
    }
    while ( v2 != v5 );
  }
  return v18[0] - __readfsqword(0x28u);
}

