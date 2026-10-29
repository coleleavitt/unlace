_QWORD *__fastcall CoinStructuredModel::setCoinModel(CoinStructuredModel *this, CoinModel *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *result; // rax
  unsigned __int64 v8; // rdi
  int v9; // esi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // [rsp+Ch] [rbp-1Ch]

  v5 = *((_QWORD *)this + 22);
  if ( !v5 )
  {
    v8 = *((int *)this + 28);
    v12 = a3;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v5 = operator new[](8 * v8);
    v9 = *((_DWORD *)this + 28);
    *((_QWORD *)this + 22) = v5;
    a3 = v12;
    if ( v9 )
    {
      if ( v9 / 8 <= 0 )
      {
        v11 = (_QWORD *)v5;
      }
      else
      {
        v10 = (_QWORD *)v5;
        do
        {
          *v10 = 0;
          v10[1] = 0;
          v10 += 8;
          *(v10 - 6) = 0;
          *(v10 - 5) = 0;
          *(v10 - 4) = 0;
          *(v10 - 3) = 0;
          *(v10 - 2) = 0;
          *(v10 - 1) = 0;
        }
        while ( v10 != (_QWORD *)(v5 + (((unsigned int)(v9 / 8 - 1) + 1LL) << 6)) );
        v11 = (_QWORD *)(v5 + ((v9 / 8 - 1 + 1LL) << 6));
      }
      switch ( v9 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          v11[6] = 0;
LABEL_13:
          v11[5] = 0;
LABEL_14:
          v11[4] = 0;
LABEL_15:
          v11[3] = 0;
LABEL_16:
          v11[2] = 0;
LABEL_17:
          v11[1] = 0;
LABEL_18:
          *v11 = 0;
          break;
        default:
          break;
      }
    }
  }
  v6 = 8LL * a3;
  result = (_QWORD *)(v6 + v5);
  if ( *result )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*result + 16LL))(*result);
    result = (_QWORD *)(v6 + *((_QWORD *)this + 22));
  }
  *result = a2;
  return result;
}

