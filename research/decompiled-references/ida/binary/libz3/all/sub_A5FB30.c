__int64 __fastcall sub_A5FB30(__int64 a1, __int64 a2)
{
  void *v3; // r14
  int v4; // eax
  int v5; // ebx
  int v6; // r15d
  int v7; // edx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  int v15; // eax
  bool v16; // al
  __int64 v17; // rdx
  unsigned int v18; // eax
  void *v19; // rbx
  int v21; // eax
  bool v22; // al
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  char *v27; // rdi
  int v28; // [rsp+Ch] [rbp-6Ch]
  int v29; // [rsp+Ch] [rbp-6Ch]
  unsigned int v30; // [rsp+Ch] [rbp-6Ch]
  _QWORD v31[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+30h] [rbp-48h]

  v31[0] = 0;
  v31[1] = 0;
  v3 = qword_1C7F2C0;
  v32[0] = 1;
  v32[1] = 0;
  v33 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v31, a2);
  else
    LODWORD(v31[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v3, v32, a2 + 16);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 16);
    BYTE4(v32[0]) &= ~1u;
    LODWORD(v32[0]) = v4;
  }
  LOBYTE(v33) = *(_BYTE *)(a2 + 32);
  v5 = (unsigned __int8)v33;
  v6 = sub_182DB30(v31);
  v7 = v6 + 3 * sub_182DB30(v32);
  v8 = (v5 - v7) ^ (v7 << 8);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned int *)(a1 + 16);
  v11 = ((v8 ^ ((v7 - v8) << 16)) + v8 - v7) ^ ((v7 - v8) << 10);
  v12 = 56LL * (v11 & (unsigned int)(v10 - 1));
  v13 = v9 + v12;
  v14 = v9 + 56 * v10;
  if ( v12 != 56 * v10 )
  {
    v9 += v12;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v9 + 4);
      if ( v15 == 2 )
      {
        if ( *(_DWORD *)v9 == v11 )
        {
          v28 = v11;
          v16 = sub_3ED680((__int64)qword_1C7F2C0, v9 + 8, (__int64)v31);
          v11 = v28;
          if ( v16 && *(_BYTE *)(v9 + 40) == (_BYTE)v33 )
          {
LABEL_13:
            v17 = v9 + 56;
            if ( v14 == v9 + 56 )
              v17 = *(_QWORD *)(a1 + 8);
            v18 = *(_DWORD *)(a1 + 20) - 1;
            if ( *(_DWORD *)(v17 + 4) )
            {
              v23 = *(unsigned int *)(a1 + 24);
              *(_DWORD *)(v9 + 4) = 1;
              *(_DWORD *)(a1 + 20) = v18;
              if ( v18 < 0x40 )
                v18 = 64;
              *(_DWORD *)(a1 + 24) = v23 + 1;
              if ( v18 < (int)v23 + 1 && !(unsigned __int8)sub_186AF10(v23) )
              {
                v30 = *(_DWORD *)(a1 + 16);
                v24 = sub_186B270(56LL * v30);
                v25 = v24;
                if ( v30 )
                {
                  v26 = v24 + 56LL * v30;
                  do
                  {
                    *(_OWORD *)(v24 + 24) = 0;
                    v24 += 56;
                    *(_OWORD *)(v24 - 48) = 0;
                    *(_QWORD *)(v24 - 56) = 0;
                    *(_BYTE *)(v24 - 44) = 0;
                    *(_DWORD *)(v24 - 32) = 1;
                    *(_BYTE *)(v24 - 28) = 0;
                    *(_BYTE *)(v24 - 16) = 0;
                  }
                  while ( v26 != v24 );
                }
                sub_A5F940(*(_DWORD **)(a1 + 8), *(_DWORD *)(a1 + 16), v25, *(_DWORD *)(a1 + 16));
                v27 = *(char **)(a1 + 8);
                if ( v27 )
                  sub_98B440(v27, *(_DWORD *)(a1 + 16));
                *(_QWORD *)(a1 + 8) = v25;
                *(_DWORD *)(a1 + 24) = 0;
              }
            }
            else
            {
              *(_DWORD *)(v9 + 4) = 0;
              *(_DWORD *)(a1 + 20) = v18;
            }
            goto LABEL_17;
          }
        }
      }
      else if ( !v15 )
      {
        goto LABEL_17;
      }
      v9 += 56;
      if ( v14 == v9 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        break;
      }
    }
  }
  if ( v13 != v9 )
  {
    v21 = *(_DWORD *)(v9 + 4);
    if ( v21 == 2 )
      goto LABEL_24;
LABEL_21:
    if ( v21 )
    {
      while ( 1 )
      {
        v9 += 56;
        if ( v13 == v9 )
          break;
        v21 = *(_DWORD *)(v9 + 4);
        if ( v21 != 2 )
          goto LABEL_21;
LABEL_24:
        if ( *(_DWORD *)v9 == v11 )
        {
          v29 = v11;
          v22 = sub_3ED680((__int64)qword_1C7F2C0, v9 + 8, (__int64)v31);
          v11 = v29;
          if ( v22 && *(_BYTE *)(v9 + 40) == (_BYTE)v33 )
            goto LABEL_13;
        }
      }
    }
  }
LABEL_17:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  return sub_182CBA0(v19, v32);
}

