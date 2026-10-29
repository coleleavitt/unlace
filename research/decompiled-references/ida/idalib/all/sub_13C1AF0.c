__int64 __fastcall sub_13C1AF0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rbp
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rsi
  int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  char v16; // r8
  __int64 *v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20[2]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v21; // [rsp+18h] [rbp-20h]

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(*a2 + 626LL) & 8) != 0 )
  {
    v4 = a2[5];
    v20[0] = a1;
    v5 = *(_BYTE **)(v4 + 8);
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, void *))(*(_QWORD *)v5 + 24LL))(v5, &unk_26FAE05) )
    {
      sub_225AFD0(v5);
      if ( v6 )
      {
        v15 = v20[0];
        v16 = v5[115];
        v17 = *(__int64 **)(v20[0] + 16);
        v18 = *(_DWORD *)(v20[0] + 24);
        if ( v17 == *(__int64 **)(v20[0] + 32) )
        {
          LODWORD(v21) = *(_DWORD *)(v20[0] + 24);
          v20[1] = (__int64)v17;
          sub_13C1720(v20[0], v17, v18, v16);
        }
        else
        {
          if ( v18 == 63 )
          {
            *(_DWORD *)(v20[0] + 24) = 0;
            *(_QWORD *)(v15 + 16) = v17 + 1;
          }
          else
          {
            *(_DWORD *)(v20[0] + 24) = v18 + 1;
          }
          v19 = *v17 | (1LL << v18);
          if ( !v16 )
            v19 = *v17 & ~(1LL << v18);
          *v17 = v19;
        }
        v5[115] = 0;
      }
    }
    (*(void (__fastcall **)(_BYTE *, __int64 (__fastcall *)(), __int64 *))(*(_QWORD *)v5 + 120LL))(v5, sub_13C1D00, v20);
    v7 = *(__int64 **)(a1 + 16);
    v8 = *(__int64 **)a1;
    v9 = *(_DWORD *)(a1 + 24);
    v10 = *(_DWORD *)(a1 + 8);
    if ( *(__int64 **)a1 != v7 || v9 != v10 )
    {
      if ( v9 )
      {
        v11 = v9 - 1;
      }
      else
      {
        --v7;
        v11 = 63;
      }
LABEL_9:
      if ( v7 > v8 )
        goto LABEL_12;
LABEL_10:
      if ( v10 < v11 && v7 == v8 )
      {
        while ( 1 )
        {
LABEL_12:
          v12 = *v8;
          v13 = 1LL << v11;
          v14 = *v8 & ~(1LL << v10);
          if ( ((1LL << v11) & *v7) != 0 )
            v14 = *v8 | (1LL << v10);
          *v8 = v14;
          if ( (v12 & (1LL << v10)) != 0 )
          {
            *v7 |= v13;
            if ( v10 != 63 )
              goto LABEL_16;
          }
          else
          {
            *v7 &= ~v13;
            if ( v10 != 63 )
            {
LABEL_16:
              ++v10;
              goto LABEL_17;
            }
          }
          ++v8;
          v10 = 0;
LABEL_17:
          if ( v11 )
          {
            --v11;
            goto LABEL_9;
          }
          --v7;
          v11 = 63;
          if ( v7 <= v8 )
            goto LABEL_10;
        }
      }
    }
  }
  return a1;
}
