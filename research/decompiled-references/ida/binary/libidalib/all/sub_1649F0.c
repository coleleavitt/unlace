__int64 __fastcall sub_1649F0(TView *this, __int64 a2, __int64 a3, char a4)
{
  TView *v4; // r15
  int v7; // ecx
  int v8; // edx
  void (*v9)(); // r8
  _QWORD **v10; // rdx
  _QWORD **v11; // r13
  __int64 result; // rax
  int v13; // edx
  unsigned int v14; // [rsp+Ch] [rbp-3Ch]

  v4 = this;
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a3 + 32);
  if ( v7 == v8 )
  {
    if ( *(_DWORD *)(a2 + 24) == *(_DWORD *)(a3 + 24) )
    {
      result = *(unsigned int *)(a3 + 28);
      if ( *(_DWORD *)(a2 + 28) == (_DWORD)result
        && *(double *)a2 == *(double *)a3
        && *(double *)(a2 + 8) == *(double *)(a3 + 8)
        && *(double *)(a2 + 16) == *(double *)(a3 + 16) )
      {
        return result;
      }
    }
    this = nullptr;
    if ( !*((_BYTE *)v4 + 992) )
    {
LABEL_6:
      v9 = *(void (**)())(*(_QWORD *)this + 32LL);
      if ( v9 == nullsub_3 )
        goto LABEL_7;
      goto LABEL_31;
    }
LABEL_3:
    if ( !*((_QWORD *)v4 + 60) )
    {
      sub_158B30(this);
      return sub_164BF0();
    }
    this = nullptr;
    if ( *((_DWORD *)v4 + 118) == 1 )
      this = *((TView **)v4 + 107);
    goto LABEL_6;
  }
  if ( *((_BYTE *)this + 992) )
    goto LABEL_3;
  this = nullptr;
  v9 = (void (*)())MEMORY[0x3010102464C459F];
  if ( (void (*)())MEMORY[0x3010102464C459F] == nullsub_3 )
    goto LABEL_13;
LABEL_31:
  ((void (__fastcall *)(TView *, __int64, __int64))v9)(this, a2, a3);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a3 + 32);
LABEL_7:
  if ( v7 != v8 )
  {
LABEL_13:
    sub_19C290(7, v4, 0);
    v10 = *((_QWORD ***)v4 + 132);
    v14 = *(_DWORD *)(a3 + 32);
    while ( (_QWORD **)((char *)v4 + 1056) != v10 )
    {
      v11 = (_QWORD **)*v10;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v10[2] + 24LL))(v10[2], v14);
      v10 = v11;
    }
    *((_BYTE *)v4 + 848) = 0;
    *((_BYTE *)v4 + 961) = 1;
  }
  result = sub_1535D0(v4);
  v13 = *((_DWORD *)v4 + 229);
  if ( v13 == 10 || v13 == 6 || v13 == 11 )
  {
    if ( (*((_DWORD *)v4 + 230) & 1) != 0 )
    {
LABEL_21:
      if ( !a4 )
        return result;
      return sub_164930();
    }
  }
  else if ( (unsigned int)(v13 - 1) > 1 )
  {
    goto LABEL_21;
  }
  result = sub_164190((__int64)v4);
  if ( a4 )
    return sub_164930();
  return result;
}

