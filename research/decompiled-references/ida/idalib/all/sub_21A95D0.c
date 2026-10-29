__int64 *__fastcall sub_21A95D0(__int64 *a1, __int64 a2, __int64 a3)
{
  char **v5; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // rdi
  char *v13; // r8
  int v14; // r15d
  char v15; // r9
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rdi
  __int64 v22; // rax
  char *v23; // rdx
  char *v24; // rsi
  char *v25; // rsi
  __int64 v26; // rbp
  _QWORD v28[4]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v29; // [rsp+20h] [rbp-48h]

  v5 = (char **)(a3 + 8);
  *(_BYTE *)(a2 + 613) = 1;
  v7 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
  if ( v7 > 0xFFFFFFFF
    || (*(_DWORD *)(a2 + 96) = v7, v8 = sub_21A29A0(v5, *(char **)(a3 + 16)), v8 > 0xFFFFFFFF)
    || (*(_DWORD *)(a2 + 100) = v8, v9 = sub_21A29A0(v5, *(char **)(a3 + 16)), v9 > 0xFFFFFFFF)
    || (*(_DWORD *)(a2 + 104) = v9, v10 = sub_21A29A0(v5, *(char **)(a3 + 16)), v10 > 0xFFFFFFFF)
    || (*(_DWORD *)(a2 + 108) = v10, v11 = sub_21A29A0(v5, *(char **)(a3 + 16)), v11 > 0xFFFFFFFF) )
  {
    sub_2221C70("LEB is outside Varuint32 range", 1);
  }
  v12 = *(char **)(a3 + 8);
  v13 = *(char **)(a3 + 16);
  if ( v11 )
  {
    v14 = v11 - 2;
    if ( v12 == v13 )
    {
LABEL_19:
      v21 = "malformed uleb128, extends past end";
LABEL_20:
      sub_2221C70(v21, 1);
    }
    while ( 1 )
    {
      v15 = *v12;
      v16 = v12;
      v17 = 0;
      v18 = 0;
      v19 = *v12 & 0x7F;
      while ( 1 )
      {
        v20 = v19 << v17;
        ++v16;
        v17 += 7;
        v18 += v20;
        if ( v15 >= 0 )
          break;
        if ( v13 == v16 )
          goto LABEL_19;
        v15 = *v16;
        v19 = *v16 & 0x7F;
        if ( v17 > 0x3E )
        {
          if ( v17 == 63 )
          {
            if ( v19 != (v15 & 1) )
            {
LABEL_14:
              v21 = "uleb128 too big for uint64";
              goto LABEL_20;
            }
          }
          else if ( (*v16 & 0x7F) != 0 )
          {
            goto LABEL_14;
          }
        }
      }
      v22 = v18;
      v23 = &v12[(_DWORD)v16 - (_DWORD)v12];
      v12 = &v23[v18];
      *(_QWORD *)(a3 + 8) = v23;
      if ( v12 > v13 )
        sub_2221C70("EOF while reading string", 1);
      *(_QWORD *)(a3 + 8) = v12;
      v24 = *(char **)(a2 + 120);
      v28[0] = v23;
      v28[1] = v22;
      if ( v24 == *(char **)(a2 + 128) )
      {
        sub_1075D80(a2 + 112, v24, v28);
        v12 = *(char **)(a3 + 8);
        v13 = *(char **)(a3 + 16);
        if ( v14 == -1 )
          break;
      }
      else
      {
        *(_QWORD *)v24 = v23;
        v25 = v24 + 16;
        *((_QWORD *)v25 - 1) = v22;
        *(_QWORD *)(a2 + 120) = v25;
        if ( v14 == -1 )
          break;
      }
      --v14;
      if ( v13 == v12 )
        goto LABEL_19;
    }
  }
  if ( v13 == v12 )
  {
    *a1 = 0;
  }
  else
  {
    v28[0] = "dylink section ended prematurely";
    v29 = 259;
    v26 = operator new(0x38u);
    sub_2195A00(v26, (__int64)v28, 3);
    *a1 = v26;
  }
  return a1;
}
