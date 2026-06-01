__int64 __fastcall sub_765FA0(__int64 a1)
{
  const char *v1; // rsi
  bool v2; // zf
  unsigned __int16 v3; // ax
  int v4; // edx
  const char *v5; // rsi
  _DWORD *v7; // rcx
  int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v1 = haystack;
  v2 = *(_QWORD *)(a1 + 48) == 0;
  v9 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *(const char **)(a1 + 40);
  v3 = sub_765DE0((_QWORD *)a1, v1, &v8);
  v4 = v8;
  if ( (unsigned int)(v8 - 1) <= 2 )
  {
    v7 = (_DWORD *)(*(_QWORD *)(a1 + 360) + 16LL * *(_QWORD *)(a1 + 368) - 16);
    v7[3] = v3;
    v7[2] = v4;
    v7[1] = *(_DWORD *)(a1 + 200);
    return 0;
  }
  else
  {
    v5 = haystack;
    if ( *(_QWORD *)(a1 + 48) )
      v5 = *(const char **)(a1 + 40);
    set_error_string();
    return set_qerrno(55, v5);
  }
}

