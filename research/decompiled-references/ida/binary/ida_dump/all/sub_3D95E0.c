__int64 __fastcall sub_3D95E0(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // r12
  volatile signed __int32 *v5; // rdi
  __int64 v7; // [rsp+8h] [rbp-20h]

  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 64);
  v4 = *(volatile signed __int32 **)(a1 + 72);
  v5 = *(volatile signed __int32 **)(a2 + 48);
  if ( v4 != v5 )
  {
    if ( v4 )
    {
      if ( !&_pthread_key_create )
      {
        ++*((_DWORD *)v4 + 2);
        v5 = *(volatile signed __int32 **)(a2 + 48);
        if ( !v5 )
          goto LABEL_7;
        goto LABEL_6;
      }
      _InterlockedAdd(v4 + 2, 1u);
      v5 = *(volatile signed __int32 **)(a2 + 48);
    }
    if ( !v5 )
    {
LABEL_7:
      *(_QWORD *)(a2 + 48) = v4;
      goto LABEL_8;
    }
LABEL_6:
    v7 = a3;
    sub_3D56E0(v5);
    a3 = v7;
    goto LABEL_7;
  }
LABEL_8:
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 56);
  return sub_3D8C80(a1, a2, a3);
}
