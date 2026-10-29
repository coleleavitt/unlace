_QWORD *__fastcall sub_24BAE0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(unsigned int *)(a2 + 36);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v15[1] = __readfsqword(0x28u);
  sub_32C150(&v14, v7, v6);
  v8 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v14, &v14, 0);
  v12 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v14, &v14, 0);
  v9 = j__qalloc_or_throw();
  *(_DWORD *)(v9 + 8) = a3;
  v10 = (_QWORD *)v9;
  *(_QWORD *)v9 = -1;
  *(_QWORD *)(v9 + 32) = v12;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 24) = v8;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 4;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)a2 - 42) <= 0xA )
  {
    v15[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 29) > 0xC )
    {
      v15[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      v15[0] = 8;
    }
    v10 = sub_24AE20(a1, a2, (__int64)v10, v15, a4);
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v10;
}
