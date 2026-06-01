__int64 __fastcall sub_5DA140(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 result; // rax
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // eax

  v3 = *(_QWORD *)(a1 + 1056);
  while ( v3 )
  {
    sub_5D85A0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  result = a1 + 1048;
  v6 = *(_QWORD *)(a1 + 1032) == 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = a1 + 1048;
  *(_QWORD *)(a1 + 1072) = a1 + 1048;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_BYTE *)(a1 + 1092) = 0;
  if ( !v6 )
  {
    v7 = 0;
    sub_391AE0(a2, (__int64)"// IDA palette\n");
    do
    {
      v8 = v7++;
      v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 1032))(v8);
      result = sub_5D9EE0(a1, a2, v9);
    }
    while ( v7 != 53 );
  }
  return result;
}
