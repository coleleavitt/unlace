__int64 __fastcall sub_B74C10(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rbx
  size_t v7; // rax
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rdi
  __int64 v10; // rdx
  const void *v11; // rdi

  v1 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    BUG();
  v3 = *(_QWORD *)(v2 + 64);
  v4 = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 10) & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      if ( (v5 & 7) == 0 )
      {
        v7 = j__strlen("__invoke");
        v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8 )
        {
          v9 = *(unsigned int **)(v8 + 16);
          v10 = *v9;
          v11 = v9 + 4;
          if ( v7 == v10 )
          {
            if ( v7 )
              LOBYTE(v4) = memcmp(v11, "__invoke", v7) == 0;
            else
              return 1;
          }
        }
        else
        {
          LOBYTE(v4) = v7 == 0;
        }
      }
    }
  }
  return v4;
}

