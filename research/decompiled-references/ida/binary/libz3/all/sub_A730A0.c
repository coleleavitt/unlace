__int64 __fastcall sub_A730A0(__int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r14
  void *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  _QWORD **v12; // r15
  __int64 (__fastcall *v13)(_QWORD *); // rax
  __int64 v14; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  sub_8E1A60(v1 + 32);
  v2 = *(void (__fastcall ****)(_QWORD))(v1 + 504);
  if ( v2 )
  {
    (**v2)(*(_QWORD *)(v1 + 504));
    sub_186B220(v2);
    *(_QWORD *)(v1 + 504) = 0;
  }
  v3 = *(_QWORD *)(v1 + 184);
  *(_DWORD *)(v1 + 112) = 0;
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(v1 + 256);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    if ( !v5 )
      goto LABEL_17;
    v6 = *(_QWORD *)(v1 + 240);
    v7 = 4LL * (unsigned int)(v5 - 1);
    do
    {
      v10 = *(unsigned int *)(v4 + v7);
      v11 = 0x7FFFFFFF8LL;
      v9 = *(_QWORD *)(v6 + 8 * v10);
      if ( v9 )
        v11 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v12 = *(_QWORD ***)(v9 + v11);
      if ( v12 )
      {
        v13 = (__int64 (__fastcall *)(_QWORD *))**v12;
        if ( v13 == sub_83AF80 )
        {
          *v12 = &off_1C55220;
          v8 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v12 + 3);
          sub_182CBA0(v8, v12 + 5);
        }
        else
        {
          v13(v12);
        }
        sub_186B220(v12);
        v6 = *(_QWORD *)(v1 + 240);
        v4 = *(_QWORD *)(v1 + 256);
        v9 = *(_QWORD *)(v6 + 8 * v10);
      }
      v7 -= 4;
      --*(_DWORD *)(v9 - 4);
    }
    while ( v7 != -4 );
    if ( v4 )
LABEL_17:
      *(_DWORD *)(v4 - 4) = 0;
  }
  v14 = *(_QWORD *)(v1 + 248);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  result = *(_QWORD *)(v1 + 424);
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_BYTE *)(v1 + 768) = 0;
  *(_OWORD *)(v1 + 432) = 0;
  *(_OWORD *)(v1 + 448) = 0;
  *(_OWORD *)(v1 + 464) = 0;
  *(_OWORD *)(v1 + 480) = 0;
  return result;
}

