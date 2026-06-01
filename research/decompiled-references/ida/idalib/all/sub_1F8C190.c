void __fastcall sub_1F8C190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-10h] BYREF

  if ( *(char *)(a2 + 29) < 0 )
  {
    v10 = a2;
    v6 = sub_1F8B440(a1 + 1280, &v10, a3, a4, a5, a6);
    v7 = *(unsigned int *)(v6 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
    {
      v9 = v6;
      sub_2237220(v6, v6 + 16, v7 + 1, 16);
      v6 = v9;
      v7 = *(unsigned int *)(v9 + 8);
    }
    v8 = (_QWORD *)(*(_QWORD *)v6 + 16 * v7);
    *v8 = 7;
    v8[1] = a2;
    ++*(_DWORD *)(v6 + 8);
  }
}
