__int64 __fastcall sub_513D60(_BYTE *a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  _BYTE *v4; // rbx
  __int64 v6; // rdx
  const char *v7; // rsi
  char v8; // al
  char v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-78h]
  const char *i; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return v3;
  if ( !--v3 )
    return v3;
  v4 = *(_BYTE **)a2;
  v6 = (2 * a3) & 2;
  if ( a1[9] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2 + 24, (unsigned int)v6 | 1);
    a1[9] = 0;
  }
  else if ( !a1[8] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2 + 24, v6);
  }
  v7 = nullptr;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  v19 = qvector_reserve(&v19, 0, 1024, 1);
  v21 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
  v8 = *v4;
  for ( i = (const char *)(a2 + 24); v8; ++v4 )
  {
    if ( v8 == 13 )
    {
      if ( v4[1] != 10 )
      {
        *(_QWORD *)&v20 = 0;
        v16 = *(_QWORD *)a1;
        v21 = 0;
        (*(void (__fastcall **)(_BYTE *))(v16 + 24))(a1);
        v21 = 24;
        v12 = v4;
        goto LABEL_15;
      }
      v10 = v20;
      ++v4;
    }
    else
    {
      v9 = *v4;
      v10 = v20;
      if ( *v4 != 10 )
      {
        v11 = 2;
        if ( (_QWORD)v20 )
        {
          v11 = v20 + 1;
          v10 = v20 - 1;
        }
        v7 = (const char *)v19;
        if ( *((_QWORD *)&v20 + 1) < v11 )
        {
          v17 = v11;
          v19 = qvector_reserve(&v19, v19, v11, 1);
          v11 = v17;
          v7 = (const char *)v19;
        }
        *(_QWORD *)&v20 = v11;
        v7[v10] = v9;
        *(_BYTE *)(v19 + v10 + 1) = 0;
        a1[8] = 1;
        goto LABEL_14;
      }
    }
    if ( v10 > 1 )
    {
      v7 = (const char *)v21;
      (*(void (__fastcall **)(_BYTE *, __int64, __int64 *))(*(_QWORD *)a1 + 40LL))(a1, v21, &v19);
    }
    *(_QWORD *)&v20 = 0;
    v21 = 0;
    v13 = v4[1] == 0;
    a1[8] = v4[1] != 0;
    if ( !v13 )
    {
      v7 = i;
      (*(void (__fastcall **)(_BYTE *, const char *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, i, 0);
      v21 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    }
LABEL_14:
    v12 = v4;
LABEL_15:
    v8 = v12[1];
  }
  if ( (unsigned __int64)v20 > 1 )
  {
    v7 = (const char *)v21;
    (*(void (__fastcall **)(_BYTE *, __int64, __int64 *))(*(_QWORD *)a1 + 40LL))(a1, v21, &v19);
  }
  *(_QWORD *)&v20 = 0;
  v14 = *(_QWORD *)a1;
  v21 = 0;
  (*(void (__fastcall **)(_BYTE *))(v14 + 48))(a1);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, v7);
  }
  return v3;
}
