__int64 __fastcall sub_AD00(__int64 a1)
{
  __int64 v1; // rbp
  char *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  s1 = nullptr;
  v7 = 0;
  sub_4200((_QWORD *)a1, (__int64 *)&s1);
  v1 = v7;
  v2 = s1;
  if ( !(_QWORD)v7 )
    goto LABEL_2;
  if ( !strcmp(s1, "name") )
  {
    sub_9BA0(a1);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 104) = 1;
    goto LABEL_3;
  }
  if ( !strcmp(v2, "dylink.0") )
  {
    sub_5DD0((_QWORD *)a1);
LABEL_2:
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 32);
    goto LABEL_3;
  }
  if ( !strcmp(v2, "dylink") )
  {
    sub_6BE0((_QWORD *)a1);
    goto LABEL_2;
  }
  if ( strcmp(v2, "linking") && ((unsigned __int64)(v1 - 1) <= 5 || strncmp(v2, "reloc.", 6u)) )
  {
    if ( !strcmp(v2, "target_features") )
    {
      sub_7190((_QWORD *)a1);
    }
    else if ( strstr(v2, "metadata.code.") )
    {
      sub_73E0(a1);
    }
    goto LABEL_2;
  }
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v3;
LABEL_3:
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  if ( v2 )
    qfree(v2);
  return 1;
}
