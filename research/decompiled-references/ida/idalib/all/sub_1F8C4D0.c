void __fastcall sub_1F8C4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+18h] [rbp-10h] BYREF

  v6 = *(char *)(a2 + 29) < 0;
  v12 = a2;
  if ( !v6 )
  {
    v7 = (unsigned int)a3;
    v8 = sub_1F8B440(a1 + 1280, &v12, a3, a4, a5, a6);
    v9 = *(unsigned int *)(v8 + 8);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 12) )
    {
      v11 = v8;
      sub_2237220(v8, v8 + 16, v9 + 1, 16);
      v8 = v11;
      v9 = *(unsigned int *)(v11 + 8);
    }
    v10 = (_QWORD *)(*(_QWORD *)v8 + 16 * v9);
    *v10 = 12;
    v10[1] = v7;
    ++*(_DWORD *)(v8 + 8);
  }
}
