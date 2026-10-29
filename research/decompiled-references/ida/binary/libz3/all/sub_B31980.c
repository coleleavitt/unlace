__int64 __fastcall sub_B31980(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v7; // rbp
  unsigned int *v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // r15
  __int64 v11; // rax
  unsigned int *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // ebx

  v7 = a2 + 8;
  v8 = a2 + 8;
  v9 = 2LL * a2[6];
  v10 = &a2[v9 + 8];
  if ( v9 * 4 )
  {
    do
    {
      v7 += 2;
      sub_B6F780(*(_QWORD *)(a1 + 16));
    }
    while ( v10 != v7 );
    v11 = 2LL * a2[6];
    v12 = &a2[v11 + 8];
    if ( v11 * 4 )
    {
      do
      {
        while ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 24), *(_QWORD *)v8) )
        {
          v8 += 2;
          if ( v12 == v8 )
            goto LABEL_8;
        }
        v8 += 2;
        sub_B6F780(*(_QWORD *)(a1 + 16));
      }
      while ( v12 != v8 );
    }
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v13 + 8656);
  if ( !v14 || (v15 = *a2, (unsigned int)v15 >= *(_DWORD *)(v14 - 4)) || (v16 = 0, !*(_QWORD *)(v14 + 8 * v15)) )
  {
    v18 = sub_B68280(v13, a2, 0, 0, 1, a6);
    v19 = sub_B39350(v18, *(unsigned int *)(a1 + 8));
    if ( v19 == -1 || v18 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v19) )
      (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v18);
    if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 24), a2) )
    {
      v20 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
      sub_8F1CE0(*(_QWORD *)(a1 + 16), v20, *(_DWORD *)(a1 + 8));
      sub_B66DE0(*(_QWORD *)(a1 + 16), v20, 1);
    }
    return 1;
  }
  return v16;
}

