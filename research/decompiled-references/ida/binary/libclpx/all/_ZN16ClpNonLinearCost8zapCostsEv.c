void __fastcall ClpNonLinearCost::zapCosts(ClpNonLinearCost *this)
{
  int v2; // ebp
  int *v3; // rax
  __int64 v4; // rdi
  int *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // [rsp+0h] [rbp-20h]

  if ( (*((_BYTE *)this + 144) & 1) != 0 )
  {
    v2 = *((_DWORD *)this + 13) + *((_DWORD *)this + 12);
    v11 = *(double *)(*((_QWORD *)this + 12) + 904LL);
    memset(*((void **)this + 11), 0, 8LL * *(int *)(*((_QWORD *)this + 7) + 4LL * v2));
    if ( v2 > 0 )
    {
      v3 = *((int **)this + 7);
      v4 = *((_QWORD *)this + 13);
      v5 = v3 + 1;
      v6 = (__int64)&v3[v2 - 1 + 1];
      while ( 1 )
      {
        v7 = *v3;
        v8 = v3[1];
        v9 = *(_DWORD *)(v4 + 4LL * ((int)v7 >> 5));
        if ( _bittest(&v9, v7) )
          *(double *)(*((_QWORD *)this + 11) + 8 * v7) = -v11;
        v10 = *(_DWORD *)(v4 + 4LL * ((v8 - 2) >> 5));
        if ( _bittest(&v10, v8 - 2) )
          *(double *)(*((_QWORD *)this + 11) + 8LL * (v8 - 1) - 8) = v11;
        v3 = v5;
        if ( (int *)v6 == v5 )
          break;
        ++v5;
      }
    }
  }
}

