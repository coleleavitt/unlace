__int64 __fastcall sub_5BE620(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 result; // rax
  bool v7; // zf
  const char *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned int v11; // eax

  v4 = *(_QWORD *)(a1 + 1056);
  while ( v4 )
  {
    sub_5BCCE0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
  result = a1 + 1048;
  v7 = *(_QWORD *)(a1 + 1032) == 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = a1 + 1048;
  *(_QWORD *)(a1 + 1072) = a1 + 1048;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_BYTE *)(a1 + 1092) = 0;
  if ( !v7 )
  {
    v8 = "// IDA palette\n";
    v9 = 0;
    sub_38CDA0();
    do
    {
      v10 = v9++;
      v11 = (*(__int64 (__fastcall **)(__int64, const char *))(a1 + 1032))(v10, v8);
      v8 = (const char *)a2;
      result = sub_5BE4A0(a1, a2, v11);
    }
    while ( v9 != 53 );
  }
  return result;
}

