void __fastcall sub_1F999A0(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // [rsp-10h] [rbp-28h]

  v3 = (unsigned int)*a2;
  sub_9B9C90(a1[2], v3);
  if ( *a2 )
  {
    v8 = a2 + 2;
    v9 = (__int64)&a2[6 * (*a2 - 1) + 8];
    do
    {
      v10 = *((_QWORD *)v8 + 2);
      v8 += 6;
      sub_1F992F0(a1, v3, v4, v5, v6, v7, *((_QWORD *)v8 - 3), *((void **)v8 - 2), v10);
    }
    while ( (_DWORD *)v9 != v8 );
  }
}
