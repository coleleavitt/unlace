__int64 __fastcall sub_E38410(std::chrono::_V2::steady_clock *this, __int64 a2, __int64 a3)
{
  std::chrono::_V2::steady_clock *v3; // r14
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  std::chrono::_V2::steady_clock *v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v21; // rax
  double v22; // xmm0_8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v3 = this;
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    this = *((std::chrono::_V2::steady_clock **)this + 19);
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(this, v4);
  }
  *((_QWORD *)v3 + 18) = 0;
  v6 = *((_QWORD *)v3 + 15);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 56) )
  {
    v25 = std::chrono::_V2::steady_clock::now(this);
    *(_BYTE *)(v6 + 56) = 1;
    *(_QWORD *)(v6 + 40) = v25;
    v7 = *((_QWORD *)v3 + 15);
  }
  ++*(_DWORD *)(v7 + 24);
  v8 = std::chrono::_V2::steady_clock::now(this);
  v9 = *((_QWORD *)v3 + 22);
  v10 = v8;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 - 4);
    if ( *((_DWORD *)v3 + 46) < v11 )
    {
      do
      {
        v13 = *((_QWORD *)v3 + 1);
        v14 = sub_15E1B70(v13);
        v15 = *((_QWORD *)v3 + 20);
        v16 = v14;
        if ( v14 )
        {
          ++*(_DWORD *)(v14 + 8);
          sub_E5EBF0(v15, v14);
          v5 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(v13, v16);
        }
        else
        {
          sub_E5EBF0(v15, 0);
        }
        v12 = *((_DWORD *)v3 + 46) + 1;
        *((_DWORD *)v3 + 46) = v12;
      }
      while ( v12 < v11 );
    }
  }
  v17 = *((std::chrono::_V2::steady_clock **)v3 + 20);
  v18 = (*(__int64 (__fastcall **)(std::chrono::_V2::steady_clock *, __int64, __int64))(*(_QWORD *)v17 + 216LL))(
          v17,
          a2,
          a3);
  v19 = std::chrono::_V2::steady_clock::now(v17) - v10;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v21 = *((_QWORD *)v3 + 15);
      *(_QWORD *)(v21 + 72) += v19;
      ++*(_DWORD *)(v21 + 28);
      v5 = *((_BYTE *)v3 + 210) == 0;
      *((_DWORD *)v3 + 13) = 1;
      if ( v5 )
        goto LABEL_17;
      goto LABEL_20;
    }
  }
  else
  {
    v24 = *((_QWORD *)v3 + 15);
    *(_QWORD *)(v24 + 96) += v19;
    ++*(_DWORD *)(v24 + 32);
  }
  v5 = *((_BYTE *)v3 + 210) == 0;
  *((_DWORD *)v3 + 13) = v18;
  if ( v5 )
    goto LABEL_17;
LABEL_20:
  v22 = (double)(int)(v19 / 1000000) / 1000.0;
  if ( v22 >= *((double *)v3 + 27) )
  {
    v17 = v3;
    sub_E373D0((__int64)v3, a2, a3, v18, v22);
    if ( !*(_BYTE *)(v6 + 56) )
      return v18;
LABEL_22:
    v23 = std::chrono::_V2::steady_clock::now(v17);
    *(_BYTE *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 48) += v23 - *(_QWORD *)(v6 + 40);
    return v18;
  }
LABEL_17:
  if ( *(_BYTE *)(v6 + 56) )
    goto LABEL_22;
  return v18;
}

