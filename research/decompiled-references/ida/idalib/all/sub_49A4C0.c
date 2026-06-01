unsigned __int64 __fastcall sub_49A4C0(unsigned __int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  const char *v12; // rdx
  __int64 v13; // rdi
  const char *v14; // rax
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-40h] BYREF
  __int64 v19; // [rsp+18h] [rbp-38h]
  __int16 v20; // [rsp+20h] [rbp-30h]
  unsigned __int64 v21; // [rsp+28h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_485E30(a1, a3) )
  {
    v7 = a1[5] + 424 * a3;
    v17 = 0;
    v8 = *(_DWORD *)(v7 + 176);
    v20 = 257;
    v19 = v8;
    ptr = (void *)get_idati(a1, a3);
    create_tinfo(&v17, 61, 189, &ptr);
    v9 = a2[1];
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v16 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v16;
      v9 = a2[1];
      v10 = v16;
    }
    v11 = 3 * v9;
    v12 = haystack;
    v13 = v10 + 8 * v11;
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    ++a2[1];
    if ( *(_QWORD *)(v7 + 80) )
      v12 = *(const char **)(v7 + 72);
    v14 = haystack;
    if ( *(_QWORD *)(v7 + 8) )
      v14 = *(const char **)v7;
    print_tinfo(v13, 0, 0, 0, 1058, (unsigned int)&v17, (__int64)v14, (__int64)v12);
    switch ( *(_DWORD *)(v7 + 120) )
    {
      case 1:
        v15 = "typedef";
        goto LABEL_11;
      case 2:
        v15 = "extern";
        goto LABEL_11;
      case 3:
        v15 = "static";
        goto LABEL_11;
      case 4:
        v15 = "register";
        goto LABEL_11;
      case 5:
        v15 = "auto";
        goto LABEL_11;
      case 6:
        v15 = "friend";
        goto LABEL_11;
      case 7:
        v15 = "virtual";
LABEL_11:
        sub_472300((__int64)&ptr, v15);
        sub_4790E0(a2, (unsigned __int64)&ptr);
        if ( ptr )
        {
          v19 = 0;
          qfree(ptr);
        }
        break;
      default:
        break;
    }
    if ( *(_DWORD *)(v7 + 180) )
    {
      sub_472300((__int64)&ptr, "alias");
      sub_4790E0(a2, (unsigned __int64)&ptr);
      if ( ptr )
      {
        v19 = 0;
        qfree(ptr);
      }
    }
    clear_tinfo_t(&v17);
  }
  return v21 - __readfsqword(0x28u);
}
