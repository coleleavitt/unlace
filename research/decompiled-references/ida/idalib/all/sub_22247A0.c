__int64 __fastcall sub_22247A0(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 *v7; // rdi
  int v8; // r8d
  char *v9; // rdx
  unsigned __int64 v10; // rcx
  std::_V2 *v12; // rdi
  unsigned __int64 v13; // rcx
  int v14; // eax
  int v15; // r12d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD v20[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v21; // [rsp+20h] [rbp-88h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  _QWORD v24[6]; // [rsp+40h] [rbp-68h] BYREF
  int v25; // [rsp+70h] [rbp-38h]

  memset(v24, 0, 32);
  ptr = v24;
  v23 = 0x600000004LL;
  v25 = 256;
  if ( a3 > 2 )
  {
    v12 = (std::_V2 *)a3;
    do
    {
      v13 = *a2;
      if ( a2[1] == 45 )
      {
        v14 = a2[2];
        if ( (unsigned __int8)v13 > (unsigned __int8)v14 )
        {
          v20[2] = a4;
          v21 = 1283;
          v20[3] = a5;
          v20[0] = "invalid glob pattern: ";
          v18 = std::_V2::generic_category(v12);
          v19 = operator new(0x40u);
          sub_2220590(v19, (__int64)v20, 22, v18);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_QWORD *)a1 = v19;
          goto LABEL_8;
        }
        v15 = v14 + 1;
        if ( (int)v13 <= v14 )
        {
          do
          {
            v16 = 1LL << v13;
            v17 = (unsigned int)v13 >> 6;
            LODWORD(v13) = v13 + 1;
            v24[v17] |= v16;
          }
          while ( (_DWORD)v13 != v15 );
        }
        v12 = (std::_V2 *)((char *)v12 - 3);
        a2 += 3;
      }
      else
      {
        v12 = (std::_V2 *)((char *)v12 - 1);
        ++a2;
        *(_QWORD *)((char *)v24 + ((v13 >> 3) & 0x18)) |= 1LL << v13;
      }
    }
    while ( (unsigned __int64)v12 > 2 );
    v7 = (unsigned __int8 *)v12 + (_QWORD)a2;
    v8 = v23;
    if ( a2 != v7 )
      goto LABEL_4;
  }
  else
  {
    v7 = &a2[a3];
    if ( a2 == &a2[a3] )
    {
      *(_BYTE *)(a1 + 72) &= ~1u;
      *(_QWORD *)a1 = a1 + 16;
      *(_QWORD *)(a1 + 8) = 0x600000000LL;
      goto LABEL_22;
    }
    v8 = 4;
LABEL_4:
    v9 = (char *)ptr;
    do
    {
      v10 = *a2++;
      *(_QWORD *)&v9[(v10 >> 3) & 0x18] |= 1LL << v10;
    }
    while ( a2 != v7 );
  }
  *(_BYTE *)(a1 + 72) &= ~1u;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( v8 )
LABEL_22:
    sub_9B8670((char ***)a1, (char ***)&ptr);
  *(_DWORD *)(a1 + 64) = v25;
LABEL_8:
  if ( ptr != v24 )
    free(ptr);
  return a1;
}
