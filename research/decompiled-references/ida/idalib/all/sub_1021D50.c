__int64 __fastcall sub_1021D50(__int64 a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax

  v2 = a2;
  if ( a2 < 0 )
  {
    while ( 1 )
    {
LABEL_3:
      v3 = v2 & 0x7FFFFFFF;
      if ( (v2 & 0x7FFFFFFFu) < *(_DWORD *)(a1 + 476) || v3 >= *(_DWORD *)(a1 + 480) )
      {
        if ( !v3 )
          goto LABEL_21;
        if ( v3 < *(_DWORD *)(a1 + 312) )
        {
          v4 = sub_101D3D0(a1, v3);
          v5 = v4 + 1;
        }
        else
        {
          if ( v3 < *(_DWORD *)(a1 + 316) )
            goto LABEL_21;
          v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464));
          v5 = v4 + 1;
        }
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 472);
        v5 = v4 + 1;
      }
      if ( v5 > 1 )
      {
        if ( v4 < 0 )
        {
          v11 = (unsigned int)(-2 - v4);
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v4) >> 6));
          if ( _bittest64(&v12, v11) )
            v6 = sub_101F8A0(a1 + 264, (int)v11);
          else
            v6 = sub_101F930(a1, v11, nullptr);
        }
        else
        {
          v6 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v4;
        }
        goto LABEL_9;
      }
LABEL_21:
      v6 = *(_QWORD *)(a1 + 184);
LABEL_9:
      if ( !*(_DWORD *)(v6 + 12) || *(_DWORD *)(v6 + 16) )
        break;
      v7 = sub_A80750(a1, v2);
      if ( (unsigned int)(v7 + 1) <= 1 )
      {
        v8 = *(_QWORD *)(a1 + 184);
      }
      else if ( (int)v7 < 0 )
      {
        v8 = sub_101FA20(a1, (unsigned int)(-2 - v7), nullptr);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v7;
      }
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        v9 = *(_DWORD *)(v8 + 12);
      v2 = v9 + HIDWORD(v7);
      if ( v9 + HIDWORD(v7) >= 0 )
        return (unsigned int)v2;
    }
  }
  v2 = sub_101FC50(a1, v2);
  if ( v2 < 0 )
    goto LABEL_3;
  return (unsigned int)v2;
}
