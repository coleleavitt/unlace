__int64 __fastcall sub_547400(__int64 a1, __int64 *a2, __int64 *a3, int *a4)
{
  unsigned int v5; // r14d
  _QWORD *v7; // rax
  __int64 v8; // rax
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) > 0xFFFFFFFFFFFFFFFDLL )
    return -1;
  v5 = *(_DWORD *)(a1 + 12);
  v7 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), a2);
  v8 = sub_5467E0(v7, a2, v5, 1);
  if ( !v8 )
    return -1;
  v9 = *(_BYTE *)(v8 + 100);
  if ( v9 == 13 )
  {
    result = sub_540330((_QWORD *)v8, a4, *(_QWORD *)(a1 + 16), v12);
    if ( a3 )
    {
      v11 = -1;
      if ( v12[0] && !*((_BYTE *)v12[0] + 29) )
        v11 = *((int *)v12[0] + 6);
      *a3 = v11;
    }
  }
  else
  {
    if ( v9 != 29 )
      return -1;
    if ( a3 )
      *a3 = *(_QWORD *)(a1 + 16);
    if ( a4 )
      *a4 = -1;
    return 0;
  }
  return result;
}

