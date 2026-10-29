__int64 __fastcall sub_51BDD0(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  _BYTE *v5; // rbx
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // r9
  char v10; // al
  unsigned __int8 v11; // bl
  __int64 v12; // rbp
  const char *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  const char *v16; // rdi
  __int64 v17; // rax
  unsigned __int8 v19; // [rsp+Eh] [rbp-BAh] BYREF
  char v20; // [rsp+Fh] [rbp-B9h] BYREF
  const char *v21; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-B0h]
  int v23; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v24[20]; // [rsp+34h] [rbp-94h]
  __int64 v25; // [rsp+48h] [rbp-80h]
  int v26; // [rsp+50h] [rbp-78h]
  __int128 v27; // [rsp+54h] [rbp-74h]
  int v28; // [rsp+64h] [rbp-64h]
  __int64 v29; // [rsp+68h] [rbp-60h]
  _BYTE v30[40]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( !a3 )
    return sub_5392E0(a1, "Column/", 1);
  v5 = a3;
  if ( !*a3 )
  {
    v5 = v30;
    qsnprintf(v30, 32, "Column #%d", a4);
  }
  v7 = qalloc_or_throw(32);
  *(_QWORD *)v7 = target_quick_filter_column_ah_t___vtable;
  v8 = (const char *)&v23;
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)(v7 + 16) = a2;
  *(_DWORD *)(v7 + 24) = a4;
  v26 = 0;
  *(_OWORD *)v24 = 0;
  v29 = 0x1FFFFFFFFLL;
  v27 = 0;
  v28 = 0;
  v23 = 64;
  *(_QWORD *)&v24[12] = v5;
  v25 = v7;
  v21 = nullptr;
  v22 = 0;
  v10 = sub_539470(a1, &v23, "Column/", 0, &v21, v9);
  if ( a4 >= 0 )
  {
    if ( v10 )
    {
      v11 = *(_BYTE *)(a2 + 1120);
      if ( !v11 )
      {
        v12 = *(_QWORD *)(a2 + 1112);
        if ( v12 )
        {
          v13 = &s1;
          if ( (_QWORD)v22 )
            v13 = v21;
          v20 = 1;
          v14 = sub_534430(v13);
          if ( v14 )
          {
            v8 = &byte_6;
            sub_537630(v14, 6, &v20);
          }
          if ( a4 < (unsigned __int64)(8LL * *(_QWORD *)(v12 + 120)) )
          {
            v15 = *(unsigned __int8 *)(*(_QWORD *)(v12 + 112) + ((unsigned __int64)a4 >> 3));
            v11 = _bittest(&v15, a4 & 7);
          }
          v16 = &s1;
          if ( (_QWORD)v22 )
            v16 = v21;
          v19 = v11;
          v17 = sub_534430(v16);
          if ( v17 )
          {
            v8 = &byte_7;
            sub_537630(v17, 7, &v19);
          }
        }
      }
    }
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v8);
  }
  return v31 - __readfsqword(0x28u);
}
