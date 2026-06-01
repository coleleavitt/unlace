__int64 __fastcall sub_42CFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ebx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  __int64 v23; // rdx
  _BYTE *v24; // rcx
  int v25; // eax
  int v26; // edx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  char v29[56]; // [rsp+0h] [rbp-38h] BYREF

  result = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v8 + 24) != 2 )
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = 24LL * v7;
      v11 = *(_QWORD *)(v10 + v9 + 8);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + v9 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v11 + 4);
      v13 = *(unsigned int *)(v8 + 44);
      *(_QWORD *)(a4 + 3288) = v12;
      sub_4399D0(a1, v8 + 48, v13, a4);
      v14 = *(_BYTE **)(a4 + 120);
      if ( v14 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v14 = *(_BYTE **)(a4 + 120);
      }
      *v14 = 76;
      *(_DWORD *)(a4 + 3276) = 0;
      v15 = dword_654D8C;
      ++*(_QWORD *)(a4 + 120);
      if ( !v15 )
        return 0;
      if ( v15 == 0x80000000 )
      {
        v16 = *(_DWORD *)(a4 + 48);
        v15 = 1;
      }
      else if ( v15 < 0 )
      {
        v16 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v16 )
        {
          *(_DWORD *)(a4 + 44) = v16;
          *(_DWORD *)(a4 + 48) = v16 + v15;
          return 0;
        }
      }
      else
      {
        v16 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v16 + v15;
      return 0;
    }
    v17 = sub_49BD60(*(_QWORD *)(v8 + 56));
    v18 = sprintf(v29, "%d", v17);
    v19 = sub_471010(a4, v29, v18, 0);
    if ( v19 <= 255 )
    {
      v27 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v27 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v27 = *(_BYTE **)(a4 + 120);
      }
      *v27 = 1;
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = v19;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v25 = dword_65442C;
    }
    else
    {
      v20 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v20 = *(_BYTE **)(a4 + 120);
      }
      *v20 = 2;
      v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v21;
      *v21 = HIBYTE(v19);
      v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v22;
      *v22 = BYTE2(v19);
      v23 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v23 + 1;
      *(_BYTE *)(v23 + 1) = BYTE1(v19);
      v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v24;
      *v24 = v19;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v25 = dword_65444C;
    }
    if ( !v25 )
      return 0;
    if ( v25 == 0x80000000 )
      v25 = 1 - v19;
    if ( v25 < 0 )
    {
      v26 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v26 )
      {
        *(_DWORD *)(a4 + 44) = v26;
        *(_DWORD *)(a4 + 48) = v25 + v26;
        return 0;
      }
    }
    else
    {
      v26 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v25 + v26;
    return 0;
  }
  return result;
}

