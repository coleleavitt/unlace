__int64 __fastcall sub_42BC50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // ebp
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  _DWORD v21[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v3 = sub_48B5D0(a1);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v3 + 16);
    v21[0] = *(_DWORD *)(v3 + 16);
  }
  else
  {
    v20 = sub_47ACD0(v3, v21);
    v5 = v21[0];
    v4 = v20;
  }
  v6 = sub_471010(a2, v4, v5, 0);
  if ( v6 > 255 )
  {
    v13 = *(_BYTE **)(a2 + 120);
    if ( (unsigned __int64)(v13 + 5) > *(_QWORD *)(a2 + 128) )
    {
      sub_439150(a2);
      v13 = *(_BYTE **)(a2 + 120);
    }
    *v13 = 2;
    v14 = (_BYTE *)(*(_QWORD *)(a2 + 120) + 1LL);
    *(_QWORD *)(a2 + 120) = v14;
    *v14 = HIBYTE(v6);
    v15 = (_BYTE *)(*(_QWORD *)(a2 + 120) + 1LL);
    *(_QWORD *)(a2 + 120) = v15;
    *v15 = BYTE2(v6);
    v16 = *(_QWORD *)(a2 + 120);
    *(_QWORD *)(a2 + 120) = v16 + 1;
    *(_BYTE *)(v16 + 1) = BYTE1(v6);
    v17 = (_BYTE *)(*(_QWORD *)(a2 + 120) + 1LL);
    *(_QWORD *)(a2 + 120) = v17;
    *v17 = v6;
    *(_DWORD *)(a2 + 3276) = 0;
    v18 = dword_65444C;
    ++*(_QWORD *)(a2 + 120);
    if ( v18 )
    {
      if ( v18 == 0x80000000 )
        v18 = 1 - v6;
      if ( v18 < 0 )
      {
        v19 = *(_DWORD *)(a2 + 48);
        if ( *(_DWORD *)(a2 + 44) < v19 )
        {
          *(_DWORD *)(a2 + 44) = v19;
          *(_DWORD *)(a2 + 48) = v19 + v18;
          goto LABEL_12;
        }
      }
      else
      {
        v19 = *(_DWORD *)(a2 + 48);
      }
      *(_DWORD *)(a2 + 48) = v19 + v18;
    }
  }
  else
  {
    v7 = *(_BYTE **)(a2 + 120);
    if ( (unsigned __int64)(v7 + 2) > *(_QWORD *)(a2 + 128) )
    {
      sub_439150(a2);
      v7 = *(_BYTE **)(a2 + 120);
    }
    *v7 = 1;
    v8 = (_BYTE *)(*(_QWORD *)(a2 + 120) + 1LL);
    *(_QWORD *)(a2 + 120) = v8;
    *v8 = v6;
    *(_DWORD *)(a2 + 3276) = 0;
    v9 = dword_65442C;
    ++*(_QWORD *)(a2 + 120);
    if ( v9 )
    {
      if ( v9 == 0x80000000 )
        v9 = 1 - v6;
      if ( v9 < 0 )
      {
        v10 = *(_DWORD *)(a2 + 48);
        if ( *(_DWORD *)(a2 + 44) < v10 )
        {
          *(_DWORD *)(a2 + 44) = v10;
          *(_DWORD *)(a2 + 48) = v9 + v10;
          goto LABEL_12;
        }
      }
      else
      {
        v10 = *(_DWORD *)(a2 + 48);
      }
      *(_DWORD *)(a2 + 48) = v9 + v10;
    }
  }
LABEL_12:
  v11 = sub_48C5F0(a1, 1);
  return sub_42B0C0(a2, 0x7Du, 1, 0, v11);
}

