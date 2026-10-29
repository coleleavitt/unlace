__int64 __fastcall sub_2271310(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char *v6; // rbp
  unsigned __int64 v7; // rax
  char *v8; // r9
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // r12
  char *v12; // rdi
  char *v13; // rsi
  char v14; // al
  bool v15; // al
  bool v16; // r10
  _BYTE *v17; // rdi
  __int64 result; // rax
  char *v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // [rsp+8h] [rbp-80h]
  bool v24; // [rsp+8h] [rbp-80h]
  int v25; // [rsp+Ch] [rbp-7Ch]
  const char *v26; // [rsp+10h] [rbp-78h] BYREF
  __int64 v27; // [rsp+18h] [rbp-70h]
  signed __int64 v28; // [rsp+20h] [rbp-68h]
  void *v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  _BYTE v31[80]; // [rsp+38h] [rbp-50h] BYREF

  v6 = *(char **)(a1 + 40);
  v25 = *(_DWORD *)(a1 + 60);
  v23 = *(_DWORD *)(a1 + 56) + 1;
  if ( v6 == *(char **)(a1 + 48) || (v7 = (unsigned __int8)*v6, (_BYTE)v7 == 35) )
  {
LABEL_37:
    v26 = "Got empty plain scalar";
    LOWORD(v30) = 259;
    sub_226E270(a1, (__int64)&v26, v6);
    return 0;
  }
  v8 = *(char **)(a1 + 40);
  v9 = 0;
  v10 = 0x100002600LL;
  v11 = 0x400000100002600LL;
  while ( 2 )
  {
    if ( (unsigned __int8)v7 > 0x3Au )
      goto LABEL_5;
LABEL_29:
    if ( !_bittest64(&v11, v7) )
    {
      while ( 1 )
      {
LABEL_5:
        if ( *(_DWORD *)(a1 + 68) )
        {
          v26 = v8;
          v27 = 1;
          if ( sub_2246EC0((__int64 *)&v26, ",[]{}", 5, 0) != -1 )
            break;
        }
        v12 = *(char **)(a1 + 40);
        v13 = *(char **)(a1 + 48);
        v8 = v12;
LABEL_7:
        if ( v12 == v13 )
          goto LABEL_22;
        v14 = *v12;
        if ( (unsigned __int8)(*v12 - 32) <= 0x5Eu || v14 == 9 )
        {
          v8 = v12 + 1;
        }
        else
        {
          if ( v14 >= 0 )
            goto LABEL_11;
          v20 = sub_226DDA0(v12, v13 - v12);
          v13 = *(char **)(a1 + 48);
          v12 = *(char **)(a1 + 40);
          if ( HIDWORD(v20) )
          {
            if ( (_DWORD)v20 != 65279 )
            {
              a4 = (unsigned int)(v20 - 160);
              if ( (unsigned int)a4 <= 0xD75F
                || (_DWORD)v20 == 133
                || (a4 = (unsigned int)(v20 - 57344), (unsigned int)a4 <= 0x1FFD)
                || (unsigned int)(v20 - (_DWORD)&stru_10000) <= 0xFFFFF )
              {
                v8 += HIDWORD(v20);
              }
            }
          }
          if ( v8 == v12 )
          {
            v19 = *(char **)(a1 + 48);
            v13 = *(char **)(a1 + 40);
            goto LABEL_61;
          }
        }
        *(_QWORD *)(a1 + 40) = v8;
        ++*(_DWORD *)(a1 + 60);
        if ( v8 == v13 )
          goto LABEL_22;
        v7 = (unsigned __int8)*v8;
        if ( (unsigned __int8)v7 <= 0x3Au )
          goto LABEL_29;
      }
    }
    v12 = *(char **)(a1 + 40);
    v19 = *(char **)(a1 + 48);
    v13 = v12;
    if ( *v12 == 58 )
    {
      if ( v12 + 1 == v19 )
        goto LABEL_22;
      a4 = (unsigned __int8)v12[1];
      if ( (unsigned __int8)a4 <= 0x20u && _bittest64(&v10, a4) )
      {
        if ( v6 != v12 )
          goto LABEL_23;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(a1 + 68) )
      {
        v26 = v12 + 1;
        v27 = 1;
        v22 = sub_2246EC0((__int64 *)&v26, ",[]{}", 5, 0);
        v12 = *(char **)(a1 + 40);
        if ( v22 != -1 )
        {
          v19 = *(char **)(a1 + 48);
          v13 = *(char **)(a1 + 40);
          goto LABEL_61;
        }
        v19 = *(char **)(a1 + 48);
      }
      v8 = v12;
      v13 = v19;
      goto LABEL_7;
    }
LABEL_61:
    if ( v19 == v13 )
      goto LABEL_22;
    v8 = v13;
    v13 = v19;
LABEL_11:
    a4 = (unsigned __int8)*v8;
    if ( (unsigned __int8)a4 > 0x20u || (v15 = ((0x100002600uLL >> a4) & 1) == 0, ((0x100002600uLL >> a4) & 1) == 0) )
    {
LABEL_21:
      v13 = v8;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v16 = (_BYTE)a4 == 9;
      if ( (_BYTE)a4 != 32 && (_BYTE)a4 != 9 )
        break;
      a4 = (unsigned __int64)(v8 + 1);
      v21 = *(_DWORD *)(a1 + 60);
      if ( v9 && v23 > v21 && v16 )
      {
        v24 = v15;
        LOWORD(v30) = 259;
        v26 = "Found invalid tab character in indentation";
        sub_226E270(a1, (__int64)&v26, v8);
        return v24;
      }
      ++v8;
      *(_DWORD *)(a1 + 60) = v21 + 1;
LABEL_51:
      if ( v8 == v13 )
        goto LABEL_17;
      a4 = (unsigned __int8)*v8;
    }
    if ( (_BYTE)a4 == 13 || (_BYTE)a4 == 10 )
    {
      if ( (_BYTE)a4 == 13 )
      {
        if ( v8 + 1 == v13 )
        {
          v8 = v13;
        }
        else if ( v8[1] == 10 )
        {
          v8 += 2;
        }
        else
        {
          ++v8;
        }
      }
      else
      {
        ++v8;
      }
      *(_DWORD *)(a1 + 60) = 0;
      v9 = 1;
      ++*(_DWORD *)(a1 + 64);
      goto LABEL_51;
    }
LABEL_17:
    if ( *(_DWORD *)(a1 + 68) || *(_DWORD *)(a1 + 60) >= v23 )
    {
      *(_QWORD *)(a1 + 40) = v8;
      if ( *(char **)(a1 + 48) == v8 )
        goto LABEL_21;
      v7 = (unsigned __int8)*v8;
      if ( (_BYTE)v7 == 35 )
        goto LABEL_21;
      continue;
    }
    break;
  }
  v13 = v12;
LABEL_22:
  if ( v6 == v13 )
    goto LABEL_37;
LABEL_23:
  v31[0] = 0;
  v28 = v13 - v6;
  v29 = v31;
  v30 = 0;
  LODWORD(v26) = 18;
  v27 = (__int64)v6;
  sub_2270C60((__int64 *)(a1 + 80), (unsigned __int64 *)(a1 + 176), (int *)&v26, a4, a5, (__int64)v8);
  sub_226E810(a1, *(_QWORD *)(a1 + 176), v25, 0);
  v17 = v29;
  *(_WORD *)(a1 + 73) = 0;
  result = 1;
  if ( v17 != v31 )
  {
    operator delete(v17);
    return 1;
  }
  return result;
}
