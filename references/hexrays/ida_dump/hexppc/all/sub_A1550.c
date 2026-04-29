__int64 __fastcall sub_A1550(__int64 a1, unsigned int *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // r14
  int v12; // edx
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  bool v18; // al
  int v19; // eax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-98h]
  __int64 v22; // [rsp+10h] [rbp-90h]
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-80h] BYREF
  __int128 v25; // [rsp+28h] [rbp-78h]
  __int128 v26; // [rsp+38h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-58h] BYREF
  __int128 v28; // [rsp+50h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  v6 = *a2;
  if ( (unsigned int)v6 > 0x3E )
  {
    v10 = *a2;
    if ( *((_BYTE *)a2 + 64) != 8 )
    {
LABEL_11:
      if ( v10 != 67 || a2[9] != a2[17] )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = 0x587FFC0000000000LL;
    if ( _bittest64(&v7, v6) )
      return 0;
    if ( *((_BYTE *)a2 + 64) != 8 )
    {
      if ( (_DWORD)v6 != 4 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  v11 = *((_QWORD *)a2 + 9);
  v12 = *(_DWORD *)(v11 + 284);
  if ( (unsigned int)(v12 - 2) > 2 )
    goto LABEL_15;
  v16 = *(_QWORD *)(v11 + 24);
  if ( *(_BYTE *)v16 != 10 || **(_BYTE **)(v16 + 8) != 5 )
  {
LABEL_17:
    v10 = v6;
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_11C340(v16 + 80, &v24, 1) && !v24 )
  {
    v25 = 0u;
    v26 = 0;
    sub_32BA20(v11, &v24, a1, 1);
    v19 = sub_636A0(*(_QWORD **)(a1 + 64));
    if ( !(unsigned __int8)sub_178AA0(v19, (unsigned int)&v24, *(_DWORD *)(a1 + 72), -1, *((_QWORD *)a2 + 1), 0, 1, 0) )
    {
      if ( *((_QWORD *)&v25 + 1) )
      {
        *(_QWORD *)&v26 = 0;
        qfree(*((_QWORD *)&v25 + 1));
      }
      qfree(v24);
      return 0;
    }
    if ( *((_QWORD *)&v25 + 1) )
    {
      *(_QWORD *)&v26 = 0;
      qfree(*((_QWORD *)&v25 + 1));
    }
    qfree(v24);
  }
  if ( *((_BYTE *)a2 + 64) == 8 )
  {
    v12 = *(_DWORD *)(*((_QWORD *)a2 + 9) + 284LL);
LABEL_15:
    if ( v12 == 11 )
      return 0;
    LODWORD(v6) = *a2;
    goto LABEL_17;
  }
  v10 = *a2;
LABEL_18:
  if ( v10 != 4 )
    goto LABEL_11;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v9 + 1) & 0x40) == 0
    && *((_BYTE *)a2 + 32) == 5
    && !(unsigned __int8)sub_1EBD30(v9, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL), a2[9]) )
  {
    v13 = (int)a2[9];
    v14 = *(_QWORD *)(a1 + 64) + 184LL;
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**((_QWORD **)a2 + 5) + 1496LL) + 24LL) + 16LL)
        & (*(_QWORD *)(**((_QWORD **)a2 + 5) + 1440LL) + *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL));
    v24 = nullptr;
    v25 = 0;
    if ( v13 + v15 - 1 >= v15 )
    {
      v21 = v13;
      v22 = v14;
      v24 = (__int64 (__fastcall **)())qvector_reserve(&v24, 0, 1, 16);
      v14 = v22;
      v20 = (unsigned __int64 *)&v24[2 * v25];
      *v20 = v15;
      v20[1] = v21;
      *(_QWORD *)&v25 = v25 + 1;
    }
    if ( !(unsigned __int8)sub_313DC0(v14, &v24) )
    {
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      return 0;
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
  }
LABEL_7:
  if ( (unsigned __int8)sub_60DE0(a3, a4) && (unsigned __int8)sub_313DC0(a4 + 2, a3 + 2) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 605LL) & 0x40) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      v26 = 0u;
      v24 = off_4C9060;
      v27 = 0;
      v25 = v17;
      v28 = 0;
      sub_11BD20(a2, &v24);
      v18 = sub_A11C0(a1, (__int64)a2, (__int64)&v27);
      v24 = off_4C9060;
      if ( v18 )
      {
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27);
        }
        return 0;
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
    }
  }
  else if ( !sub_9D440((__int64)a2) )
  {
    return 0;
  }
  return (unsigned int)sub_116BA0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), a1, a2, a2) ^ 1;
}
