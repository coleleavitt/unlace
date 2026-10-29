void __fastcall sub_145B930(__int64 *a1, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  size_t v5; // rbp
  _DWORD *v7; // rax
  void *v8; // r10
  unsigned __int64 v9; // rdx

  v4 = -1;
  v5 = 24 * a3;
  if ( a3 <= 0x555555555555555LL )
    v4 = 24 * a3;
  v7 = (_DWORD *)operator new[](v4);
  v8 = v7;
  v9 = a3 - 1;
  if ( (__int64)(a3 - 1) >= 0 )
  {
    do
    {
      --v9;
      *v7 = 0;
      v7[1] = 0;
      v7 += 6;
      *((_QWORD *)v7 - 2) = 0;
      *((_WORD *)v7 - 4) = 0;
      *((_WORD *)v7 - 3) = 0;
    }
    while ( v9 != -1 );
  }
  if ( v5 )
    v8 = memcpy(v8, a2, v5);
  sub_14368B0(*a1, (char *)v8, (unsigned int)a3, 1u, 1u, 0);
}
