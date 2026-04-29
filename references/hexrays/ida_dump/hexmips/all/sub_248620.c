_QWORD *__fastcall sub_248620(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  int v6; // eax
  int v8; // edi
  __int64 v9; // r15
  char tinfo_property; // al
  _QWORD *v11; // rbx
  __int64 v13; // rax
  unsigned int v14; // [rsp+0h] [rbp-68h]
  unsigned int v15; // [rsp+4h] [rbp-64h]
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(_DWORD *)a2;
  v17[1] = __readfsqword(0x28u);
  if ( v6 == 8 )
  {
    v15 = 1;
    v14 = 1;
  }
  else
  {
    v15 = 2;
    v14 = 2 * (v6 != 10);
  }
  v8 = *(_DWORD *)(a2 + 36);
  v16 = 0;
  if ( sub_118880(v8) )
  {
    sub_327500(v17, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), v14);
    copy_tinfo_t(&v16, v17);
    clear_tinfo_t(v17);
  }
  if ( *(_DWORD *)a2 != 10 || (v9 = sub_248340(a1, a2, a3)) == 0 )
  {
    v9 = sub_245270(a1, *(__int64 **)(a2 + 24), a2 + 32, &v16, &v16, 0);
    tinfo_property = get_tinfo_property(v16, 2);
    if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
    {
      if ( (get_tinfo_property(*(_QWORD *)(v9 + 48), 2) & 0xF) == 9 )
      {
        sub_327500(v17, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), v15);
        sub_243A00(*(_QWORD *)(a1 + 328), v9, v17);
        clear_tinfo_t(v17);
      }
      else if ( v14 && v14 != (unsigned int)get_tinfo_property(*(_QWORD *)(v9 + 48), 3) )
      {
        v13 = sub_2405F0(v9, &v16);
        *(_DWORD *)(v13 + 56) |= 0x20u;
        v9 = v13;
      }
    }
  }
  v11 = sub_2466D0(a1, v9, a2, (__int64)a3, a4);
  clear_tinfo_t(&v16);
  return v11;
}
