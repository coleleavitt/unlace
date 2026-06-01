__int64 __fastcall sub_FAF120(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int16 *v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int16 *v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  int *v17; // r12
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  int v25; // [rsp+1Ch] [rbp-4Ch]
  __int64 v26; // [rsp+20h] [rbp-48h]

  v6 = 1;
  v7 = (__int16 *)((char *)&unk_23F40A0 + 2 * *(unsigned __int16 *)(a2 + 2));
  v8 = *v7;
  if ( *v7 != -1 )
  {
    v23 = a3 + 16;
    do
    {
      while ( a1 != ((sub_FAEEC0(v8)[1] & 0x38) == 16) )
      {
        v8 = *++v7;
        if ( *v7 == -1 )
          goto LABEL_8;
      }
      v9 = *(unsigned int *)(a3 + 8);
      if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_22134E0(a3, v23, v9 + 1, 4);
        v9 = *(unsigned int *)(a3 + 8);
      }
      ++v7;
      v6 = 0;
      *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v8;
      v8 = *v7;
      ++*(_DWORD *)(a3 + 8);
    }
    while ( (_WORD)v8 != 0xFFFF );
  }
LABEL_8:
  v10 = (__int16 *)((char *)&unk_23F3A00 + 2 * *(unsigned __int16 *)(a2 + 4));
  v11 = *v10;
  if ( (_WORD)v11 != 0xFFFF )
  {
    v12 = v6;
    v24 = a4 + 80;
    v13 = a4;
    do
    {
      v14 = (__int16)v11;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 88);
        if ( v15 )
        {
          v16 = v24;
          do
          {
            while ( (__int16)v11 <= *(_DWORD *)(v15 + 32) )
            {
              v16 = v15;
              v15 = *(_QWORD *)(v15 + 16);
              if ( !v15 )
                goto LABEL_16;
            }
            v15 = *(_QWORD *)(v15 + 24);
          }
          while ( v15 );
LABEL_16:
          if ( v16 != v24 && (__int16)v11 >= *(_DWORD *)(v16 + 32) )
          {
            v17 = *(int **)(v16 + 40);
            v18 = (__int64)(*(_QWORD *)(v16 + 48) - (_QWORD)v17) >> 2;
            if ( (__int64)(*(_QWORD *)(v16 + 48) - (_QWORD)v17) > 0 )
            {
              v19 = *(unsigned int *)(a3 + 8);
              do
              {
                while ( 1 )
                {
                  v20 = *v17;
                  if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
                    break;
                  ++v17;
                  *(_DWORD *)(*(_QWORD *)a3 + 4 * v19) = v20;
                  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
                  *(_DWORD *)(a3 + 8) = v19;
                  if ( !--v18 )
                    goto LABEL_23;
                }
                v26 = v18;
                v25 = *v17++;
                sub_22134E0(a3, a3 + 16, v19 + 1, 4);
                *(_DWORD *)(*(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8)) = v25;
                v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
                *(_DWORD *)(a3 + 8) = v19;
                v18 = v26 - 1;
              }
              while ( v26 != 1 );
LABEL_23:
              v14 = *v10;
              v11 = *v10;
            }
          }
        }
      }
      v21 = 3 * v14;
      if ( (*((_QWORD *)&unk_2B23900 + 3 * v14) & 0xFFFFFFFF0000LL) != 0 )
        v21 = sub_FAF120(a1, (char *)&unk_2B23900 + 24 * v11, a3, v13);
      else
        LOBYTE(v21) = a1 == 1;
      v11 = *++v10;
      v12 &= v21;
    }
    while ( (_WORD)v11 != 0xFFFF );
    return v12;
  }
  return v6;
}

