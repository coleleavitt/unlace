__int64 __fastcall sub_6CC4A0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rsi
  _DWORD *v9; // rdi
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a3 - a2;
  v6 = 8LL * (unsigned int)v4 + 8;
  v7 = a1[274];
  a1[284] += v6;
  v8 = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v8 + v6 && v7 )
    a1[274] = (char *)v8 + v6;
  else
    v8 = (_DWORD *)sub_6A76A0((__int64)(a1 + 274), v6, 3);
  v9 = v8 + 2;
  *v8 = (_DWORD)v4 << 17;
  if ( a2 != a3 )
  {
    v10 = a2;
    do
    {
      v11 = *v10;
      v9 += 2;
      ++v10;
      *((_QWORD *)v9 - 1) = v11 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( a3 != v10 );
  }
  sub_B03940(v13);
  return v13[0];
}

