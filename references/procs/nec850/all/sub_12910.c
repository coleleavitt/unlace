__int64 __fastcall sub_12910(_BYTE *a1)
{
  unsigned int v1; // r12d
  _BYTE *v2; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 (__fastcall *v7)(_BYTE *, char); // rax
  __int64 v8; // rax
  __int16 v9; // ax
  char v11; // al
  __int64 v12; // [rsp+8h] [rbp-40h]

  v1 = 1;
  v2 = a1 + 305;
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  while ( *v2 )
  {
    if ( (v2[3] & 8) == 0 )
      goto LABEL_5;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v7 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v7 != (char *)sub_11F60 )
    {
      v7(a1, 32);
      goto LABEL_4;
    }
    v6 = *((_QWORD *)a1 + 4);
    if ( v6 )
    {
      v3 = v6 + 1;
      v4 = *((_QWORD *)a1 + 4);
      v5 = *((_QWORD *)a1 + 3);
      --v6;
      if ( *((_QWORD *)a1 + 5) < v3 )
        goto LABEL_11;
    }
    else
    {
      v5 = *((_QWORD *)a1 + 3);
      v4 = 1;
      v3 = 2;
      if ( *((_QWORD *)a1 + 5) < 2u )
      {
LABEL_11:
        v12 = v4;
        v8 = qvector_reserve(a1 + 24, v5, v3, 1);
        v4 = v12;
        *((_QWORD *)a1 + 3) = v8;
        v5 = v8;
      }
    }
    *((_QWORD *)a1 + 4) = v3;
    *(_BYTE *)(v5 + v6) = 32;
    *(_BYTE *)(*((_QWORD *)a1 + 3) + v4) = 0;
LABEL_4:
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v1);
LABEL_5:
    ++v1;
    v2 += 40;
    if ( v1 == 8 )
      break;
  }
  v9 = *((_WORD *)a1 + 124);
  if ( (unsigned __int16)(v9 - 44) <= 1u || v9 == 79 )
  {
    v11 = a1[265];
    if ( v11 == 1 || v11 == 4 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 376LL))(a1);
  }
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}
