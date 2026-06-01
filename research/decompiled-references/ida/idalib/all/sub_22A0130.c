char *__fastcall sub_22A0130(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  const char *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  char *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  char *v11; // rax
  unsigned __int64 v12; // rdx
  const char *v13; // rax
  __int64 v14; // rdx
  size_t v15; // rdx
  size_t v16; // r15
  _UNKNOWN **v17; // r13
  char *v18; // rdi
  char *result; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char *s2; // [rsp+8h] [rbp-40h]

  if ( !a3 )
    a2 = (_QWORD *)sub_22B7480(a1);
  v5 = sub_229C150(a2, a3);
  v7 = *(_DWORD *)(a1 + 44);
  v8 = (char *)v5;
  v9 = v6;
  if ( v7 > 0x1F )
    goto LABEL_13;
  v10 = 1LL << v7;
  if ( ((1LL << v7) & 0xD8000220) != 0 )
  {
    if ( v6 == 3 )
    {
      if ( *(_WORD *)v8 == 14198 )
      {
        result = "cortex-a7";
        if ( v8[2] == 107 )
          return result;
      }
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  if ( (v10 & 0x21808) == 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      v11 = (char *)sub_229C150(v8, v6);
      v13 = sub_229C150(v11, v12);
      s2 = sub_229B8F0((__int64)v13, v14);
      v16 = v15;
      if ( !v15 )
        return "cortex-a9";
      v17 = &off_2BEC420;
      while ( 1 )
      {
        v18 = (char *)v17[1];
        if ( v16 <= (unsigned __int64)v18 && !memcmp(&v18[(_QWORD)*v17 - v16], s2, v16) )
          break;
        v17 += 9;
        if ( &unk_2BECFF0 == (_UNKNOWN *)v17 )
          return "cortex-a9";
      }
      if ( byte_26FBB00[*((unsigned int *)v17 + 16)] <= 7u )
        return "cortex-a9";
    }
LABEL_13:
    if ( !v9 )
      return nullptr;
    goto LABEL_20;
  }
  if ( !v6 )
    return nullptr;
  if ( v6 == 2 )
  {
    if ( *(_WORD *)v8 == 13942 )
      return "arm1176jzf-s";
    if ( *(_WORD *)v8 == 14198 )
      return "cortex-a8";
  }
LABEL_20:
  result = sub_229FC10(v8, v9);
  if ( !v20 || v20 == 7 && *(_DWORD *)result == 1635151465 && *((_WORD *)result + 2) == 26988 && result[6] == 100 )
  {
    v21 = *(_DWORD *)(a1 + 44);
    if ( v21 == 12 )
      return "cortex-a8";
    if ( v21 <= 0xC )
    {
      if ( v21 != 11 )
        goto LABEL_25;
      v23 = *(_DWORD *)(a1 + 48);
      if ( v23 <= 0x10 && ((1LL << v23) & 0x180A0) != 0 )
        return "arm926ej-s";
      else
        return "strongarm";
    }
    else
    {
      result = "arm1176jzf-s";
      if ( v21 != 17 )
      {
        if ( v21 != 19 )
        {
LABEL_25:
          v22 = *(_DWORD *)(a1 + 48);
          if ( v22 > 0x16 || ((1LL << v22) & 0x410180) == 0 )
            return "arm7tdmi";
          return "arm1176jzf-s";
        }
        return "cortex-a8";
      }
    }
  }
  return result;
}
