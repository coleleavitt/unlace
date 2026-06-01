bool __fastcall sub_B75320(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  return sub_B53530(a1, (__int64)a2, a3, a4)
      && !sub_B53DB0(a1)
      && !sub_B53CF0(a1)
      && (unsigned __int8)sub_B728E0(a1, a2, v5, v6)
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 44;
}

