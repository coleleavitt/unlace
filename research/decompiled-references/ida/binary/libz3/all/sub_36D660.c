__int64 __fastcall sub_36D660(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r12
  void (*v8)(); // rdx

  v2 = a1[1];
  result = *(_QWORD *)(*(_QWORD *)v2 + 176LL);
  if ( (void (*)())result != nullsub_161 )
    result = ((__int64 (__fastcall *)(__int64, _QWORD))result)(v2, a1[15]);
  v4 = (_QWORD *)a1[7];
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v5 = &v4[result];
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = a1[1];
        v7 = *v4;
        v8 = *(void (**)())(*(_QWORD *)v6 + 160LL);
        if ( v8 == nullsub_162 )
        {
          result = *(_QWORD *)(*(_QWORD *)v6 + 152LL);
          if ( (void (*)())result == nullsub_160 )
            goto LABEL_7;
LABEL_10:
          ++v4;
          result = ((__int64 (__fastcall *)(__int64, __int64))result)(v6, v7);
          if ( v5 == v4 )
            return result;
        }
        else
        {
          ((void (__fastcall *)(__int64, _QWORD))v8)(v6, *v4);
          v6 = a1[1];
          result = *(_QWORD *)(*(_QWORD *)v6 + 152LL);
          if ( (void (*)())result != nullsub_160 )
            goto LABEL_10;
LABEL_7:
          if ( v5 == ++v4 )
            return result;
        }
      }
    }
  }
  return result;
}

