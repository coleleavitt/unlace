__int64 __fastcall sub_39A7A0(__int64 a1)
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

  v2 = *(__int64 **)(a1 + 72);
  v3 = &v2[*(unsigned int *)(a1 + 80)];
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
  result = a1 + 88;
  *(_DWORD *)(a1 + 80) = 0;
  if ( v2 != (__int64 *)(a1 + 88) && v2 )
    result = sub_186B220(v2);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
    result = sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
    return sub_186B220((void *)(v10 - 8));
  return result;
}

