void __fastcall sub_1F8C7F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+18h] [rbp-10h] BYREF

  v6 = *(_QWORD *)(a2 + 96);
  if ( v6 )
  {
    v11 = a2;
    v7 = sub_1F8B440(a1 + 1280, &v11, a3, a4, a5, a6);
    v8 = *(unsigned int *)(v7 + 8);
    if ( !(_DWORD)v8 )
    {
      if ( !*(_DWORD *)(v7 + 12) )
      {
        v10 = v7;
        sub_2237220(v7, v7 + 16, 1, 16);
        v7 = v10;
        v8 = *(unsigned int *)(v10 + 8);
      }
      v9 = (_QWORD *)(*(_QWORD *)v7 + 16 * v8);
      *v9 = 1;
      v9[1] = v6;
      ++*(_DWORD *)(v7 + 8);
    }
  }
}
