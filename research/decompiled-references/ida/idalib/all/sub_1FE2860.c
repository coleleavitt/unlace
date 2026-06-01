__int64 __fastcall sub_1FE2860(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // [rsp-8h] [rbp-8h]

  result = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(result + 48) )
  {
    v10 = v1;
    v4 = *(_QWORD *)(result + 24);
    sub_227BF10(*(_QWORD *)(a1 + 32), v4, *(_QWORD *)(result + 32));
    v9 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(v9 + 32) )
      sub_227B9F0(v9, v4, v5, v6, v7, v8, v10);
    result = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(result + 32) = 0;
  }
  else
  {
    *(_QWORD *)(result + 32) = 0;
  }
  return result;
}
