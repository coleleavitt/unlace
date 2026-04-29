__int64 __fastcall sub_27A890(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 8) != 71 || *(_DWORD *)(a2 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_37E160(51304);
    BUG();
  }
  if ( (a4
     || (v7 = *(__int64 **)(a2 + 24), v7[2] != 1)
     || (v8 = *v7, *(_DWORD *)(v8 + 24) != 72)
     || (v9 = *(_QWORD *)(v8 + 40), *(_DWORD *)(v9 + 8) != 2)
     || (v12 = a3, v10 = sub_255220(*(_QWORD *)(v9 + 24), *(_QWORD *)(a3 + 24)), a3 = v12, v10))
    && (v4 = *(_QWORD **)(a1 + 24), v4[2] == 1)
    && (v5 = *v4, *(_DWORD *)(*v4 + 24LL) == 72)
    && (v11 = *(_QWORD *)(v5 + 40), *(_DWORD *)(v11 + 8) == 2)
    && !sub_255220(*(_QWORD *)(v11 + 24), *(_QWORD *)(a3 + 24)) )
  {
    return v5 + 16;
  }
  else
  {
    return 0;
  }
}
