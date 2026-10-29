__int64 __fastcall sub_98B290(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v10; // rsi
  void (*v11)(); // r15
  _BOOL8 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v3 = 16LL * a2;
  v4 = v3 + a1[4];
  v5 = *(_DWORD *)v4;
  result = *(_DWORD *)v4 & 3;
  if ( (_DWORD)result != 3 || v5 == 15 )
  {
    if ( v5 != 15 )
    {
      *(_DWORD *)v4 = 3;
      *(_QWORD *)(v4 + 8) = a3;
    }
    return result;
  }
  v7 = a1[2];
  v10 = *(_QWORD *)(a1[10] + 8LL * a2);
  v11 = *(void (**)())(*(_QWORD *)v7 + 16LL);
  if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
  {
    v18 = a1[2];
    v13 = sub_B8C3D0(v10);
    v7 = v18;
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
    if ( *(_QWORD *)v13 < v15 )
    {
      v17 = *(_QWORD *)v13;
      while ( 1 )
      {
        v14 = v17;
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 414 )
          break;
        v17 += 8;
        if ( v15 == v17 )
        {
          v12 = 1;
          result = v3 + a1[4];
          goto LABEL_8;
        }
      }
      result = v3 + a1[4];
    }
    else
    {
      result = v3 + a1[4];
      if ( v14 == v15 )
      {
LABEL_17:
        v12 = 1;
        goto LABEL_8;
      }
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 414 )
      {
        v16 = v15 + 8;
        do
        {
          v15 = v16;
          if ( v14 == v16 )
            goto LABEL_17;
          v16 += 8LL;
        }
        while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 414 );
      }
    }
    v12 = v14 == v15;
    goto LABEL_8;
  }
  result = v3 + a1[4];
  v12 = 1;
LABEL_8:
  if ( v11 != nullsub_332 )
    result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BOOL8, bool))v11)(
               v7,
               v10,
               *(_QWORD *)(result + 8),
               a3,
               v12,
               v5 == 3);
  *(_DWORD *)v4 = 15;
  *(_QWORD *)(v4 + 8) = 0;
  return result;
}
