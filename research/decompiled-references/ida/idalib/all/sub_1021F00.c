__int64 __fastcall sub_1021F00(__int64 a1, int a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rax

  v2 = a2;
  if ( a2 < 0 )
  {
    while ( 1 )
    {
      v4 = v2 & 0x7FFFFFFF;
      if ( (v2 & 0x7FFFFFFFu) >= *(_DWORD *)(a1 + 476) && v4 < *(_DWORD *)(a1 + 480) )
        break;
      if ( !v4 )
        goto LABEL_21;
      if ( v4 < *(_DWORD *)(a1 + 312) )
      {
        v5 = sub_101D3D0(a1, v4);
        v6 = v5 + 1;
LABEL_6:
        if ( v6 <= 1 )
          goto LABEL_21;
        goto LABEL_7;
      }
      if ( v4 < *(_DWORD *)(a1 + 316)
        || (v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464)),
            (unsigned int)(v5 + 1) <= 1) )
      {
LABEL_21:
        v7 = *(_QWORD *)(a1 + 184);
        goto LABEL_9;
      }
LABEL_7:
      if ( v5 < 0 )
      {
        v12 = (unsigned int)(-2 - v5);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v5) >> 6));
        if ( _bittest64(&v13, v12) )
          v7 = sub_101F8A0(a1 + 264, (int)v12);
        else
          v7 = sub_101F930(a1, v12, nullptr);
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v5;
      }
LABEL_9:
      if ( !*(_DWORD *)(v7 + 12) || *(_DWORD *)(v7 + 16) )
        return (unsigned int)v2;
      v8 = sub_A80750(a1, v2);
      if ( (unsigned int)(v8 + 1) <= 1 )
      {
        v9 = *(_QWORD *)(a1 + 184);
      }
      else if ( (v8 & 0x80000000) != 0LL )
      {
        v14 = (unsigned int)(-2 - v8);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
        if ( _bittest64(&v15, v14) )
          v9 = sub_101F8A0(a1 + 264, (int)v14);
        else
          v9 = sub_101F930(a1, v14, nullptr);
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v8;
      }
      v10 = *(_DWORD *)(v9 + 8);
      v11 = HIDWORD(v8);
      if ( v10 )
      {
        v2 = v10 + v11;
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
      else
      {
        v2 = *(_DWORD *)(v9 + 12) + v11;
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
    v5 = *(_DWORD *)(a1 + 472);
    v6 = v5 + 1;
    goto LABEL_6;
  }
  return (unsigned int)v2;
}
