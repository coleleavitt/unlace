__int64 __fastcall sub_41C4F0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // rdi
  int v12; // eax
  const void *v13; // r9
  unsigned __int64 v14; // rcx
  bool v15; // zf
  int v16; // [rsp+Ch] [rbp-1Ch] BYREF

  v6 = 0;
  if ( (unsigned int)(a3 - 3) > 1 )
  {
    sub_458930(a2, 1, a4, "?-nocase? pattern string");
    return 1;
  }
  else
  {
    if ( a3 != 4 )
      goto LABEL_3;
    v11 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)(v11 + 8) )
    {
      v12 = *(_DWORD *)(v11 + 16);
      v13 = *(const void **)(v11 + 8);
      v16 = v12;
    }
    else
    {
      v13 = (const void *)sub_47ACD0(v11, &v16);
      v12 = v16;
    }
    if ( v12 <= 1 )
      goto LABEL_10;
    v14 = v12;
    if ( v12 >= 9LL )
      v14 = 8;
    v15 = memcmp(v13, "-nocase", v14) == 0;
    v6 = 1;
    if ( v15 )
    {
LABEL_3:
      v8 = sub_49ECA0(*(_QWORD *)(a4 + 8LL * a3 - 8), *(_QWORD *)(a4 + 8LL * a3 - 16), v6);
      v9 = sub_47BD00(v8 != 0);
      sub_48AFD0(a2, v9);
      return 0;
    }
    else
    {
LABEL_10:
      sub_48B710(a2, (unsigned int)"bad option \"", (_DWORD)v13, (unsigned int)"\": must be -nocase", 0, (_DWORD)v13);
      return 1;
    }
  }
}

