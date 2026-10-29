__int64 __fastcall sub_67E000(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  void (__fastcall ***v9)(void *); // r15
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  void (__fastcall ***v14)(void *); // r12

  v5 = sub_186B270(0x660u);
  sub_67D690(v5, *(_DWORD *)(a1 + 408), a2, a3);
  v6 = *(_QWORD *)(a1 + 1352);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v6 + 80LL))(v6, a2, a3);
    v8 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 48);
    v9 = *(void (__fastcall ****)(void *))(v5 + 1352);
    if ( v9 )
    {
      v10 = (*((_DWORD *)v9 + 12))-- == 1;
      if ( v10 )
      {
        (**v9)(v9);
        sub_186B220(v9);
      }
    }
    *(_QWORD *)(v5 + 1352) = v8;
  }
  v11 = *(_QWORD *)(a1 + 1360);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, a2, a3);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 48);
    v14 = *(void (__fastcall ****)(void *))(v5 + 1360);
    if ( v14 )
    {
      v10 = (*((_DWORD *)v14 + 12))-- == 1;
      if ( v10 )
      {
        (**v14)(v14);
        sub_186B220(v14);
      }
    }
    *(_QWORD *)(v5 + 1360) = v13;
  }
  return v5;
}

