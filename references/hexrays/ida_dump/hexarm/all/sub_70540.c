unsigned __int64 __fastcall sub_70540(_DWORD *a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  bool v6; // zf
  unsigned int *v7; // rsi
  unsigned int i; // ebx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // [rsp+7h] [rbp-61h]
  __int64 v21[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v6 = a3[2] == 0;
  v7 = (unsigned int *)*a3;
  v22 = __readfsqword(0x28u);
  a3[1] = 0;
  if ( v6 )
  {
    v16 = qvector_reserve(a3, v7, 1, 4);
    v17 = a3[1];
    *a3 = v16;
    v7 = (unsigned int *)(v16 + 4 * v17);
  }
  *v7 = a2;
  ++a3[1];
  for ( i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, i + 1) )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v10 != sub_64A40 )
      break;
    if ( a1[14] == i )
      return v22 - __readfsqword(0x28u);
LABEL_7:
    if ( (unsigned __int8)sub_6F7B0((__int64)a1, a4, i, a2) )
    {
      v21[0] = 0;
      v21[1] = 0;
      v20 = sub_6F670((__int64)a1, v21, a2, i);
      qfree(v21[0]);
      if ( v20 )
      {
        v11 = a3[1];
        v12 = (unsigned int *)(*a3 + 4 * v11);
        if ( (unsigned int *)*a3 == v12 )
          goto LABEL_14;
        v13 = (unsigned int *)*a3;
        while ( i != *v13 )
        {
          if ( v12 == ++v13 )
            goto LABEL_14;
        }
        if ( v12 == v13 )
        {
LABEL_14:
          v14 = v11 + 1;
          if ( a3[2] < v14 )
          {
            v18 = qvector_reserve(a3, *a3, v14, 4);
            v19 = a3[1];
            *a3 = v18;
            v12 = (unsigned int *)(v18 + 4 * v19);
          }
          *v12 = i;
          ++a3[1];
        }
      }
    }
  }
  if ( (unsigned int)v10((__int64)a1) != i )
    goto LABEL_7;
  return v22 - __readfsqword(0x28u);
}
