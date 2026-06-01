_QWORD *__fastcall sub_24AF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  bool v7; // zf
  _BOOL4 v8; // r15d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // rbx
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v21[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a3 == 8;
  v19 = 0;
  v8 = !v7;
  copy_tinfo_t();
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a3 + 68);
  v20 = 0;
  if ( (*(_BYTE *)(a3 + 65) & 4) != 0 )
  {
    sub_32C150(v21, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( sub_11CA80(v10)
         || !(unsigned __int8)sub_23F100(
                                &v20,
                                *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL),
                                *(_QWORD *)(a3 + 24),
                                a3 + 64,
                                *(_DWORD *)(a3 + 68),
                                0) )
  {
    sub_32C430(v21, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a3 + 68), v9);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v11 = *(_QWORD *)(a1 + 328);
  if ( !(unsigned __int8)sub_246B40(a2, v11, &v20) )
  {
    v14 = j__qalloc_or_throw(64, v11, v12, v13);
    *(_QWORD *)(v14 + 24) = a2;
    v15 = v14;
    *(_QWORD *)v14 = -1;
    *(_DWORD *)(v14 + 8) = 48;
    *(_QWORD *)(v14 + 12) = -1;
    *(_QWORD *)(v14 + 32) = 0;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0;
    *(_DWORD *)(v14 + 56) = 0;
    copy_tinfo_t();
    a2 = v15;
  }
  v16 = sub_24AE20(a1, a3, a2, &v19, a5);
  clear_tinfo_t();
  clear_tinfo_t();
  return v16;
}
