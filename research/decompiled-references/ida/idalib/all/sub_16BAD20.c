__int64 *__fastcall sub_16BAD20(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // rax
  unsigned int *v7; // r12
  __int64 v8; // rbp
  const char *v9; // r13
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]

  while ( 1 )
  {
    v12 = sub_F6AC00(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    v13 = v12;
    if ( !v12 )
      break;
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 40LL);
    if ( (v14 & 7) != 0 || (v6 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v9 = &byte_22F0C30;
      v8 = 0;
      sub_A63900(a2);
      sub_A63900(a2);
      sub_A638C0(a2);
    }
    else
    {
      v7 = *(unsigned int **)(v6 + 16);
      v8 = *v7;
      v9 = (const char *)(v7 + 4);
      v10 = sub_A63900(a2);
      if ( v8 == 7 )
      {
        if ( v7[4] == 1850295875 && *((_WORD *)v7 + 10) == 25956 && *((_BYTE *)v7 + 22) == 120 )
        {
          v4 = v10;
          v11 = 1;
        }
        else
        {
          v11 = 0;
        }
        sub_A63900(a2);
        sub_A638C0(a2);
        if ( !v11 )
          goto LABEL_8;
        goto LABEL_7;
      }
      v15 = sub_A63900(a2);
      if ( v8 == 9 )
      {
        if ( *((_QWORD *)v7 + 2) != 0x656765746E49534ELL || *((_BYTE *)v7 + 24) != 114 )
        {
          sub_A638C0(a2);
          goto LABEL_8;
        }
        v4 = v15;
        sub_A638C0(a2);
LABEL_7:
        if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_18;
        goto LABEL_8;
      }
      v16 = sub_A638C0(a2);
      if ( v8 == 10 )
      {
        if ( *((_QWORD *)v7 + 2) != 0x6765746E4955534ELL || *((_WORD *)v7 + 12) != 29285 )
          goto LABEL_8;
        v4 = v16;
        goto LABEL_17;
      }
    }
    if ( v8 != 6 )
      goto LABEL_8;
    if ( *(_DWORD *)v9 == 1953384787 && *((_WORD *)v9 + 2) == 12851 )
    {
      v4 = a2[2340];
    }
    else
    {
      if ( *(_DWORD *)v9 != 1953384789 || *((_WORD *)v9 + 2) != 12851 )
        goto LABEL_8;
      v4 = a2[2346];
    }
LABEL_17:
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_18:
      *a1 = v4;
      a1[1] = (__int64)v9;
      a1[2] = v8;
      return a1;
    }
LABEL_8:
    a3 = sub_F5DAC0(v13);
  }
  v17 = *(_WORD *)a4 & 0x1FF;
  if ( (_WORD)v17 != 20 )
  {
    if ( (_WORD)v17 != 128 )
      goto LABEL_41;
    sub_16BAD20(&v25, a2, *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL));
    v19 = v25;
    v20 = v26;
    v21 = v27;
    sub_16BAD20(&v25, a2, *(_QWORD *)(*(_QWORD *)(a4 + 40) + 8LL));
    v22 = v26;
    v23 = v27;
    if ( v19 != v25 )
    {
      if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        *a1 = v25;
        a1[1] = v22;
        a1[2] = v23;
        return a1;
      }
      if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
LABEL_41:
        *a1 = 0;
        a1[1] = 0;
        a1[2] = 0;
        return a1;
      }
    }
    *a1 = v19;
    a1[1] = v20;
    a1[2] = v21;
    return a1;
  }
  sub_16BAD20(a1, a2, *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL));
  return a1;
}
