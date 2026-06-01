void __fastcall ClpLinearObjective::deleteSome(ClpLinearObjective *this, int a2, const int *a3)
{
  _QWORD *v5; // rax
  int v6; // ebp
  _BYTE *v7; // r13
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // ecx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  _BYTE *v22; // rcx

  if ( !*((_QWORD *)this + 3) )
    return;
  v5 = (_QWORD *)operator new[](*((int *)this + 8));
  v6 = *((_DWORD *)this + 8);
  v7 = v5;
  if ( v6 )
  {
    v19 = v6 / 8;
    if ( v6 / 8 <= 0 )
    {
      v22 = v5;
    }
    else
    {
      if ( v19 == 1 )
        goto LABEL_26;
      v20 = v5;
      v21 = 0;
      do
      {
        ++v21;
        v20 += 2;
        *((_OWORD *)v20 - 1) = 0;
      }
      while ( v19 >> 1 > v21 );
      v5 = &v7[8 * (v19 & 0xFFFFFFFE)];
      if ( v19 != (v19 & 0xFFFFFFFE) )
LABEL_26:
        *v5 = 0;
      v22 = &v7[8 * (v19 - 1) + 8];
    }
    switch ( v6 % 8 )
    {
      case 1:
        goto LABEL_35;
      case 2:
        goto LABEL_34;
      case 3:
        goto LABEL_33;
      case 4:
        goto LABEL_32;
      case 5:
        goto LABEL_31;
      case 6:
        goto LABEL_30;
      case 7:
        v22[6] = 0;
LABEL_30:
        v22[5] = 0;
LABEL_31:
        v22[4] = 0;
LABEL_32:
        v22[3] = 0;
LABEL_33:
        v22[2] = 0;
LABEL_34:
        v22[1] = 0;
LABEL_35:
        *v22 = 0;
        break;
      default:
        break;
    }
    if ( a2 <= 0 )
      goto LABEL_11;
    goto LABEL_4;
  }
  if ( a2 > 0 )
  {
LABEL_4:
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = a3[v8];
      if ( (int)v10 >= 0 && v6 > (int)v10 )
      {
        v11 = &v7[v10];
        if ( !*v11 )
        {
          ++v9;
          *v11 = 1;
        }
      }
      ++v8;
    }
    while ( a2 > (int)v8 );
    v6 -= v9;
LABEL_11:
    v12 = v6;
    if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    goto LABEL_12;
  }
  v12 = 0;
LABEL_12:
  v13 = operator new[](8 * v12);
  v14 = *((_DWORD *)this + 8);
  if ( v14 <= 0 )
  {
    v15 = *((_QWORD **)this + 3);
  }
  else
  {
    v15 = *((_QWORD **)this + 3);
    v16 = 0;
    v17 = 0;
    do
    {
      if ( !v7[v16] )
      {
        v18 = v17++;
        *(_QWORD *)(v13 + 8 * v18) = v15[v16];
      }
      ++v16;
    }
    while ( (unsigned int)(v14 - 1) + 1LL != v16 );
  }
  if ( v15 )
    operator delete[](v15);
  *((_QWORD *)this + 3) = v13;
  operator delete[](v7);
  *((_DWORD *)this + 8) = v6;
}

