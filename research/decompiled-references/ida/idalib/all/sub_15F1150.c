void __fastcall sub_15F1150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  _DWORD *v7; // rdi

  v2 = *(_QWORD *)(a1 + 552);
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v2 + 232LL))(
           *(_QWORD *)(a1 + 552),
           &unk_2CD8B20) )
    {
      sub_15D2690(v2, a2);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 552);
      v6 = operator new(0x30u);
      sub_15D25C0(v6, v5, a2);
      v7 = *(_DWORD **)(a1 + 552);
      ++*(_DWORD *)(v6 + 8);
      *(_QWORD *)(a1 + 552) = v6;
      if ( v7 )
      {
        if ( v7[2]-- == 1 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 552) = a2;
  }
}
