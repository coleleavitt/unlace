__int64 __fastcall sub_655BB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = a1[31];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[30];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[29];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = (void *)a1[26];
  if ( v6 )
    result = sub_186B220(v6);
  v7 = (void *)a1[23];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (void *)a1[9];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = (void *)a1[8];
  if ( v9 )
    return sub_186B220(v9);
  return result;
}

