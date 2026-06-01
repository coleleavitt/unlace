__int64 __fastcall sub_18AB20(__int64 a1, int *a2, __int64 a3, char a4, char a5, __int64 a6)
{
  bool v8; // zf
  int v10; // r15d
  const char *v11; // r13
  __int64 (__fastcall *v12)(__int64, _DWORD *, __int64 *); // rax
  char *v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  const char *v16; // rsi
  _DWORD v18[2]; // [rsp+0h] [rbp-60h] BYREF
  const char *v19; // [rsp+8h] [rbp-58h] BYREF
  __int128 v20; // [rsp+10h] [rbp-50h]
  unsigned __int64 v21; // [rsp+20h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8) == 0;
  v21 = __readfsqword(0x28u);
  v20 = 0;
  v19 = nullptr;
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
  v12 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)a1 + 264LL);
  if ( v12 != sub_18A5B0 )
  {
    v13 = (char *)v18;
    if ( ((unsigned __int8 (__fastcall *)(__int64, _DWORD *, const char **, const char *))v12)(a1, v18, &v19, v11) )
      goto LABEL_6;
LABEL_16:
    if ( !a4 )
    {
      if ( (_QWORD)v20 )
        v16 = v19;
      else
        v16 = s1;
      sub_92120((__int64)"%s", v16);
    }
    goto LABEL_20;
  }
  v13 = "%d";
  if ( (unsigned int)qsscanf() != 1 )
  {
    sub_94360((__int64 *)&v19);
    goto LABEL_16;
  }
  v18[0] = v18[1];
LABEL_6:
  if ( a5 && v18[0] < 0 )
  {
    if ( !a4 )
      sub_92120((__int64)"Expected a positive value", v13);
LABEL_20:
    v15 = 0;
    goto LABEL_21;
  }
  if ( a2 )
  {
    v14 = v18[0];
    if ( v10 == -1 )
    {
      v18[0] = *a2 - v18[0];
      v14 = v18[0];
    }
    else if ( v10 == 1 )
    {
      v14 = *a2 + v18[0];
      v18[0] = v14;
    }
    *a2 = v14;
  }
  v15 = 1;
LABEL_21:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v15;
}

