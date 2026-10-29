__int64 __fastcall sub_A676A0(__int64 a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // [rsp+0h] [rbp-18h]

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v7 )
  {
    a3 = *(unsigned int *)a2;
    if ( (unsigned int)a3 < *(_DWORD *)(v7 - 4) )
    {
      v8 = *(_QWORD *)(v7 + 8 * a3);
      if ( v8 )
        return sub_B39350(v8, *(unsigned int *)(a1 + 8));
    }
  }
  sub_A66A90((__int64 *)a1, a2[4], a3, a4, a5, a6, v12);
  v10 = sub_9A0C70(a1, (unsigned int *)a2);
  v11 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v10);
  if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
    sub_9A1800(a1, (__int64)a2);
  return v11;
}

