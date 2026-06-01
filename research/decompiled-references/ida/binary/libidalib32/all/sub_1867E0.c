_QWORD *__fastcall sub_1867E0(__int64 a1, __int64 a2, _DWORD *a3, char a4, _DWORD *a5)
{
  int v6; // eax
  __int64 v7; // r14
  const char *v8; // r13
  int v9; // r12d
  _QWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  char *v16; // rax
  int utf8_char; // eax
  const char *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  int v21; // edx
  int v23; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v24; // [rsp+10h] [rbp-68h]
  int v25; // [rsp+18h] [rbp-60h]
  const char *v29; // [rsp+30h] [rbp-48h]

  v6 = *(_DWORD *)(a2 + 8) - 1;
  v25 = v6;
  if ( v6 < 0 )
  {
    v23 = 0;
    v10 = nullptr;
  }
  else
  {
    v23 = 0;
    v24 = nullptr;
    v7 = 4LL * (unsigned int)v6;
    while ( 1 )
    {
      v15 = *(_QWORD *)a2 + 6 * v7;
      if ( *(_QWORD *)(v15 + 8) )
      {
        v8 = *(const char **)v15;
        v16 = strrchr(*(const char **)v15, 35);
        if ( v16 )
          v8 = v16 + 1;
        v29 = v8;
        v9 = 0;
        if ( *v8 )
        {
          do
          {
            utf8_char = get_utf8_char();
            v18 = v29;
            if ( utf8_char == -1 )
            {
              ++v29;
              utf8_char = *(unsigned __int8 *)v18++;
            }
            v9 += utf8_char != 126;
          }
          while ( *v18 );
        }
      }
      else
      {
        v8 = s1;
        v9 = 0;
      }
      if ( v23 >= v9 )
        v9 = v23;
      v23 = v9;
      v10 = (_QWORD *)operator new(0x10u);
      *v10 = newStr(v8);
      v11 = *(_QWORD *)(a1 + 208);
      v12 = *(_QWORD *)(a1 + 200);
      v10[1] = v24;
      if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(v11 + 1) )
      {
        v19 = qvector_reserve();
        v11 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = v19;
        v12 = v19;
      }
      v13 = v12 + 72 * v11;
      *(_QWORD *)(v13 + 56) = 0xFFFFFFFFLL;
      *(_QWORD *)(v13 + 48) = 0;
      *(_QWORD *)(v13 + 64) = 0;
      *(_OWORD *)v13 = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_OWORD *)(v13 + 32) = 0;
      ++*(_QWORD *)(a1 + 208);
      *(_DWORD *)(v13 + 48) = v25;
      *(_BYTE *)(v13 + 52) = a4;
      --v25;
      v14 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + v7);
      v7 -= 4;
      *(_DWORD *)(v13 + 56) = v14;
      if ( v25 == -1 )
        break;
      v24 = v10;
    }
  }
  *a3 = v23;
  v20 = *(_DWORD *)(a2 + 48);
  *a5 = v20;
  v21 = *(_DWORD *)(a2 + 52);
  a5[1] = v21;
  a5[2] = v23 + *(_DWORD *)(a1 + 480) + v20;
  a5[3] = *(_DWORD *)(a2 + 8) + v21;
  return v10;
}

