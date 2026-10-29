__int64 __fastcall sub_98A00(__int64 a1, const char *a2, const char *a3)
{
  unsigned int v3; // r8d
  char v5; // r12
  int v6; // eax
  unsigned int v7; // ebx
  const char *v9; // rdx
  const char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 72);
  v12 = __readfsqword(0x28u);
  v10 = nullptr;
  v11 = 0;
  v5 = (v3 & 0x10) != 0;
  v6 = sub_98790(a1, (__int64)a2, (__int64 *)&v10, v5, v3 >> 28);
  if ( !v6 )
  {
    sub_92200((__int64)"AUTOHIDE NONE\n%a: bad %s condition:\n%s", 0.0, a2, a3);
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( v6 != 2 && v5 )
  {
    v9 = s1;
    if ( (_QWORD)v11 )
    {
      v9 = v10;
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_11;
    }
    else if ( !*(_QWORD *)(a1 + 16) )
    {
LABEL_11:
      sub_92200((__int64)"\"%s\" cannot be used as low-level condition (%s)", s1, v9);
      goto LABEL_3;
    }
    sub_92200((__int64)"\"%s\" cannot be used as low-level condition (%s)", *(const char **)(a1 + 8), v9);
    goto LABEL_3;
  }
  v7 = 1;
LABEL_4:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v7;
}

