void __fastcall sub_9398C0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // edx
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // edx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rdi
  int v17; // r14d
  int v18[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 7) != 3
    || (v16 = *(_QWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 0xFFFFFFFFFFFFFFF8LL,
        v17 = *(_DWORD *)(a1 + 8),
        (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 40LL))(v16) != v17) )
  {
    v7 = *(_QWORD *)(a1 + 176);
    if ( v7 )
    {
      if ( a2 < *(_DWORD *)(v7 - 4) )
      {
        v8 = *(_DWORD **)(v7 + 8LL * a2);
        if ( v8 )
        {
          v9 = v8[1];
          v10 = v8[2];
          ++*(_DWORD *)(a1 + 72);
          v11 = v8[3];
          v12 = a3 ^ 1;
          v13 = v12 + 2 * a2;
          if ( (v12 & 1) != 0 )
          {
            v14 = -v11;
            v15 = (_DWORD *)(a1 + 64);
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 200) + v9) )
              v15 = (_DWORD *)(a1 + 68);
            v18[0] = v14 - *v15;
            sub_939200(a1, v10, v9, v18, v13);
          }
          else
          {
            v18[0] = v11;
            sub_939200(a1, v9, v10, v18, v13);
          }
        }
      }
    }
  }
}

