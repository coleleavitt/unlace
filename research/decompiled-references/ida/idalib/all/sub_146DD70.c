void __fastcall sub_146DD70(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h]

  v5 = *((_DWORD *)a2 + 2);
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( a3 )
    {
      v10 = 0;
      v19 = 8 * v6 + 8;
      do
      {
        v11 = *(_QWORD *)(*a2 + v10);
        v12 = *(unsigned int *)(v11 + 160);
        if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 164) )
        {
          sub_2237220(v11 + 152, v11 + 168, v12 + 1, 8);
          v12 = *(unsigned int *)(v11 + 160);
        }
        *(_QWORD *)(*(_QWORD *)(v11 + 152) + 8 * v12) = a3;
        v13 = *a2;
        ++*(_DWORD *)(v11 + 160);
        sub_146CA90(a1, *(_QWORD *)(v13 + v10), a4, a5);
        v14 = *(_QWORD *)(*a2 + v10);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v10 += 8;
      }
      while ( v10 != v19 );
    }
    else
    {
      v15 = 8 * v6 + 8;
      v16 = 0;
      do
      {
        sub_146CA90(a1, *(_QWORD *)(*a2 + v16), a4, a5);
        v17 = *(_QWORD *)(*a2 + v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v16 += 8;
      }
      while ( v16 != v15 );
    }
  }
  *((_DWORD *)a2 + 2) = 0;
}
