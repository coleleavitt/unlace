__int64 *__fastcall sub_1068330(__int64 a1, _DWORD *a2, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  int v5; // r13d
  int v6; // eax
  int v7; // edx
  size_t v11; // r15
  unsigned int v12; // eax
  int v13; // eax
  __int64 *v14; // rsi
  char v15; // al
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  unsigned __int8 (__fastcall *v20)(__int64, char *, size_t); // rbx
  size_t v21; // rax
  size_t v22; // rax
  __int64 *v23; // [rsp+8h] [rbp-60h]
  __int64 *v24; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+28h] [rbp-40h]

  if ( a3 )
  {
    if ( a3 == 2 )
    {
      if ( *((_QWORD *)a2 + 23) )
      {
        v6 = a2[47];
        if ( !v6 )
          v6 = 16;
        v7 = a2[46];
        goto LABEL_6;
      }
LABEL_12:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 584LL))(a1, "sve", 3) )
        goto LABEL_18;
      if ( a4 )
      {
        v11 = j__strlen("sve");
        v12 = sub_2244B30("sve", v11);
        v13 = sub_2244E60(a4, "sve", v11, v12);
        v14 = (__int64 *)(v13 == -1 ? *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8) : *(_QWORD *)a4 + 8LL * v13);
        sub_EC0F90(&v24, v14, 1);
        v23 = v24;
        sub_EC0F90(&v24, (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)), 1);
        if ( v24 != v23 )
        {
          if ( *(_BYTE *)(*v23 + 8) )
            goto LABEL_18;
        }
      }
      if ( a3 == 2 )
      {
        v20 = *(unsigned __int8 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)a1 + 584LL);
        v21 = j__strlen("sme");
        if ( v20(a1, "sme", v21) )
        {
LABEL_18:
          v15 = 1;
          v5 = 16;
          v4 = 1;
LABEL_19:
          v24 = (__int64 *)__PAIR64__(v5, v4);
          LOBYTE(v25) = v15;
          return v24;
        }
        if ( a4 )
        {
          v22 = j__strlen("sme");
          if ( !(unsigned __int8)sub_1068030(a4, (__int64)"sme", v22) )
          {
            v15 = 0;
            goto LABEL_19;
          }
          goto LABEL_18;
        }
      }
      v15 = 0;
      goto LABEL_19;
    }
    if ( a3 != 1 )
      goto LABEL_12;
    v16 = a2[44];
    v17 = a2[45];
    if ( v16 && (v18 = a2[46]) != 0 )
    {
      v19 = a2[47];
      if ( v16 <= v18 )
        v18 = a2[44];
      v4 = v18;
      if ( !v19 )
        v19 = 16;
    }
    else
    {
      if ( !v17 )
        goto LABEL_12;
      v19 = a2[47];
      if ( !v19 )
        goto LABEL_12;
      v4 = a2[46];
      if ( !v4 )
        v4 = 1;
      if ( !v16 )
      {
        v4 = 1;
LABEL_29:
        if ( v17 >= v19 )
          v19 = v17;
        v15 = 1;
        v5 = v19;
        goto LABEL_19;
      }
      if ( v16 <= v4 )
        v4 = a2[44];
    }
    if ( !v17 )
      v17 = 16;
    goto LABEL_29;
  }
  if ( !*((_QWORD *)a2 + 22) )
    goto LABEL_12;
  v6 = a2[45];
  if ( !v6 )
    v6 = 16;
  v7 = a2[44];
LABEL_6:
  HIDWORD(v24) = v6;
  if ( !v7 )
    v7 = 1;
  LOBYTE(v25) = 1;
  LODWORD(v24) = v7;
  return v24;
}
