__int64 __fastcall sub_71BBD0(unsigned int *a1)
{
  unsigned int v1; // ebp
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  void *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  void *v21; // r12

  v1 = *((unsigned __int8 *)a1 + 5804);
  if ( !(_BYTE)v1 )
    return *((unsigned __int8 *)a1 + 5804);
  *((_BYTE *)a1 + 5804) = 0;
  sub_724A50(a1, 1);
  v8 = *((_QWORD **)a1 + 1);
  byte_2CA26CA = 0;
  *((_WORD *)a1 + 817) = 0;
  if ( v8 )
  {
    v9 = a1[405];
    if ( (v9 & 0x4000) != 0 )
    {
      sub_7185B0(v8, -1, v4, v5, v6, v7);
      v21 = *((void **)a1 + 1);
      if ( v21 )
      {
        sub_718740(*((_QWORD *)a1 + 1), 0xFFFFFFFFLL, v17, v18, v19, v20);
        operator delete(v21, 0x250u);
      }
      remove(*((const char **)a1 + 528));
      *((_QWORD *)a1 + 1) = 0;
      *((_BYTE *)a1 + 5804) = 1;
      return v1;
    }
    if ( (~(_BYTE)v9 & 7) != 0 )
    {
      v10 = sub_71B460((__m128i *)a1, 1, v4, v5, v6, v7);
      sub_7181C0(*((_QWORD **)a1 + 1), *a1 * (unsigned __int64)(unsigned int)(v10 + 1));
    }
    v11 = sub_71BAE0((__int64)a1, 0, v4, v5, v6, v7);
    v16 = *((void **)a1 + 1);
    LOBYTE(v1) = v11 != 0;
    if ( v16 )
    {
      sub_718740(*((_QWORD *)a1 + 1), 0, v12, v13, v14, v15);
      operator delete(v16, 0x250u);
    }
  }
  *((_QWORD *)a1 + 1) = 0;
  *((_BYTE *)a1 + 5804) = 1;
  return v1;
}

