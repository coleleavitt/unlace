void __fastcall sub_C76D30(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  __int64 v3; // rax
  int v5; // r13d
  unsigned int v6; // ebp
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // [rsp+0h] [rbp-3Ch]
  _QWORD v13[6]; // [rsp+Ch] [rbp-30h] BYREF

  v2 = *(_BYTE *)(a1 + 27);
  if ( (v2 & 4) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( (v2 & 1) != 0 )
      v3 = *(_QWORD *)(v3 + 40);
    v13[0] = v3;
    v5 = 1;
    if ( (v3 & 3) == 1 )
      goto LABEL_7;
    v5 = sub_FBABF0(v13);
    if ( v5 )
    {
      v2 = *(_BYTE *)(a1 + 27);
LABEL_7:
      v6 = 0;
      while ( 1 )
      {
        v11 = *(unsigned __int16 *)(a1 + 24);
        if ( ((v2 >> 3) & 3) != 0 )
        {
          v7 = *(_QWORD *)(a1 + 16);
          if ( (v2 & 1) != 0 )
            v7 = *(_QWORD *)(v7 + 40);
          v8 = sub_EC3B50(v6, v7, ((v2 >> 3) & 3) == 2, a1 + 48, v11, *(unsigned int *)(a1 + 36));
          v9 = *(unsigned int *)(a2 + 8);
          v10 = v9 + 1;
          if ( v9 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
LABEL_11:
            ++v6;
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v9) = v8;
            ++*(_DWORD *)(a2 + 8);
            if ( v6 == v5 )
              return;
            goto LABEL_12;
          }
        }
        else
        {
          v9 = *(unsigned int *)(a2 + 8);
          v10 = v9 + 1;
          v8 = *(_DWORD *)(a1 + 4LL * v6 + 8 * v11 + 8 + 40);
          if ( v9 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
            goto LABEL_11;
        }
        v12 = v8;
        sub_22134E0(a2, a2 + 16, v10, 4);
        ++v6;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v12;
        if ( v5 == v6 )
          return;
LABEL_12:
        v2 = *(_BYTE *)(a1 + 27);
      }
    }
  }
}

