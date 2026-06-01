void __fastcall sub_1371BD0(_BYTE *a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // r12
  _QWORD *v8; // rdi

  v2 = a1[32] == 0;
  *(_QWORD *)a1 = &off_2C43B88;
  if ( !v2 )
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD **)a1 + 5);
  v5 = *((unsigned int *)a1 + 14);
  v6 = 72 * v5;
  if ( (_DWORD)v5 )
  {
    v7 = &v4[9 * v5];
    do
    {
      if ( *v4 != -4096 && *v4 != -8192 )
      {
        v8 = (_QWORD *)v4[1];
        if ( v8 != v4 + 3 )
          free(v8);
      }
      v4 += 9;
    }
    while ( v7 != v4 );
    v4 = *((_QWORD **)a1 + 5);
    v6 = 72LL * *((unsigned int *)a1 + 14);
  }
  operator delete(v4, v6, 8);
  nullsub_670(a1);
  operator delete(a1, 0x40u);
}
