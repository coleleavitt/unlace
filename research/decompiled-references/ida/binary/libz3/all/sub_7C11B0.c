void __fastcall sub_7C11B0(_QWORD *a1, unsigned int *a2, __m128i a3)
{
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rsi
  _QWORD *v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int *v20; // rdi
  unsigned int v21; // edx
  char v22; // r15
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  char v25; // r14
  bool v26; // al
  __int64 (__fastcall *v27)(_QWORD *); // rax
  int v28; // eax

  v5 = a2[4];
  if ( (_DWORD)v5 == -2 )
    goto LABEL_2;
  v8 = a1 + 10;
  if ( !(unsigned __int8)sub_7E4330(a2, a1 + 10, v5) )
  {
    sub_7E4540(a2, v8, a2[4]);
    sub_7E4540(a2, v8, a2[4] ^ 1);
  }
  v9 = a2[4];
  if ( v9 == -2 || !*(_BYTE *)(a1[121] + (v9 >> 1)) )
  {
LABEL_2:
    v6 = 0;
    while ( v6 < a2[8] )
    {
      v7 = v6++;
      if ( *(_BYTE *)(a1[121]
                    + ((*(unsigned int (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v7) >> 1)) )
      {
        v8 = a1 + 10;
        goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v10 = 0;
    (*(void (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a2 + 16LL))(a2, v8);
    if ( a2[8] )
    {
      do
      {
        v11 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v10);
        v12 = v10++;
        (*(void (__fastcall **)(unsigned int *, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
          a2,
          v12,
          *(unsigned int *)(a1[120] + 4LL * v11));
      }
      while ( v10 < a2[8] );
    }
    v13 = a2[4];
    if ( v13 != -2 )
    {
      v14 = *(_DWORD *)(a1[120] + 4LL * v13);
      if ( v13 != v14 )
      {
        sub_7E4500(a2, v8);
        a2[4] = v14;
        sub_7E4540(a2, v8, v14);
        sub_7E4540(a2, v8, v14 ^ 1);
      }
      v13 = v14;
    }
    sub_7B77C0((__int64)a1);
    if ( a2[8] )
    {
      v15 = 0;
      while ( 1 )
      {
        v17 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v15);
        v18 = a1[3];
        v19 = *(_QWORD *)(v18 + 3840);
        v20 = (unsigned int *)(v19 + 4LL * v17);
        v21 = *(_DWORD *)(v18 + 3848);
        if ( v21 < *v20 )
          break;
        ++v15;
        *v20 = v21 + 1;
        *(_DWORD *)(v19 + 4LL * (v17 ^ 1)) = *(_DWORD *)(v18 + 3848) + 1;
        v16 = a2[8];
        if ( v15 >= v16 )
        {
          if ( !v16 )
            goto LABEL_25;
          v22 = 0;
          goto LABEL_21;
        }
      }
      v22 = 1;
      if ( !a2[8] )
        goto LABEL_34;
LABEL_21:
      v23 = v13 >> 1;
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = (*(unsigned int (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v24++) >> 1 == v23;
        v25 |= v26;
      }
      while ( v24 < a2[8] );
      if ( v25 )
      {
        sub_7B9670((__int64)a1, a2, a3);
        *(double *)a3.m128i_i64 = (*(double (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 104LL))(a2);
        sub_7B9670((__int64)a1, a2, a3);
        sub_7AFFA0((__int64)a1, a2, "flush roots", *(double *)a3.m128i_i64);
        return;
      }
      if ( !v22 )
        goto LABEL_25;
LABEL_34:
      sub_7C1080((__int64)a1, a2, a3);
    }
    else
    {
LABEL_25:
      if ( a2[4] == -2
        || ((v27 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 536LL), (char *)v27 != (char *)sub_7C55E0)
          ? (v28 = v27(a1))
          : (v28 = sub_7C55E0(a1)),
            v28) )
      {
        sub_7AFDF0(a1, (__int64)a2);
      }
    }
  }
}

