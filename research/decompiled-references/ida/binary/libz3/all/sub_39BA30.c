void __fastcall sub_39BA30(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // rsi
  _DWORD *v4; // rbx

  v1 = (__int64 *)a1[45];
  *a1 = &off_1C4E2E0;
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v2 )
      goto LABEL_5;
    do
    {
      v3 = *v1++;
      sub_62A410(a1[44], v3);
    }
    while ( v1 < v2 );
    v1 = (__int64 *)a1[45];
    if ( v1 )
LABEL_5:
      sub_186B220(v1 - 1);
  }
  sub_399450(a1[42], a1[43]);
  sub_3993F0(a1[40], a1[41]);
  sub_63D960(a1 + 9);
  v4 = (_DWORD *)a1[8];
  if ( v4 )
  {
    if ( v4[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      sub_186B220(v4);
    }
  }
  *a1 = qword_1C65108;
  sub_233E40((__int64)(a1 + 2));
  operator delete(a1, 0x170u);
}

