void __fastcall sub_E28ED0(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx

  v7 = **a1;
  v8 = *(_QWORD *)(*a2 + 8);
  v9 = *(_BYTE **)(v8 + 32);
  v10 = *(_QWORD *)(v8 + 24);
  if ( *(char *)(v7 + 2) < 0 )
  {
    if ( (unsigned __int64)v9 >= v10 )
    {
      sub_2257CD0(v8, 116);
    }
    else
    {
      v11 = (__int64)(v9 + 1);
      *(_QWORD *)(v8 + 32) = v9 + 1;
      *v9 = 116;
    }
    sub_E1BE40(*a2, **(_QWORD **)(**a1 + 16), v11, v7, a5);
  }
  else
  {
    if ( (unsigned __int64)v9 >= v10 )
    {
      sub_2257CD0(v8, 122);
    }
    else
    {
      *(_QWORD *)(v8 + 32) = v9 + 1;
      *v9 = 122;
    }
    sub_E24970(*a2, *(unsigned __int16 **)(**a1 + 16), (unsigned __int16 *)0xFFFFFFFFLL, 0, a5, a6);
  }
}

