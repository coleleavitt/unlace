_QWORD *__fastcall sub_24BAE0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(unsigned int *)(a2 + 36);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v19[1] = __readfsqword(0x28u);
  sub_32C150(&v18, v7, v6);
  v8 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v18, &v18, 0);
  v9 = *(__int64 **)(a2 + 24);
  v10 = v8;
  v16 = sub_249AF0(a1, v9, a2 + 48, &v18, &v18, 0);
  v13 = j__qalloc_or_throw(64, (__int64)v9, v11, v12);
  *(_DWORD *)(v13 + 8) = a3;
  v14 = (_QWORD *)v13;
  *(_QWORD *)v13 = -1;
  *(_QWORD *)(v13 + 32) = v16;
  *(_QWORD *)(v13 + 12) = -1;
  *(_QWORD *)(v13 + 24) = v10;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 4;
  *(_QWORD *)v13 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)a2 - 42) <= 0xA )
  {
    v19[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 29) > 0xC )
    {
      v19[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      v19[0] = 8;
    }
    v14 = sub_24AE20(a1, a2, (__int64)v14, v19, a4);
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v14;
}
