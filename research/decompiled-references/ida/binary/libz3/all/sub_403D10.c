void __fastcall sub_403D10(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi

  sub_3D8450(a2, a1 + 3, *(_BYTE *)(*(_QWORD *)(a1[2] + 16LL) + 645LL), *(_BYTE *)(*(_QWORD *)(a1[2] + 16LL) + 646LL));
  v5 = (_QWORD *)a1[6];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[5];
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_8:
    v5 = (_QWORD *)a1[6];
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  sub_3EE030((__int64)(a1 + 5), a3);
}

