__int64 __fastcall sub_4414C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v6; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  int v16; // [rsp+14h] [rbp-54h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v18[72]; // [rsp+20h] [rbp-48h] BYREF

  v6 = nullptr;
  if ( (unsigned int)(a3 - 2) > 1 )
  {
    sub_458930(a2, 1, a4, "dictionary ?pattern?");
    return 1;
  }
  else
  {
    v8 = *(_QWORD *)(a4 + 8);
    if ( *(char ***)(v8 + 24) == &off_6554A0 || (result = sub_43FB20(a2, v8), !(_DWORD)result) )
    {
      if ( a3 == 3 )
      {
        v14 = *(_QWORD *)(a4 + 16);
        v6 = *(const char **)(v14 + 8);
        if ( !v6 )
          v6 = (const char *)sub_47B3B0(v14);
      }
      v10 = sub_46EEB0(0, 0);
      if ( v6 && !strpbrk(v6, "*[?\\") )
      {
        v17 = 0;
        sub_4406D0(a2, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16), &v17);
        if ( v17 )
          sub_46FBF0(0, v10, *(_QWORD *)(a4 + 16));
      }
      else
      {
        sub_440900(0, *(_QWORD *)(a4 + 8), (__int64)v18, &v15, nullptr, &v16);
        while ( !v16 )
        {
          if ( !v6 )
            goto LABEL_12;
          v11 = *(_QWORD *)(v15 + 8);
          if ( !v11 )
            v11 = sub_47B3B0(v15);
          if ( (unsigned int)sub_49EAC0(v11, v6) )
LABEL_12:
            sub_46FBF0(0, v10, v15);
          sub_440A10((__int64)v18, &v15, nullptr, &v16, v12, v13);
        }
        sub_4409E0((__int64)v18);
      }
      sub_48AFD0(a2, v10);
      return 0;
    }
  }
  return result;
}

