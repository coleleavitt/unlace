__int64 __fastcall sub_13E260(__int64 a1, __int64 a2)
{
  int v2; // eax
  const char *v4; // rbx
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 25 && v2 != 58 )
    return 2;
  v4 = "~D~ata";
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 208) + 31LL) == 45 )
  {
    v4 = "Add e~n~um member...";
    v5 = sub_19DCF0(*(_QWORD *)(a2 + 72));
    if ( !v5 )
      return 3;
    goto LABEL_6;
  }
  v5 = sub_19DCF0(*(_QWORD *)(a2 + 72));
  if ( v5 )
LABEL_6:
    sub_19CC00(v5, 1, v4);
  return 3;
}

