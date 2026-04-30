unsigned __int64 __fastcall sub_528D50(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // r14
  _BYTE *v5; // rbx
  __int64 v6; // rax
  unsigned __int8 *v7; // r15
  __int64 *v8; // rdi
  char *v9; // rax
  __int64 *v10; // rdx
  unsigned __int8 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdi
  char *v14; // rax
  __int64 *v15; // rdx
  unsigned __int8 v16; // r10
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // r13
  __int64 v20; // rbx
  __int64 *v21; // rbp
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 *v24; // rbx
  __int64 *v25; // rdi
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+Fh] [rbp-849h]
  unsigned __int8 v29; // [rsp+Fh] [rbp-849h]
  char s[1024]; // [rsp+10h] [rbp-848h] BYREF
  _BYTE v31[1032]; // [rsp+410h] [rbp-448h] BYREF
  unsigned __int64 v32; // [rsp+818h] [rbp-40h]

  v3 = (__int64 *)&off_86DC40;
  v5 = (_BYTE *)(a1 + 171);
  v6 = *(_QWORD *)(a1 + 40);
  v32 = __readfsqword(0x28u);
  v7 = (unsigned __int8 *)(a3 + 131);
  (*(void (__fastcall **)(__int64, __int64 **, __int64))(v6 + 40))(a1 + 40, a2, a3);
  do
  {
    if ( *(v5 - 11) != *(v7 - 11) )
    {
      qstrncpy(v31, *v3, 1024);
      strrpl(v31, 45, 95);
      qstrncpy(s, v31, 1024);
      v14 = strchr(s, 95);
      if ( v14 )
      {
        qstrncpy(&s[v14 - s + 1], "weight", 1024 - (v14 - s + 1));
        v15 = a2[1];
        v16 = *(v7 - 11);
        v17 = *a2;
        if ( a2[2] < (__int64 *)((char *)v15 + 1) )
        {
          v28 = *(v7 - 11);
          v18 = qvector_reserve(a2, v17, (char *)v15 + 1, 24);
          v15 = a2[1];
          v16 = v28;
          *a2 = (__int64 *)v18;
          v17 = (__int64 *)v18;
        }
        v8 = &v17[3 * (_QWORD)v15];
        *v8 = 0;
        *(_OWORD *)(v8 + 1) = 0;
        a2[1] = (__int64 *)((char *)a2[1] + 1);
        sub_525C00(v8, s, v16, 3);
      }
    }
    if ( *v5 != *v7 )
    {
      qstrncpy(v31, *v3, 1024);
      strrpl(v31, 45, 95);
      qstrncpy(s, v31, 1024);
      v9 = strchr(s, 95);
      if ( v9 )
      {
        qstrncpy(&s[v9 - s + 1], "italic", 1024 - (v9 - s + 1));
        v10 = a2[1];
        v11 = *v7;
        v12 = (__int64)*a2;
        if ( a2[2] < (__int64 *)((char *)v10 + 1) )
        {
          v29 = *v7;
          v27 = qvector_reserve(a2, v12, (char *)v10 + 1, 24);
          v10 = a2[1];
          v11 = v29;
          *a2 = (__int64 *)v27;
          v12 = v27;
        }
        v13 = v12 + 24LL * (_QWORD)v10;
        *(_QWORD *)v13 = 0;
        *(_OWORD *)(v13 + 8) = 0;
        a2[1] = (__int64 *)((char *)a2[1] + 1);
        sub_525C00((__int64 *)v13, s, v11, 3);
      }
    }
    v3 += 3;
    ++v5;
    ++v7;
  }
  while ( &`vtable for'ui_action_execution_data_t != v3 );
  v19 = *a2;
  v20 = 3LL * (_QWORD)a2[1];
  v21 = &(*a2)[v20];
  if ( *a2 != v21 )
  {
    v22 = 0xAAAAAAAAAAAAAAABLL * ((v20 * 8) >> 3);
    if ( v22 )
    {
      _BitScanReverse64(&v23, v22);
      sub_528A80((__int64)v19, (__int64)v21, 2LL * (int)v23, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_526BF0);
      if ( v20 > 48 )
      {
        v24 = v19 + 48;
        sub_5284C0(v19, v19 + 48, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_526BF0);
        do
        {
          v25 = v24;
          v24 += 3;
          sub_528350(v25, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_526BF0);
        }
        while ( v21 != v24 );
        return v32 - __readfsqword(0x28u);
      }
    }
    else
    {
      sub_528A80((__int64)v19, (__int64)v21, -2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_526BF0);
    }
    sub_5284C0(v19, v21, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_526BF0);
  }
  return v32 - __readfsqword(0x28u);
}
