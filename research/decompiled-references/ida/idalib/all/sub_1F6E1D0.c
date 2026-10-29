__int64 __fastcall sub_1F6E1D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _WORD *v3; // rdx
  int v4; // r12d
  int v5; // eax
  unsigned __int64 v6; // r8
  _BYTE *v7; // rcx
  unsigned int v8; // r12d
  _BYTE *v9; // r15
  int v10; // r13d
  unsigned __int64 v11; // rbx
  _BYTE *v12; // r14
  char v14; // al
  _BYTE *v15; // rcx
  char *v16; // rax
  size_t v17; // r12
  char v18; // al
  _WORD *v19; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_WORD **)a2;
  if ( v2 == 10 )
  {
    if ( *(_QWORD *)v3 == 0x692D746C6975623CLL && v3[4] == 15982 )
      return 0;
  }
  else if ( v2 == 14 && *(_QWORD *)v3 == 0x646E616D6D6F633CLL && *((_DWORD *)v3 + 2) == 1852402720 && v3[6] == 15973 )
  {
    return 0;
  }
  v4 = sub_FD77C0(*(_QWORD *)(a1[5] + 80LL), a2);
  v5 = sub_228F0B0(a2, 0, 0);
  v6 = a1[16];
  v7 = *(_BYTE **)a2;
  v8 = v5 | v4;
  if ( v6 )
  {
    if ( *v7 )
    {
      v9 = (_BYTE *)a1[15];
      if ( *v9 == *v7 )
      {
        v10 = 0;
        do
        {
          v11 = (unsigned int)(v10 + 1);
          v12 = &v7[v11];
          if ( !v7[v11] )
            break;
          if ( v6 <= v11 )
          {
            v20 = a1[16];
            v19 = *(_WORD **)a2;
            v14 = sub_228ACA0((unsigned int)(char)v7[v11], 0);
            v15 = v19;
            if ( v14 )
            {
              v11 = (unsigned int)(v10 + 2);
              v12 = (char *)v19 + v11;
            }
            else
            {
              v18 = sub_228ACA0((unsigned int)(char)v9[v20 - 1], 0);
              v15 = v19;
              if ( !v18 )
                return v8;
            }
            if ( v15 != v12 )
            {
              v16 = nullptr;
              v17 = *(_QWORD *)(a2 + 8) - v11;
              if ( v17 )
                v16 = (char *)memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + v11), v17) + v17 - *(_QWORD *)a2;
              *(_QWORD *)(a2 + 8) = v16;
              return 1;
            }
            return v8;
          }
          ++v10;
        }
        while ( v7[v11] == v9[v11] );
      }
    }
  }
  return v8;
}
