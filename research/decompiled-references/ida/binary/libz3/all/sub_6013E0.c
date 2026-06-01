__int64 __fastcall sub_6013E0(__int64 a1, __int64 *a2, double a3)
{
  __int64 *v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r15d
  void *v8; // rbx
  __int64 v10; // [rsp+8h] [rbp-70h]
  __int64 *v11; // [rsp+10h] [rbp-68h]
  __int64 *v12; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]

  ptr = (void *)sub_186B270(0xF8u);
  sub_63D370(ptr, *(_QWORD *)(a1 + 40));
  v3 = *(__int64 **)(*a2 + 24);
  v11 = v3;
  if ( !v3 )
    goto LABEL_20;
  v12 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v12 )
    goto LABEL_20;
  v4 = 0;
  do
  {
    v5 = *v11;
    v10 = *(_QWORD *)(a1 + 32);
    if ( *v11 )
      sub_62A000(*(_QWORD *)(a1 + 32), v5);
    v6 = *(_QWORD *)(a1 + 32);
    v14 = 0;
    v15 = v6;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = v4;
        v4 = sub_600D90(a1, v5, *a2, &v14);
        if ( !(_BYTE)v4 )
          break;
        if ( v14 != v5 )
        {
          sub_62A410(v10, v5);
          v5 = v14;
          if ( !v14 )
            goto LABEL_14;
          sub_62A000(v10, v14);
        }
      }
      sub_63DAD0(ptr, v5, a3);
      if ( v14 )
        sub_62A410(v15, v14);
      v4 = v7;
      sub_62A410(v10, v5);
    }
LABEL_14:
    ++v11;
  }
  while ( v11 != v12 );
  if ( (_BYTE)v4 )
  {
    v8 = (void *)*a2;
    if ( ptr != (void *)*a2 )
    {
      if ( v8 )
      {
        sub_63D960(*a2);
        sub_186B220(v8);
      }
      *a2 = (__int64)ptr;
    }
  }
  else
  {
LABEL_20:
    v4 = 0;
    sub_63D960(ptr);
    sub_186B220(ptr);
  }
  return v4;
}

