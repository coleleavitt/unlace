__int64 __fastcall sub_60CC60(__int64 a1, int a2, unsigned int a3, _BYTE *a4)
{
  __int64 i; // rax
  unsigned int v6; // r14d
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  _BYTE *v11; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+28h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 4);
  *((_DWORD *)ptr + v13) = a3;
  for ( i = v13 + 1; ; i = v13 + 1 )
  {
    *(_QWORD *)&v13 = i;
    if ( !(unsigned __int8)sub_64DE70(a1, a2, a3, (unsigned int)&v11, 0, 0, 0, 0) )
      break;
    v6 = sub_6584F0(a1, &v11, 0);
    if ( !v6 )
      break;
    v7 = (unsigned int *)((char *)ptr + 4 * v13);
    if ( ptr != v7 )
    {
      v8 = (unsigned int *)ptr;
      while ( v6 != *v8 )
      {
        if ( v7 == ++v8 )
          goto LABEL_9;
      }
      if ( v8 != v7 )
      {
        a3 = *(_DWORD *)ptr;
        sub_64DE70(a1, a2, *(_DWORD *)ptr, (unsigned int)&v11, 0, 0, 0, 0);
        break;
      }
    }
LABEL_9:
    if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v13 + 1, 4);
      v7 = (unsigned int *)((char *)ptr + 4 * v13);
    }
    *v7 = v6;
    a3 = v6;
  }
  if ( a4 )
    *a4 = *v11;
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return a3;
}
