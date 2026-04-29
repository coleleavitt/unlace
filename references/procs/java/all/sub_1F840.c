__int64 __fastcall sub_1F840(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rdi
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  if ( put_utf8_char(&vars0) < 0 && put_utf8_char(&vars0) < 0 )
    vars0 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 > 0 )
    goto LABEL_5;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
  v3 = 0;
  *(_QWORD *)(a1 + 24) = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(a1 + 20);
LABEL_5:
    v4 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v2 - 1;
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, &vars0, 0);
    return 1;
  }
  return v3;
}
