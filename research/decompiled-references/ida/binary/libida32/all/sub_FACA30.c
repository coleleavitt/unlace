void __fastcall sub_FACA30(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // rbp
  unsigned int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]

  *(_OWORD *)v11 = 0;
  v12 = 0;
  sub_FB05F0(a2, v11);
  v6 = (unsigned int *)v11[0];
  v7 = (unsigned int *)v11[1];
  if ( v11[0] != v11[1] )
  {
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( (unsigned __int8)sub_FAF8A0(*(_QWORD *)(a1 + 32), *v6) )
          break;
        if ( v7 == ++v6 )
          goto LABEL_6;
      }
      sub_FAC3D0(a1, v8, a3, a4, v9, v10);
      ++v6;
    }
    while ( v7 != v6 );
LABEL_6:
    v7 = (unsigned int *)v11[0];
  }
  if ( v7 )
    operator delete(v7);
}

