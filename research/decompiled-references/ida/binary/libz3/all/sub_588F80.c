__int64 __fastcall sub_588F80(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
  if ( (_BYTE)v1 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL) )
    {
      sub_588670((int)v7, *(_QWORD *)(a1 + 8), a1, v2);
      sub_5875C0(*(_QWORD *)(a1 + 8), "fast_empty", *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL), v7[0]);
      v3 = v7[0];
      if ( v7[0] )
      {
        v4 = v7[1];
        if ( (*(_DWORD *)(v7[0] + 8))-- == 1 )
          sub_15D7BC0(v4, v3);
      }
    }
  }
  return v1;
}

