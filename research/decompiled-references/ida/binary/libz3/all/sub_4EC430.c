void __fastcall sub_4EC430(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdi

  v2 = a1[4];
  *a1 = &off_1C4FC58;
  if ( *((_DWORD *)a1 + 12) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1[5] + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *((_DWORD *)a1 + 12) );
  }
  v5 = a1[15];
  *((_DWORD *)a1 + 12) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = (_QWORD *)a1[5];
  if ( v6 && v6 != a1 + 7 )
    sub_186B220(v6);
  v7 = a1[2];
  *a1 = qword_1C665B0;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x80u);
}

