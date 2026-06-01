__int64 __fastcall sub_18B6E0(__int64 a1, _QWORD *a2, __int64 a3, char a4, char a5, __int64 a6)
{
  bool v8; // zf
  int v10; // r15d
  const char *v11; // r13
  unsigned __int8 (__fastcall *v12)(__int64, __int64 *, const char **, const char *); // rax
  __int64 *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ebx
  const char *v16; // rsi
  int v18; // [rsp+0h] [rbp-64h]
  __int64 v19; // [rsp+4h] [rbp-60h] BYREF
  const char *v20; // [rsp+Ch] [rbp-58h] BYREF
  __int128 v21; // [rsp+14h] [rbp-50h]
  unsigned __int64 v22; // [rsp+24h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8) == 0;
  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = nullptr;
  if ( v8 )
  {
    v11 = s1;
    v10 = 0;
    goto LABEL_3;
  }
  v10 = 0;
  v11 = *(const char **)a3;
  if ( *(_DWORD *)(a6 + 48) != 1 )
    goto LABEL_3;
  if ( *v11 == 43 )
  {
    v10 = 1;
  }
  else
  {
    if ( *v11 != 45 )
      goto LABEL_3;
    v10 = -1;
  }
  v11 = (const char *)skip_spaces();
LABEL_3:
  v12 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *, const char **, const char *))(*(_QWORD *)a1 + 264LL);
  if ( (char *)v12 != (char *)sub_18B160 )
  {
    v13 = &v19;
    if ( v12(a1, &v19, &v20, v11) )
      goto LABEL_6;
LABEL_16:
    if ( !a4 )
    {
      if ( (_QWORD)v21 )
        v16 = v20;
      else
        v16 = s1;
      sub_92200((__int64)"%s", v16);
    }
    goto LABEL_20;
  }
  v13 = (__int64 *)"%d";
  if ( (unsigned int)qsscanf() != 1 )
  {
    sub_94440((__int64 *)&v20);
    goto LABEL_16;
  }
  v19 = v18;
LABEL_6:
  if ( a5 && v19 < 0 )
  {
    if ( !a4 )
      sub_92200((__int64)"Expected a positive value", v13);
LABEL_20:
    v15 = 0;
    goto LABEL_21;
  }
  if ( a2 )
  {
    v14 = v19;
    if ( v10 == -1 )
    {
      v19 = *a2 - v19;
      v14 = v19;
    }
    else if ( v10 == 1 )
    {
      v14 = *a2 + v19;
      v19 = v14;
    }
    *a2 = v14;
  }
  v15 = 1;
LABEL_21:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v15;
}

