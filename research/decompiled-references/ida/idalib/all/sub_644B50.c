__int64 __fastcall sub_644B50(_BYTE *a1, int a2, __int64 a3, const void *a4, size_t a5, int a6)
{
  int v8; // ebp
  __int64 v9; // r12
  size_t v10; // rax
  int v11; // edx
  void *v13; // rdi
  size_t v14; // rdx
  __int64 v15; // rax
  size_t v16; // [rsp+10h] [rbp-68h]
  size_t v17; // [rsp+10h] [rbp-68h]
  size_t v18; // [rsp+18h] [rbp-60h]

  if ( a3 )
  {
    v8 = a5;
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
    if ( a4 && (v10 = strlen((const char *)a4), (a5 = v10) != 0) )
    {
      v13 = *(void **)(v9 + 2800);
      v14 = v10 + 1;
      if ( *(_QWORD *)(v9 + 2816) < v10 + 1 )
      {
        v18 = v10;
        v17 = v10 + 1;
        v15 = qvector_reserve(v9 + 2800, v13, v14, 1);
        a5 = v18;
        v14 = v17;
        *(_QWORD *)(v9 + 2800) = v15;
        v13 = (void *)v15;
      }
      *(_QWORD *)(v9 + 2808) = v14;
      a2 = (int)a4;
      v16 = a5;
      memmove(v13, a4, a5);
      LODWORD(a5) = v16;
      *(_BYTE *)(*(_QWORD *)(v9 + 2800) + v16) = 0;
    }
    else
    {
      *(_QWORD *)(v9 + 2808) = 0;
    }
    HIWORD(v11) = HIWORD(v8);
    LOWORD(v11) = (unsigned __int16)v8 >> 7;
    *(_WORD *)(v9 + 2824) = v8;
    a1[8] = ((unsigned __int16)v8 >> 7) & ((v8 & 0x200) == 0);
    callui(25, a2, v11, (int)&callui, a5, a6);
  }
  return 0;
}
