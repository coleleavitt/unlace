__int64 __fastcall sub_35ADF0(_QWORD *a1)
{
  bool v1; // zf
  size_t v2; // rax
  _QWORD *v3; // rbp
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rax

  v1 = *((_BYTE *)a1 + 45) == 0;
  a1[3] = 0;
  if ( v1 )
  {
    if ( a1[15] && (*((_BYTE *)a1 + 47) || (unsigned __int8)((*((_BYTE *)a1 + 44) & 3) - 1) <= 1u) )
    {
      sub_359A50(*a1, (__int64)&unk_22AD226);
      v2 = a1[3] + strlen((const char *)a1[15]) + 8;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, *(_QWORD *)(a1[1] + 72LL), 32);
      v2 = a1[3] + strlen(*(const char **)(a1[1] + 72LL));
    }
    v3 = (_QWORD *)*a1;
    a1[3] = v2;
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*v3 + 96LL);
    if ( v4 != sub_3598B0 )
    {
      v4(v3, 32);
      goto LABEL_10;
    }
    v5 = v3[4];
    if ( v5 )
    {
      v6 = v5 + 1;
      v7 = v3[4];
      v8 = v3[3];
      --v5;
      if ( v3[5] >= v6 )
      {
LABEL_9:
        v3[4] = v6;
        *(_BYTE *)(v8 + v5) = 32;
        *(_BYTE *)(v3[3] + v7) = 0;
LABEL_10:
        ++a1[3];
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 29);
      }
    }
    else
    {
      v8 = v3[3];
      v7 = 1;
      v6 = 2;
      if ( v3[5] >= 2u )
        goto LABEL_9;
    }
    v10 = qvector_reserve(v3 + 3, v8, v6, 1);
    v3[3] = v10;
    v8 = v10;
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 29);
}

