__int64 __fastcall sub_36EC0(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  const char *v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // rbp
  void *v14; // rdi
  size_t v15; // r12
  int v16; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v17[2]; // [rsp+10h] [rbp-58h] BYREF
  char v18; // [rsp+20h] [rbp-48h]
  void *ptr; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+38h] [rbp-30h]
  unsigned __int64 v21; // [rsp+48h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v6 = (const char *)sub_910F0(a3);
  if ( v6 && !strcasecmp(v6, "idb") )
  {
    if ( (unsigned __int8)sub_955B0(a2) )
    {
      sub_8F890(0, a2);
      return 2;
    }
    else
    {
      v18 = 0;
      v17[1] = 0;
      v17[0] = a3;
      v7 = sub_35F20((__int64)"idat", 1u, "VAULT_CVT64", a4, v17, 0, nullptr);
      if ( !v7 )
        return 33;
      sub_98B70(v7, &v16, 0xFFFFFFFFLL);
      if ( v16 )
      {
        ptr = nullptr;
        v20 = 0;
        if ( v16 != -1 )
        {
LABEL_7:
          sub_17D80((char **)&ptr);
LABEL_8:
          if ( (_QWORD)v20 )
          {
LABEL_9:
            v8 = (const char *)ptr;
            goto LABEL_10;
          }
LABEL_19:
          v8 = haystack;
LABEL_10:
          sub_8F890(0, v8);
          if ( ptr )
          {
            *(_QWORD *)&v20 = 0;
            j__free(ptr);
          }
          return 33;
        }
        goto LABEL_21;
      }
      if ( !(unsigned __int8)sub_955B0(a2) )
      {
        ptr = nullptr;
        v20 = 0;
        if ( v16 != -1 )
        {
          if ( !v16 )
          {
            sub_17D80((char **)&ptr);
            if ( (_QWORD)v20 )
              goto LABEL_9;
            goto LABEL_19;
          }
          goto LABEL_7;
        }
LABEL_21:
        v10 = (const char *)sub_978C0(0xFFFFFFFFLL);
        v11 = v10;
        if ( !v10 || (v12 = strlen(v10), (v13 = v12) == 0) )
        {
          *(_QWORD *)&v20 = 0;
          goto LABEL_19;
        }
        v14 = ptr;
        v15 = v12 + 1;
        if ( *((_QWORD *)&v20 + 1) < v12 + 1 )
        {
          ptr = (void *)sub_96080(&ptr, ptr, v15, 1);
          v14 = ptr;
        }
        *(_QWORD *)&v20 = v15;
        memmove(v14, v11, v13);
        *((_BYTE *)ptr + v13) = 0;
        goto LABEL_8;
      }
      return 0;
    }
  }
  else
  {
    sub_8F890(0, a3);
    return 54;
  }
}

