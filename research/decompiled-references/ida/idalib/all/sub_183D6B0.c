__int64 __fastcall sub_183D6B0(__int64 a1, __int64 *a2, int *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int16 v7; // cx
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // edx
  int v16; // ebx
  void *v17; // rdi
  char v18; // [rsp+Fh] [rbp-39h]

  result = (unsigned int)a3[4];
  v6 = *((_QWORD **)a3 + 1);
  v18 = 0;
  if ( !(_DWORD)result )
    return result;
  do
  {
    while ( 1 )
    {
      v8 = v6 + 1;
      v9 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !sub_17A3270(a1, v9, *(_QWORD *)(a1 + 544), a2, 0) )
      {
        v12 = (unsigned int)a3[4];
        v10 = *((_QWORD *)a3 + 1);
        LODWORD(result) = a3[4];
        goto LABEL_12;
      }
      v10 = *((_QWORD *)a3 + 1);
      result = (unsigned int)a3[4];
      v11 = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7F;
      if ( v11 > 0x12u )
      {
        if ( ((v11 + 94) & 0x7Fu) <= 5 )
          goto LABEL_6;
        break;
      }
      if ( ((1LL << v11) & 0x40182) == 0 )
        break;
LABEL_6:
      ++v6;
      if ( v8 == (_QWORD *)(v10 + 8LL * (unsigned int)result) )
        goto LABEL_15;
    }
    v7 = *(_WORD *)(v9 + 30);
    if ( (v7 & 0x800) == 0 || (v7 & 0x20) != 0 )
      goto LABEL_6;
    v12 = (unsigned int)result;
LABEL_12:
    v13 = *(_QWORD *)(v10 + 8 * v12 - 8);
    v14 = (unsigned int)(result - 1);
    result = v14;
    a3[4] = v14;
    if ( v6 != (_QWORD *)(v10 + 8 * v14) )
    {
      *v6 = v13;
      v14 = (unsigned int)a3[4];
      v10 = *((_QWORD *)a3 + 1);
      result = v14;
    }
    v18 = 1;
  }
  while ( v6 != (_QWORD *)(v10 + 8 * v14) );
LABEL_15:
  if ( v18 )
  {
    v15 = *a3;
    if ( (_DWORD)result )
    {
      v16 = 0;
      if ( v15 == 5 )
        v16 = a3[1];
      *a3 = 2;
      result = sub_1A43500(a3);
      if ( *a3 == 5 )
      {
        a3[1] = v16;
        return result;
      }
    }
    else if ( v15 != 1 )
    {
      *a3 = 0;
    }
    v17 = *((void **)a3 + 11);
    if ( v17 )
    {
      result = sub_1A39780(v17);
      *((_QWORD *)a3 + 11) = 0;
    }
  }
  return result;
}
