void __fastcall sub_ACC5A0(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax

  v2 = *(void **)(a1 + 1064);
  if ( v2 != (void *)(a1 + 1080) )
    operator delete(v2);
  v3 = *(_QWORD **)(a1 + 16);
  v4 = &v3[4 * *(unsigned int *)(a1 + 24)];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v4 -= 4;
        v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[2];
        if ( !v5 )
          break;
        v5(v4, v4, 3);
        if ( v3 == v4 )
          goto LABEL_6;
      }
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = *(_QWORD **)(a1 + 16);
  }
  if ( v4 != (_QWORD *)(a1 + 32) )
    free(v4);
}
