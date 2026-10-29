__int64 __fastcall sub_49CB00(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edx
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rsi
  __int64 *v12; // r13
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  unsigned __int8 v19; // al
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  _QWORD v36[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v5 = 0;
  if ( (v4 & 0xFFFFFFC0) == 0x40 && !*(_WORD *)(a2 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      if ( !*v8 && v8[1] == 4 )
      {
        v9 = a1[7];
        v11 = a1[1];
        v12 = (__int64 *)(v9 + 8LL * *(unsigned int *)(a3 + 12));
        v13 = *(_DWORD *)(a3 + 12);
        if ( *v12 == *(_QWORD *)(v11 + 856) )
        {
          v14 = *(_QWORD *)(a2 + 40);
        }
        else
        {
          if ( *(_QWORD *)(v11 + 864) != *v12 )
            return v5;
          v14 = *(_QWORD *)(a2 + 48);
        }
        v5 = 0;
        if ( v14 )
        {
          if ( v9 )
          {
            v15 = v9 + 8LL * *(unsigned int *)(v9 - 4);
            if ( (unsigned __int64)v12 >= v15 )
              goto LABEL_20;
            do
            {
              v16 = *v12;
              if ( *v12 )
              {
                v17 = a1[6];
                v18 = (*(_DWORD *)(v16 + 8))-- == 1;
                if ( v18 )
                {
                  v34 = v14;
                  sub_15D7BC0(v17, v16);
                  v14 = v34;
                }
              }
              ++v12;
            }
            while ( (unsigned __int64)v12 < v15 );
            v9 = a1[7];
            if ( v9 )
LABEL_20:
              *(_DWORD *)(v9 - 4) = v13;
          }
          ++*(_DWORD *)(v14 + 8);
          v36[0] = v14;
          v35 = v14;
          sub_4915B0(a1 + 7, v36);
          v19 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
          *(_BYTE *)(a3 + 8) = v19;
          if ( (unsigned __int8)sub_49C3F0((__int64)a1, v35, (v19 >> 4) & 3) )
          {
            v20 = a1[7];
            if ( v20 )
              v21 = *(_DWORD *)(v20 - 4);
            else
              v21 = 0;
            v22 = *(_QWORD *)(v20 + 8LL * (unsigned int)(v21 - 1));
            if ( v22 )
              ++*(_DWORD *)(v22 + 8);
            v23 = a1[60];
            if ( v23 )
            {
              v24 = a1[61];
              v18 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v24, v23);
                v20 = a1[7];
              }
            }
            v25 = *(_DWORD *)(v20 - 4);
            a1[60] = v22;
            v26 = (unsigned int)(v25 - 1);
            v27 = *(_QWORD *)(v20 + 8 * v26);
            *(_DWORD *)(v20 - 4) = v26;
            if ( v27 )
            {
              v28 = a1[6];
              v18 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v18 )
                sub_15D7BC0(v28, v27);
            }
            sub_39BF70(a1 + 6);
            v29 = a1[60];
            v36[0] = v29;
            if ( v29 )
              ++*(_DWORD *)(v29 + 8);
            sub_4915B0(a1 + 7, v36);
            if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
              sub_1584390(a1, a2, 0, a1[60]);
            v30 = a1[5];
            v31 = *(_DWORD *)(v30 - 4);
            *(_DWORD *)(v30 - 4) = v31 - 1;
            if ( v31 != 1 )
              *(_BYTE *)(v30 + 16LL * (unsigned int)(v31 - 2) + 8) |= 2u;
          }
          v32 = a1[60];
          if ( v32 )
          {
            v33 = a1[61];
            v18 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v33, v32);
          }
          a1[60] = 0;
          return 1;
        }
      }
    }
  }
  return v5;
}

