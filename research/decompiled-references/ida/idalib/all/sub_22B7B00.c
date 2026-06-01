unsigned __int64 __fastcall sub_22B7B00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  size_t v3; // rbx
  char *v4; // r13
  char *v5; // r15
  __int64 v6; // r14
  char *v7; // rax
  size_t v8; // rdx
  size_t v9; // rbp
  __int64 v10; // rax
  unsigned __int8 v11; // di
  unsigned int v12; // ecx
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  __int128 v17; // [rsp+0h] [rbp-48h] BYREF

  v1 = sub_22B75A0((__int64 *)a1);
  v3 = v2;
  v4 = (char *)v1;
  v5 = (char *)v1;
  v6 = v2;
  v7 = sub_22B6740(*(_DWORD *)(a1 + 44));
  if ( v8 <= v3 )
  {
    v9 = v8;
    if ( !v8 || !memcmp(v4, v7, v8) )
      goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 44) == 9 )
  {
    v16 = j__strlen("macos");
    v9 = v16;
    if ( v16 > v3 || v16 && memcmp(v4, "macos", v16) )
      goto LABEL_5;
    goto LABEL_4;
  }
  v14 = j__strlen("visionos");
  if ( v14 <= v3 && (!v14 || !memcmp(v4, "visionos", v14)) )
  {
    v15 = j__strlen("visionos");
    v9 = v15;
    if ( v15 <= v3 && (!v15 || !memcmp(v4, "visionos", v15)) )
    {
LABEL_4:
      v5 = &v4[v9];
      v6 = v3 - v9;
    }
  }
LABEL_5:
  v17 = 0;
  sub_22578D0((__int64)&v17, v5, v6);
  if ( v17 < 0 )
  {
    v12 = v17;
    v11 = 1;
    v10 = DWORD1(v17) & 0x7FFFFFFF;
  }
  else
  {
    v10 = DWORD1(v17) & 0x7FFFFFFF;
    v11 = BYTE7(v17) >> 7;
    v12 = v17;
  }
  return ((unsigned __int64)v11 << 63) | (v10 << 32) | v12;
}
