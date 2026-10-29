__int64 __fastcall sub_15FB540(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // rsi
  __int64 (__fastcall **v6)(); // rdi
  size_t v7; // r14
  const void *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 (__fastcall ***v10)(); // rax
  __int64 v11; // r13
  size_t v13; // r14
  __int64 (__fastcall ***v14)(); // rdi
  void *v15[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v16[16]; // [rsp+10h] [rbp-88h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-70h]
  __int128 v19; // [rsp+30h] [rbp-68h]
  void *dest; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+4Ch] [rbp-4Ch]
  void **v23; // [rsp+50h] [rbp-48h]

  v16[0] = 0;
  v15[1] = nullptr;
  v15[0] = v16;
  v18 = 0;
  v21 = 0;
  v22 = 1;
  dest = nullptr;
  v19 = 0;
  v17 = &off_2BEBE68;
  v23 = v15;
  sub_227B8B0(&v17, 0, 0, 0);
  if ( a2 )
  {
    v5 = *(unsigned int **)(a2 + 16);
    v6 = (__int64 (__fastcall **)())dest;
    v7 = *v5;
    v8 = v5 + 4;
    v9 = *((_QWORD *)&v19 + 1) - (_QWORD)dest;
    if ( v7 > *((_QWORD *)&v19 + 1) - (_QWORD)dest )
    {
      v10 = (__int64 (__fastcall ***)())sub_227BF10(&v17, v8, v7);
      v6 = v10[4];
      if ( (unsigned __int64)((char *)v10[3] - (char *)v6) <= 4 )
      {
LABEL_6:
        sub_227BF10(v10, ":auto", 5);
        goto LABEL_7;
      }
    }
    else
    {
      v10 = &v17;
      if ( v7 )
      {
        memcpy(dest, v8, v7);
        v10 = &v17;
        v6 = (__int64 (__fastcall **)())((char *)dest + v7);
        dest = v6;
        v9 = *((_QWORD *)&v19 + 1) - (_QWORD)v6;
      }
      if ( v9 <= 4 )
        goto LABEL_6;
    }
    *(_DWORD *)v6 = 1953849658;
    *((_BYTE *)v6 + 4) = 111;
    v10[4] = (__int64 (__fastcall **)())((char *)v10[4] + 5);
  }
  else
  {
    v13 = j__strlen("auto:");
    if ( v13 > *((_QWORD *)&v19 + 1) - (_QWORD)dest )
    {
      v14 = (__int64 (__fastcall ***)())sub_227BF10(&v17, "auto:", v13);
    }
    else
    {
      v14 = &v17;
      if ( v13 )
      {
        memcpy(dest, "auto:", v13);
        dest = (char *)dest + v13;
        v14 = &v17;
      }
    }
    sub_227B910(v14, (unsigned int)(a3 + 1));
  }
LABEL_7:
  v11 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), *v23, (size_t)v23[1]);
  v17 = &off_2BEBE68;
  sub_227B7A0(&v17);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  return v11;
}
