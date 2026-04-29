__int64 __fastcall sub_268FA0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v5; // r13d

  *(_QWORD *)(a2 + 40) = a1;
  sub_257A40(a1);
  sub_261170(a1);
  if ( !sub_33E140(*(_QWORD *)(a1 + 216), 13, a1, a2, v2, v3) )
  {
    sub_263CC0(a1, a2);
    sub_262740((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_42C4A8, (_QWORD *)a2, 0x46u);
    ++*(_DWORD *)(a2 + 32);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 592LL);
    if ( (get_merge_state() & 3) == 0 && (*(_BYTE *)(a1 + 108) & 4) != 0 )
    {
      sub_262740((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, v5, byte_42C3C0, (_QWORD *)a2, 0);
      ++*(_DWORD *)(a2 + 32);
      sub_262740((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_418793, (_QWORD *)a2, 0);
    }
    else if ( (int)sub_260E20(*(_QWORD **)(a1 + 8), v5, a2, (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) & 2) != 0) > 0 )
    {
      sub_262740((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_418793, (_QWORD *)a2, 0);
    }
    sub_268570(a1 + 16, v5, (_QWORD *)a2, 1u);
    sub_2630C0((_QWORD *)(a1 + 16), a2, v5, 0);
    sub_262740((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_42C4A0, (_QWORD *)a2, 0x47u);
  }
  return sub_261000(a1, (void (__fastcall ***)(_QWORD, _QWORD, void *))a2);
}
