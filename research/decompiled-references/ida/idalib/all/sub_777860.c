__int64 __fastcall sub_777860(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // eax
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // r14
  __int64 v9; // r12
  unsigned __int64 *v10; // rbp
  __int64 *v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  char v14; // dl
  void (__fastcall *v15)(__int64, __int64, __int64, unsigned __int64, char); // rax
  __int64 v16; // rdi
  unsigned __int64 v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 104);
  if ( *(_DWORD *)(a3 + 172) == v4 )
    return 0;
  *(_DWORD *)(a3 + 172) = v4;
  v6 = *(unsigned __int64 **)(a3 + 24);
  v7 = (unsigned __int64 *)((char *)v6 + 9 * *(_QWORD *)(a3 + 32));
  if ( v6 == v7 )
    return 0;
  v9 = 0;
  do
  {
    v10 = v7;
    v7 = (unsigned __int64 *)((char *)v7 - 9);
    if ( !*((_BYTE *)v7 + 8) )
    {
      v11 = *(__int64 **)(a1 + 40);
      v12 = *v7;
      v13 = *v11;
      v19[0] = v12;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, unsigned __int64, _QWORD))(v13 + 16))(v11, 0, v12, 0)
        || a4 && (sub_7740F0(a4, v19), !v14) )
      {
        ++v9;
        v15 = *(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64, char))(*(_QWORD *)a1 + 112LL);
        if ( v15 == sub_774290 )
        {
          v16 = *(_QWORD *)(a1 + 48) + 176 * a2;
          if ( (*(_BYTE *)(v16 + 168) & 4) == 0 )
            sub_773820((_QWORD *)(v16 + 48), v12);
        }
        else
        {
          v15(a1, a2, 0x8E38E38E38E38E39LL * ((_QWORD)v7 - *(_QWORD *)(a3 + 24)), v12, 0);
        }
        memmove(v7, v10, *(_QWORD *)(a3 + 24) + 9LL * *(_QWORD *)(a3 + 32) - (_QWORD)v7 - 9);
        --*(_QWORD *)(a3 + 32);
        *(_DWORD *)(a3 + 168) |= 1u;
      }
    }
  }
  while ( *(unsigned __int64 **)(a3 + 24) != v7 );
  return v9;
}
