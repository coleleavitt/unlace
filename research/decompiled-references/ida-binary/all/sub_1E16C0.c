__int64 __fastcall sub_1E16C0(__int64 a1)
{
  const char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebp
  unsigned int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // r12d
  const char *v9; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  const char *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-60h]
  const char *v17; // [rsp+8h] [rbp-58h] BYREF
  __int128 v18; // [rsp+10h] [rbp-50h]
  unsigned __int64 v19; // [rsp+20h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  v17 = nullptr;
  v2 = (const char *)&v17;
  if ( sub_1EB270(a1, &v17, 0) <= 0 )
    goto LABEL_6;
  v3 = sub_1EA6A0(a1 + 384);
  v4 = sub_32C7D0(v17, *(__int16 *)(v3 + 28), 0);
  v2 = v17;
  v5 = v4;
  v6 = v4;
  v7 = v4 >> 32;
  v8 = 0;
  v9 = v17;
  if ( (int)v4 >= SHIDWORD(v4) )
    goto LABEL_3;
  if ( HIDWORD(v4) )
  {
    v11 = v18;
    v12 = (int)v7 + 1LL;
    if ( (unsigned __int64)v18 < v12 )
    {
      if ( *((_QWORD *)&v18 + 1) < v12 )
      {
        v17 = (const char *)qvector_reserve(&v17, v17, (int)v7 + 1LL, 1);
        v9 = v17;
        v12 = (int)v7 + 1LL;
        v11 = v18;
      }
      v16 = v12;
      memset((void *)&v9[v11], 0, v12 - v11);
      v2 = v17;
      *(_QWORD *)&v18 = v16;
    }
    else if ( v12 != (_QWORD)v18 )
    {
      *(_QWORD *)&v18 = (int)v7 + 1LL;
    }
    v2[(int)v7] = 0;
    v9 = v17;
  }
  else
  {
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17, v17);
      v17 = nullptr;
      *((_QWORD *)&v18 + 1) = 0;
    }
    v9 = nullptr;
  }
  v13 = &v9[v5];
  if ( (_DWORD)v7 - v5 != 1 || (unsigned __int8)(*v13 - 48) > 1u )
  {
    v14 = sub_1EB5B0(a1);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 176LL))(v14, 0);
    v2 = (const char *)v6;
    if ( (unsigned __int8)sub_330C70(*(_QWORD *)(v15 + 8), v6) != 1 )
    {
      v2 = &v9[v5];
      sub_1E9310(a1 + 576, v13, 1);
      v9 = v17;
      v8 = 1;
      goto LABEL_3;
    }
LABEL_6:
    v9 = v17;
    v8 = 0;
    goto LABEL_3;
  }
  v8 = 0;
LABEL_3:
  if ( v9 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v9, v2);
  }
  return v8;
}
