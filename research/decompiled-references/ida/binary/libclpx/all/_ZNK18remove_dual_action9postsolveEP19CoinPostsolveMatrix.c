void __fastcall remove_dual_action::postsolve(remove_dual_action *this, CoinPostsolveMatrix *a2)
{
  int v2; // r10d
  __int64 v3; // r9
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE *v8; // rdx
  char v9; // cl

  v2 = *((_DWORD *)this + 4);
  if ( v2 > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = v3 + *((_QWORD *)this + 3);
      v6 = *(int *)(v5 + 16);
      *(_QWORD *)(*((_QWORD *)a2 + 13) + 8 * v6) = *(_QWORD *)v5;
      *(_QWORD *)(*((_QWORD *)a2 + 14) + 8 * v6) = *(_QWORD *)(v5 + 8);
      v7 = *((_QWORD *)a2 + 25);
      if ( !v7 )
        goto LABEL_4;
      v8 = (_BYTE *)(v6 + v7);
      v9 = *v8 & 7;
      if ( v9 != 2 )
      {
        if ( v9 == 3 && *(double *)(v5 + 8) >= 1.797693134862316e308 )
        {
          *v8 = 2;
          v2 = *((_DWORD *)this + 4);
        }
        goto LABEL_4;
      }
      if ( *(double *)v5 <= -1.797693134862316e308 )
      {
        *v8 = 3;
        v2 = *((_DWORD *)this + 4);
        ++v4;
        v3 += 24;
        if ( v4 >= v2 )
          return;
      }
      else
      {
LABEL_4:
        ++v4;
        v3 += 24;
        if ( v4 >= v2 )
          return;
      }
    }
  }
}

