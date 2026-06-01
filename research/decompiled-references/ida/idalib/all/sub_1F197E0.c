unsigned __int64 __fastcall sub_1F197E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rbx

  *(_QWORD *)a2 = sub_1F194E0(a1, a2, a3, a4, a5, a6);
  result = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a2 + 8) = v7;
  *(_DWORD *)(a1 + 24) = result + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result);
  *(_DWORD *)(a2 + 16) = v8;
  if ( (_DWORD)v8 )
  {
    v9 = 8LL * (unsigned int)(v8 - 1);
    v10 = 0;
    v11 = sub_1EC2080((__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) + 2352LL), 8LL * (unsigned int)v8, 3u);
    *(_QWORD *)(a2 + 24) = v11;
    while ( 1 )
    {
      v12 = (unsigned __int64 *)(v11 + v10);
      result = sub_1EE7800(a1);
      *v12 = result;
      if ( v10 == v9 )
        break;
      v11 = *(_QWORD *)(a2 + 24);
      v10 += 8;
    }
  }
  return result;
}
