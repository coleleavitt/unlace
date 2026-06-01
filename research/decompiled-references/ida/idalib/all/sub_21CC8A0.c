_QWORD *__fastcall sub_21CC8A0(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  bool (__fastcall *v4)(__int64); // rax
  bool v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rbx
  _QWORD v10[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+20h] [rbp-28h]

  v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v4 == sub_21C9270 )
    v5 = *(_QWORD *)(a2 + 32) == 0;
  else
    v5 = v4(a2);
  if ( v5 )
  {
    v11 = 257;
    v9 = operator new(0x30u);
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &off_2C74C70;
    sub_2253560(v9 + 16, v10);
    *a1 = v9;
    return a1;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 24) == 0 ? 10LL : 8LL);
    *a3 = sub_21CC0B0(
            *(size_t **)(a2 + 40),
            v6 + 16,
            *(_QWORD *)v6,
            (unsigned int *)(v6 + 16 + *(_QWORD *)v6),
            *(void **)(v6 + 8));
    a3[1] = v7;
    if ( v7 )
    {
      *a1 = 0;
    }
    else
    {
      sub_21C93F0(v10, 9, "profile data is empty");
      *a1 = v10[0];
    }
    return a1;
  }
}
