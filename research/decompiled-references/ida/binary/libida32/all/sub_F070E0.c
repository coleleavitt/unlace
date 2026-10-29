void __fastcall sub_F070E0(__int64 a1, int a2)
{
  size_t v2; // rax
  char *v3; // rsi

  switch ( a2 )
  {
    case 1:
      v2 = j__strlen("protected");
      v3 = "protected";
      if ( !v2 )
        return;
      goto LABEL_5;
    case 0:
      v2 = j__strlen("public");
      v3 = (char *)"public";
      if ( !v2 )
        return;
LABEL_5:
      sub_9717A0(*(_QWORD *)(a1 + 1096), v3, v2);
      return;
    case 2:
      v2 = j__strlen("private");
      v3 = "private";
      if ( v2 )
        goto LABEL_5;
      break;
  }
}

