__int64 __fastcall sub_7DB220(__int64 a1)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // rdi
  unsigned __int64 v15; // rdi
  _QWORD *v16; // r12
  void *v17; // rdi

  if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = *(_QWORD **)a1;
    v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 != v4 )
    {
      while ( *v3 == -4096 || *v3 == -8192 )
      {
        v3 += 2;
        if ( (_QWORD *)v4 == v3 )
          goto LABEL_2;
      }
LABEL_9:
      if ( (_QWORD *)v4 != v3 )
      {
        v5 = v3[1];
        if ( (v5 & 6) == 4 )
        {
          v6 = (void *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v6 )
            operator delete(v6, 0x28u);
        }
        else if ( (v5 & 6) == 6 )
        {
          v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = (_QWORD *)v7;
          if ( v7 )
          {
            if ( (*(_BYTE *)(v7 + 96) & 1) == 0 )
              operator delete();
            v9 = *(void **)v7;
            if ( (_QWORD *)*v8 != v8 + 2 )
              free(v9);
            operator delete(v8, 0xB8u);
          }
        }
        while ( 1 )
        {
          v3 += 2;
          if ( v3 == (_QWORD *)v4 )
            break;
          if ( *v3 != -8192 && *v3 != -4096 )
            goto LABEL_9;
        }
      }
    }
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = v10 + 48LL * *(unsigned int *)(a1 + 40);
    if ( v10 != v11 )
    {
      while ( !*(_DWORD *)v10 || *(_DWORD *)v10 == 1045 )
      {
        v10 += 48;
        if ( v11 == v10 )
          goto LABEL_3;
      }
      if ( v11 != v10 )
      {
        v12 = *(_QWORD *)(v10 + 40);
        v13 = v12 & 6;
        if ( v13 == 4 )
          goto LABEL_39;
LABEL_31:
        if ( v13 == 6 )
        {
          v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          v16 = (_QWORD *)v15;
          if ( v15 )
          {
            if ( (*(_BYTE *)(v15 + 96) & 1) == 0 )
              operator delete();
            v17 = *(void **)v15;
            if ( (_QWORD *)*v16 != v16 + 2 )
              free(v17);
            operator delete(v16, 0xB8u);
          }
        }
        while ( 1 )
        {
          v10 += 48;
          if ( v10 == v11 )
            break;
          while ( !*(_DWORD *)v10 || *(_DWORD *)v10 == 1045 )
          {
            v10 += 48;
            if ( v11 == v10 )
              goto LABEL_3;
          }
          if ( v11 == v10 )
            break;
          v12 = *(_QWORD *)(v10 + 40);
          v13 = v12 & 6;
          if ( v13 != 4 )
            goto LABEL_31;
LABEL_39:
          v14 = (void *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v14 )
            operator delete(v14, 0x28u);
        }
      }
    }
  }
LABEL_3:
  operator delete();
  return operator delete();
}

