void __fastcall sub_35E260(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 (__fastcall *v2)(_QWORD *, char); // rdx
  unsigned int v3; // ebp
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rsi
  bool v8; // zf
  _QWORD *v9; // rbp
  char v10; // r15
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  if ( *((_BYTE *)a1 + 17) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 9);
    v1 = (_QWORD *)*a1;
    v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
    v3 = (*(_DWORD *)a1[1] & 0x100) == 0 ? 44 : 62;
    if ( v2 != sub_35CB90 )
    {
      v2((_QWORD *)*a1, v3);
LABEL_9:
      ++a1[3];
      v8 = *((_BYTE *)a1 + 18) == 0;
      *((_BYTE *)a1 + 17) = 0;
      if ( v8 )
      {
LABEL_15:
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 72LL))(*a1, 9);
        return;
      }
LABEL_10:
      v9 = (_QWORD *)*a1;
      v10 = *(_BYTE *)(a1[1] + 56LL);
      v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)*a1 + 96LL);
      if ( v11 != sub_35CB90 )
      {
        v11((_QWORD *)*a1, v10);
        goto LABEL_14;
      }
      v12 = v9[4];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = v9[4];
        v15 = v9[3];
        --v12;
        if ( v9[5] >= v13 )
        {
LABEL_13:
          v9[4] = v13;
          *(_BYTE *)(v15 + v12) = v10;
          *(_BYTE *)(v9[3] + v14) = 0;
LABEL_14:
          ++a1[3];
          *((_BYTE *)a1 + 18) = 0;
          goto LABEL_15;
        }
      }
      else
      {
        v15 = v9[3];
        v14 = 1;
        v13 = 2;
        if ( v9[5] >= 2u )
          goto LABEL_13;
      }
      v17 = qvector_reserve(v9 + 3, v15, v13, 1);
      v9[3] = v17;
      v15 = v17;
      goto LABEL_13;
    }
    v4 = v1[4];
    if ( v4 )
    {
      v5 = v4 + 1;
      v6 = v1[4];
      v7 = v1[3];
      --v4;
      if ( v1[5] >= v5 )
      {
LABEL_8:
        v1[4] = v5;
        *(_BYTE *)(v7 + v4) = v3;
        *(_BYTE *)(v1[3] + v6) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v7 = v1[3];
      v6 = 1;
      v5 = 2;
      if ( v1[5] >= 2u )
        goto LABEL_8;
    }
    v18 = v6;
    v16 = qvector_reserve(v1 + 3, v7, v5, 1);
    v6 = v18;
    v1[3] = v16;
    v7 = v16;
    goto LABEL_8;
  }
  if ( *((_BYTE *)a1 + 18) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 9);
    goto LABEL_10;
  }
}
