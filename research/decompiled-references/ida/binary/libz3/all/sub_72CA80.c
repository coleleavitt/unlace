__int64 (__fastcall *__fastcall sub_72CA80(_QWORD *a1))(_QWORD *, _QWORD *, __int64)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void (__fastcall *v7)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v8)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v9)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v10)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v11)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v12)(_QWORD *, _QWORD *, __int64); // rax
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax

  v2 = (_QWORD *)a1[100];
  a1[113] = 0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[99];
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (_QWORD *)a1[100];
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[128];
  if ( v7 )
  {
    v7(a1 + 126, a1 + 126, 3);
    *((_OWORD *)a1 + 64) = 0;
  }
  v8 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[132];
  if ( v8 )
  {
    v8(a1 + 130, a1 + 130, 3);
    *((_OWORD *)a1 + 66) = 0;
  }
  v9 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[136];
  if ( v9 )
  {
    v9(a1 + 134, a1 + 134, 3);
    *((_OWORD *)a1 + 68) = 0;
  }
  v10 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[140];
  if ( v10 )
  {
    v10(a1 + 138, a1 + 138, 3);
    *((_OWORD *)a1 + 70) = 0;
  }
  v11 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[144];
  if ( v11 )
  {
    v11(a1 + 142, a1 + 142, 3);
    *((_OWORD *)a1 + 72) = 0;
  }
  v12 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[148];
  if ( v12 )
  {
    v12(a1 + 146, a1 + 146, 3);
    *((_OWORD *)a1 + 74) = 0;
  }
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[153];
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(a1 + 151, a1 + 151, 3);
    *(_OWORD *)(a1 + 153) = 0;
  }
  a1[150] = 0;
  return result;
}

