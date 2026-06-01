bool __fastcall sub_B98FE0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  return sub_B77270(a1, (__int64)a2, a3, a4)
      && !sub_B77AF0(a1)
      && !sub_B77A30(a1)
      && (unsigned __int8)sub_B96620(a1, a2, v5, v6)
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 43;
}
