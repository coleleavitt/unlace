__int64 __fastcall sub_49E4A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r13
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r15
  _QWORD *i; // rbx
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r15
  _QWORD *j; // rbx
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx

  result = a1 + 8;
  v3 = (__int64 *)(a1 + 80);
  *(_OWORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  if ( qword_2CA1EF0 )
    result = qmutex_lock(qword_2CA1EF0);
  v4 = (__int64 *)&xmmword_2CA1E88;
  do
  {
    v5 = *(v4 - 9);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 28) )
      {
        v6 = operator new(0x20u);
        v7 = *(_DWORD *)(v5 + 24);
        v8 = *(_QWORD *)(v5 + 16);
        v9 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)v6 = 0;
        result = v7 | 1u;
        *(_QWORD *)(v6 + 16) = v8;
        *(_QWORD *)(v6 + 8) = v9;
        *(_DWORD *)(v6 + 24) = result;
        *(_BYTE *)(v6 + 28) = 1;
      }
      else
      {
        v6 = operator new(0x20u);
        v33 = *(_QWORD *)(v5 + 16);
        result = *(unsigned int *)(v5 + 24);
        v34 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)v6 = 0;
        *(_QWORD *)(v6 + 16) = v33;
        *(_QWORD *)(v6 + 8) = v34;
        *(_DWORD *)(v6 + 24) = result;
        *(_BYTE *)(v6 + 28) = 0;
      }
      v10 = *(__int64 **)v5;
      if ( *(_QWORD *)v5 )
      {
        for ( i = (_QWORD *)v6; ; i = (_QWORD *)result )
        {
          if ( *((_BYTE *)v10 + 28) )
          {
            result = operator new(0x20u);
            v12 = *((_DWORD *)v10 + 6);
            v13 = v10[2];
            v14 = v10[1];
            *(_QWORD *)result = 0;
            *(_QWORD *)(result + 16) = v13;
            *(_QWORD *)(result + 8) = v14;
            *(_DWORD *)(result + 24) = v12 | 1;
            *(_BYTE *)(result + 28) = 1;
            *i = result;
            v10 = (__int64 *)*v10;
            if ( !v10 )
              break;
          }
          else
          {
            result = operator new(0x20u);
            v15 = *((_DWORD *)v10 + 6);
            v16 = v10[2];
            v17 = v10[1];
            *(_QWORD *)result = 0;
            *(_QWORD *)(result + 16) = v16;
            *(_QWORD *)(result + 8) = v17;
            *(_DWORD *)(result + 24) = v15;
            *(_BYTE *)(result + 28) = 0;
            *i = result;
            v10 = (__int64 *)*v10;
            if ( !v10 )
              break;
          }
        }
      }
      v5 = v6;
    }
    *(v3 - 9) = v5;
    v18 = *v4;
    if ( *v4 )
    {
      if ( *(_BYTE *)(v18 + 28) )
      {
        v19 = operator new(0x20u);
        v20 = *(_DWORD *)(v18 + 24);
        v21 = *(_QWORD *)(v18 + 16);
        v22 = *(_QWORD *)(v18 + 8);
        *(_QWORD *)v19 = 0;
        result = v20 | 1u;
        *(_QWORD *)(v19 + 16) = v21;
        *(_QWORD *)(v19 + 8) = v22;
        *(_DWORD *)(v19 + 24) = result;
        *(_BYTE *)(v19 + 28) = 1;
      }
      else
      {
        v19 = operator new(0x20u);
        v31 = *(_QWORD *)(v18 + 16);
        result = *(unsigned int *)(v18 + 24);
        v32 = *(_QWORD *)(v18 + 8);
        *(_QWORD *)v19 = 0;
        *(_QWORD *)(v19 + 16) = v31;
        *(_QWORD *)(v19 + 8) = v32;
        *(_DWORD *)(v19 + 24) = result;
        *(_BYTE *)(v19 + 28) = 0;
      }
      v23 = *(__int64 **)v18;
      if ( *(_QWORD *)v18 )
      {
        for ( j = (_QWORD *)v19; ; j = (_QWORD *)result )
        {
          if ( *((_BYTE *)v23 + 28) )
          {
            result = operator new(0x20u);
            v25 = *((_DWORD *)v23 + 6);
            v26 = v23[2];
            v27 = v23[1];
            *(_QWORD *)result = 0;
            *(_QWORD *)(result + 16) = v26;
            *(_QWORD *)(result + 8) = v27;
            *(_DWORD *)(result + 24) = v25 | 1;
            *(_BYTE *)(result + 28) = 1;
            *j = result;
            v23 = (__int64 *)*v23;
            if ( !v23 )
              break;
          }
          else
          {
            result = operator new(0x20u);
            v28 = *((_DWORD *)v23 + 6);
            v29 = v23[2];
            v30 = v23[1];
            *(_QWORD *)result = 0;
            *(_QWORD *)(result + 16) = v29;
            *(_QWORD *)(result + 8) = v30;
            *(_DWORD *)(result + 24) = v28;
            *(_BYTE *)(result + 28) = 0;
            *j = result;
            v23 = (__int64 *)*v23;
            if ( !v23 )
              break;
          }
        }
      }
      v18 = v19;
    }
    ++v4;
    *v3++ = v18;
  }
  while ( &qword_2CA1ED0 != v4 );
  if ( qword_2CA1EF0 )
    return qmutex_unlock(qword_2CA1EF0);
  return result;
}

