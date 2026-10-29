void __fastcall ClpLinearObjective::resize(ClpLinearObjective *this, int a2)
{
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // r12
  int v7; // r8d
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // xmm0_8
  __int64 v12; // rdx
  char *v13; // rsi
  _QWORD *v14; // rdx
  __int64 v15; // rcx

  if ( *((_DWORD *)this + 8) != a2 )
  {
    if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v4 = operator new[](8LL * a2);
    v5 = *((char **)this + 3);
    v6 = v4;
    if ( v5 )
    {
      v7 = a2;
      if ( *((_DWORD *)this + 8) <= a2 )
        v7 = *((_DWORD *)this + 8);
      if ( v7 && (char *)v4 != v5 )
      {
        if ( v7 >> 3 <= 0 )
        {
          v14 = (_QWORD *)v4;
          v13 = *((char **)this + 3);
        }
        else
        {
          v8 = v4;
          v9 = *((__int64 **)this + 3);
          v10 = (unsigned int)((v7 >> 3) - 1);
          do
          {
            v11 = *v9;
            v8 += 64;
            v9 += 8;
            *(_QWORD *)(v8 - 64) = v11;
            *(_QWORD *)(v8 - 56) = *(v9 - 7);
            *(_QWORD *)(v8 - 48) = *(v9 - 6);
            *(_QWORD *)(v8 - 40) = *(v9 - 5);
            *(_QWORD *)(v8 - 32) = *(v9 - 4);
            *(_QWORD *)(v8 - 24) = *(v9 - 3);
            *(_QWORD *)(v8 - 16) = *(v9 - 2);
            *(_QWORD *)(v8 - 8) = *(v9 - 1);
          }
          while ( v8 != v4 + ((v10 + 1) << 6) );
          v12 = ((int)v10 + 1LL) << 6;
          v13 = &v5[v12];
          v14 = (_QWORD *)(v4 + v12);
        }
        switch ( v7 % 8 )
        {
          case 1:
            goto LABEL_19;
          case 2:
            goto LABEL_18;
          case 3:
            goto LABEL_17;
          case 4:
            goto LABEL_16;
          case 5:
            goto LABEL_15;
          case 6:
            goto LABEL_14;
          case 7:
            v14[6] = *((_QWORD *)v13 + 6);
LABEL_14:
            v14[5] = *((_QWORD *)v13 + 5);
LABEL_15:
            v14[4] = *((_QWORD *)v13 + 4);
LABEL_16:
            v14[3] = *((_QWORD *)v13 + 3);
LABEL_17:
            v14[2] = *((_QWORD *)v13 + 2);
LABEL_18:
            v14[1] = *((_QWORD *)v13 + 1);
LABEL_19:
            *v14 = *(_QWORD *)v13;
            break;
          default:
            break;
        }
      }
      operator delete[](v5);
    }
    v15 = *((int *)this + 8);
    *((_QWORD *)this + 3) = v6;
    if ( a2 > (int)v15 )
      memset((void *)(v6 + 8 * v15), 0, 8LL * (unsigned int)(a2 - 1 - v15) + 8);
    *((_DWORD *)this + 8) = a2;
  }
}

