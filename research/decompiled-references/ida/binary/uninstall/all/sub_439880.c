__int64 __fastcall sub_439880(const char *src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r12d
  int v6; // ebp
  __int64 *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // [rsp+10h] [rbp-38h]

  v11 = -1;
  if ( src && (v5 = *(_DWORD *)(a4 + 36), v6 = 0, v7 = *(__int64 **)(a4 + 40), v5 > 0) )
  {
    while ( (*((_BYTE *)v7 + 17) & 2) != 0 || *((_DWORD *)v7 + 2) != a2 || strncmp(src, (const char *)v7 + 40, a2) )
    {
      ++v6;
      v7 = (__int64 *)*v7;
      if ( v6 >= v5 )
        goto LABEL_9;
    }
    return (unsigned int)v6;
  }
  else
  {
LABEL_9:
    if ( a3 != 0 || src == nullptr )
    {
      v11 = *(_DWORD *)(a4 + 36);
      v9 = sub_40FB00(a2 + 45);
      v10 = v9;
      if ( *(_QWORD *)(a4 + 40) )
      {
        **(_QWORD **)(a4 + 48) = v9;
        *(_QWORD *)(a4 + 48) = v9;
      }
      else
      {
        *(_QWORD *)(a4 + 48) = v9;
        *(_QWORD *)(a4 + 40) = v9;
      }
      *(_QWORD *)v9 = 0;
      *(_DWORD *)(v9 + 8) = a2;
      *(_QWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 12) = v11;
      *(_DWORD *)(v9 + 16) = src == nullptr ? 0x200 : 0;
      if ( src )
        memcpy((void *)(v9 + 40), src, (int)a2);
      *(_BYTE *)((int)a2 + v10 + 40) = 0;
      ++*(_DWORD *)(a4 + 36);
    }
    return v11;
  }
}

