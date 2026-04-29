_QWORD *__fastcall sub_24B1E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = (_QWORD *)a3;
  v7 = *(int *)(a3 + 8);
  v10[1] = __readfsqword(0x28u);
  if ( (unsigned int)v7 <= 0x45 && (*((_BYTE *)&off_4DA9E0 + 16 * v7 + 11) & 2) != 0 && (*(_BYTE *)(a3 + 56) & 4) == 0 )
    sub_2820D0(*(_QWORD *)(a1 + 328), a3);
  *v6 = *(_QWORD *)(a2 + 24);
  if ( a5 )
  {
    if ( (get_tinfo_property(*a4, 2) & 0xF) == 9 )
    {
      v10[0] = 0;
      copy_tinfo_t(v10, a4);
    }
    else
    {
      sub_32C5A0(v10, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 68));
    }
    v6 = sub_24AE10(a1, *(__int64 **)(a2 + 24), a2 + 64, v10, (__int64)v6);
    clear_tinfo_t(v10);
  }
  else
  {
    sub_246F00((__int64)v6, *(_QWORD *)(a1 + 328), a4);
  }
  return v6;
}
