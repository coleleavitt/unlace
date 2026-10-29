__int64 __fastcall sub_56CC20(__int64 a1, volatile signed __int32 **a2, __int16 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // dl
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // [rsp+Ch] [rbp-3Ch]

  result = *(unsigned int *)(a4 + 8);
  if ( (_DWORD)result )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a4 + 16LL * (unsigned int)(result - 1));
    if ( (v7 & 1) != 0 )
      return result;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  while ( *(_DWORD *)(v7 + 36) && a3 != *(_WORD *)(v7 + 42) )
  {
    if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
    {
      v9 = sub_563060(*(_QWORD *)(a1 + 1256), *(_WORD *)(v7 + 40));
      snprintf((char *)(a1 + 192), 0x400u, "state_mismatch sym:%s", v9);
      sub_55D530(a1);
      result = *(unsigned int *)(a4 + 8);
    }
    if ( !(_DWORD)result )
      sub_55D1C0();
    v10 = *(_QWORD *)a4 + 16LL * (unsigned int)(result - 1);
    v7 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 1) != 0 )
      goto LABEL_15;
    if ( *(_DWORD *)(v7 + 36) )
    {
      v14 = *(_DWORD *)(v10 + 12);
      sub_55ECB0(a4, 16);
      v11 = 8LL * *(unsigned int *)(v7 + 36);
      v12 = *(unsigned int *)(a4 + 8);
      result = (unsigned int)(v12 + 1);
      v13 = *(_QWORD *)a4 + 16 * v12;
      *(_DWORD *)(a4 + 8) = result;
      v7 = *(_QWORD *)(v7 - v11);
      *(_DWORD *)(v13 + 8) = 0;
      *(_DWORD *)(v13 + 12) = v14;
      *(_QWORD *)v13 = v7;
      if ( (_DWORD)result )
      {
        if ( (v7 & 1) != 0 )
          goto LABEL_15;
      }
      else
      {
        v7 = 0;
      }
    }
    v8 = 1;
  }
  if ( v8 )
  {
LABEL_15:
    sub_56C9A0(a1 + 1224, *a2);
    *a2 = (volatile signed __int32 *)v7;
    return sub_56C560((volatile signed __int32 *)v7);
  }
  return result;
}
