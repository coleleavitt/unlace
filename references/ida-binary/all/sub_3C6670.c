__int64 __fastcall sub_3C6670(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  int v6; // edx
  __int64 result; // rax
  unsigned int *v8; // rbx
  __int64 i; // r12
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 (*v13)(); // rax

  v6 = sub_1698A0(0, (int)"HIDECANCEL\nDo you really want to delete the selected type(s)?");
  result = 0;
  if ( v6 == 1 )
  {
    v8 = *a4;
    for ( i = (__int64)&(*a4)[2 * (_QWORD)a4[1]]; (unsigned int *)i != v8; v8 += 2 )
    {
      v10 = *(_QWORD *)(a1 + 2488);
      v11 = *v8;
      v12 = 0;
      v13 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
      if ( v13 != sub_3AAC50 )
      {
        v11 = *v8;
        v12 = ((__int64 (__fastcall *)(__int64))v13)(v10);
      }
      del_numbered_type(v12, v11);
    }
    return 2;
  }
  return result;
}
