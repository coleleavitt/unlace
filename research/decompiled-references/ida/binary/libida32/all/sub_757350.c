__int64 __fastcall sub_757350(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  int v4; // eax
  unsigned int *v6; // rax
  unsigned int *v7; // r15
  __int64 v9; // r12
  unsigned int *v10; // rbp
  __int64 *v11; // rdi
  unsigned int v12; // r14d
  __int64 v13; // rax
  char v14; // dl
  void (__fastcall *v15)(__int64, unsigned int, __int64, unsigned int, char); // rax
  __int64 v16; // rdi
  unsigned int v19; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 100);
  if ( *(_DWORD *)(a3 + 168) == v4 )
    return 0;
  *(_DWORD *)(a3 + 168) = v4;
  v6 = *(unsigned int **)(a3 + 24);
  v7 = (unsigned int *)((char *)v6 + 5 * *(_QWORD *)(a3 + 32));
  if ( v6 == v7 )
    return 0;
  v9 = 0;
  do
  {
    v10 = v7;
    v7 = (unsigned int *)((char *)v7 - 5);
    if ( !*((_BYTE *)v7 + 4) )
    {
      v11 = *(__int64 **)(a1 + 40);
      v12 = *v7;
      v13 = *v11;
      v19 = v12;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v13 + 16))(v11, 0, v12, 0)
        || a4 && (sub_753C70(a4, &v19), !v14) )
      {
        ++v9;
        v15 = *(void (__fastcall **)(__int64, unsigned int, __int64, unsigned int, char))(*(_QWORD *)a1 + 112LL);
        if ( v15 == sub_753E10 )
        {
          v16 = *(_QWORD *)(a1 + 48) + 176LL * a2;
          if ( (*(_BYTE *)(v16 + 164) & 4) == 0 )
            sub_753360((_QWORD *)(v16 + 48), v12);
        }
        else
        {
          v15(a1, a2, 0xCCCCCCCCCCCCCCCDLL * ((_QWORD)v7 - *(_QWORD *)(a3 + 24)), v12, 0);
        }
        memmove(v7, v10, *(_QWORD *)(a3 + 24) + 5LL * *(_QWORD *)(a3 + 32) - (_QWORD)v7 - 5);
        --*(_QWORD *)(a3 + 32);
        *(_DWORD *)(a3 + 164) |= 1u;
      }
    }
  }
  while ( *(unsigned int **)(a3 + 24) != v7 );
  return v9;
}

