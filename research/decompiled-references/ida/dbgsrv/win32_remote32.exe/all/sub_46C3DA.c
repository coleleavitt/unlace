/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C3DA
// Address: 0x0046C3DA

//----- (0046C3DA) --------------------------------------------------------
int __usercall sub_46C3DA@<eax>(int *a1@<edi>, int a2)
{
  char v2; // cl
  int *v3; // edi
  int *v4; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // [esp+14h] [ebp-30h]
  int v12; // [esp+18h] [ebp-2Ch]
  _DWORD *v13; // [esp+20h] [ebp-24h]
  int *v14; // [esp+24h] [ebp-20h]
  char v15; // [esp+2Bh] [ebp-19h]

  v14 = nullptr;
  v11 = 0;
  v15 = 1;
  if ( a2 > 8 )
  {
    if ( a2 != 11 )
    {
      if ( a2 == 15 || a2 > 20 && a2 <= 22 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  else if ( a2 != 8 )
  {
    if ( a2 == 2 )
    {
LABEL_11:
      v3 = sub_46C2FA(a2);
      goto LABEL_17;
    }
    if ( a2 != 4 )
    {
      if ( a2 == 6 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  v4 = (int *)sub_47841D();
  a1 = v4;
  v14 = v4;
  if ( !v4 )
    return -1;
  v6 = sub_46C33C(a2, *v4);
  if ( !v6 )
  {
LABEL_15:
    *sub_46B984() = 22;
    sub_467EF4(8, (int)a1);
    return -1;
  }
  v3 = (int *)(v6 + 8);
  v2 = 0;
  v15 = 0;
LABEL_17:
  v13 = v3;
  v12 = 0;
  if ( v2 )
  {
    sub_47A78B(3);
    v2 = v15;
  }
  v7 = *v3;
  if ( v2 )
  {
    v7 = __ROR4__(__security_cookie ^ v7, __security_cookie & 0x1F);
    v2 = v15;
  }
  if ( v7 == 1 )
    goto LABEL_37;
  if ( !v7 )
  {
    if ( v2 )
      sub_47A7D3(3);
    sub_46BC59(3u);
    __debugbreak();
  }
  if ( a2 == 8 || a2 == 11 || a2 == 4 )
  {
    v12 = v14[1];
    v14[1] = 0;
    if ( a2 != 8 )
      goto LABEL_32;
    v11 = *(_DWORD *)(sub_4782C6() + 8);
    *(_DWORD *)(sub_4782C6() + 8) = 140;
  }
  if ( a2 == 8 )
  {
    v8 = *v14 + 36;
    v9 = *v14 + 144;
    while ( v8 != v9 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      v8 += 12;
    }
    goto LABEL_37;
  }
LABEL_32:
  *v13 = __security_cookie;
LABEL_37:
  if ( v15 )
    sub_47A7D3(3);
  if ( v7 != 1 )
  {
    if ( a2 == 8 )
    {
      v10 = sub_4782C6();
      ((void (__cdecl *)(int, _DWORD))v7)(8, *(_DWORD *)(v10 + 8));
    }
    else
    {
      ((void (__cdecl *)(int))v7)(a2);
    }
    if ( a2 == 8 || a2 == 11 || a2 == 4 )
    {
      v14[1] = v12;
      if ( a2 == 8 )
        *(_DWORD *)(sub_4782C6() + 8) = v11;
    }
  }
  return 0;
}
// 46C47D: variable 'v2' is possibly undefined
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
