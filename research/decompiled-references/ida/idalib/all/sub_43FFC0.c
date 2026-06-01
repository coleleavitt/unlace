unsigned __int64 __fastcall sub_43FFC0(__int64 a1, unsigned int a2, __int64 a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  char *v6; // rax
  __int64 v7; // rax
  char *v8; // rdx
  signed __int64 v9; // rax
  _BYTE *v10; // rax
  int v11; // eax
  bool v12; // sf
  bool v13; // cl
  _BYTE *v14; // rdi
  __int64 v16; // rdx
  int v17; // edx
  char v18; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 208) == 0;
  v19 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 224) = 0;
  if ( v4 || (demangle_name(a1 + 216, a3, *(unsigned int *)(a1 + 212), 2), (v16 = *(_QWORD *)(a1 + 224)) == 0) )
  {
    v5 = 0;
    v6 = (char *)haystack;
  }
  else
  {
    v6 = *(char **)(a1 + 216);
    v5 = v16 - 1;
  }
  sub_43BD80((std::string *)(a1 + 240), v5, v6);
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    v8 = *(char **)(a1 + 216);
    v9 = v7 - 1;
  }
  else
  {
    v9 = 0;
    v8 = (char *)haystack;
  }
  sub_4352D0(a1, a2, v9, v8);
  sub_4352D0(a1 + 104, a2, *(_QWORD *)(*(_QWORD *)(a1 + 240) - 24LL), *(_BYTE **)(a1 + 240));
  v10 = *(_BYTE **)(a1 + 240);
  if ( &_pthread_key_create )
  {
    v11 = *((_DWORD *)v10 - 2);
    v4 = v11 == 0;
    v12 = v11 < 0;
    v10 = *(_BYTE **)(a1 + 240);
    v13 = !v12 && !v4;
  }
  else
  {
    v13 = *((_DWORD *)v10 - 2) > 0;
  }
  v14 = v10 - 24;
  if ( v13 )
  {
    if ( v14 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v10 - 2, 0xFFFFFFFF);
      }
      else
      {
        v17 = *((_DWORD *)v10 - 2);
        *((_DWORD *)v10 - 2) = v17 - 1;
      }
      if ( v17 <= 0 )
        std::string::_Rep::_M_destroy(v14, &v18);
    }
    *(_QWORD *)(a1 + 240) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  else if ( v14 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
  {
    *((_DWORD *)v10 - 2) = 0;
    *((_QWORD *)v10 - 3) = 0;
    *v10 = 0;
  }
  *(_QWORD *)(a1 + 224) = 0;
  return v19 - __readfsqword(0x28u);
}
