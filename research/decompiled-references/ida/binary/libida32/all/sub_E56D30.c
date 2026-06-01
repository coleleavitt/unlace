void __fastcall sub_E56D30(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax

  v1 = *(_QWORD **)a1;
  v2 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v2 )
  {
    do
    {
      while ( 1 )
      {
        v2 -= 4;
        v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v2[2];
        if ( !v3 )
          break;
        v3(v2, v2, 3);
        if ( v2 == v1 )
          goto LABEL_4;
      }
    }
    while ( v2 != v1 );
LABEL_4:
    v2 = *(_QWORD **)a1;
  }
  if ( v2 != (_QWORD *)(a1 + 16) )
    free(v2);
}

