void __fastcall sub_A7B150(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rbp
  unsigned int *i; // r15
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbp

  v2 = (unsigned int *)a1[106];
  if ( v2 )
  {
    for ( i = &v2[*(v2 - 1)]; i != v2; ++v2 )
    {
      while ( 1 )
      {
        v6 = *v2;
        v7 = a1[1];
        v8 = *(_QWORD *)(*a1 + 16LL);
        if ( *v2 != HIDWORD(qword_1C7ECC0) )
          break;
        v4 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 856LL);
        if ( v4 )
          goto LABEL_7;
        sub_8F8A20(a2);
        if ( i == ++v2 )
          goto LABEL_13;
      }
      if ( v6 == (_DWORD)qword_1C7ECC0 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 864LL);
        if ( v4 )
          goto LABEL_7;
      }
      else
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v8 + 8840) + 8LL * (v6 >> 1));
        if ( (v6 & 1) != 0 )
        {
          v4 = sub_15E1A70(*(_QWORD *)(v8 + 104));
          if ( v4 )
          {
LABEL_7:
            ++*(_DWORD *)(v4 + 8);
            sub_8F8A20(a2);
            if ( (*(_DWORD *)(v4 + 8))-- == 1 )
              sub_15D7BC0(v7, v4);
            continue;
          }
        }
        else if ( v4 )
        {
          goto LABEL_7;
        }
      }
      sub_8F8A20(a2);
    }
  }
LABEL_13:
  v9 = a1[107];
  if ( v9 )
  {
    v10 = v9 + 16LL * *(unsigned int *)(v9 - 4);
    while ( v10 != v9 )
    {
      v9 += 16;
      sub_15E1B70(a1[1]);
      sub_8F8A20(a2);
    }
  }
}

