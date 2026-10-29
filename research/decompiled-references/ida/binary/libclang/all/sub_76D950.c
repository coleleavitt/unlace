int __fastcall sub_76D950(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = **a1;
  v5 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(v5 + 8);
  if ( (v6 & 7) != 0 || (v6 & 8) != 0 )
    v5 = sub_B0CF30(**(_QWORD **)(a2 + 16), a2);
  v7 = sub_B10F70(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v7 )
  {
    v15[0] = *(_QWORD *)(v7 + 32);
    v8 = sub_B03A00(v15, 0);
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x46 )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
          return sub_76D620(v9, a3, v4);
      }
    }
    return 0;
  }
  v11 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v11 + 8);
  if ( (v12 & 7) != 0 || (v12 & 8) != 0 )
    v11 = sub_B0CF30(**(_QWORD **)(a2 + 16), a2);
  v13 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v13 + 16LL) != 47 )
    return 0;
  v14 = sub_B14A40(*v13);
  return sub_76D620(v14, a3, v4);
}

