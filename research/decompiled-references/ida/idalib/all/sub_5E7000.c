__int64 __fastcall sub_5E7000(__int64 a1, char *a2, void *a3, double a4, double a5)
{
  _BYTE *v5; // rax
  char v6; // dl
  char *v8; // r12
  char *v9; // rbp
  bool v10; // bl
  __int64 v11; // r8
  char v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rdx
  char v15; // r15
  char *v16; // rax
  bool v17; // bp
  __int64 v18; // rcx
  const char *v19; // r15
  char *v20; // rsi
  unsigned int v21; // r13d
  char *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char *v27; // r14
  char *v28; // rdx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // al
  int v32; // ebx
  int v33; // eax
  char v34; // al
  char *v35; // rax
  unsigned __int8 v36; // [rsp+Ch] [rbp-6Ch]
  char *v37; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v38; // [rsp+18h] [rbp-60h]
  void *s2; // [rsp+20h] [rbp-58h] BYREF
  void *s1; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  s1 = a2;
  s2 = a3;
  v43 = __readfsqword(0x28u);
  if ( (*a2 & 0xF) != 0xC )
    return 0;
  v5 = s2;
  s1 = a2 + 1;
  v6 = *a2;
  s2 = (char *)s2 + 1;
  if ( v6 != *v5 )
    return 0;
  v8 = sub_567180(a2 + 1, nullptr, nullptr);
  v9 = sub_567180((char *)s2, nullptr, nullptr);
  v10 = v9 == nullptr || v8 == nullptr;
  if ( v10 || v8 - (_BYTE *)s1 != v9 - (_BYTE *)s2 || memcmp(s1, s2, v8 - (_BYTE *)s1) )
    return 0;
  s2 = v9;
  s1 = v8 + 1;
  v12 = *v8;
  v13 = *v8 & 0xF0;
  if ( (_BYTE)v13 == 0xC0 )
  {
    if ( !(unsigned __int8)sub_6B37B0(&s1, &v41) )
      return 0;
    v16 = (char *)s2;
    s2 = (char *)s2 + 1;
    v15 = *v16;
    LOBYTE(v16) = *v16 & 0xF0;
    if ( (_BYTE)v16 == 0xC0 )
    {
      if ( !(unsigned __int8)sub_6B37B0(&s2, &v42) )
        return 0;
      LODWORD(v16) = v42;
      v14 = v41;
      goto LABEL_10;
    }
    v14 = v41;
LABEL_9:
    v41 = v14;
    LODWORD(v16) = (unsigned __int8)v16;
LABEL_10:
    v42 = (unsigned int)v16;
    LOBYTE(v13) = (_DWORD)v14 != 64;
    v17 = (_DWORD)v16 != 64;
    v18 = v13;
    LOBYTE(v18) = (_DWORD)v16 != 64 && (_DWORD)v14 != 64;
    v36 = v18;
    if ( !(_BYTE)v18 )
      goto LABEL_22;
    LOBYTE(v18) = (_DWORD)v16 != (_DWORD)v14 || v15 != v12;
    if ( !(_BYTE)v18 )
    {
      v17 = (_DWORD)v16 != 64 && (_DWORD)v14 != 64;
      v36 = 0;
      LOBYTE(v13) = v17;
      goto LABEL_22;
    }
    goto LABEL_12;
  }
  v41 = 0;
  v14 = (unsigned __int8)v13;
  s2 = v9 + 1;
  v15 = *v9;
  LOBYTE(v16) = *v9 & 0xF0;
  if ( (_BYTE)v16 != 0xC0 )
    goto LABEL_9;
  if ( !(unsigned __int8)sub_6B37B0(&s2, &v42) )
    return 0;
  LODWORD(v16) = v42;
  v14 = (unsigned __int8)v13;
  v41 = (unsigned __int8)v13;
  v17 = v42 != 64;
  LOBYTE(v13) = (_BYTE)v13 != 64;
  v18 = v13;
  LOBYTE(v18) = (v42 != 64) & v13;
  v36 = v18;
  if ( (_BYTE)v18 )
  {
LABEL_12:
    v36 = 0;
    if ( (_DWORD)v14 == 16 )
    {
      v41 = (unsigned int)v16;
      v36 = 1;
    }
    if ( (_DWORD)v16 == 16 )
      v42 = v41;
    v14 = v15 & 3;
    if ( (v12 & 3) == 0 )
    {
      v36 = 1;
      v12 |= v14;
    }
    if ( !(_BYTE)v14 )
      v15 |= v12 & 3;
    if ( v12 != v15 )
      return 0;
    v17 = 1;
    LOBYTE(v13) = 1;
  }
LABEL_22:
  v19 = (const char *)s1;
  v37 = (char *)s2;
  v20 = (char *)s1;
  v21 = v41 - 208;
  if ( v41 - 208 <= 0x2F )
  {
    v20 = nullptr;
    if ( s1 )
    {
      v20 = (char *)s1;
      v34 = *(_BYTE *)s1 & 0x3F;
      if ( v34 == 61 )
      {
        v35 = sub_568850(*(_QWORD *)(a1 + 248), (char *)s1, 0, 0);
        v20 = (char *)s1;
        if ( !v35 )
          goto LABEL_23;
        v34 = *v35 & 0x3F;
      }
      v10 = v34 == 1;
    }
  }
LABEL_23:
  v22 = sub_56C090(*(_QWORD *)(a1 + 248), v20, v14, v18, v11, a4, a5);
  v23 = *(_QWORD *)(a1 + 248);
  s1 = v22;
  v27 = sub_56C090(v23, (char *)s2, v24, v25, v26, a4, a5);
  s2 = v27;
  v38 = (unsigned __int8 *)s1;
  v28 = (char *)((_BYTE *)s1 - v19);
  if ( v27 == nullptr || s1 == nullptr )
    return 0;
  if ( (char *)(v27 - v37) != v28 )
    return 0;
  if ( strncmp(v19, v37, (size_t)v28) )
    return 0;
  if ( !v10 && v21 <= 0x2F )
  {
    v29 = *v38;
    s1 = v38 + 1;
    v30 = *v38;
    s2 = v27 + 1;
    if ( v30 != *v27 )
      return 0;
    if ( v29 > 0x80u )
    {
      s1 = v38 + 2;
      v31 = v38[1];
      s2 = v27 + 2;
      if ( v31 != v27[1] )
        return 0;
    }
  }
  v32 = sub_6B3760(&s1);
  if ( !v32 && (_BYTE)v13 )
    v32 = -1;
  v33 = sub_6B3760(&s2);
  if ( !v33 && v17 )
    v33 = -1;
  if ( v32 == -1 )
    return 1;
  if ( v33 != -1 )
  {
    if ( v32 == v33 )
      return 2 - (unsigned int)v36;
    return 0;
  }
  return 2;
}
