__int64 __fastcall sub_BECAD0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // r12d
  __int64 v6; // rdi
  __int64 v7; // rsi
  size_t v8; // r9
  char *v9; // rsi
  size_t v10; // rdx
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  size_t v14; // rcx
  bool v15; // cc
  size_t v16; // rax
  char *v17; // rcx
  size_t v18; // rdi
  char *v19; // rcx
  size_t v20; // rcx
  char *v21; // rax
  size_t v22; // rax
  void *v23[2]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+10h] [rbp-98h] BYREF
  void *s2; // [rsp+20h] [rbp-88h]
  size_t v26; // [rsp+28h] [rbp-80h]
  int v27; // [rsp+30h] [rbp-78h]
  void *v28[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-58h] BYREF
  char *v30; // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  int v32; // [rsp+70h] [rbp-38h]

  v24[0] = 0;
  v23[1] = nullptr;
  v23[0] = v24;
  s2 = nullptr;
  v26 = 0;
  v28[0] = v29;
  v28[1] = nullptr;
  v29[0] = 0;
  v30 = nullptr;
  v31 = 0;
  if ( !(unsigned __int8)sub_BECA00((_QWORD **)(a1 + 16), a2, (__int64 *)v23) )
    goto LABEL_2;
  v4 = sub_BECA00((_QWORD **)(a1 + 16), a3, (__int64 *)v28);
  if ( !(_BYTE)v4 )
    goto LABEL_2;
  v6 = a2[2];
  v7 = a3[2] - v6;
  if ( v7 < 0 )
  {
    v18 = v6 - a3[2];
    if ( v18 > v26 )
      goto LABEL_2;
    v10 = v26 - v18;
    v11 = (char *)s2 + v18;
    v8 = v31;
    s2 = v11;
    v9 = v30;
    v26 = v10;
  }
  else
  {
    if ( v7 > v31 )
      goto LABEL_2;
    v8 = v31 - v7;
    v9 = &v30[v7];
    v10 = v26;
    v30 = v9;
    v11 = (char *)s2;
    v31 = v8;
  }
  if ( v8 < v10 )
  {
    v12 = v32;
    if ( v32 )
    {
LABEL_14:
      if ( v11[v8] )
        goto LABEL_2;
      v13 = 0;
      while ( v12 != ++v13 )
      {
        v14 = v8 + (int)v13;
        if ( v14 >= v10 )
          break;
        if ( v11[v14] )
          goto LABEL_2;
      }
    }
LABEL_19:
    v15 = v8 <= v10;
    v16 = v10;
    v17 = v9;
    v10 = v8;
    if ( v15 )
      v16 = v8;
    v9 = v11;
    v11 = v17;
    v8 = v16;
LABEL_22:
    if ( v8 == v10 )
      goto LABEL_23;
LABEL_2:
    v4 = 0;
    goto LABEL_3;
  }
  v12 = v27;
  if ( !v27 )
  {
    if ( v8 <= v10 )
      goto LABEL_22;
    v21 = v11;
    v11 = v9;
    v9 = v21;
    v22 = v10;
    v10 = v8;
    v8 = v22;
    goto LABEL_19;
  }
  if ( v8 != v10 )
  {
    v19 = v11;
    v11 = v9;
    v9 = v19;
    v20 = v10;
    v10 = v8;
    v8 = v20;
    goto LABEL_14;
  }
LABEL_23:
  if ( v10 )
    LOBYTE(v4) = memcmp(v11, v9, v10) == 0;
LABEL_3:
  if ( v28[0] != v29 )
    operator delete(v28[0]);
  if ( v23[0] != v24 )
    operator delete(v23[0]);
  return v4;
}

