_QWORD *__fastcall sub_21C6300(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  char *v5; // r13
  char *v6; // r14
  void **v7; // rdi
  void **v8; // r12
  void **v9; // rbx

  v2 = *(_QWORD **)(a1 + 48);
  if ( !v2 )
  {
    v2 = (_QWORD *)operator new(0x48u);
    v5 = *(char **)(a1 + 48);
    v2[8] = 0;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[7] = 0;
    *(_QWORD *)(a1 + 48) = v2;
    if ( v5 )
    {
      v6 = v5 + 72;
      do
      {
        while ( 1 )
        {
          v6 -= 24;
          v7 = *(void ***)v6;
          v8 = *((void ***)v6 + 1);
          v9 = *(void ***)v6;
          if ( v8 != *(void ***)v6 )
          {
            do
            {
              while ( *v9 )
              {
                operator delete(*v9);
                v9 += 3;
                if ( v8 == v9 )
                  goto LABEL_8;
              }
              v9 += 3;
            }
            while ( v8 != v9 );
LABEL_8:
            v7 = *(void ***)v6;
          }
          if ( !v7 )
            break;
          operator delete(v7);
          if ( v5 == v6 )
            goto LABEL_11;
        }
      }
      while ( v5 != v6 );
LABEL_11:
      operator delete(v5, 0x48u);
      v2 = *(_QWORD **)(a1 + 48);
    }
  }
  return &v2[3 * a2];
}
