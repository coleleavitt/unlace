char __fastcall sub_2261190(__int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rdx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  volatile signed __int32 *vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10[5]; // [rsp+10h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = a2;
  a1[1] = nullptr;
  a1[2] = nullptr;
  (*(void (__fastcall **)(__int64 *))(v3 + 64))(&vars0);
  vars10[0] = 0;
  vars10[1] = 0;
  LOBYTE(v4) = sub_225AAE0(&vars0, vars10);
  if ( !(_BYTE)v4 )
  {
    v5 = operator new(0x30u);
    v6 = a1[2];
    *(_OWORD *)(v5 + 32) = 0;
    v7 = v5 + 16;
    *(_QWORD *)(v5 + 8) = 0x100000001LL;
    *(_QWORD *)v5 = off_2C761D8;
    *(_OWORD *)(v5 + 16) = 0;
    a1[1] = (__int64 *)(v5 + 16);
    a1[2] = (__int64 *)v5;
    if ( !v6
      || (sub_4343A0((volatile signed __int32 *)v6),
          v4 = (__int64)a1[1],
          v6 = *(__int64 **)(v4 + 8),
          v7 = v4,
          *(__int64 **)(v4 + 16) == v6) )
    {
      LOBYTE(v4) = sub_2260CC0(v7, (char *)v6, &vars0);
    }
    else
    {
      *v6 = vars0;
      v8 = vars8;
      v6[1] = (__int64)vars8;
      if ( v8 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd(v8 + 2, 1u);
          v6 = *(__int64 **)(v4 + 8);
        }
        else
        {
          ++*((_DWORD *)v8 + 2);
        }
      }
      *(_QWORD *)(v4 + 8) = v6 + 2;
    }
  }
  if ( vars8 )
    LOBYTE(v4) = sub_4343A0(vars8);
  return v4;
}
