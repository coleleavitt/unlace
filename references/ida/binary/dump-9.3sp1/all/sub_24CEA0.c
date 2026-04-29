_QWORD *__fastcall sub_24CEA0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  int v6; // eax
  int v8; // edi
  __int64 v9; // r15
  char tinfo_property; // al
  _QWORD *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // [rsp+0h] [rbp-68h]
  unsigned int v17; // [rsp+4h] [rbp-64h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(_DWORD *)a2;
  v19[1] = __readfsqword(0x28u);
  if ( v6 == 8 )
  {
    v17 = 1;
    v16 = 1;
  }
  else
  {
    v17 = 2;
    v16 = 2 * (v6 != 10);
  }
  v8 = *(_DWORD *)(a2 + 36);
  v18 = 0;
  if ( sub_11CA80(v8) )
  {
    sub_32C430(v19, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), v16);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( *(_DWORD *)a2 != 10 || (v9 = sub_24CBC0(a1, a2, a3)) == 0 )
  {
    v9 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v18, &v18, 0);
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
    {
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        sub_32C430(v19, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), v17);
        sub_248280(*(_QWORD *)(a1 + 328), v9, v19);
        clear_tinfo_t();
      }
      else if ( v16 && v16 != (unsigned int)get_tinfo_property() )
      {
        v15 = sub_244E70(v9, (__int64)&v18, v13, v14);
        *(_DWORD *)(v15 + 56) |= 0x20u;
        v9 = v15;
      }
    }
  }
  v11 = sub_24AF50(a1, v9, a2, (__int64)a3, a4);
  clear_tinfo_t();
  return v11;
}
