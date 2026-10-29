_BOOL4 __fastcall sub_22244B0(__int64 a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rax
  char *v7; // r12
  _QWORD *v8; // rbx
  char *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r14
  char *v12; // r10
  _BYTE *v13; // rdx
  char *v14; // rax
  __int64 v15; // r11
  _BYTE *v16; // r9
  __int64 v17; // rsi
  char v18; // r8
  unsigned __int8 v19; // cl
  _QWORD *v20; // rdx
  _BYTE *v21; // rdx
  _QWORD *v22; // [rsp+10h] [rbp-58h]
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 > a3 || v3 && memcmp(a2, *(const void **)a1, *(_QWORD *)(a1 + 8)) )
    return 0;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = &a2[v3];
  if ( !(_DWORD)v6 )
    return v3 == a3;
  v8 = *(_QWORD **)(a1 + 16);
  v9 = &a2[a3];
  v22 = &v8[5 * v6];
  while ( 1 )
  {
    v10 = v8[2];
    v11 = v8[3];
    if ( v7 != v9 )
    {
      v12 = v7;
      v13 = (_BYTE *)v8[2];
      v14 = v7;
      v15 = 0;
      v16 = nullptr;
      v17 = 0;
      while ( 1 )
      {
        if ( (_BYTE *)(v10 + v11) == v13 )
        {
LABEL_12:
          if ( !v16 )
            goto LABEL_22;
          v14 = v12 + 1;
          v17 = v15;
          v13 = v16;
          ++v12;
          goto LABEL_14;
        }
        v18 = *v13;
        if ( *v13 == 42 )
          break;
        v19 = *v14;
        if ( v18 == 91 )
        {
          v20 = (_QWORD *)(*v8 + 80 * v17);
          if ( ((1LL << v19) & *(_QWORD *)(v20[1] + 8LL * (v19 >> 6))) == 0 )
            goto LABEL_12;
          ++v14;
          ++v17;
          v13 = (_BYTE *)(v10 + *v20);
          if ( v9 == v14 )
          {
LABEL_20:
            v11 = v8[3];
            v21 = &v13[-v10];
            goto LABEL_21;
          }
        }
        else
        {
          if ( v18 == 92 )
          {
            if ( v13[1] != v19 )
              goto LABEL_12;
            v13 += 2;
            ++v14;
          }
          else
          {
            if ( v18 != 63 && v18 != v19 )
              goto LABEL_12;
            ++v13;
            ++v14;
          }
LABEL_14:
          if ( v9 == v14 )
            goto LABEL_20;
        }
      }
      ++v13;
      v15 = v17;
      v12 = v14;
      v16 = v13;
      goto LABEL_14;
    }
    v21 = nullptr;
LABEL_21:
    v23[0] = v8[2];
    v23[1] = v11;
    if ( sub_2246F60(v23, 42, v21) == -1 )
      return 1;
LABEL_22:
    v8 += 5;
    if ( v22 == v8 )
      return 0;
  }
}
