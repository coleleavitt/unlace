__int64 __fastcall sub_269360(__int64 a1, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-38h]

  *(_QWORD *)(a2 + 40) = a1;
  sub_257E00(a1);
  sub_261530(a1);
  if ( !sub_33E5A0(*(_QWORD *)(a1 + 216), 13, a1, a2, v3, v4) )
  {
    sub_264080(a1, a2);
    v6 = *(_QWORD *)(a1 + 216);
    sub_262B00((void **)(a1 + 16), v6, 0, 0, byte_427568, (_QWORD *)a2, 0x46u);
    ++*(_DWORD *)(a2 + 32);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 592LL);
    if ( (get_merge_state(v10, v6, v8, v9) & 3) == 0 && (*(_BYTE *)(a1 + 108) & 4) != 0 )
    {
      sub_262B00((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, v7, byte_427480, (_QWORD *)a2, 0);
      ++*(_DWORD *)(a2 + 32);
      sub_262B00((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_412793, (_QWORD *)a2, 0);
    }
    else if ( (int)sub_2611E0(*(_QWORD **)(a1 + 8), v7, a2, (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) & 2) != 0) > 0 )
    {
      sub_262B00((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_412793, (_QWORD *)a2, 0);
    }
    sub_268930(a1 + 16, v7, (_QWORD *)a2, 1u);
    sub_263480((_QWORD *)(a1 + 16), a2, v7, 0);
    sub_262B00((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_427560, (_QWORD *)a2, 0x47u);
  }
  return sub_2613C0(a1, (void (__fastcall ***)(_QWORD, _QWORD, void *))a2);
}
