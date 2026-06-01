void __fastcall sub_1F4BEE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  __m128i v22[3]; // [rsp+0h] [rbp-38h] BYREF

  sub_1F4BCD0(a1, a2);
  v4 = a1[2];
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(v5 + 8LL * v6) & 0xFFFFF | *(_DWORD *)(a2 + 68) & 0xFFF00000;
  *(_DWORD *)(v4 + 24) = v6 + 2;
  *(_WORD *)(a2 + 70) = (16 * *(_QWORD *)(v5 + 8LL * (v6 + 1))) | *(_WORD *)(a2 + 70) & 0xF;
  v7 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v7 && *(_BYTE *)(v7 + 16) == 16 && *(_QWORD *)(v7 + 32) )
    *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88) = sub_1F6A0A0(
                                                                 *(_QWORD *)(a1[2] + 8),
                                                                 *(_QWORD *)(a1[2] + 16));
  if ( *(_BYTE *)(a2 + 81) )
  {
    v8 = *(_DWORD *)(a2 + 84);
    if ( v8 )
    {
      v9 = (_QWORD *)(a2 + 88);
      v10 = a2 + 16LL * (unsigned int)(v8 - 1) + 104;
      do
      {
        while ( 1 )
        {
          v11 = a1[2];
          v12 = *(unsigned int *)(v11 + 24);
          if ( (unsigned int)v12 < *(_DWORD *)(v11 + 40) )
            break;
          *v9 = 0;
          v9 += 2;
          *(v9 - 1) = sub_1F19370(a1[2]);
          if ( (_QWORD *)v10 == v9 )
            return;
        }
        v20 = *(_QWORD **)(v11 + 8);
        v21 = *(_QWORD *)(v11 + 16);
        v9 += 2;
        *(_DWORD *)(v11 + 24) = v12 + 1;
        *(v9 - 2) = sub_1F15160(v20, v21, *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12));
        *(v9 - 1) = sub_1F19370(a1[2]);
      }
      while ( v9 != (_QWORD *)v10 );
    }
  }
  else
  {
    v13 = a1[2];
    v14 = *(unsigned int *)(v13 + 24);
    *(_DWORD *)(v13 + 24) = v14 + 1;
    *(_BYTE *)(a2 + 80) = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14) != 0;
    v15 = a1[2];
    v16 = *(unsigned int *)(v15 + 24);
    *(_DWORD *)(v15 + 24) = v16 + 1;
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v16) )
    {
      sub_1F18E50(v22, v15);
      sub_BC4850(a2, *(_QWORD **)(*a1 + 144), v22, v17, v18, v19);
    }
  }
}
