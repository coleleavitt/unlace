__int64 __fastcall sub_41AB20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( !*(_BYTE *)(a1 + 36) )
    sub_41A7B0(a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && *(_DWORD *)(v2 - 4) )
    return sub_410B20((__int64 *)a1, a2);
  else
    return 1;
}

