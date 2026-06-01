__int64 __fastcall sub_2207E0(__m128i *a1, signed int *a2, unsigned __int64 a3, int a4)
{
  int *v8; // rax
  int *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // rax

  if ( (dword_8BA504 & 0x10) != 0 )
  {
    v8 = (int *)qword_8CB730;
    if ( qword_8CB730 )
    {
      v9 = &dword_8CB728;
      do
      {
        while ( 1 )
        {
          v10 = *((_QWORD *)v8 + 2);
          v11 = *((_QWORD *)v8 + 3);
          if ( *((_QWORD *)v8 + 4) >= a3 )
            break;
          v8 = *((int **)v8 + 3);
          if ( !v11 )
            goto LABEL_7;
        }
        v9 = v8;
        v8 = *((int **)v8 + 2);
      }
      while ( v10 );
LABEL_7:
      if ( v9 != &dword_8CB728 && a3 >= *((_QWORD *)v9 + 4) )
        return 0;
    }
  }
  v13 = sub_23F1C0(a2, 0xFFFFFFFFLL);
  return sub_220140(a1, v13, *a2, a3, a4);
}
