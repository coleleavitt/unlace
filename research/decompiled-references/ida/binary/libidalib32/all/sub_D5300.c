void __fastcall sub_D5300(int *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  int v6; // ecx
  __int64 v7; // rsi
  int v8; // r12d
  int *v9; // rax
  int *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rdx

  v4 = *(_QWORD *)(a2 + 40);
  if ( !v4 )
    goto LABEL_21;
  v6 = dword_24411C;
  v7 = *(_QWORD *)(v4 + 32LL * dword_24411C + 8);
  v8 = v7;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v12 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = v7;
        v12[1] = v4;
        *((_DWORD *)v12 + 4) = v6;
        if ( (unsigned int)sub_CC780((__int64)v12, 11) == 1 )
        {
          v8 = *(_DWORD *)qword_2515B0;
          goto LABEL_4;
        }
LABEL_21:
        v8 = -1;
      }
    }
  }
LABEL_4:
  if ( *((_QWORD *)a1 + 16) && rangeset_t_find_range() && **((_DWORD **)a1 + 15) != v8 && byte_2515A0 )
  {
    if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
    {
      v13 = qword_2510F0 + 24LL * a1[28];
      v14 = *(_DWORD **)v13;
      v15 = *(_QWORD *)v13 + 4LL * *(_QWORD *)(v13 + 8);
      if ( v14 != (_DWORD *)v15 )
      {
        while ( v8 != *v14 )
        {
          if ( (_DWORD *)v15 == ++v14 )
            return;
        }
        if ( v14 != (_DWORD *)v15 && (int)sub_D3340(a2, 4097, a3) <= 0 )
        {
          byte_2515A0 = 0;
          sub_C6F20((__int64)a1, a2);
        }
      }
    }
  }
  else
  {
    v9 = *(int **)(a2 + 224);
    *(_BYTE *)(a2 + 34) = 1;
    byte_2515A0 = 0;
    if ( v9 )
    {
      v10 = nullptr;
      while ( 1 )
      {
        v11 = *((_QWORD *)v9 + 1);
        if ( a1 == v9 )
          break;
        v10 = v9;
        if ( !v11 )
          return;
        v9 = *((int **)v9 + 1);
      }
      if ( v10 )
        *((_QWORD *)v10 + 1) = v11;
      else
        *(_QWORD *)(a2 + 224) = v11;
      sub_C9B60(a1);
    }
  }
}

