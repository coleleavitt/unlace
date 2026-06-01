__int64 __fastcall sub_11BC650(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v5; // ebp
  const char *v6; // rbx
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_10DCD30(a1, 0xAu);
  if ( v2 )
  {
    v3 = v2;
    if ( (unsigned __int8)sub_21B9810(v2, 3063) || (unsigned __int8)sub_21B9810(v3, 3076) )
      return 1;
    v5 = sub_21B9810(v3, 3060);
    if ( !(_BYTE)v5 )
    {
      v6 = **(const char ***)(v3 + 48);
      v7 = j__strlen("s");
      v8 = v7;
      if ( v6 )
      {
        v9 = j__strlen(v6);
        v10 = v9;
        if ( v9 == v8 )
        {
          if ( v9 && memcmp(v6, "s", v9) )
          {
            if ( v10 != j__strlen("z") )
              goto LABEL_14;
LABEL_13:
            if ( memcmp(v6, "z", v10) )
              goto LABEL_14;
            return a2;
          }
          return 1;
        }
        if ( v9 == j__strlen("z") )
        {
          if ( v10 )
            goto LABEL_13;
          return a2;
        }
      }
      else
      {
        if ( !v7 )
          return 1;
        if ( !j__strlen("z") )
          return a2;
        v10 = 0;
      }
LABEL_14:
      if ( !(unsigned __int8)sub_2247970(v6, v10, 10, v11) && v11[0] == LODWORD(v11[0]) )
        LOBYTE(v5) = LODWORD(v11[0]) > 1;
      return v5;
    }
  }
  return 0;
}
