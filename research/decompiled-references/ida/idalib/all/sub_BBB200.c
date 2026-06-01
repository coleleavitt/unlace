__int64 __fastcall sub_BBB200(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rdx
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // rdi
  _WORD *v11; // rdx

  v4 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a2 + 57) & 0x20) != 0 )
  {
    sub_995540(v4, "inline ");
    v4 = *(_QWORD *)a1;
  }
  sub_995540(v4, "namespace ");
  v5 = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v6 = sub_B86360(*(_QWORD *)a1, v5);
    v7 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
    {
      sub_227BA10(v6, 32);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 32;
    }
  }
  sub_995540(*(_QWORD *)a1, "{\n");
  sub_BBA540(a1, a2 + 48, 1);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = 0;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)a1;
        v11 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v11 > 1u )
          break;
        ++v9;
        sub_227BF10(v10, "  ", 2);
        if ( v8 == v9 )
          return sub_995540(*(_QWORD *)a1, "}");
      }
      ++v9;
      *v11 = 8224;
      *(_QWORD *)(v10 + 32) += 2LL;
    }
    while ( v8 != v9 );
  }
  return sub_995540(*(_QWORD *)a1, "}");
}
