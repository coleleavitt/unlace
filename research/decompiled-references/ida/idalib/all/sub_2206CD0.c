__int64 __fastcall sub_2206CD0(__int64 a1, const void **a2, unsigned int a3)
{
  const void *v4; // rax
  unsigned __int64 v6; // rbx
  char *v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r15

  if ( a3 > 0x40 )
  {
    if ( *((_DWORD *)a2 + 2) == a3 )
    {
      *(_DWORD *)(a1 + 8) = a3;
      sub_2205510(a1, a2);
    }
    else
    {
      v6 = ((unsigned __int64)a3 + 63) >> 6;
      v7 = (char *)operator new[](8 * v6);
      v8 = *((unsigned int *)a2 + 2);
      v9 = (unsigned __int64)(v8 + 63) >> 6;
      if ( (unsigned int)v8 > 0x40 )
        a2 = (const void **)*a2;
      memcpy(v7, a2, 8 * v9);
      memset(&v7[8 * v9], 0, (unsigned int)(8 * (v6 - v9)));
      *(_DWORD *)(a1 + 8) = a3;
      *(_QWORD *)a1 = v7;
    }
  }
  else
  {
    v4 = *a2;
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = v4;
  }
  return a1;
}
