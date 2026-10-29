void __fastcall sub_46B650(__int64 a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v5; // eax
  __int64 ***v8; // rdx
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rsi

  if ( !a2 )
  {
    v5 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((__int64 ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (__int64 ***)(*((_QWORD *)a5 + 2) + v5);
      *a5 = v5 + 8;
    }
    v9 = **v8;
    v10 = &v9[(_QWORD)(*v8)[1]];
    while ( v10 != v9 )
    {
      v11 = v9++;
      sub_4598E0(*(_QWORD *)(a1 + 8), v11, a3, a4);
    }
  }
}

