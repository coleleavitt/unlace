__int64 __fastcall sub_1F9F0(__int64 a1, char a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  _QWORD *v5; // rbp
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 > 1 )
  {
LABEL_4:
    v5 = *(_QWORD **)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v3 - 2;
    v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*v5 + 96LL);
    if ( v6 != sub_8770 )
    {
      v6(v5, 92);
      v11 = *(_QWORD **)(a1 + 40);
      v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*v11 + 96LL);
      if ( v12 == sub_8770 )
      {
LABEL_8:
        v13 = v11[4];
        if ( v13 )
        {
          v14 = v13 + 1;
          v15 = v11[4];
          v16 = v11[3];
          --v13;
          if ( v11[5] >= v14 )
          {
LABEL_10:
            v11[4] = v14;
            *(_BYTE *)(v16 + v13) = a2;
            *(_BYTE *)(v11[3] + v15) = 0;
            return 1;
          }
        }
        else
        {
          v16 = v11[3];
          v15 = 1;
          v14 = 2;
          if ( v11[5] >= 2u )
            goto LABEL_10;
        }
        v19 = qvector_reserve(v11 + 3, v16, v14, 1);
        v11[3] = v19;
        v16 = v19;
        goto LABEL_10;
      }
LABEL_18:
      v12(v11, a2);
      return 1;
    }
    v7 = v5[4];
    if ( v7 )
    {
      v10 = v7 + 1;
      v9 = v5[4];
      v8 = v5[3];
      --v7;
      if ( v5[5] >= v10 )
        goto LABEL_7;
    }
    else
    {
      v8 = v5[3];
      v9 = 1;
      v10 = 2;
      if ( v5[5] >= 2u )
        goto LABEL_7;
    }
    v20 = v9;
    v18 = qvector_reserve(v5 + 3, v8, v10, 1);
    v9 = v20;
    v5[3] = v18;
    v8 = v18;
LABEL_7:
    v5[4] = v10;
    *(_BYTE *)(v8 + v7) = 92;
    *(_BYTE *)(v5[3] + v9) = 0;
    v11 = *(_QWORD **)(a1 + 40);
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*v11 + 96LL);
    if ( v12 == sub_8770 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
  v4 = 0;
  *(_QWORD *)(a1 + 24) = v3;
  if ( v3 )
  {
    ++*(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  return v4;
}
