__int64 __fastcall sub_98930(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r8d
  char v5; // r12
  int v6; // eax
  const char *v7; // rcx
  unsigned int v8; // ebx
  const char *v10; // rdx
  const char *v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 64);
  v13 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  v5 = (v3 & 0x10) != 0;
  v6 = sub_986C0(a1, a2, (__int64 *)&v11, v5, v3 >> 28);
  if ( !v6 )
  {
    v7 = s1;
    if ( (_QWORD)v12 )
      v7 = v11;
    sub_92120((__int64)"AUTOHIDE NONE\n%a: bad %s condition:\n%s", a2, a3, v7);
    goto LABEL_5;
  }
  if ( v6 != 2 && v5 )
  {
    v10 = s1;
    if ( (_QWORD)v12 )
    {
      v10 = v11;
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_13;
    }
    else if ( !*(_QWORD *)(a1 + 16) )
    {
LABEL_13:
      sub_92120((__int64)"\"%s\" cannot be used as low-level condition (%s)", s1, v10);
LABEL_5:
      v8 = 0;
      goto LABEL_6;
    }
    sub_92120((__int64)"\"%s\" cannot be used as low-level condition (%s)", *(const char **)(a1 + 8), v10);
    goto LABEL_5;
  }
  v8 = 1;
LABEL_6:
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v8;
}

