__int64 __fastcall sub_1F14060(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(); // rdx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v14; // rdi

  v2 = a1 + 24;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
  if ( v4 == sub_1EA8950 )
  {
    v5 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v5;
    if ( v5 == 1 )
    {
      v14 = *(_QWORD *)(a1 + 496);
      if ( v14 )
        sub_224E010(v14);
    }
  }
  else
  {
    v4(a1 + 24);
  }
  v7 = sub_1EE2910((_QWORD *)a1, a2);
  v10 = *(__int64 (__fastcall **)())(*(_QWORD *)(a1 + 24) + 192LL);
  if ( v10 == sub_1F14160 )
  {
    v11 = *(_DWORD *)(a1 + 9408);
    if ( v11 == 1 )
    {
      sub_1F10680((std::_V2 *)a1);
      v11 = *(_DWORD *)(a1 + 9408);
    }
    v12 = (unsigned int)(v11 - 1);
    *(_DWORD *)(a1 + 9408) = v12;
    if ( !(_DWORD)v12 )
      sub_1ED6E50(a1, a2, v12, v6, v8, v9);
    return v7;
  }
  else
  {
    ((void (__fastcall *)(__int64))v10)(v2);
    return v7;
  }
}
