unsigned __int64 __fastcall sub_A80680(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // rdi
  int v15; // eax

  while ( 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(sub_EDE580(a1, a2) + 72) + 48LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 || a2 == v7 )
      return a2;
    v10 = *(_QWORD *)(v7 + 104);
    v11 = *(_QWORD *)(v10 + 96);
    v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v11 & 1) == 0 )
    {
      v4 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v5 = v11 & 2;
        if ( !(_DWORD)v5 )
          goto LABEL_4;
        v12 = sub_6E2500(v4, *(_QWORD *)(v7 + 104), v5, v6, v8, v9) & 0xFFFFFFFFFFFFFFFELL;
        v11 = v12 | 1;
        *(_QWORD *)(v10 + 96) = v12 | 1;
      }
    }
    if ( !v12
      || (v12 & 4) == 0
      || (v13 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
      || (v14 = *(_QWORD *)v13, v15 = *(_DWORD *)(*(_QWORD *)v13 + 12LL), v13[2] == v15) )
    {
LABEL_4:
      if ( (*(_BYTE *)(*(_QWORD *)(v7 + 128) + 1LL) & 4) == 0 )
        return a2;
      goto LABEL_5;
    }
    v13[2] = v15;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 128) + 1LL) & 4) == 0 )
      return a2;
LABEL_5:
    a2 = v7;
  }
}
