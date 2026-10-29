__int64 __fastcall sub_13F7990(__int64 *a1, unsigned __int64 *a2, unsigned __int64 **a3)
{
  int v3; // ebx
  unsigned int v4; // ecx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // r12d
  int v11; // ebx
  unsigned int v13; // r12d
  unsigned __int64 *v14; // r15
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  char v18; // al
  unsigned __int64 *v19; // [rsp+0h] [rbp-48h]
  int v20; // [rsp+8h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v6 = *a1;
    v7 = *a2;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( !v8 )
      {
LABEL_8:
        v10 = -1916529075;
        goto LABEL_9;
      }
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 )
        break;
      v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_8;
    }
    v16 = HIDWORD(v9);
    v17 = 0x9DDFEA08EB382D69LL * (v16 ^ (((8 * v8) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v10 = -348639895
        * ((-348639895 * (v17 ^ v16 ^ (v17 >> 47)))
         ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v17 ^ v16 ^ (v17 >> 47))) >> 32) >> 15));
LABEL_9:
    v20 = 1;
    v11 = v3 - 1;
    v19 = nullptr;
    v13 = v11 & v10;
    while ( 1 )
    {
      v14 = (unsigned __int64 *)(v6 + 32LL * v13);
      LOBYTE(v15) = sub_FEE490(*a2, *v14);
      v4 = v15;
      if ( (_BYTE)v15 )
      {
        *a3 = v14;
        return v4;
      }
      if ( sub_FEE490(*v14, 0xFFFFFFFFFFFFF000LL) )
        break;
      v18 = sub_FEE490(*v14, 0xFFFFFFFFFFFFE000LL);
      if ( !v19 )
      {
        if ( !v18 )
          v14 = nullptr;
        v19 = v14;
      }
      v13 = v11 & (v20 + v13);
      ++v20;
    }
    v4 = 0;
    if ( v19 )
      v14 = v19;
    *a3 = v14;
  }
  else
  {
    *a3 = nullptr;
    return 0;
  }
  return v4;
}
