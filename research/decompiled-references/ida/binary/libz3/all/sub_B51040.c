__int64 __fastcall sub_B51040(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r14
  void *v7; // rdi
  char v8; // r14
  int v9; // eax

  v2 = (unsigned __int64 *)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 104);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = &v4[v5];
      do
      {
        while ( *v4 )
        {
          v7 = (void *)(*v4++ - 8LL);
          sub_186B220(v7);
          if ( v4 == v6 )
          {
            v4 = *(_QWORD **)(a1 + 104);
            goto LABEL_7;
          }
        }
        ++v4;
      }
      while ( v4 != v6 );
      v4 = *(_QWORD **)(a1 + 104);
    }
LABEL_7:
    *((_DWORD *)v4 - 1) = 0;
  }
  v8 = *(_BYTE *)(a1 + 32);
  *(_BYTE *)(a1 + 32) = 0;
  sub_B50780(a1 + 16, a2);
  sub_B4CD20(a1 + 16, *(_QWORD *)(a2 + 24), nullptr, 0);
  sub_B503B0(a1 + 16, v2);
  v9 = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 168) = v9;
  return sub_B4F7F0(a1, (unsigned int *)a2, 0);
}

