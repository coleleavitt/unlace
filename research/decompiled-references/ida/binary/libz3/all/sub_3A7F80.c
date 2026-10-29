__int64 __fastcall sub_3A7F80(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edx
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int8 v11; // al
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-50h]
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v5 = 0;
  if ( (v4 & 0xFFFFFFC0) == 0x40 && !*(_WORD *)(a2 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v7 )
    {
      if ( !*v7 && v7[1] == 4 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
        v9 = *(_QWORD *)(a1 + 8);
        if ( v8 == *(_QWORD *)(v9 + 856) )
        {
          v10 = *(_QWORD *)(a2 + 40);
        }
        else
        {
          if ( *(_QWORD *)(v9 + 864) != v8 )
            return v5;
          v10 = *(_QWORD *)(a2 + 48);
        }
        v5 = 0;
        if ( v10 )
        {
          sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
          ++*(_DWORD *)(v10 + 8);
          v19[0] = v10;
          sub_399930((unsigned int **)(a1 + 56), v19);
          v11 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
          *(_BYTE *)(a3 + 8) = v11;
          if ( (unsigned __int8)sub_3A7D10(a1, v10, (v11 >> 4) & 3) )
          {
            v12 = *(_QWORD *)(a1 + 56);
            if ( v12 )
              v13 = *(_DWORD *)(v12 - 4);
            else
              v13 = 0;
            v14 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v13 - 1));
            if ( v14 )
              ++*(_DWORD *)(v14 + 8);
            v18 = v14;
            sub_399450(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
            *(_QWORD *)(a1 + 480) = v18;
            sub_39BF70((__int64 *)(a1 + 48));
            sub_39BF70((__int64 *)(a1 + 48));
            v15 = *(_QWORD *)(a1 + 480);
            v19[0] = v15;
            if ( v15 )
              ++*(_DWORD *)(v15 + 8);
            sub_399930((unsigned int **)(a1 + 56), v19);
            if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
              sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
            v16 = *(_QWORD *)(a1 + 40);
            v17 = *(_DWORD *)(v16 - 4);
            *(_DWORD *)(v16 - 4) = v17 - 1;
            if ( v17 != 1 )
              *(_BYTE *)(v16 + 16LL * (unsigned int)(v17 - 2) + 8) |= 2u;
          }
          sub_399450(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          v5 = 1;
          *(_QWORD *)(a1 + 480) = 0;
        }
      }
    }
  }
  return v5;
}

