__int64 __fastcall sub_505E80(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  *(_QWORD *)a1 = &off_1C501B8;
  v2 = *(__int64 **)(a1 + 128);
  v3 = &v2[*(unsigned int *)(a1 + 136)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~1u;
    }
    while ( v4 != v3 );
  }
  result = a1 + 144;
  *(_DWORD *)(a1 + 136) = 0;
  if ( v2 != (__int64 *)(a1 + 144) && v2 )
    result = sub_186B220(v2);
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 )
    result = sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 96);
  if ( v10 )
    return sub_186B220((void *)(v10 - 8));
  return result;
}

