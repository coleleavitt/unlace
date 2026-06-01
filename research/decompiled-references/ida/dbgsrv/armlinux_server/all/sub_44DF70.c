/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DF70
// Address: 0x000000000044DF70

//----- (000000000044DF70) ----------------------------------------------------
__int64 __fastcall sub_44DF70(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v5; // x20
  bool v7; // zf
  int v10; // w0
  unsigned int v11; // w24
  __int64 *v13; // x0
  __int64 v14; // x20
  _QWORD *v15; // x26
  _QWORD *v16; // x20
  __int64 v17; // x28
  int v20; // w4
  int v21; // w5
  int v22; // w6
  int v23; // w7
  unsigned int v24; // w0
  __int64 v25; // x0
  unsigned __int64 v26; // x0
  unsigned __int64 v27; // x24
  unsigned __int64 v28; // x1
  __int64 v29; // x23
  size_t v30; // x20
  void *v31; // x0
  __int64 v32; // x2
  void *v33; // x3
  __int64 v34; // x1
  char v35; // [xsp+0h] [xbp-E0h]
  int s1; // [xsp+60h] [xbp-80h]
  void *ptr; // [xsp+80h] [xbp-60h] BYREF
  __int64 v38; // [xsp+88h] [xbp-58h]
  __int64 v39; // [xsp+90h] [xbp-50h]
  __int64 v40[4]; // [xsp+98h] [xbp-48h] BYREF
  char v41[32]; // [xsp+B8h] [xbp-28h] BYREF

  v5 = a2;
  if ( a1 )
    v7 = a2 == nullptr;
  else
    v7 = 1;
  if ( v7 )
    return (unsigned int)sub_4869C8(1568);
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)v5;
    if ( v10 == 7 )
    {
      v25 = v5[2];
      v7 = v25 == 0;
      v26 = v25 - 1;
      if ( v7 )
        v26 = 0;
      if ( (a3 & 0x8000000000000000LL) == 0 || (v27 = 0, a3 += v26, a3 >= 0) )
      {
        if ( v26 > a3 )
          v27 = a3;
        else
          v27 = v26;
      }
      if ( (a5 & 1) != 0 )
        a4 = v27 + 1;
      if ( (a4 & 0x8000000000000000LL) == 0 || (v28 = 0, a4 += v26, a4 >= 0) )
      {
        if ( v26 > a4 )
          v28 = a4;
        else
          v28 = v26;
      }
      if ( v27 > v28 )
      {
        ptr = nullptr;
        v38 = 0;
        v39 = 0;
      }
      else
      {
        v29 = v5[1];
        v30 = v28 - v27;
        ptr = nullptr;
        v38 = 0;
        v39 = 0;
        if ( v28 != v27 )
        {
          v31 = nullptr;
          if ( v30 != -1 )
          {
            v31 = sub_491288((__int64)&ptr, nullptr, v30 + 1, 1u);
            ptr = v31;
          }
          v38 = v30 + 1;
          memmove(v31, (const void *)(v29 + v27), v30);
          *((_BYTE *)ptr + v30) = 0;
        }
      }
      sub_448310(a1);
      v33 = ptr;
      v32 = v38;
      v11 = 0;
      *(_BYTE *)a1 = 7;
      a1[1] = (__int64)v33;
      v34 = v39;
      a1[2] = v32;
      a1[3] = v34;
      return v11;
    }
    if ( v10 != 10 )
      break;
    s1 = a5;
    v13 = sub_448A08(v5, 0);
    a5 = s1;
    v5 = v13;
    if ( !v13 )
      return (unsigned int)sub_4869A0();
  }
  if ( v10 != 5 )
    return (unsigned int)sub_4869C8(1568);
  if ( (a5 & 1) != 0 )
  {
    sub_49B748(v41, 0x20u, "%llu", a3);
    return (unsigned int)sub_44DA00(a1, (__int64)v5, v41, 0);
  }
  memset(&v40[1], 0, 24);
  LOBYTE(v40[0]) = 2;
  v11 = sub_449F40(v40, 0);
  if ( v11 )
    goto LABEL_61;
  v14 = v5[1];
  ptr = nullptr;
  v38 = 0;
  v39 = 0;
  ptr = sub_491288((__int64)&ptr, nullptr, 3u, 1u);
  v38 = 3;
  v15 = (_QWORD *)(v14 + 8);
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v16 = sub_443EB8(*(_QWORD **)(v14 + 16), (_QWORD *)(v14 + 8), (__int64)&ptr);
  if ( ptr )
  {
    v38 = 0;
    j__free(ptr);
  }
  if ( v15 == v16 )
  {
LABEL_31:
    sub_444078((unsigned __int64)a1, v40);
    sub_448310(v40);
    return v11;
  }
  while ( !v16[5] )
  {
    if ( (strcmp((const char *)&qword_4B2D48, ":") & 0x80000000) == 0 )
      goto LABEL_31;
LABEL_30:
    v16 = (_QWORD *)sub_49F6E8((__int64)v16);
    if ( v15 == v16 )
      goto LABEL_31;
  }
  v17 = v16[4];
  if ( (strcmp((const char *)v17, ":") & 0x80000000) == 0 )
    goto LABEL_31;
  if ( !*(_BYTE *)v17 )
    goto LABEL_30;
  if ( !(*(_BYTE *)v17 == 48 ? *(_BYTE *)(v17 + 1) == 0 : (unsigned __int8)sub_443E70((_BYTE *)v17)) )
    goto LABEL_30;
  sub_49B8B8((const char *)v17, "%llu", &ptr);
  if ( (unsigned __int64)ptr < a3 )
    goto LABEL_30;
  if ( a4 != 0x7FFFFFFF && (unsigned __int64)ptr >= a4 )
    goto LABEL_30;
  sub_49B748(v41, 0x20u, "%llu", (char *)ptr - a3);
  v24 = sub_44D010((__int64)v40, v41, v16 + 7, 0, v20, v21, v22, v23, v35);
  if ( !v24 )
    goto LABEL_30;
  v11 = v24;
LABEL_61:
  sub_448310(v40);
  return v11;
}
// 44E1A4: variable 'v20' is possibly undefined
// 44E1A4: variable 'v21' is possibly undefined
// 44E1A4: variable 'v22' is possibly undefined
// 44E1A4: variable 'v23' is possibly undefined
// 44E1A4: variable 'v35' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
