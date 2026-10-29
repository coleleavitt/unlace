__int64 __fastcall sub_689D90(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // r10d
  int v13; // r11d
  _DWORD *v14; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // ebp

  v6 = *a2;
  if ( !(_DWORD)v6 )
  {
    *(_QWORD *)a3 = 0;
LABEL_3:
    v7 = 0;
    *(_DWORD *)(a3 + 8) = a2[1];
    *(_DWORD *)(a3 + 12) = a2[2];
    *(_DWORD *)(a3 + 16) = a2[3];
    std::_V2::system_category((std::_V2 *)a1);
    return v7;
  }
  v9 = a1;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(v10 + 1048);
  a1 = *(unsigned int *)(v10 + 1064);
  if ( (_DWORD)a1 )
  {
    v12 = (a1 - 1) & (37 * v6);
    a5 = v11 + 16LL * v12;
    v13 = *(_DWORD *)a5;
    if ( (_DWORD)v6 == *(_DWORD *)a5 )
    {
LABEL_7:
      a1 *= 16;
      v11 += a1;
      if ( a5 != v11 )
      {
        *(_QWORD *)a3 = *(_QWORD *)(a5 + 8);
        goto LABEL_3;
      }
    }
    else
    {
      a5 = 1;
      while ( v13 != -1 )
      {
        v16 = a5 + 1;
        v12 = (a1 - 1) & (v12 + a5);
        a5 = v11 + 16LL * v12;
        v13 = *(_DWORD *)a5;
        if ( (_DWORD)v6 == *(_DWORD *)a5 )
          goto LABEL_7;
        a5 = v16;
      }
    }
  }
  v14 = *(_DWORD **)(v9 + 8);
  if ( v14 )
    *v14 = 3;
  v15 = *(_QWORD **)(v9 + 16);
  if ( v15 )
  {
    a1 = (__int64)"Corrupted file entry in source location";
    v6 = 39;
    *v15 = sub_6905C0("Corrupted file entry in source location", 0x27u);
    v15[1] = a3;
  }
  v7 = 13;
  sub_10DF5B0(a1, v6, a3, v9, a5, v11);
  return v7;
}

