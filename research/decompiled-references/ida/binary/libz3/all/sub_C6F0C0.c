__int64 __fastcall sub_C6F0C0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v4; // eax
  __int64 v5; // rax
  _DWORD *v6; // rax

  if ( !*(_WORD *)(a2 + 4)
    && (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
    && (*v2
     || v2[1] == 8
     && *(_DWORD *)(a2 + 24) == 1
     && (a2 = *(_QWORD *)(a2 + 32), !*(_WORD *)(a2 + 4))
     && (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr)
    && *v2 == 5
    && ((v4 = v2[1], v4 == 2) || v4 == 3)
    && *(_DWORD *)(a2 + 24) == 2
    && (v5 = *(_QWORD *)(a2 + 40), !*(_WORD *)(v5 + 4))
    && (v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) != nullptr
    && *v6 == 5
    && !v6[1] )
  {
    return sub_C6EC40(a1, *(_QWORD *)(a2 + 32));
  }
  else
  {
    return 0;
  }
}

