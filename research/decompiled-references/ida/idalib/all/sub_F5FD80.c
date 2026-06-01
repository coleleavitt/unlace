__int64 __fastcall sub_F5FD80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  _QWORD *v10; // r13
  _QWORD *v11; // r14
  __int64 result; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v10 = a7;
  sub_F1A490(a4, a1, a2, 1, 0);
  sub_9B7040(a1, a5);
  if ( a8 )
  {
    v11 = &a7[a8];
    sub_9B7040(a1, a8);
    result = sub_9B7040(a1, SHIDWORD(a8));
    if ( a7 != v11 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      do
      {
        v14 = v13;
        v15 = v13 + 1LL;
        v16 = *(_QWORD *)&byte_8[*v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[*v10 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v10) & 7;
        if ( v15 > *(unsigned int *)(a1 + 12) )
        {
          sub_2237220(a1, a1 + 16, v15, 4);
          v14 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = v16;
        v17 = HIDWORD(v16);
        v18 = *(unsigned int *)(a1 + 12);
        v19 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v19;
        if ( v19 + 1 > v18 )
        {
          sub_2237220(a1, a1 + 16, v19 + 1, 4);
          *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v17;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a1 + 4 * v19) = v17;
        }
        result = *(unsigned int *)(a1 + 8);
        ++v10;
        v13 = result + 1;
        *(_DWORD *)(a1 + 8) = result + 1;
      }
      while ( v11 != v10 );
    }
  }
  else
  {
    sub_9B7040(a1, a3);
    return sub_9B7040(a1, SHIDWORD(a3));
  }
  return result;
}
