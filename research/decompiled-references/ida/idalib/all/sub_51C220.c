void __fastcall sub_51C220(__int64 a1, int a2, unsigned int a3, int a4, int *a5)
{
  unsigned int v7; // eax
  unsigned __int64 ***v8; // rdx
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // r12
  unsigned __int64 *v11; // r8

  if ( !a2 )
  {
    v7 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((unsigned __int64 ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (unsigned __int64 ***)(*((_QWORD *)a5 + 2) + v7);
      *a5 = v7 + 8;
    }
    v9 = **v8;
    v10 = &v9[2 * (_QWORD)(*v8)[1]];
    while ( v10 != v9 )
    {
      v11 = v9;
      v9 += 2;
      sub_51BF30(*(_QWORD *)(a1 + 8), a3, a4, *(_DWORD *)(a1 + 176), v11);
    }
  }
}
