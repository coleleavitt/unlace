_QWORD *__fastcall sub_112CE00(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rax
  _QWORD *result; // rax
  __int64 v7; // rdi
  _QWORD *v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 16) != 4 )
  {
    if ( !(unsigned __int8)sub_10DB780(v3, a2) )
      goto LABEL_3;
    return (_QWORD *)sub_112CD10((_QWORD *)a1);
  }
  if ( sub_10DB7D0(v3, a2) )
  {
    result = *(_QWORD **)(a1 + 1688);
    if ( !result )
    {
      v8 = (_QWORD *)operator new(0x20u);
      sub_11FFD70(v8, a1);
      v7 = *(_QWORD *)(a1 + 1688);
      result = v8;
      *(_QWORD *)(a1 + 1688) = v8;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        return *(_QWORD **)(a1 + 1688);
      }
    }
    return result;
  }
  if ( (unsigned __int8)sub_10DB780(*(_QWORD *)(a1 + 8), a2) )
    return (_QWORD *)sub_112CD10((_QWORD *)a1);
LABEL_3:
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_QWORD *)a1;
  if ( v4 != 9 )
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 24))(a1, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v5 + 184))(a1) || *(_DWORD *)(a1 + 60) == 20 )
  {
    v5 = *(_QWORD *)a1;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 24))(a1, v4);
  }
  return sub_112CD80(a1);
}
