char __fastcall sub_B619A0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  char result; // al
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi

  v1 = *a1;
  v2 = *a1 & 7;
  if ( (unsigned int)(v2 - 3) > 2 )
  {
    if ( (_DWORD)v2 == 7 && (v6 = v1 & 0xFFFFFFFFFFFFFFF8LL, !*(_DWORD *)v6) && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v8 & 4) != 0 )
        v9 = (_QWORD *)*v9;
      return sub_B6A440(v9);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v3 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    result = 0;
    v5 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v5 )
      return (*(_BYTE *)(*(_QWORD *)v5 + 17LL) & 4) != 0;
  }
  return result;
}

