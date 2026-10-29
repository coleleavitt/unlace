void __fastcall sub_F18EA0(__int64 a1, __int64 a2)
{
  void (__fastcall *v2)(__int64, _QWORD); // rax
  __int64 v3; // r12
  _BOOL4 v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rcx

  sub_F15AA0((_QWORD *)a1, (_WORD *)a2);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v2 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL);
    if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
      v2(a1, *(_QWORD *)(a2 + 32));
    else
      v2(a1, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 16));
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
      v4 = *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 32) != 0;
    v5 = *(unsigned int *)(v3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 8), v3 + 16, v5 + 1, 4);
      v5 = *(unsigned int *)(v3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v5) = v4;
    ++*(_DWORD *)(v3 + 8);
    if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    {
      v6 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0);
      if ( *(_DWORD *)(v6 + 32) )
      {
        v7 = *(_DWORD *)(v6 + 44);
        if ( (*(_QWORD *)a2 & 0x100000LL) != 0
          && (v13 = 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0),
              *(_DWORD *)(a2 + v13 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 32)) )
        {
          v8 = v13
             + 16 * (((*(_QWORD *)a2 & 0x80000LL) != 0) + (unsigned __int64)((*(_QWORD *)a2 & 0x100000LL) != 0))
             + 32
             + a2;
        }
        else
        {
          v8 = 0;
        }
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(unsigned int *)(v9 + 8);
        if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 8), v9 + 16, v10 + 1, 4);
          v10 = *(unsigned int *)(v9 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v9 + 4 * v10) = v7;
        ++*(_DWORD *)(v9 + 8);
        if ( v7 )
        {
          v11 = v8 + 32 * ((unsigned int)(v7 - 1) + 1LL);
          do
          {
            v12 = v8;
            v8 += 32;
            sub_F18B10((__int64 *)a1, v12);
          }
          while ( v11 != v8 );
        }
      }
    }
  }
}
